#include<stdio.h>
#include<stdlib.h>

int sorted_asc(int list[],int n);
int sorted_desc(int list[],int n);
void quickSort(int a[],int p,int r);
int partition(int a[],int p,int r);
void swap(int* a,int *b);

void main(){
	FILE *fs,*ft;
	fs=fopen("in.txt","r");
	ft=fopen("out.txt","w");
	int n;
	fscanf(fs,"%d",&n);
	int list[n];
	for(int i=0;i<n;i++){
		fscanf(fs,"%d",&list[i]);
	}
	int a=sorted_asc(list,n);
	int d=sorted_desc(list,n);

	if(a==1&&d==0){
		printf("The array is sorted in ascending order.");
	}
	else if(a==0&&d==1){
		printf("The array is sorted in descending order.");
	}
	else if(a==1&&d==1){
		printf("All elements in the array are equal.");
	}
	else{
		printf("The array is not sorted.");
		quickSort(list,0,n-1);
		for(int i=0;i<n;i++){
			fprintf(ft,"%d ",list[i]);
		}
	}
	fclose(fs);
	fclose(ft);
}

int sorted_asc(int list[],int n){
	int status=0;
	for(int i=0;i<n-1;i++){
		if(list[i]<=list[i+1]){
			status=1;
		}
		else{
			status=0;
			break;
		}
	}
	return status;
}

int sorted_desc(int list[],int n){
	int status=0;
	for(int i=0;i<n-1;i++){
		if(list[i]>=list[i+1]){
			status=1;
		}
		else{
			status=0;
			break;
		}
	}
	return status;
}

void quickSort(int a[],int p,int r){
	if(p<r){
		int q=partition(a,p,r);
		quickSort(a,p,q-1);
		quickSort(a,q+1,r);
	}
}

int partition(int a[],int p,int r){
	int x=a[r];
	int i=p-1;
	for(int j=p;j<r;j++){
		if(a[j]<=x){
			i++;
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[i+1],&a[r]);
	return i+1;
}

void swap(int* a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
