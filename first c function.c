#include <stdio.h>
int addNumbers(int func_num1, int func_num2, int func_num3, int func_num4, int func_num5);
int dividingNumbers(int num1);

int main()
{
    int num1,num2,num3,num4,num5,sum,average;

    printf("Enters five numbers: \n");
    scanf("%d %d %d %d %d",&num1,&num2,&num3,&num4,&num5);
    //pass arguments 1
    sum = addNumbers(num1, num2, num3, num4, num5);
    //pass aguments 2
    average = dividingNumbers(sum);
    printf("average = %d", average);

    return 0;
}

// return value type is int
int addNumbers(int func_num1, int func_num2, int func_num3, int func_num4, int func_num5)
{
    int func_sum;
    func_sum = func_num1+func_num2+func_num3+func_num4+func_num5;
    return func_sum;
}

//Second Function
int dividingNumbers(int num1)
{
    int func_divide;
    func_divide = num1/5;
    return func_divide;
}

