#include <iostream> 
#include <cstdio> 
#include <algorithm> 
using namespace std; 

// C++ code for task 7, assuming all necessary includes have been done
int main() {
	int p[10], N = 10; for (int i = 0; i < N; i++) p[i] = i;
	do {
		for (int i = 0; i < N; i++) printf("%c ", 'A' + p[i]);
		printf("\n");
	}
	while (next_permutation(p, p + N));
}

