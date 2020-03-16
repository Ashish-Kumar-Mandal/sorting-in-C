#include<stdio.h>
#include<conio.h>

void swap(int *a, int *b){
	int t;
	t = *a;
	*a = *b;
	*b = t;
}

void heapify(int a[], int n, int root){
	int left,right,max;
	max = root;
	left = 2 * root + 1;
	right = 2 * root + 2;
	
	if(left < n && a[left] > a[max]){
		max = left;
	}
	if(right < n && a[right] > a[max]){
		max = right;
	}
	
	if(max != root){
		swap(&a[max], &a[root]);
		heapify(a, n, max);
	}
}

void heap_sort(int a[], int n){
	int i;
	for(i=n/2-1; i>=0; i--){
		heapify(a, n, i);
	}
	for(i=n-1; i>=0; i--){
		swap(&a[0], &a[i]);
		heapify(a, i, 0);
	}
}

void main(){
	int n,i;
	printf("How many numbers are sort: ");
	scanf("%d",&n);
	int a[n];
	
	printf("Enter %d numbers:\n",n);
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	
	heap_sort(a,n);
	
	printf("Sorted Result:\n",n);
	for(i=0; i<n; i++){
		printf("%d ",a[i]);
	}
	
	getch();
}
