#include <stdio.h> 


void swap(int* arr, int i, int j) 
{ 
	int temp = arr[i]; 
	arr[i] = arr[j]; 
	arr[j] = temp; 
} 


void selectionSort(int arr[], int n) 
{ 
	int i, j, min_idx; 

	
	for (i = 0; i < n - 1; i++) { 
		
		min_idx = i; 
		for (j = i + 1; j < n; j++){
			if (arr[j] < arr[min_idx]) {
				min_idx = j; 
			}
		}

			swap(arr, min_idx, i); 
	} 
} 


void printArray(int arr[], int size) 
{ 
	int i; 
	for (i = 0; i < size; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 

void bubbleSort(int arr[], int n) 
{ 
	int i, j; 
	for (i = 0; i < n - 1; i++){
		 
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]){
				swap(arr, j, j + 1);
			}
		}
	}
} 

int main() 
{ 
	
	int n;
    printf("Enter the no of elements to be sorted: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    bubbleSort(arr, n);

	printf("Sorted array: \n"); 
	printArray(arr, n); 
	return 0; 
}