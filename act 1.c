#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num1, num2, d;
    printf("Input any 2 integer : ");
    scanf("%d", &num1);
    scanf("%d", &num2);

    d = num1 % num2;
    printf("%d\n", d);
    //add
    printf("ADD = %d\n", num1 + num2);
    //Multiply
    printf("MUL = %d\n", num1 * num2);

    //Divide
    printf("DIV = %d\n", num1 / num2);
    if (d != 0) {
        printf("DIV = %.1f\n", (float)num1 / num2);
    } else {
        printf("DIV = %d\n", num1 / num2);
    }

    //Subtact
    printf("SUB = %d\n", num1 - num2);

    return 0;
}
