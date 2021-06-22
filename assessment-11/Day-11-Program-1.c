#include <stdio.h>

int main(void) {
  char arr[101];
  int k;
  scanf("%s\n%d",arr,&k);
  for(int i=0;arr[i];i++){
    for(int j=0;j<k;j++)
        printf("%c",arr[i]);
  }
  return 0;
}