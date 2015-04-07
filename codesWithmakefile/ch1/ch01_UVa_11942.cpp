#include <iostream> 
#include <cstdio> 
#include <algorithm> 
using namespace std; 

int main()
{
int a[10];
int cases;cin >> cases;  
cout << "Lumberjacks:" << endl; 
while (cases--)
{
for (int x =0; x<10; ++x) cin >> a[x];
//cout << *adjacent_find(a,a+9, greater<int>()) << endl; 
//cout << *adjacent_find(a,a+9, less<int>()) << endl; 
if(*adjacent_find (a, a+9, greater<int>()) == a[9] or *adjacent_find (a, a+9, less<int>()) ==a[9])
cout << "Ordered" << endl; 
else cout << "Unordered" << endl; 

}

}

