#include <stdio.h>
#include <string.h>

typedef struct employee{
    char name[20];
    float salary;
}emp;

void read(emp e[],int n){
    for(int i=0;i<n;i++){
      scanf("%s\n%f",e[i].name,&e[i].salary);
    }
}

void sort(emp e[],int n){
    int max; 
    for(int i=0;i<n-1;i++){
      max = i;
      for(int j=i+1;j<n;j++){
          if(e[j].salary<e[max].salary) max = j;
      }
      emp temp = e[i];
      e[i] = e[max];
      e[max] = temp;
    }
}

int main(void) {
  int n;
  scanf("%d",&n);
  emp e[n];
  read(e,n);
  sort(e,n);
  for(int i=n-1;i>=0 && i>n-4;i--) printf("%s\n",e[i].name);
  return 0;
}