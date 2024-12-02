#include<stdio.h>
 
 int main() {
 	int a[5]={1,2,3,4,5};
 	for(int i=0;i < 5;i++){
 	 for(int j =0;j <5-i-1;j++ ){
 	 	if(a[j] >a[j+1]){
 	 		int temp;
 	 		temp=a[j+1];
 	 		a[j+1]=a[j];
 	 		a[j]=temp;
		  }
	  }
	 }
	   for(int i=0;i<5;i++){
	   	 printf("%d",a[i]);
	   }
 }
