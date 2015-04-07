#include <iostream> 

using namespace std; 

int main()
{
int count; 
int test = 1;
while (cin>>count && count)
{
int number, sum = 0; 
while(count--){
cin >> number; 
if(number == 0) --sum; else if (number > 0) ++sum;
}
cout << "Case "<< test << ": " << sum << endl; ++test; 
}

}
