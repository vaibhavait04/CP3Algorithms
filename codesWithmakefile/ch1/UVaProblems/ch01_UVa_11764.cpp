#include <iostream> 
#include <algorithm> 
using namespace std; 
int main()
{
int N;
cin >> N; 
int x =1;
while (N--)
{
int c=0, high =0, low =0, in =0, prev;
bool start = false; 
cin >> c; 
while (c--)
{
cin >> in; 
if(!start) {start =true, prev = in;}
else if (in > prev) ++high; else if (in <prev) ++low; 
prev = in; 
}
cout << "Case "<< x << ": " << high << " " << low << endl, ++x; 
}

}

