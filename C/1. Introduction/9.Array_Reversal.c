/*
Given an array, of size n, reverse it.

Sample Input 0

6
16 13 7 2 1 12 

Sample Output 0

12 1 2 7 13 16 

Sample Output 1

2 13 12 20 15 13 1 

Sample Input 2

8
15 5 16 15 17 11 5 11 

Sample Output 2

11 5 11 17 15 16 5 15 
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
    for(int i=0, j=num-1; i<j; i++, j--)
    {
        int temp;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}