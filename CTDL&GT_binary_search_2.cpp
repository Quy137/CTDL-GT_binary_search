// nguon
// vi du
#include<stdio.h>
int binarySearch(int arr[], int n, int x){
	int l = 0, r = n-1;
	while (l < r){
		int mid = (l+r)/2;
		if (arr[mid] < x){
			l = mid+1;
		}
		else{
			r = mid;
		}
	}
	if (arr[l] == x){
		return l;
	}
	return -1;
}

int main () {
	int arr[] = {3 ,5 ,9 ,6 ,8 ,4 ,11 ,2 ,12};
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 11;
	
	int kq = binarySearch(arr, n-1, x);
	printf("Vi tri : %d", kq);
}
