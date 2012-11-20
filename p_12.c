/*
The sequence of triangle numbers is generated by adding the natural numbers. So the 7th triangle number would be 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28. The first ten terms would be:

1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...

Let us list the factors of the first seven triangle numbers:

 1: 1
 3: 1,3
 6: 1,2,3,6
10: 1,2,5,10
15: 1,3,5,15
21: 1,3,7,21
28: 1,2,4,7,14,28
We can see that 28 is the first triangle number to have over five divisors.

What is the value of the first triangle number to have over five hundred divisors?


*/

#include<stdio.h>

void main()
{

double sum=0.0,temp,i,j=1.0,num=0.0,k=1.0;
i=1.0;
num+=i++;
num+=i++;
int count;
char c;
while(1)
{   
	count=0;
 	num+=i++;
	temp=(int)sqrt(num);

  for(j=2;j<=temp;j++)
      if(fmod(num,j)==0.0)
           count+=2;
     
if(count>500)
{printf("\nnum=%lf\t root=%lf\t divisors=%d",num,temp,count);
break;}
}   

printf("\n%lf",num);
}
		
