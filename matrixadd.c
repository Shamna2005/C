#include <stdio.h>
int main()
{
int mat1[10][10],mat2[10][10],i,c,r,j,r1,c1;
printf("enter the row size\n");
scanf("%d%d",&r,&r1);
printf("enter the column size\n");
scanf("%d%d",&c,&c1);
printf("enter the first matrix\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&mat1[i][j]);
}
}
printf("the matrix is\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",mat1[i][j]);
}
printf("\n");
}
printf("enter the second matrix\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&mat2[i][j]);
}
}
printf("the matrix is\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("%d\t",mat2[i][j]);
}
printf("\n");
}
if(r&&c==r1&&c1)
{
printf("add matrix\n");
for(i=0;i<r;i++)
{
for(j=0;j<c1;j++)
{
printf("%d\t",mat1[i][j]+mat2[i][j]);
}
printf("\n");
}
}
else{
printf("cannot add matrix");
}
return 0;
}
