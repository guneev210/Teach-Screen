#include<stdio.h>

int n;

int a[10][10];

void printSol(){

for(int i=0;i<n;i++){

for(int j=0;j<n;j++)

printf("%d ",a[i][j]);

printf("\n");

}

printf("\n");

}

int isSafe(int row,int col){

//checking for the same row

for(int i=0;i<col;i++){

if(a[row][i])

return 0;

}

//checking for the same column

for(int i=0;i<row;i++){

if(a[i][col])

return 0;

}

//checking for the left diagonal

for(int i=row-1,j=col-1;i>=0 && j>=0; i--,j--){

if(a[i][j])

return 0;

}

//checking for the right diagonal

for(int i=row-1,j=col+1;i>=0 && j<n; i--,j++){

if(a[i][j])

return 0;

}

return 1;

}

void nqueen(int row){

if(row==n){

printSol();

}

else{

for(int i=0;i<n;i++){

if(isSafe(row,i)){

a[row][i]=1;

nqueen(row+1);

a[row][i]=0;

}

}

}

}

int main(){

printf("Enter the value of N :: ");

scanf("%d",&n);

nqueen(0);

}