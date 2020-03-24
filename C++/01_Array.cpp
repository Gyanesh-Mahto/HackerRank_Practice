/*
The first line of the input contains ,where N is the number of integers.
The next line contains N integers separated by a space.

Sample Input
4
1 4 3 2

Sample Output
2 3 4 1
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n, temp;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];
    for(int i=n-1, j=0; i>j; i--, j++)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    } 
    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
    return 0;
}

