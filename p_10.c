//The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

//Find the sum of all the primes below two million.

#include<stdio.h>
void main()
{

double sum=0.0,temp,i,j;
int x;
for(i=2;i<2000000;i++)
{
    temp=(int)sqrt(i);

  for(j=2;j<=temp;j++)
      if(fmod(i,j)==0.0)
           break;

    if(j>temp)
          sum=sum+i;
}   

printf("\n%lf",sum);
}
		
