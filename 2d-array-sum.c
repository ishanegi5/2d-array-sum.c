#include<stdio.h>
void main()
{
    int arr1[2][2];
    printf("enter any four numbers:\n");
    for(int i=0;i<2;i++)
    {
       for(int j=0;j<2;j++) 
     {   scanf("%d",&arr1[i][j]);
     }
    }

int arr2[2][2];
printf("Enter any four numbers again:\n");
for(int k=0;k<2;k++)
{
    for(int l=0;l<2;l++)
    {
    scanf("%d",&arr2[k][l]);
    }
}
int sum1=0,sum2=0;
for(int m=0;m<2;m++)
{
    for(int n=0;n<2;n++)
   { 
    sum1+=arr1[m][n];
   }
}
for(int o=0;o<2;o++)
{
    for(int p=0;p<2;p++)
   {
    sum2+=arr2[o][p];
   }
}
int result=sum1+sum2;
printf("final sum = %d",result);
}