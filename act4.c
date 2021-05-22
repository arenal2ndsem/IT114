#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, rmn, rev = 0;

    printf("Input any integer: ");
    scanf("%d", &num1);

    if (num1 > 0) {

        printf("Reverse for %d is ", num1);

        while (num1 != 0) {
            rmn = num1 % 10;
            rev = rev * 10 + rmn;
            num1 = num1 / 10;
        }

        printf("%d", rev);
    } else {
        printf("The inputted data is Invalid\n");
    }

    return 0;
}
