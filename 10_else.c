#include <stdio.h>

int main(){
    int a = 60;
    if(a>45){
      printf("you can drive and you are senior citizen");
    }
    else if(a>18){
    printf("you can drive\n");
    } 
    else{
     printf("you can not drive");
    }
    return 0;
}