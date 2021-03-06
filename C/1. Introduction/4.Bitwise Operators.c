/*
Bitwise Operators

Objective
This challenge will let you learn about bitwise operators in C.

Inside the CPU, mathematical operations like addition, subtraction, multiplication and division are done in bit-level. To perform bit-level operations in C programming, bitwise operators are used which are explained below.

Bitwise AND operator & The output of bitwise AND is 1 if the corresponding bits of two operands is 1. If either bit of an operand is 0, the result of corresponding bit is evaluated to 0. It is denoted by &.

Bitwise OR operator | The output of bitwise OR is 1 if at least one corresponding bit of two operands is 1. It is denoted by |.

Bitwise XOR (exclusive OR) operator ^ The result of bitwise XOR operator is 1 if the corresponding bits of two operands are opposite. It is denoted by .

For example, for integers 3 and 5,

3 = 00000011 (In Binary)
5 = 00000101 (In Binary)

AND operation        OR operation        XOR operation
  00000011             00000011            00000011
& 00000101           | 00000101          ^ 00000101
  ________             ________            ________
  00000001  = 1        00000111  = 7       00000110  = 6
Task
Given set , find:

Sample Input 0

5 4
Sample Output 0

2
3
3
Explanation 0

n=5
k=4

All possible values of  and  are:

The maximum possible value of a&b that is also <(k=4) is 2, so we print 2 on first line.

The maximum possible value of a|b that is also <(k=4) is 3, so we print 3 on second line.

The maximum possible value of a^b that is also <(k=4) is 3, so we print 3 on third line.   
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int and_counter=0, or_counter=0, exor_counter=0, l=0;

  for(int a=1; a<n; a++)
  {
      for(int b=a+1; b<=n; b++)
      {
          l=(a&b);
          if(l<k && and_counter<l)
          and_counter=l;
      }
  }
  printf("%d\n",and_counter);
  for(int a=1; a<n; a++)
  {
      for(int b=a+1; b<=n; b++)
      {
          l=a|b;
          if(l<k && or_counter<l)
          or_counter=l;
      }
  }
printf("%d\n",or_counter);
for(int a=1; a<n; a++)
  {
      for(int b=a+1; b<=n; b++)
      {
          l=a^b;
          if(l<k && exor_counter<l)
            exor_counter=l;
      }
  }
  printf("%d\n",exor_counter);
}
int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
