#include <stdio.h>

int prime(int a,int n){
    if(n==1) return 1;
    else if(a%n==0) return 0;
    else return prime(a, n-1);
}

int main(void) {
  int n,sum=0;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d",arr+i);
    if(i%2==0){
        if(arr[i]>1 && prime(arr[i],arr[i]-1)){
            sum+= arr[i];
            printf(" %d",arr[i]);
        }
    }
  }
  if(prime(sum, sum/2) && arr[n-1]!=4){
    printf("\nTrue");
  }else{
    printf("\nFalse");
  }
  return 0;
}