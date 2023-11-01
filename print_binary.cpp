#include <stdio.h>

void print_binary(int arr[], int k, int n){
	if(k==n){
	for(int i=0; i<n; i++){
		printf("%d", arr[i]);
	}printf("\n");
		return;
	}
	print_binary(arr, k+1, n);
	arr[k]=0;
	print_binary(arr, k+1,n);
	arr[k]=1;
}

int main(){
	int arr[]={0,0,0};
	print_binary(arr,0,3);
	return 0;
}

