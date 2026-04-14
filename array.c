#include <stdio.h>

int main()
{
    /*
    int ara[5] = {10, 20, 30, 40, 50};

     printf("First element: %d\n", ara[0]);
     printf("Third element: %d\n", ara[3]);
    */

    /*
    int ara[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i;

    for(i = 0; i < 10; i++) {
        printf("%d th element is: %d\n", i+1, ara[i]);
    }

    */

   /*  int ara[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int ara2[10];
    int i, j;

    // Reverse copy
    for(i = 0, j = 9; i < 10; i++, j--) {
        ara2[j] = ara[i];
    }

    // Copy back
    for(i = 0; i < 10; i++) {
        ara[i] = ara2[i];
    }

    // Print result
    for(i = 0; i < 10; i++) {
        printf("%d\n", ara[i]);
    }
    */

    int arra[] = {10, 20 ,30 ,40 ,50 ,60 ,70 ,80 ,90 ,100};
    int arra2[10];
    int i, j;

    // Reverse copy
   for( i = 0, j = 9; i < 10; i++, j-- ) {
        arra2[j] = arra[i];
    }


    for(i = 0; i < 10; i++) {
        arra[i] = arra2[i];
    }

    for(i = 0; i < 10; i++) {
        printf("%d\n", arra[i]);
    }


    return 0;

}
