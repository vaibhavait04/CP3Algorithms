#include <iostream> 
#include <cstdio> 
#include <sstream> 
using namespace std; 

int main()
{
int amount=0,c=0; cin>>c; 
cin.clear(); cin.ignore(10, '\n'); 
while (c--)
{
string in; int value; 
getline(cin, in); 
if (in == "report") cout << amount << endl; 
else {istringstream str(in); str >> in; str >> value; amount+= value; }

}
}
