#include <stdio.h>

void reverse( int arr[], unsigned int len ) {

	int i = 0;
	int k = len;
	int j = len - 1;
	int temp;
	
	while (i < j) {
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}
}

