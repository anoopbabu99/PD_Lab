#include<stdio.h>
#include<stdlib.h>

void main(){

int m,n;
FILE *fs,*ft;
fs=fopen("8_1.txt","r");
ft=fopen("8_2.txt","w");
fscanf(fs,"%d",&m);
fscanf(fs,"%d",&n);
int mList[m],nList[n];

for(int i=0;i<m;i++){
	fscanf(fs,"%d",&mList[i]);
}
for(int i=0;i<n;i++){
	fscanf(fs,"%d",&nList[i]);
}

int a=0,b=0;
int newList[m+n];
for(int i=0;i<m+n;i++){
	if(mList[a]<=nList[b]){
		newList[i]=mList[a];
		a++;
		if(a>=m){
			mList[a]=100000000;
		}
	}
	else{
		newList[i]=nList[b];
		b++;
		if(b>=n){
			nList[b]=100000000;
		}
	}
}
for(int i=0;i<m+n;i++){
	fprintf(ft,"%d ",newList[i]);
}

fclose(fs);
fclose(ft);

}
