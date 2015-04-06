#include <iostream> 

using namespace std; 

int main()
{

int N, F; 
int land, animals, rate; 

cin >> N; 
while (N--)
{
cin >> F; 
int sum = 0; 
while (F--)
{
cin >> land >> animals >> rate ; 
cout << land << " " << animals << " " << rate << endl; 
sum += land * rate; 
}
cout << sum << "\n"; 
}

}
