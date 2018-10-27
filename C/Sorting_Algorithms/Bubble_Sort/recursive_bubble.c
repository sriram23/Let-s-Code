#include <stdio.h>
void swap(int *x, int *y);
void bubble(int n[],int size);
int main(){
	int val[] = {10,9,8,7,6,5,4,3,2,1};
	bubble(val,10);
	for(int i=0;i<10;i++){
		printf("%d\t",val[i]);
	}
	printf("\n");
	return 0;
}
void bubble(int n[], int size){
	if(size == 1)
		return;
	for(int i=0;i<size-1;i++){
		if(n[i]>n[i+1]){
			swap(&n[i],&n[i+1]);
		}
	}
	bubble(n,size-1);
}
void swap(int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
