#include <stdio.h>

void sort(char arr[],int n){
    int min=0;
    char temp;
    for(int i=0;i<n-1;i++){
      for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
          temp = arr[j];
          arr[j] = arr[j+1];
          arr[j+1] = temp;
        }
      }
    }
}

int main(void) {
  char arr[100];
  int n;
  scanf("%s%n",arr,&n);
  int diff=1;
  sort(arr,n);
  for(int i=0;arr[i];){
      if(arr[i]==arr[i-diff]){
        diff++;
      }
      else{
        diff=1;
        printf("%c",arr[i]);
      }
      i++;
  }
  return 0;
}