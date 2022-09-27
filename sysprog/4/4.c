#include <stdio.h>
#include <conio.h>
#include <string.h>

int countPattern(int n, char pat[])
{

	int pattern_int = 0;

	int power_two = 1;


	int all_ones = 0;


	for (int i = strlen(pat) - 1; i >= 0; i--) {
		int current_bit = pat[i] - '0';
		pattern_int += (power_two * current_bit);
		all_ones = all_ones + power_two;
		power_two = power_two * 2;
	}

	int count = 0;
	while (n && n >= pattern_int) {


		if ((n & all_ones) == pattern_int) {
			count++;
		}

		n = n >> 1;
	}
	return count;
}


int main()
{
	int n = 44;
	char pattern[5] = "11";
	printf("The number of occurence of '11' in the binary representation of %d is: %d",n, countPattern(n, pattern));
}




int main()
{
	int n = 44;
	string pattern = "11";
	cout << countPattern(n, pattern);
}
