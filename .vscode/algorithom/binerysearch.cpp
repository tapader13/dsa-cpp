// #include <iostream>
// using namespace std;
// int mergeSort(int arr[], int size, int k)
// {
//     int s = 0;
//     int e = size - 1;
//     int mid = s + (e - s) / 2;
//     while (s <= e)
//     {
//         if (arr[mid] == k)
//         {
//             return mid;
//         }
//         if (k > arr[mid])
//         {
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid - 1;
//         }
//         mid = s + (e - s) / 2;
//     }
//     return -1;
// }
// int main()
// {
//     int arr[7] = {7, 1, 3, 8, 9, 10, 13};

//     int k = 10;
//     int ans = mergeSort(arr, 7, k);
//     cout << "index is " << ans << endl;
// }

// // #undef MINHAJ
// int main()
// {
// #ifdef MINHAJ
//     printf("%d", MINHAJ);
// #else
//     printf("not");
// #endif
// }
#include <stdio.h>
#include <math.h>

//     int a = 0;
// #ifdef MINHAJ
//     a = 2;
// #else
//     scanf("%d", &a);
// #endif
//     printf("value is = %d", a);
#ifndef _MATH_H
#error include
#else
int main()
{

    float f;
    f = sqrt(9);
    printf("%f", f);
}
#endif