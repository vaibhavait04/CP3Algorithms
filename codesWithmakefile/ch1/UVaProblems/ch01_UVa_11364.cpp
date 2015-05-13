#include <iostream> 
#include <cmath> 
using namespace std; 
int main()
{
int N; 
cin >> N; 
while (N--)
{
int min, max,in, count; 
cin >> count; 
cin >> in; --count; 
max = in, min = in; 
while (count--)
{
cin >> in; 
if (in > max) max = in; 
if (in < min) min = in; 
}
cout << abs(max - min) * 2 << endl; 
}

}
