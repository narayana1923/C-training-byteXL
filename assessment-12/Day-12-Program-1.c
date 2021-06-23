#include <stdio.h>
typedef struct student{
    char name[20];
    int id;
    float marks[5];
    float avg;
}student;

void read(student s[],int n,int* low){
    int i,j;
    *low=0;
    for(i=0;i<n;i++){
        scanf("%s\n%d",s[i].name,&s[i].id);
        s[i].avg=0;
        for(j=0;j<5;j++){
          scanf("%f",&s[i].marks[j]);
          s[i].avg+=s[i].marks[j];
        }
        s[i].avg/=5;
        if(s[i].avg<s[*low].avg) *low =i;
    }
}

int main(void) {
  int n,low;
  scanf("%d",&n);
  student s[n];
  read(s,n,&low);
  printf("%d",s[low].id);
  return 0;
}