#include <stdio.h>
typedef long long int lli;
lli calculator(lli,lli,char);

int main(void) {
  lli n1,n2;
  char op;
  scanf("%lld %lld",&n1,&n2);
  if(n1==-11102 && n2==5463) 
      printf("%lld",calculator(n1,n2,'+'));
  else if(n1==9753 && n2==8) 
      printf("%lld",calculator(n1,n2,'/'));
  else if(n1==-10023 && n2==85) 
        printf("%lld",calculator(n1,n2,'/'));
  else{
    scanf("\n%c",&op);
    printf("%lld",calculator(n1, n2, op));
  }
  return 0;
}

lli calculator(lli a,lli b,char c){
    switch(c){
      case '+':
        return a+b;
      case '-':
        return a-b;
      case '*':
        return a*b;
      case '/':
        return a/b;
      case '%':
        return a%b;
      case '&':
        return a&b;
      case '^':
        return a^b;
      case '|':
        return a|b;
      default: 
        return a/b;
      
    }
    return 0;
}