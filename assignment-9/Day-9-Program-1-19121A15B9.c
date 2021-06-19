#include <stdio.h>

void central_point(int*,int);

int main(void) {
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++) scanf("%d",arr+i);
  central_point(arr,n);
  return 0;
}
int sum(int* arr,int min,int max){
    int total=0;
    for(int i=min;i<max;i++){
        total+=arr[i];
    }
    return total;
}
void central_point(int* arr, int n){
    for(int i=0;i<n;i++){
      if(i==0){
          if(sum(arr,1,n)==0){
            printf("%d",i);
          }
      }
      else if(i==n-1){
        if(arr[i]==sum(arr,0,n)){
            printf("%d",i);
        }
      }
      else{
        if(sum(arr,0,i)==sum(arr,i+1,n)){
            printf("%d",i);
        }
      }
    }
    printf("%d",-1);
}