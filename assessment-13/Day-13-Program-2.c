#include<stdio.h>

void printCharacter(char name[]){
  FILE* fp = fopen(name,"r");
  if(fp==NULL){
    printf("-1");
  }
  else{
    fseek(fp,0,SEEK_END);
    printf("%ld",ftell(fp));
  }
  fclose(fp);
}

int main(){
  char name[50];
  scanf("%s",name);
  printCharacter(name);
  return 0;
}