// Roots of a quadratic equation

#include<stdio.h>
#include<math.h>

void main(){
    int A,B,C,D;
    float x,x1,x2;
    printf("Enter the values of A, B and C: ");
    scanf("%d %d %d", &A , &B , &C);
    D=B*B-4*A*C;
    if(D>0){
        x1=((-1)*B+sqrt(D))/2*A;
        x2=((-1)*B-sqrt(D))/2*A;
        printf("X1 = %.2f, X2 = %.2f",x1,x2);
    }
    else if(D==0){
        x = ((-1)*B)/2*A;
        printf("Unique solution x = %.2f",x);
    }
    else 
    printf("No real solution");
}