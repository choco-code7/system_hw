#include <stdio.h>

int powerOptimised(int a, int n)
{

	int ans = 1;

	while (n > 0) {

		int last_bit = (n & 1);


		if (last_bit) {
			ans = ans * a;
		}

		a = a * a;


		n = n >> 1;
	}

	return ans;
}

int main()
{
	int a = 2, n = 3;
    printf("2 raised to n (%d) equal: %d",n, powerOptimised(a, n));
    return 0;
}
