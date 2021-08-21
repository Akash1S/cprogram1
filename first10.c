#include<stdio.h>
int main()
{
int i,sum=0,n;
printf("inter the value of n terms");
scanf("%d",&n);
printf("first %d natural  number is:\n ",n);

for(i=1;i<=n;i++)
{
sum =sum+i;	
printf(" %d \n",i);

}
printf("sum of %d natrual no terms is:%d\n",n,sum);



return 0;
}
