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


void main(){


fs=fopen("sortin.txt","r");
ft=fopen("sortout.txt","w");
int m=0,n=0,b=0;
int num;
int nList[1000];
int mList[1000];
while(fscanf(fs,"%d",&num)==1){
	mList[m]=num;
	m++;
	char ch;
	ch=fgetc(fs);
	if(ch=='\n'){
		
		break;
	}
}
while(fscanf(fs,"%d",&num)==1){
	nList[n]=num;
	n++;
}
int newList[m];
int k=0;
int copyList[m];
for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		if(mList[j]==nList[i]){
			fprintf(ft,"%d ",nList[i]);

			//to delete
			for(int x=0;x<m;x++){
				if(mList[x]==nList[i]){
					int y=x;
					while(x<m-1){
						mList[x]=mList[x+1];
						x++;
					}
					m--;
				}
			}
		}
	}
}
radixSort(mList,m);

for(int i=0;i<m;i++){
	fprintf(ft,"%d ",mList[i]);
}




}
