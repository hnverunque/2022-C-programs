/*
Program Name: Simple Calculator
Developer and Date: Harley Verunque / 12-08-2021
Student No.: 2021-03542
UP Mail: hnverunque@up.edu.ph
*/
#include<stdio.h>
#include<ctype.h>
#include <stdlib.h>

long int a, b;
char option;

void addition() {
    printf("\n*****************");
    printf("\nADDITION\n");
    printf("Enter a:\t");
    scanf("%ld", &a);
    printf("Enter b:\t");
    scanf("%ld", &b);
    printf("Sum: \t%ld", a+b);
}
void subtraction() {
    printf("\n*****************");
    printf("\nSUBTRACTION\n");
    printf("Enter a:\t");
    scanf("%ld", &a);
    printf("Enter b:\t");
    scanf("%ld", &b);
    printf("Difference: \t\t%ld", a-b);
}
void multiplication() {
    printf("\n*****************");
    printf("\nMULTIPLICATION\n");
    printf("Enter a:\t");
    scanf("%ld", &a);
    printf("Enter b:\t");
    scanf("%ld", &b);
    printf("Product: \t%ld", a*b);
}
void division() {
    printf("\n*****************");
    printf("\nDIVISION\n");
    printf("Enter a:\t");
    scanf("%ld", &a);
    printf("Enter b:\t");
    scanf("%ld", &b);
    printf("Quotient: \t%ld", a/b);
}
void modulus() {
    printf("\n*****************");
    printf("\nMODULUS\n");
    printf("Enter a:\t");
    scanf("%ld", &a);
    printf("Enter b:\t");
    scanf("%ld", &b);

    printf("Remainder: \t%ld", a%b);
}
int main() {
  do {
    printf("*****************\n");
    printf("CALCULATOR\n");
    printf("A. Addition\n");
    printf("B. Subtraction\n");
    printf("C. Multiplication\n");
    printf("D. Division\n");
    printf("E. Modulus\n");
    printf("F. Exit\n");
    printf("Enter your choice: \t");
    scanf("%c", &option);
      switch(option) {
        case 'A':
            addition();
            break;
        case 'B':
            subtraction();
            break;
        case 'C':
            multiplication();
            break;
        case 'D':
            division();
            break;
        case 'E':
            modulus();
            break;
        case 'F':
            exit(5);
        default:
            printf("You entered a wrong choice!\n");
        }
      printf("\n\n");
  } while (option!=1 && option!=getchar());
  getchar();
}
