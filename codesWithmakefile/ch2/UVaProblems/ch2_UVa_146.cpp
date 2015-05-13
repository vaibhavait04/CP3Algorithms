#include <iostream> 
#include <algorithm> 
using namespace std; 

int main()
{
string in; 
while (cin>> in, in != "#")
{
//cout << "input " << in << endl; 
if( next_permutation(in.begin(), in.end()))
cout << in << endl; 
else cout << "No Successor" << endl; 
}


}
