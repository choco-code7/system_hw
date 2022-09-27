#include <stdio.h>
void convertToBinary(unsigned n)
{
    if (n > 1)
        convertToBinary(n >> 1);

    printf("%d", n & 1);
}
int main() {
    printf("The binary representa is: ");
    convertToBinary(8);
    printf("\n");

    return 0;
}
