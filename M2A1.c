//FirstArrayActivity
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[10], count, i;
    int sum, num;

    printf("Size of Array : ");
    scanf("%d", &count); //Array Size Counter

    //Sets Array size limit (5 - 10)
    if (count < 5 || count > 10) {
        printf("\nInvalid Entry\n");
    } else {
        //Array Loop, scans how many count.
        for (i = 0, num = 1, sum = 0; i < count; num++, i++) {
            printf("element %d : ", num);
            scanf("%d", &array[i]);
            sum += array[i]; //Adds all element entered
        }

        //Print Total
        printf("Sum of all array elements : %d\n", sum);

    }

    return 0;
}
