#include<stdio.h>
#include<conio.h>

void swap(int *a, int *b){
	int t;
	t = *a;
	*a = *b;
	*b = t;
}

void selection_sort(int a[], int n){
	int i,j,min_index;
	for(i=0; i<n-1; i++){
		min_index = i;
		for(j=i+1; j<n; j++){
			if(a[min_index] > a[j]){
				min_index = j;
			}
		}
		swap(&a[min_index], &a[i]);
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
	
	selection_sort(a,n);
	
	printf("Sorted Result:\n",n);
	for(i=0; i<n; i++){
		printf("%d ",a[i]);
	}
	
	getch();
}
