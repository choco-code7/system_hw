#include <stdio.h>


void count(int N)
{

	int count = 0;

	while (N > 0) {


		if (N & 1) {
			count++;
		}

		N = N >> 1;
	}


	printf("Count of 1s in this integer is %d\n", count);
}


int main()
{

	int N = 22;

	count(N);
	return 0;
}
