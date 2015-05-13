#include <iostream> 
#include <algorithm> 
using namespace std; 
int main()
{
int cases; cin >> cases;
for (int x =0 ; x < cases; ++x)
{
int inputs, max; bool start = false; 
cin >> inputs; 
while (inputs--)
{
int in; cin >> in; 
if (!start) start = true, max = in; 
else if (max < in) max = in; 
}
cout << "Case " << x+1 << ": " << max << endl; 
}

}
