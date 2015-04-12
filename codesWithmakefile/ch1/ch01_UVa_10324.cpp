#include <iostream> 
#include <cstdio> 
#include <cstdlib> 

using namespace std; 

bool check(string str, int x, int y)
{
char ch = str[x]; bool same = true; 
for (int a = x+1; a<=y; ++a)
{
if (ch != str[a]) same = false; 
ch = str[a]; 
}
return same; 
}


int main()
{
int c = 1; string in; 
while (getline(cin,in) and in.length() > 0)
{
int cases; cin >> cases; 
cout << "Case " << c++ << ":" << endl; 
while (cases--)
{
int x,y; cin >> x >> y; 
//cout << x << " and " << y  << "    === x and y " << endl; 
if (x>y) swap(x,y);
if (check(in,x,y)) cout << "Yes" << endl; else cout << "No" << endl; 
cin.ignore(3,'\n');
}
}
}

