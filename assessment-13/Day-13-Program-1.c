#include<stdio.h>
 
void printCharacters(FILE* fp, int n){
  fseek(fp,0,SEEK_END);
  int len = ftell(fp);
  if(n<=0 || n>len){
      printf("Invalid Input");
  }
  else{
    fseek(fp,-n,SEEK_END);
    while(!feof(fp)){
        printf("%c",fgetc(fp));
    }
  }
}

int main() {
  int n;
  char filename[100];
  scanf("%s\n%d",filename,&n);
  FILE* fp = fopen(filename,"r");
  if(fp==NULL) printf("File doesn't exist");
  else printCharacters(fp,n);
  fclose(fp);
  return 0;
}