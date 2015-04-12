#include <iostream> 
#include <algorithm> 
#include <cstdio>
#include <cstdlib> 
using namespace std; 

int getSum(string x)
{
int sumX=0;
for (int a = 0; a < x.length(); ++a) 
if (islower(x[a])) sumX += x[a] - 'a' + 1; 
else if(isupper(x[a])) sumX += x[a] -'A' +1;
return sumX;
}

int getVal(int x) { while (x>9) {int x1 = x/10 + x%10; x=x1;} return x; }

int main()
{
string x, y; 
while (getline(cin,x))
{
getline(cin,y);
//cout << getSum(x) << " and " << getSum(y) << endl; 
int v1 = getVal(getSum(x)), v2 = getVal(getSum(y)); 
//cout << v1 << " and " << v2 << endl; 
if (v1 > v2) swap(v1,v2); 
printf("%.2f %%\n", float(v1*100.0)/float(v2));
}
}

