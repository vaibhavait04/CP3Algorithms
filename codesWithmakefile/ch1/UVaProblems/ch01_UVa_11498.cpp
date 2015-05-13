#include <iostream> 
#include <algorithm> 

using namespace std; 
int main()
{
int cases; 
while(cin >> cases && cases != 0)
{
int mx, my;
cin >> mx >> my; // div point
while (cases--)
{
int x,y; 
cin >> x >> y; 
if (x == mx or y == my) cout << "divisa" << endl; 
else if (y > my and x < mx ) cout << "NO" << endl; // north west 
else if (y > my and x > mx ) cout << "NE" << endl; // north east 
else if (y < my and x > mx ) cout << "SE" << endl; // south east 
else if (y < my and x < mx ) cout << "SO" << endl; // south west 
}
}

}
