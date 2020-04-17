/*
In this challenge, you have to create an array of size  dynamically, input the elements of the array, sum them and print the sum of the elements in a new line.

Input Format

The first line contains an integer, .
The next line contains  space-separated integers.

Print in a single line the sum of the integers in the array.

Sample Input 0

6
16 13 7 2 1 12 
Sample Output 0

51
Sample Input 1

7
1 13 15 20 12 13 2 
Sample Output 1

76
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, sum=0;
    scanf("%d", &n); 
    int a[n];
    for(int i=0; i<n; i++)
    scanf("%d", &a[i]);
    for(int i=0; i<n; i++)
    {
        sum+=a[i];
    }
    printf("%d", sum);
    return 0;
}
