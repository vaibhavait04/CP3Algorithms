#include <iostream> 
using namespace std; 

int main()
{
int cases; 
cin >> cases; 
int c = 1;
while (cases--) {
int l, b,h; cin >> l >> b >> h; 
cout << "Case " << c << ": " << ((l <= 20 and b <= 20 and h <= 20) ? "good" : "bad") << endl, ++c; 
}
}
