#include <stdio.h>

int scrambled( unsigned int arr1[], unsigned int arr2[], unsigned int len) {
	
	int arr[100] = {0};
	int i;
	for ( i = 0; i < len; i++) {
		arr[arr1[i]]++;
		arr[arr2[i]]--;
	}
	
	for ( i = 0; i < len; i++) {
		if(arr[arr1[i]] != 0)
			return 0;
	}
	return 1;
}
