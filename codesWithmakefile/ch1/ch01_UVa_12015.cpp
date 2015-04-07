#include <iostream> 
#include <cstdio> 
#include <map> 
#include <vector> 
#include <set> 
using namespace std; 
int main()
{
int cases; cin >> cases; 
for (int x=0; x<cases; ++x)
{
vector< pair<int, string> > vis; 
string s; int w, max; bool start = false;   
for (int y=0; y< 10; ++y) 
{
cin >> s >> w;
vis.push_back(make_pair(w,s));
if (!start) start=true, max = w; 
else if (max <w) max = w;
}
cout << "Case #" << x+1 << ":" << endl; 
for (int x =0; x<vis.size(); ++x)
{
if (vis[x].first ==max) cout << vis[x].second << endl; 
}
}
}
