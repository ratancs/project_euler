/*
215 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

What is the sum of the digits of the number 21000?

*/


#include<stdio.h>
#include<stdlib.h>
void main()
{

char str[1000];
int i=1;
double sum=0.0;
sprintf(str,"\n%lf",pow(2,1000));

while(str[i]!='.')
{
        sum+=(int)str[i]-48;
i++;
}
printf("\nsum=%lf",sum);
}
