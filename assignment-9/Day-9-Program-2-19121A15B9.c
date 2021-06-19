#include <stdio.h>

void columnMajor(int *arr,int N,int M);

int main(void) {
  int N,M;
  scanf("%d%d",&N,&M);
  int arr[N][M];
  for(int i=0;i<N;i++){
    for(int j=0;j<M;j++){
      scanf("%d",&arr[i][j]);
    }
  }
  columnMajor((int*)arr,N,M);
  return 0;
}

void columnMajor(int* arr,int N,int M){

    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
          if(j!=N-1) printf("%d ",*(arr+j*M+i));
          else printf("%d",*(arr+j*M+i));
        }
        printf("\n");
    }

}