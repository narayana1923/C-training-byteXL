#include <stdio.h>

int findCount(int m,int n,int arr[][n],int p){
  int c=0,sum=0;
  for(int i=0;i<m;i++){
      for(int j=i+1;j<=m;j++){
          for(int k=0;k<n;k++){
              for(int l=k+1;l<=n;l++){
                  sum=0;
                for(int q=i;q<j;q++){
                    for(int r=k;r<l;r++){
                          sum+=arr[q][r];
                    }
                }
                if(sum%p==0) c++;
              }
          }
      }
  }
  return c;
}

int main(void) {
  int m,n,p,c=0;
  scanf("%d %d %d",&m,&n,&p);
  int arr[m][n];
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      scanf("%d",&arr[i][j]);
    }
  }
  c=findCount(m,n,arr,p);
  printf("%d",c);
  return 0;
}
