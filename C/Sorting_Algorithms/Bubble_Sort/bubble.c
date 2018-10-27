#include <stdio.h>
void bubble_sort(int n[],int size);
void swap(int *x, int *y);
int main(){
	int val[] = {10,9,8,7,6,5,4,3,2,1};
	bubble_sort(val,10);
	for(int i=0;i<10;i++){
		printf("%d\t",val[i]);
	}
	printf("\n");
	return 0;
}
void bubble_sort(int n[],int size){
	int i,j;
	for(i=0;i<size-1;i++){
		for(j=0;j<size-i-1;j++){
			if(n[j]>n[j+1]){
				swap(&n[j],&n[j+1]);
			}
		}
	}
}
void swap(int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
