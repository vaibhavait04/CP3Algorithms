#include <iostream> 
#include <cstdio>
using namespace std; 

int main()
{
int n=1;
string in; 

while (1) { 
cin >> in ; 
if (in != "*") cout << "Case " << n++ << ": " << (in == "Hajj"? "Hajj-e-Akbar" : "Hajj-e-Asghar") << endl ; else break; 
}
}
