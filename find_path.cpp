#include <stdio.h>
void find_path(int arr[][4], int path[], int k, int sx, int sy, int dx, int dy){
	if(sx==dx && sy==dy){
		for( int i=0; i<k; i++){
			printf("%d", path[i]);	
		}
		printf("\n");
		return;
	}
	if(sx+1<3){
		path[k] = arr[sx+1][sy];
		find_path(arr, path, k+1, sx+1, sy, dx, dy);
	}
	if(sy+1<4){
		path[k] = arr[sx][sy+1];
		find_path(arr, path, k+1, sx, sy+1, dx, dy);
	}
	
}

int main(){
	int arr[][4]={{0,5,2,8}, {4,1,10,7}, {3,9,6,11}};
	int path[10]={0,0,0,0,0,0,0,0,0,0};
	find_path(arr, path, 1, 0, 0, 2, 3);
	return 0;
}
