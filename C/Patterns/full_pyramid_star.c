#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int space = 2 * n;
    int k=0;
    for(int i=0;i<space/2;i++){
        for(int j=1;j<=space;j++){
            if((j == (space/2)+i) || (j == (space/2)-i))
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}