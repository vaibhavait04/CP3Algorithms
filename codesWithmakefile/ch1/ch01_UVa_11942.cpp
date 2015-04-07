#include <iostream> 
#include <cstdio> 
#include <algorithm> 
using namespace std; 

int main()
{
int a[10];
int cases;cin >> cases;  
cout << "Lumberjacks:" << endl; 
while (cases--)
{
int p, q;
bool up = false, down = false; 
cin >> p; 
for (int x =0; x<9; ++x) 
{
cin >> q; 
if (p > q) // check for any spike
up = true; 
else if (q>p)  // check for any spike 
down = true; 
p = q; // move next 
}
if (up && down) 
cout << "Unordered" << endl; 
else cout << "Ordered" << endl; 
}

}

