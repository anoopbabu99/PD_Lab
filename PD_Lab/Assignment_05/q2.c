#include<stdio.h>
#include<stdlib.h>

void maxHeapify(int a[],int i,int n);
void buildMaxHeap(int a[],int n);
void heapSort(int a[],int n);
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
	heapSort(list,n);
	for(int i=0;i<n;i++){
		fprintf(ft,"%d ",list[i]);
	}
	fclose(fs);
	fclose(ft);
}

void swap(int* a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

void maxHeapify(int a[],int i,int n){
	int l,r,largest=i;
	l=2*i+1;
	r=2*i+2;
	if(l<n&&a[l]>a[largest]){
		largest=l;
	}
	if(r<n&&a[r]>a[largest]){
		largest=r;
	}
	if(largest!=i){
		swap(&a[i],&a[largest]);
		maxHeapify(a,largest,n);
	}
}

void buildMaxHeap(int a[],int n){
	for(int i=n/2-1;i>=0;i--){
		maxHeapify(a,i,n);
	}
}

void heapSort(int a[],int n){
	buildMaxHeap(a,n);
	for(int i=n-1;i>=1;i--){
		swap(&a[0],&a[i]);
		n--;
		maxHeapify(a,0,n);
	}
}
