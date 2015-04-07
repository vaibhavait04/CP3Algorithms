#include <iostream> 
#include <cstdio> 
#include <cmath> 

using namespace std; 
int calculatedValue(int value)
{
//Multiply n by 567, then divide the result by 9, then add 7492, then multiply by 235, then divide by 47, then subtract 498. 
// return value in 10s place 
int result; 
result = value * 567 ;
result = result/ 9; 
result = result + 7492; 
result = result * 235; 
result = result / 47; 
result = result - 498; 
result = abs ((result/10)%10);
return result; 
}

int main()
{
int cases, value; 
cin >> cases; 
while (cases--) {
cin >> value; 
cout << calculatedValue(value) << "\n";
}
}
