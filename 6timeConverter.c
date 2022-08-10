/*
Program Name: Time Converter
Developer and Date: Harley Verunque / 07-21-2022
Student No.: 2021-03542
UP Mail: hnverunque@up.edu.ph
*/
#include <stdio.h>
long int hr, min, sec;
char option;

void hour() {
  printf("Enter number of hours: ");
  scanf("%ld", &hr);
  min=hr*60;
  printf("There are %ld minutes in %ld hours.", min, hr);
  sec=hr*3600;
  printf("\nThere are %ld seconds in %ld hours.", sec, hr);
}
void minute() {
  printf("Enter number of minutes: ");
  scanf("%ld", &min);
  sec=min*60;
  printf("There are %ld seconds in %ld minutes.", sec, min);
  hr=min/60;
  printf("\nThere are %ld hours in %ld minutes.", hr, min);
}
void seconds() {
  printf("Enter number of seconds: ");
  scanf("%ld", &sec);
  hr=sec/120;
  printf("There are %ld hours in %ld seconds.", hr, sec);
  min=sec/60;
  printf("\nThere are %ld minutes in %ld seconds.", min, sec);
}
int main() {
  do {
    printf("********************************\n");
    printf("TIME CONVERTER\n");
    printf("A. Hours to Minutes & Seconds\n");
    printf("B. Minutes to Seconds & Hours\n");
    printf("C. Seconds to Hours & Minutes\n");
    printf("D. Exit\n");
    printf("Enter choice: \t");
    scanf("%s", &option);
      switch(option) {
        case 'A':
            hour();
            break;
        case 'B':
            minute();
            break;
        case 'C':
            seconds();
            break;
        case 'D':
            exit(1);
        default:
            printf("You entered an invalid choice!\n");
        }
      printf("\n\n");
    } while (option!=1 && option!=getchar());
    getchar();
}
