#include <iostream> 
#include <map> 

using namespace std; 

int main()
{
int x,y; cin >> x >> y; 
// map of key, base, size, dim1, dim2
map< string , vector< pair<int, pair <int, pair<int, int> > > > > q; 
while (x--)
{
string name; int base, size, dim; 
cin >> name >> base >> size >> dim; 
for (int a = 0 ; a< dim; ++a) 
{
int dim1,dim2; cin >> dim1 >> dim2; 
q[name].push_back(make_pair(base,make_pair(size, make_pair(dim1,dim2))));
}

}
while (y--)
{

}

}
