#include <stdio.h>
int z;
void series(int n,int k){
	printf("%d ",n);
    if(z==n && k<0){
        return;
    }
    else if(n<=0 && k>n){
      series(n+k,-k);
    }
    else{
      series(n-k,k);
    }
}
int main(void) {
  int n,k;
  scanf("%d%d",&n,&k);
  z=n;
	series(n,k);
  return 0;
}