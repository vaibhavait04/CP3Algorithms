#include <iostream> 
#include <cstdio> 
#include <algorithm> 
using namespace std; 
int main()
{
int input; 
cin >> input; 
while (input--)
{
string s; 
cin >> s; 
if(s.length() == 3)//one or two  
if ((s[0] == 'o' and s[1] == 'n' ) or (s[1] == 'n' and s[2] == 'e') or (s[2] == 'e' and s[0] == 'o'))
cout << 1 << endl; else cout << 2 << endl; 
else if (s.length() == 5)// three 
cout << "3" << endl;
}

}
