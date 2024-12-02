#include <stdio.h>

int main() {
    int arr[] = {2, 1, 3, 5, 7};  
    int n = sizeof(arr) / sizeof(arr[0]); 
    int up, j;
     for (int i = 1; i < n; i++) {
       up = arr[i];  
        j = i - 1;
        while (j >= 0 && arr[j] > up) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = up;  
    }
     printf("Thu tu tang dan cua cac phan tu la : \n");
      for (int i = 0; i < n; i++) {
         printf("%d ", arr[i]);
    }
    return 0;
}
