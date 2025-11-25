#include <stdio.h>

int main(){
    char grade;
    int marks;
    printf("Enter your marks\n");
    scanf("%d", &marks);
    if(marks<=100 && marks>=90){
        grade = 'a';
    }
    else if(marks<=90 && marks>=80){
        grade = 'b';
    }
    else if(marks<=80 && marks>=70){
        grade = 'c';
    }
    else if(marks<=70 && marks>=60){
        grade = 'd';
    }
    else if(marks<=60 && marks>=50){
        grade = 'e';
    }
    else
    {
        grade = 'f';
    }
    
    printf("Your grade is %c", grade);
    return 0;
}