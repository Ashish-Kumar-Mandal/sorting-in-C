#include<stdio.h>
#include<conio.h>

void merge(int a[], int left, int mid, int right){
	int i,j,k,n1,n2;
	n1 = mid - left + 1;
	n2 = right - mid;
	int L[n1], R[n2];
	
	for(i=0; i<n1; i++){
		L[i] = a[left+i];
	}
	for(j=0; j<n2; j++){
		R[j] = a[mid+1+j];
	}
	
	i = 0;
	j = 0;
	k = left;
	
	while(i<n1 && j<n2){
		if(L[i] <= R[j]){
			a[k] = L[i];
			i++;
		}else{
			a[k] = R[j];
			j++;
		}
		k++;
	}
	
	while(i < n1){
		a[k] = L[i];
		i++;
		k++;
	}
	while(j < n2){
		a[k] = R[j];
		j++;
		k++;
	}
}

void merge_sort(int a[], int left, int right){
	int mid_index;
	if(left < right){
		mid_index = (left + right) / 2;
				
		merge_sort(a, left, mid_index);
		merge_sort(a, mid_index+1, right);
		
		merge(a, left, mid_index, right);
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
	merge_sort(a, min_index, max_index);
	
	printf("Sorted Result:\n",n);
	for(i=0; i<n; i++){
		printf("%d ",a[i]);
	}
	
	getch();
}
