#include<stdio.h>
int main(){
    int r = 5,c = 5;
    int i,j,k;
    for(i=1;i<=c;i++){
        for(k=r-i;k>=0;k--){
            printf("  ");
        }
        for(j=1;j<=i;j++){
            printf("%c ",i+64);
        }
        printf("\n");
    }
}