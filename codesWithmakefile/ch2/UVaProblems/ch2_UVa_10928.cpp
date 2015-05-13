#include <iostream> 
#include <sstream> 
#include <vector> 
#include <map> 
#include <algorithm> 

using namespace std; 
int main()
{
int N; cin >> N; 
while (N--)
{
vector<pair<int, int> > vii; int p; string line; 
cin >> p; 
cin.clear(); cin.ignore(10,'\n');
for (int x = 0; x <p ; ++x) 
{
vector<int> cl; int house; getline(cin,line);
istringstream iss(line);
while (iss>>house) cl.push_back(house);
vii.push_back(make_pair(cl.size(), x+1 ));
}
sort(vii.begin(), vii.end());
int size = vii[0].first; cout << vii[0].second; 
for(int x =1; x < vii.size(); ++x)
if (size == vii[x].first) cout << " " << vii[x].second; 
cout << endl; 

}

}
