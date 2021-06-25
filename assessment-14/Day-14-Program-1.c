#include <stdio.h>
#include <string.h>
#define LINESIZE 100000

int palindrome(char str[], int n)
{
  for (int i = 0; i < n / 2; i++)
  {
    if (str[i] != str[n - i - 1])
      return 0;
  }
  return 1;
}

void sort(char s[], int n)

{
  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
      if(s[j]>s[j+1]){
        char temp = s[j];
        s[j] = s[j+1];
        s[j+1] = temp;
      }
    }
  }
}

int main()
{
  int n, size;
  char arr[LINESIZE];
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%s", arr);
    size = strlen(arr);
    if (palindrome(arr, size))
      printf("-1\n");
    else
    {
      sort(arr, size);
      printf("%s\n", arr);
    }
  }
  return 0;
}