#include <iostream> 
#include <cmath> 
#include <cstring> 
#include <cstdio> 
#include <algorithm> 
using namespace std; 

int main()
{
int N; string in; 
cin >> N; 
while (N--)
{
cin >> in; 
//cout << " read " << in << endl; 
if (in == "1" or in == "4" or in == "78") cout << "+" << endl; 
else if ( in[in.length() -1 ] == '5' and in[in.length() -2] == '3') cout << "-" << endl; 
else if (in[0] == '9' and in[in.length() -1] == '4') cout << "*" << endl; 
else if (in[0] == '1' and in[1] == '9' and in[2] == '0') cout << "?" << endl; 
}

}
