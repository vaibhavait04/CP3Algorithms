#include <iostream>
#include <algorithm> 
#include <map> 
int main()
{
using namespace std; 
map<int, int, greater<int> > a; 
	a.insert(make_pair(1,1)); 
	a.insert(make_pair(100,1)); 
map<int,int>::iterator it = a.begin(); 
cout << (*it).first << endl << (*it).second << endl; 
}

