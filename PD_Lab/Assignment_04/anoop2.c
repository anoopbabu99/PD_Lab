#include<stdio.h>
#include<stdlib.h>
#include<math.h>
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
	for(int i=0;i<n;i++){
			fprintf(ft,"%d ",list[i]);
		}
		fprintf(ft,"\n");
	}


}



void main(){


fs=fopen("radin.txt","r");
ft=fopen("radout.txt","w");
int n=0;
int num;
int list[1000];
while(fscanf(fs,"%d",&num)==1){
	list[n]=num;
	n++;
}
radixSort(list,n);
fclose(ft);
fclose(fs);
}
