#include<stdio.h>
int sum(int *p){
	if(*p==0) return 0;
  else{
    int s = *p%10;
    *p=*p/10;
    return s + sum(p);
  } 
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",sum(&n));
}
