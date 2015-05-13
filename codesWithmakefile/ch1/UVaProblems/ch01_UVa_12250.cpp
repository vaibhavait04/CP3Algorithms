#include <iostream> 
#include <cstdio> 
#include <algorithm> 
#include <map> 
using namespace std; 
int main()
{
map<string, string> name; 
name["HELLO"] = "ENGLISH"; name["HOLA"] = "SPANISH"; name["HALLO"] = "GERMAN"; name["BONJOUR"] = "FRENCH"; 
name["CIAO"] = "ITALIAN";
name["ZDRAVSTVUJTE"] = "RUSSIAN";
// 2000 lines input, max length 14, end # = termination do not process
string input; 
int count = 1; 
while (cin>> input)
{
if (input[input.size() -1] == '#') break; 
else 
if (name.find(input) != name.end())
cout << "Case "<< count << ": " << name[input] << endl; 
else 
cout << "Case "<< count << ": " << "UNKNOWN" << endl; 
++count; 
}

}
