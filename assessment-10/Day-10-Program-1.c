#include <stdio.h>

void print(char* str,int n){
  int count=0;
  for(int i=0;str[i];i++){
    if( ((str[i]>='A' && str[i]<='Z') ||
            (str[i]>='a' && str[i]<='z') )
            && i<n )
    {
        printf("%c",str[i]);
        count++;
    }
  }
  if(count){
    printf("\nThe new string lenght is: %d",count);
  }
  else{
    printf("-1");
  }
}

int main(void) {
  int n;
  scanf("%d",&n);
  char str[n+1];
  scanf("%s",str);
  print(str,n);
  return 0;
}