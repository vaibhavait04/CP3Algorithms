#include <iostream> 
using namespace std; 

int main()
{
long long val; 
while(cin >> val && val)
{
while (val > 9)
{
int newVal = val/10 + val %10; val = newVal;
}
cout << val << endl; 
} 
}
