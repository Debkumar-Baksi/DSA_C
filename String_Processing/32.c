#include<stdio.h>
#include<string.h>
void main(){
    char T[80]={"HIS FATHER IS THE PROFESSOR"};
    int INDEX(char*, char*);
    printf("T = %s",T);
    printf("\n\nINDEX(T,'THE') = %d",INDEX(T,"THE"));
    printf("\n\nINDEX(T,'THEN') = %d",INDEX(T,"THEN"));
    printf("\n\nINDEX(T,'THE') = %d",INDEX(T," THE "));
}

int INDEX(char *STR1,char *STR2){
    int m,n;
    int index,flag;
    for(m=0;m<strlen(STR1);m++){
        index = m;
        flag = 1;
        for(n=0;n<strlen(STR2);n++){
            if(STR1[m+n]==STR2[n]);
            else{
                flag=0;
                break;
            }
        }
        if (flag==0)
            continue;
        else
            return(index);
    }
    if(m==strlen(STR1))
        return(-1);
}