// Linear Search
#include<stdio.h>
void main(){
    int DATA[10] = {22,65,1,99,32,17,74,49,33,2};
    int ITEM=17;
    int N,LOC,K;
    N=10;
    K=0;
    LOC=-1;
    while(LOC==-1 && K<N){
        if(ITEM==DATA[K])
            LOC=K;
        K=K+1;
    }
    if (LOC==-1)
        printf("ITEM is not in the list.");
    else
        printf("%d is the location of ITEM",LOC);
}