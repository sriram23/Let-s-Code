#include <stdio.h>
void swap(int *x, int *y);
void selection(int n[], int size);
int main(){
	int val[] = {10,9,8,7,6,5,4,3,2,1};
	selection(val,10);
	for(int i=0;i<10;i++){
		printf("%d\t",val[i]);
	}
	printf("\n");
	return 0;
}
void selection(int n[], int size){
	int i,j,min;
	for(i=0;i<size-1;i++){
		min = i;
		for(j=i+1;j<size;j++){
			if(n[j] < n[min]){
				swap(&n[j],&n[min]);
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
