#include <iostream> 
#include <algorithm> 

using namespace std; 
int main()
{
while(1)
{
int cases, mx, my;
cin >> cases; if (cases ==0) break; 
cin >> mx >> my; // div point
while (cases--)
{
int x,y; 
cin >> x >> y; 
if (x == mx or y == my) cout << "divisia" << endl; 
else if (y > my and x < mx ) cout << "NO" << endl; 
else if (y > my and x > mx ) cout << "NE" << endl;
else if (y < my and x > mx ) cout << "SE" << endl; 
else if (y < my and x < mx ) cout << "SO" << endl; 
}
}

}
