// string concatenation
#include<stdio.h>
#include<string.h>
void main(){
    char S1[80]={"MARK"};
    char S2[80]={"TWAIN"};
    
    printf("S1 : %s",S1);
    printf("\nS2 : %s",S2);
    printf("\nS1//S2 : %s",strcat(S1,S2));
    strcpy(S1,"MARK");
    printf("\nS1//' '//S2 : %s",strcat(strcat(S1," "),S2));
}