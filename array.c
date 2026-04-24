#include <stdio.h>

int main()
{
    /*
   int ara[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int ara2[10];


    int i, j;

    for(i = 0, j = 9; i < 10; i++, j­­--) {
        ara2[j] = ara[i];
    }
    */

    /*
     int ft_marks[40] = {83, 86, 97, 95, 93, 95, 86, 52, 49, 41, 42, 47, 90,
59, 63, 86, 40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42, 83, 47, 95, 69, 82,
82, 58, 69, 67, 53, 56, 71, 62},
    st_marks[40] = {86, 97, 95, 93, 95, 86, 52, 49, 41, 42, 47, 90, 59, 63,
86, 40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42, 83, 47, 95, 69, 82, 82, 58,
69, 67, 53, 56, 71, 62, 49},
    final_marks[40] = {87, 64, 91, 43, 89, 66, 58, 73, 99, 81, 100, 64, 55,
69, 85, 81, 80, 67, 88, 71, 62, 78, 58, 66, 98, 75, 86, 90, 80, 85, 100, 64,
55, 69, 85, 81, 80, 67, 88, 71};

    int i;
    double total_marks[40];

    for(i = 0; i < 40; i++) {
    total_marks[i] = ft_marks[i] / 4.0 +
                     st_marks[i] / 4.0 +
                     final_marks[i] / 2.0;
    }

    for(i = 0; i < 40; i++) {
        printf("Roll NO: %d\t Total Marks: %.0lf\n", i + 1, total_marks[i]);
    }
*/

    int ara[] = {1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100};
    int low_indx = 0;
    int high_indx = 15;
    int mid_indx;
    int num = 11;

    while (low_indx <= high_indx) {
        mid_indx = (low_indx + high_indx) / 2;

        if (num == ara[mid_indx]) {
            break;
        }

        if (num < ara[mid_indx]) {
            high_indx = mid_indx - 1;
        } else {
            low_indx = mid_indx + 1;
        }
    }

    if (low_indx > high_indx) {
        printf("%d is not in the array\n", num);
    } else {
        printf("%d is found in the array. It is the %d th element of the array.\n", ara[mid_indx], mid_indx);
    }

    return 0;


}
