#include <iostream> 
#include <vector> 
#include <cstdio> 
#include <algorithm> 

using namespace std; 

int main() {
	int n = 5, L[] = {10, 7, 5, 20, 8}, v = 7;
	sort(L, L + n);
	printf("%d\n", binary_search(L, L + n, v));
}

