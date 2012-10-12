//A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91  99.

//Find the largest palindrome made from the product of two 3-digit numbers.

#include<stdio.h>
#include<string.h>
void main()
{
	int i,j,k,max=0;

for(i=100;i<999;i++)
for(j=100;j<999;j++)
{
	k=i*j;
	if(chkpelin(k)==1)
		 if(k>max)max=k;
	
}

printf("%d",max);
}

int chkpelin(int k)
{
char str[20];
int i,j;
sprintf(str,"%d",k);
for(i=0,j=strlen(str)-1;i<j;i++,j--)
		if(str[i]!=str[j])
			return 0;			

return 1;
}

		


