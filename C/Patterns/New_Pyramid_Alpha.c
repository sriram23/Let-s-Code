#include<stdio.h>
int main(){
    int star=1;
    int height=5;
    int i,j,k;
    for(i=1;i<=height;i++){
        for(k=height-i;k>=0;k--){
            printf("  ");
        }
        for(j=1;j<=star;j++){
            printf("%c ",j+64);
        }
        star += 2;
        printf("\n");
    }
    return 0;
}