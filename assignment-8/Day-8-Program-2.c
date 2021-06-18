#include <stdio.h>

int palindrome(int arr[],int n){
  for(int i=0;i<n/2;i++){
    if(arr[i]!=arr[n-i-1]) return 0;
  }
  return 1;
}

int main(void) {
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++) scanf("%d",arr+i);
  if(palindrome(arr,n)){
    printf("True");
  }
  else printf("False");
  return 0;
}