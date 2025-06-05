#include<stdio.h>
int main(){
    int input;

    printf("Enter a number:");

    scanf("%d", &input);

    int square = input * input;
    printf("square is  %d", square);
}