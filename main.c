#include <stdio.h>

int main(void) {
  int n,t,k;
  scanf("%d %d",&n,&t);
  int temp = n;
  for(int i=0;i<t;i++){
      scanf("%d",&k);
      if(k<n){
        if(k%2==1) temp-=k;
        else temp/=k;
      }
      else if(k>n){
        if(k%2==1) temp*=k;
        else temp+=k;
      }
      else{
        temp+=2*n;
      }
  }
  printf("%d",temp);
  return 0;
}