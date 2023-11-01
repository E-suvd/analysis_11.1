#include <stdio.h>
int best=1000;
void small_sum_array(int arr[][3], int selected[], int k, int n){
	if(k==n){
		int sum=0;
		for(int i=0; i<n; i++){
			printf("%d", selected[i]);
			sum+=selected[i];
		}
		printf("Total: %d\n", sum);
		if(sum<best) best=sum;
		return;
	}
	small_sum_array(arr, selected, k+1, n);
	selected[k]=arr[k][0];
	small_sum_array(arr, selected, k+1, n);
	selected[k]=arr[k][1];
	small_sum_array(arr, selected, k+1, n);
	selected[k]=arr[k][2];
}

int main(){
	int arr[][3]={{1,5,3}, {2,4,6}, {3,4,5}};
	int selected[3];
	small_sum_array(arr,selected,0,3);
	printf("Best:%d", best);
	return 0;
}
