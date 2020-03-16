/*
Write a Program that prints the numbers from 1 to 100. If a number is divisible by 3, print "Fizz"
instead of the number, if a number is divisible by 5, print "Buzz" instead of the number, and if a number
is divisible by both 3 and 5, print "FizzBuz" instead of the number
*/

#include<stdio.h>
int main()
{
    for(int i=1; i<=100; i++)
    {
        if(i%3==0 && i%5==0)
        printf("FizzBuzz\n");
        else if(i%3==0)
        printf("Fizz\n");
        else if(i%5==0)
        printf("Buzz\n");
        else 
        printf("%d\n", i);
    }
}