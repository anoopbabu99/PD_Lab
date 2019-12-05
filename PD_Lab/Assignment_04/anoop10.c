#include<stdio.h>
#include<stdlib.h>

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
void Bubble_sort(int arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)         
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              swap(&arr[j], &arr[j+1]); 
} 

int Sorted_asc(int list[],int n){

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

int Sorted_desc(int list[],int n){

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

void main(){

FILE *fs;
fs=fopen("10.txt","r");
int n;
fscanf(fs,"%d",&n);
int list[n];
for(int i=0;i<n;i++){
	fscanf(fs,"%d",&list[i]);
}
int asc,desc;
asc=Sorted_asc(list,n);
desc=Sorted_desc(list,n);
if(asc==1&&desc==1){
	printf("All elements of the array are equal");
}
else if(asc==1){
	printf("The array is sorted in ascending order");
}
else if(desc==1){
	printf("The array is sorted in descending order");
}
else{
	printf("The array is not sorted.\nThe sorted array is: ");
	Bubble_sort(list,n);
	for(int i=0;i<n;i++){
		printf("%d ",list[i]);
	}
}


}
