#include<stdio.h>
void main(){
    int A,B,C;
    float MEAN(int, int, int);

    printf("Enter the values of A, B, C: ");
    scanf("%d %d %d",&A,&B,&C);
    printf("The average of %d , %d and %d is: %.2f",A,B,C,MEAN(A,B,C));
}

float MEAN(int T1, int T2, int T3){
    float AVG;
    AVG = (T1+T2+T3)/3;
    return AVG;
}