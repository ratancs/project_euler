/*
The following iterative sequence is defined for the set of positive integers:

n  n/2 (n is even)
n  3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:

13  40  20  10  5  16  8  4  2  1
It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million.
*/


#include<stdio.h>

void main()
{

double n=1000000.0,num,maxnum;
int count1,count2=0;
char c;
while(n>=0)
{
count1=0;
num=--n;
while(num!=1.0)
{
	if(fmod(num,2)==0)
		num=num/2;
	else
		num=3*num+1;
count1++;

}
//printf("\ncount_new=%d\tcount_old=%d\tnum=%lf",count1,count2,maxnum);
if(count1>=count2)
	{maxnum=n;count2=count1;}
if(count1==1)
	break;
}
printf("Max chain no =%lf",maxnum);
}


