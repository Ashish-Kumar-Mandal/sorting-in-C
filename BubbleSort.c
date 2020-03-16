#include<stdio.h>
#include<conio.h>

void swap(int *a, int *b){
	int t;
	t = *a;
	*a = *b;
	*b = t;
}

void bubble_sort(int a[], int n){
	int i,j;
	for(i=0; i<n-1; i++){
		for(j=0; j<n-i-1; j++){
			if(a[j] > a[j+1]){
				swap(&a[j], &a[j+1]);
			}
		}
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
	
	bubble_sort(a,n);
	
	printf("Sorted Result:\n",n);
	for(i=0; i<n; i++){
		printf("%d ",a[i]);
	}
	
	getch();
}
