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
