#include <iostream> 
#include <algorithm> 
#include <vector> 
#include <map> 

using namespace std; 

// Algorithms - sort, make_pair 
// Vector functions - push_back ,begin, end

// C++ code for task 5, assuming all necessary includes have been done
typedef pair<int, int> ii; // we will utilize the natural sort order
typedef pair<ii, int> iii; // of the primitive data types that we paired
int main() {
	iii A = make_pair(ii(5, 24), -1982); // reorder DD/MM/YYYY
	iii B = make_pair(ii(5, 24), -1980); // to MM, DD,
	iii C = make_pair(ii(11, 13), -1983); // and then use NEGATIVE YYYY
	vector<iii> birthdays;
	birthdays.push_back(A); birthdays.push_back(B); birthdays.push_back(C);
	sort(birthdays.begin(), birthdays.end()); // that’s all :)
	cout << "==== Sort by month - date and year \n";
	for (int var = 0; var != birthdays.size(); ++var)
		cout << birthdays[var].first.first << " and " << birthdays[var].first.second << " and " << birthdays[var].second << endl; 
}

