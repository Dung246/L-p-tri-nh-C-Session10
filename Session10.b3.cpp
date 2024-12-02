#include<stdio.h>
 
 int main() {
   int a[5]={1,3,2,5,4};
   for(int i=0;i < 5;i++) {
   	int minIndex=i;
    for(int j=i+1;i < 5;j ++) {
	  if(a[i] < a[minIndex]){
	    minIndex=j;
}
}
	   if(minIndex != i) {
	 	 int temp;
		  temp=a[minIndex];
		  a[minIndex]=a[i];
		  a[i]=temp;	  
   }
  }
	 for(int i=0;i <5;i++){
	 	printf("%d",a[i]);
	 } 
   }
 
