#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nums;

    printf("Input any integer : ");
    scanf("%d", &nums);

    if (nums > 0) {
        printf("The integer is a positive number\n");
    } else if (nums < 0) {
        printf("The integer is a negative number\n");
    } else {
        printf("The inputted data is Invalid\n");
    }
    return 0;
}
