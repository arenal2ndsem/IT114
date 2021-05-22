#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    char name[50];

    printf("Name : ");
    fgets(name, sizeof(name), stdin);

    printf("Age : ");
    scanf("%d", &age);

    if (age > 0) {
        if (age <= 17) {
            printf("You are not eligible for voting.");
        } else if (age >= 18) {
            printf("You are eligible for voting.");
        }
    } else {
        printf("Invalid Age, Please Try Again.");
    }
    return 0;
}
