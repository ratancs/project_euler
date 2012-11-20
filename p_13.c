/*Work out the first ten digits of the sum of the following one-hundred 50-digit numbers.

input from text file "file.txt"
*/


#include <stdio.h>
void main()
{
   FILE *fopen(), *fp;
   int c,i;
   char num[51];
   double sum=0.0;
   fp = fopen("file.txt","r");
   c = getc(fp) ;
   while (c!= EOF)
   {
   	//	putchar(c);
	
		
		if(c!='\n')
			 num[i++]=c;
		else
			 i=0;

		c=getc(fp);
		printf("\n%s",num);
//		 sum+=atoi(num);
   }


   fclose(fp);
//printf("\n%lf",sum);
}
