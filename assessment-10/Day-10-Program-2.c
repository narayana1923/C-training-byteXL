#include <stdio.h>

void print(char* str,int k){
    for(int i=0;i<str[i];i++){
      char ch = str[i] + k;
      if(ch>='a' && ch<='z'){
        printf("%c",ch);
      }
      else{
        ch = str[i]+k - 122 +96;
        printf("%c",ch);
      }
    }
}

int main(void) {
  char str[101];
  int k;
  scanf("%s %d",str,&k);
  print(str,k);
  return 0;
}