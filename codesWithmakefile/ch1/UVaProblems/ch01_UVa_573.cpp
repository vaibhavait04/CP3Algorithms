#include <iostream> 
#include <cstdio> 
using namespace std; 
int main()
{
float H,U,D,F; 
while(cin>> H >> U >> D >> F, H > 0)// Height / U distance climb / D slide / F factor 
{ 
int day=0; float climb=0, total =0; bool done = false; 
while(1) {
++day; 
climb = U - (U *(day-1) * float(F/100)); if(climb > 0)total += climb; 
if (total>H){done=true;break;} 
total -= D; // fall
if (total <0) break;
//printf (" day %d climb %2.2f total %2.2f \n", day, climb, total); 
}
cout << (done? "success":"failure") << " on day " << day << endl; 
}
}

