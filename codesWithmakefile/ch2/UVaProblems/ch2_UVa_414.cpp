#include <iostream> 

using namespace std; 

int main()
{
int cases; 
while (cin >> cases  && cases)
{
string in; cout << " cases " << cases << endl; 
cin.clear(); cin.ignore(1,'\n');
for (int x=0; x < cases ; ++x)
{
getline(cin,in);
cout << " line read is " << in << " len " << in.length() <<  endl; 
for (int x = 0; x <in.length(); ++x);
}
}
}

