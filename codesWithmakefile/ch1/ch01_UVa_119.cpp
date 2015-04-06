#include <iostream> 
#include <cstdio> 
#include <cstdlib> 
#include <map> 

using namespace std; 

int main()
{
int N; 

while(cin >> N)
{
map<string, int> p; 
int nc =N;
while (nc--)// get names 
{
string name; 
cin >> name; 
cout << " name " << name << endl; 
p.insert(make_pair(name,0));
}
while (N--) // read entry for each name 
{
string name; 
int amount,pcCopy, pc;
cin >> name >> amount >> pc; 
p[name] -= -amount; 
pcCopy = pc; 

while (pcCopy--)
{
	cin >> name; 
	p[name] += amount/pc;
}
}

for (map<string, int>::iterator it = p.begin(); it!= p.end(); ++it)
cout << (*it).first << " " << (*it).second << "\n"; 
cout << endl; 
}

}
