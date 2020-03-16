#include<stdio.h>
#include<conio.h>

void swap(int *a, int *b){
	int t;
	t = *a;
	*a = *b;
	*b = t;
}

void insertion_sort(int a[], int n){
	int i,j,key;
	for(i=1; i<n; i++){
		key = a[i];
		for(j=i-1; j>=0 && a[j]>key; j--){
			swap(&a[j+1], &a[j]);
		}
		a[j+1] = key;
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
	
	insertion_sort(a,n);
	
	printf("Sorted Result:\n",n);
	for(i=0; i<n; i++){
		printf("%d ",a[i]);
	}
	
	getch();
}
