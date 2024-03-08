//Write  a program for matrix multiplication
#include <stdio.h>
int main(){
    int arr[10][10];
    int arr2[10][10];
    int multi[10][10];
    int c,r,i,k,j;
    printf("Enter the number of row = ");
    scanf("%d",&r);
    printf("Enter No. of Column = ");
    scanf("%d",&c);
    printf("Enter the first matrix element =\n");
   
  for(i=0;i<r;i++)
   {
     for(i=0;j<c;j++){

        scanf("%d",&arr[i][j]);


    }
    }
    printf("Enter the secound matrix element =\n");
    for (i=0;i<r;i++){
        for (j=0;j<c;j++){

        }
    }
    printf("Multiply of the matrix =\n");
    for (i=0;j<c;j++){
        for(k=0;k<c;k++){
        multi[i][j]+=arr[i][k]*arr2 [k][j];
        }

    }
    for (i=0;j<c;j++){
        printf("d\t\t",multi[i][j]);
    }
    
    printf("\n");
} 