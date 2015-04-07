#include <iostream> 
#include <cmath> 
using namespace std; 

int main()
{
int x=0,y=0; 
while (cin >> x >> y and (x != -1 and y != -1))
{
int changes =  abs(y-x); 
changes = (changes < 50)? changes : abs(100 - changes);
cout << changes << endl; 
}

}
