#include <iostream> 
#include <vector> 
#include <algorithm> 

using namespace std; 

#define ALL(x) x.begin(), x.end()
#define UNIQUE(c) (c).resize(unique(ALL(c)) - (c).begin())
//#define UNIQUE(c) unique(ALL(c)) // need to resize to remove the elements which have moved to end 

// Algorithms : unique, sort 
// Vector functions: begin, end, resize, size 

int main() {
	int a[] = {1, 2, 2, 2, 3, 3, 2, 2, 1};
	vector<int> v(a, a + 9);
	sort(ALL(v)); UNIQUE(v);
	for (int i = 0; i < (int)v.size(); i++) cout<< v[i] << "\n";
}

