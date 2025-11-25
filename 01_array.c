#include <stdio.h>

int main(){
    int marks[90];
    marks [0]=78;
    marks [1]=98;
    // it goes to the 89th element bcoz 0-89 has complete the 90 element
    printf("marks 0 and marks 1 is %d %d",marks[0],marks[1]);
    return 0;
}