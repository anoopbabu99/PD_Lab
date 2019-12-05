#include<stdio.h>
#include<stdlib.h>

FILE *fs,*ft;

int numOfDigits(int list[],int n){
	int lnum=list[0];
	int nod=0;
	for(int i=1;i<n;i++){
		if(list[i]>lnum){
			lnum=list[i];
		}
	}
	while(lnum>=1){
		nod++;
		lnum=lnum/10;
	}
	return nod;
}

int power(int i){
	int num=10;
	for(int a=1;a<i;a++){
		num=num*10;
	}
	return num;
}

int digit(int num,int i){
	int div=power(i);
	int value=num%div;
	div=div/10;
	num=value/div;
	return num;
}

void swap(int *x, int *y) 
{ 	
	int temp;
	temp = *x; 
	*x = *y; 
	*y = temp; 
} 

void sort(int arr[], int arr2[],int n)
{
	int i, j; 
	for(i=0;i<n-1;i++)        
	{
	for(j=0;j<n-i-1;j++)  
		{
		if(arr2[j]>arr2[j+1]) 
			{
			swap(&arr[j], &arr[j+1]); 
			swap(&arr2[j], &arr2[j+1]); 
			}
		}
	}


} 

void radixSort(int list[],int n){
	int nod;
	nod=numOfDigits(list,n);
	int sortlist[n];
	for(int i=1;i<=nod;i++){
		for(int j=0;j<n;j++){
			sortlist[j]=digit(list[j],i);
		}
		sort(list,sortlist,n);
	
	}


}


void reverseList(int list[],int n){

int newList[n];
for(int i=0;i<n;i++){
	newList[i]=list[i];
}
for(int i=0;i<n;i++){
	list[i]=newList[n-1-i];
}

}

void main(){


fs=fopen("radin.txt","r");
ft=fopen("radout.txt","w");
int list[1000];
int k;
int num;
int n=0;

while(fscanf(fs,"%d",&num)==1){
	list[n]=num;
	n++;
	k=num;
}
n--;
int alist[k];
int dlist[n-k];

for(int i=0;i<k;i++){
	alist[i]=list[i];
}
for(int i=0;i<n-k;i++){
	dlist[i]=list[k+i];
}
radixSort(alist,k);
radixSort(dlist,n-k);
reverseList(dlist,n-k);
for(int i=0;i<k;i++){
	fprintf(ft,"%d ",alist[i]);
}
for(int i=0;i<n-k;i++){
	fprintf(ft,"%d ",dlist[i]);
}
fclose(fs);
fclose(ft);

}
