#include<stdio.h>
int main()
{
int i,sum=0;
int a[5]={1,2,3,4,5};
for(i=0;i<5;i++)
sum = sum+a[i];
printf("sum of 5 numbers %d",sum);
return 0;
}
