/*Work out the first ten digits of the sum of the following one-hundred 50-digit numbers.

input from text file "file.txt"
*/

#include <stdio.h>
void main()
{
   FILE *fopen(), *fp;
   int c,i,carry=0,digit;
   int num[50]={0};
	char x;
   double sum=0.0;
   fp = fopen("file.txt","r");
   i=0;
 do
   {	c=getc(fp);	
	if(c!='\n')
		 {num[i]+=((int)c-48);i++;}
	else
		i=0;

   }while(c!=EOF);

i=49;

while(i>=0)
{	printf("\nnum=%d",num[i]);
     if(i!=0)
	{  digit=(num[i]+carry)%10;
	carry=num[i]/10;
	num[i]=digit;
	}
	else
		num[i]+=carry;
i--;
}

i=0;
while(i<50)
printf("%d",num[i++]);
   fclose(fp);
}
