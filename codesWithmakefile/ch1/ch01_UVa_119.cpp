#include <iostream> 
#include <cstdio> 
#include <cstdlib> 
#include <map> 
#include <vector> 
using namespace std; 

int main()
{
int N; 
bool continued = false; 
while(cin >> N)
{
if (continued == true) cout << endl; 
map<string, int> p; int nc =N; vector<string> n; 
while (nc--)// get names 
{
string name; cin >> name; //cout << " name " << name << endl; 
n.push_back(name); p.insert(make_pair(name,0));
}
while (N--) // read entry for each name 
{
string name; int amount,pc;
cin >> name >> amount >> pc;  
if (pc >0)
p[name] += (amount % pc) - amount; 
for (int x = 0 ; x < pc; ++x) {
cin >> name; if(pc>0) p[name] += int(amount/pc);
}
}
for (int i = 0; i < n.size(); ++i) cout << n[i] << " " << p[n[i]] << endl; 
continued = true; 
}

}

