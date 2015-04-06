#include <iostream> 
#include <cmath> 
#include <cstdio>
#include <algorithm> 

using namespace std; 

int main()
{
int N; 
cin >> N;
while (N--)
{
int es[3];
cin >> es[0] >> es[1] >> es[2]; 
cout << " salaries read are " << es[0] << " and " << es[1] << " and " << es[2] << "\n"; 
sort(es, es+3); /// SORT NEEDS PAST THE END ITERATOR 
cout << " salaries sorted are " << es[0] << " and " << es[1] << " and " << es[2] << "\n"; 
cout << es[1] << "\n";
}
}
