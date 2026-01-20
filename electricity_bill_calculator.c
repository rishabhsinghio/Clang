#include <stdio.h>

int main()
{
    printf("Electricity Bill Calculator\nPlease enter the unit(s) consumed: ");
    int u;
    scanf("%d", &u);

    if (u <= 0) {
        printf("Invalid units entered\n");
        return 0;
    }
    
    int n;
    int m;

    if(u>0 && u<=100) {
        n = u*5;
    } else if(u>100 && u<=200) {
        n = (100*5) + ((u-100) * 7);
    } else if(u>200 && u<= 300) {
        n = (100*5) + (100*7) + ((u-200) * 10);
    } else {
        n = (100*5) + (100*7) + (100*10) + ((u-300) * 15);
    }

    if(n>1000) {
        m = ((n*10)/100) + n + 50;
    } else {
        m = n + 50;
    }

    printf("Electricity Bill Details\n");
    printf("Total Units Consumed: %d\n", u);
    printf("Base Value: %d\n", n);
    printf("Meter Charges: 50 INR\n");
    printf("Grand Total (incl. all the taxes): %d", m);


    return 0;
}
