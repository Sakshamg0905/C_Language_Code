#include <stdio.h>

int main(){
    int a=43,b=90,c=234,d=54;
    if (a>b && a>c && a>d)
    {
      printf("the greatest of all is %d",a);
    }
    if (b>a && b>c && b>d)
    {
      printf("the greatest of all is %d",b);
    }
    if (c>a && c>b && c>d)
    {
      printf("the greatest of all is %d",c);
    }
    if (d>a && d>b && d>c)
    {
      printf("the greatest of all is %d",d);
    }
    
    return 0;
}