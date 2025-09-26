#include <stdio.h>
int main()
{
int mat[10][10],trans[10][10],i,c,r,j,issymmetric=1;
printf("enter the row and column size\n");
scanf("%d%d",&r,&c);
if(r!=c)
{
printf("Matrix is not square, so it cannot be symmetric.\n");
return 0;
}
printf("enter the first matrix\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&mat[i][j]);
}
}
printf("the matrix is\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",mat[i][j]);
}
printf("\n");
}
printf("transpose of the matrix is\n");
for(i=0;i<c;i++)
{
for(j=0;j<r;j++)
{
trans[i][j]=mat[j][i];
printf("%d\t",trans[i][j]);
}
printf("\n");
}
for(i=0;i<c;i++)
{
for(j=0;j<r;j++)
{
if(mat[i][j] != mat[j][i])
{
issymmetric=0;
}
}
}
if(issymmetric==1)
{
printf("\nit is an symmetric matrix\n");
}
else{
printf("asymmetric\n");
}
return 0;
}
