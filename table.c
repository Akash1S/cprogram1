#include<stdio.h>
int main()
{
int i,a,sum=0;
 for(a=1;a<11;a++)
{  
for(i=1;i<=10;i++)
{
 printf(" %d*%d =%d \n",a,i,a*i);

 
} 
sum=sum+i;
printf("sum of table: %d\n ", sum);
printf("even");
}

return 0;

}

