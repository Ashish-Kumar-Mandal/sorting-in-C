#include<stdio.h>
#include<conio.h>

void swap(int *a, int *b){
	int t;
	t = *a;
	*a = *b;
	*b = t;
}

int partition(int a[], int low, int high){
	int i,j,pivot;
	pivot = a[high];
	i = low-1;
	
	for(j=low; j<high; j++){
		if(a[j] <= pivot){
			i++;
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[i+1],&a[high]);
	
	return i+1;
}

void quick_sort(int a[], int low, int high){
	int pivot_index;
	if(low < high){
		pivot_index = partition(a, low, high);
				
		quick_sort(a, low, pivot_index-1);
		quick_sort(a, pivot_index+1, high);
	}
}

void main(){
	int n,i,min_index,max_index;
	printf("How many numbers are sort: ");
	scanf("%d",&n);
	int a[n];
	
	printf("Enter %d numbers:\n",n);
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	
	min_index = 0;
	max_index = n-1;
	quick_sort(a, min_index, max_index);
	
	printf("Sorted Result:\n",n);
	for(i=0; i<n; i++){
		printf("%d ",a[i]);
	}
	
	getch();
}
