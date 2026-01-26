// switch procedure
#include<stdio.h>
int AAA=10;
int BBB=20;
void SWITCH(void);

void main(){
    printf("AAA = %d, BBB = %d",AAA,BBB);
    SWITCH();
    printf("\nAfter calling SWITCH procedure, AAA = %d, BBB = %d",AAA,BBB);
}


void SWITCH(void){
    int TEMP;
    TEMP=AAA;
    AAA=BBB;
    BBB=TEMP;
    return;
}