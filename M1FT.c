#include<stdio.h>
float DCU (int kWh);
float CUC (int kWh, float unit);
float CSC (float charges);
float Total (float charges, float surcharge);

int main()
{
    float C_unit, uc, sc, total;
    int ID, kWh;

    printf("Input Customer ID : ");
    scanf("%d",&ID);
    printf("Input the unit consumed by the customer : ");
    scanf("%d",&kWh);

    printf("\n[ELECTRICITY BILL]\n\n");

    C_unit = DCU(kWh);
    uc = CUC(kWh,C_unit);
    sc = CSC(uc);
    total = Total(uc, sc);

    printf("Customer ID#\t\t\t: %d\n", ID);
    printf("Unit consumed\t\t\t: %d\n", kWh);
    printf("Unit charges @P%.2f per unit\t:P %.2f\n", C_unit, uc);
    printf("Surcharge amount \t\t:P %.2f\n", sc);
    printf("Total Customer Bill\t\t:P %.2f", total);
    printf("\n\n\n");

    return 0;
}
// First function : Determine the Charge Unit
float DCU (int kWh) {
    float unit;

    if(kWh < 199)
        unit= 1.50;
    else if(kWh>=250 && kWh<400)
        unit= 1.60;
    else if(kWh>=450 && kWh<600)
        unit= 1.85;
    else
        unit= 2.00;

    return unit;
}

//Second Function : Calculate Unit Charges
float CUC (int kWh, float unit) {
    float charges;
    charges = kWh * unit;
    return charges;
}

//Third Function : Calculate Surcharge
float CSC (float charges) {
    float surcharge;
    if (charges > 400)
        surcharge = charges * 10 / 100;
    else
        surcharge = 0.00;
    return surcharge;
}

// Fourth Function : Calculate Total Customer Bill
float Total (float charges, float surcharge) {

    float total;
    total = charges + surcharge ;
    return total;
   }
