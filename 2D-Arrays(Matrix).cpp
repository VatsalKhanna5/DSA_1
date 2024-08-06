#include <stdio.h>
using namespace std;

int main() {
    int a[3][3]; // Declared matrix a
    for(int i=0;i<3;i++){ 
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    } // Taking input of the matrix
       
    int b[3][3]; // Declared matrix b
    for(int i=0;i<3;i++){ 
        for(int j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    } // Taking input of the matrix
    
    int c[3][3];

    //Task 1:- Addition A + B = C
    for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
           c[i][j]=a[i][j]+b[i][j];
       }
    }
    printf(" %d %d %d \n %d %d %d \n %d %d %d \n \n",c[0][0],c[0][1],c[0][2],c[1][0],c[1][1],c[1][2],c[2][0],c[2][1],c[2][2]);
    
    
    //Task 2:- Subtraction A - B = C
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           c[i][j]=a[i][j]-b[i][j];
       }
    }
    printf(" %d %d %d \n %d %d %d \n %d %d %d \n\n ",c[0][0],c[0][1],c[0][2],c[1][0],c[1][1],c[1][2],c[2][0],c[2][1],c[2][2]);
    

    // Task 3 :- Multiplication
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           c[i][j]=a[i][j]*b[i][j];
       }
    }
    printf(" %d %d %d \n %d %d %d \n %d %d %d \n\n ",c[0][0],c[0][1],c[0][2],c[1][0],c[1][1],c[1][2],c[2][0],c[2][1],c[2][2]);
    

    //Task 4:- Transpose of Matrix A
   for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           c[i][j]=a[j][i];
       }
    }
    printf(" %d %d %d \n %d %d %d \n %d %d %d \n\n ",c[0][0],c[0][1],c[0][2],c[1][0],c[1][1],c[1][2],c[2][0],c[2][1],c[2][2]);
    return 0;
}

