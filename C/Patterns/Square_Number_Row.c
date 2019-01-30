#include<stdio.h>
int main(){
    int r = 5;
    int c = 5;
    int i,j;
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            printf("%d ",i+1);
        }
        printf("\n");
    }
}