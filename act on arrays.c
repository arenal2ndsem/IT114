#include <stdio.h>
#include <stdlib.h>

int main()
{
    int account [3][2];
    int user, password;

    //accounts declaration
    //account 1
        account[0][0] = 123;    //user
        account[0][1] = 111;    //password
    //account 2
        account[1][0] = 1234;   //user
        account[1][1] = 9999;   //password
    //account 3
        account[2][0] = 12345;  //user
        account[2][1] = 00000;  //password

    //scanning ID and Password
    printf("Enter ID Number : ");
    scanf("%d", &user);
    printf("Enter PIN : ");
    scanf("%d", &password);

    //Checking account
    if(user == account[0][0] && password == account[0][1]) {
        printf("\nYou successfully logged in\n");
        printf("ID# : %d\n", account[0][0]);
    } else if (user == account[1][0] && password == account[1][1]) {
        printf("\nYou successfully logged in\n");
        printf("ID# : %d\n", account[1][0]);
    } else if (user == account[2][0] && password == account[2][1]) {
        printf("\nYou successfully logged in\n");
        printf("ID# : %d\n", account[2][0]);
    } else { printf("\n Invalid ID/PIN! \n"); }


    return 0;
}
