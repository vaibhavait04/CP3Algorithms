#include <iostream> 
using namespace std; 

int main()
{
int N;cin >> N; 
while (N--)
{
int x,y;cin >> x >> y; 
if (x < y) cout << "<" << endl; 
else if (x > y) cout << ">" << endl; 
else cout << "=" << endl; 
}
}
