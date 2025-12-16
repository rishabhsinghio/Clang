//Drawing B

#include <stdio.h>

int main() {

    int i,j;

    for(i=1; i<=11; i++) {
        for(j=1; j<=11; j++) {
            if(j==1 || (i==1 && j<10) || (i==6 && j<10) || (i==11 && j<10) || (j==10 && (i==2 || i==5 || i==7 || i==10)) || (j==11 && (i==3 || i==4 || i==8 || i==9))) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}