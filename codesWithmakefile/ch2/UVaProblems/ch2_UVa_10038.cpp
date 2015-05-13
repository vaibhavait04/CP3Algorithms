#include <iostream> 
#include <map>
#include <cmath>  
using namespace std; 

int main()
{
int integers, i, prev, diff; 
cin >> integers; 
cin >> i ; --integers; 
bool notfound = true; 
while (integers-- && notfound)
{
cin >> i; 
int newdiff = abs(prev - i); prev = i; 

}

}
