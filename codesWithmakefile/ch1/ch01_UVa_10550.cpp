#include <iostream> 
using namespace std; 

int main()
{
int i,a,b,c; 
while (cin >> i >> a >> b >> c, i || a || b || c)
{
int ans = 0; 
ans = 360 * 2 + 360; 
ans += (i-a) > 0 ? (i-a)*9 : (40+(i-a))*9; // clockwise first - last 
ans += (b-a) > 0 ? (b-a)*9 : (40+(b-a))*9; // counter last - first 
ans += (b-c) > 0 ? (b-c)*9 : (40+(b-c))*9; // clock first - last 
cout << ans << endl; 
}
}
