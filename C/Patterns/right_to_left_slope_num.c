#include<stdio.h>
int main(){
    int r = 5;
    int c = 5;
    int i,j,k;
    for(i=0;i<c;i++){
        for(k=r-i-1;k>0;k--){
            printf("  ");
        }
        for(j=0;j<=i;j++){
            printf("%d ",i+1);
        }
        printf("\n");
    }
}