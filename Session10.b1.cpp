#include<stdio.h>

 int main () {
  int arr[5]={1,2,3,4,5};
  int element;
   printf("Moi ban nhap mot phan tu : ");
   scanf("%d",&element);
    for(int i= 0;i <5;i++) {
   	  if(arr[i]== element) {
   	  printf("\nVi tri cua phan tu %d ban muon chon la %d \n",element,i+1);
   	  break;
      }
    }
}
