/*
Program Name: Simple Calculator
Developer and Date: Harley Verunque / 07-20-2022
Student No.: 2021-03542
UP Mail: hnverunque@up.edu.ph
*/
#include <stdio.h>
  double temp, cls, kln, fht;
  char option;

    void celsius() { //celsius to kelvin and fahrenheit
      printf("Enter celsius: \t");
      scanf("%lf", &temp);
        cls=temp+273.15; //celsius to kelvin formula
      printf("Kelvin: \t%lf", cls);
        fht=temp*1.8+32; //celsius to fahrenheit formula
      printf("\nFahrenheit: \t%lf", fht);
    }
    void kelvin() { //kelvin to fahrenheit and celsius
      printf("Enter kelvin: \t");
      scanf("%lf", &temp);
        cls=temp-273.15; //kelvin to celsius formula
      printf("Celsius: \t%f", cls);
        fht=cls*1.8+32; //kelvin to fahrenheit formula
      printf("\nFahrenheit: \t%lf", fht);
    }
    void fahrenheit() { //fahrenheit to celsius
      printf("Enter fahrenheit: \t");
      scanf("%lf", &temp);
        cls=(temp-32)/1.8; //fahrenheit to celsius formula
      printf("Celsius: \t\t%lf", cls);
        kln=cls+273.15; //fahrenheit
      printf("\nKelvin: \t\t%lf", kln);
    }
int main() {
    do {
      printf("************************************\n");
      printf("TEMPERATURE CONVERTER\n");
      printf("A. Celsius to Kelvin & Fahrenheit\n");
      printf("B. Kelvin to Celsius & Fahrenheit\n");
      printf("C. Fahrenheit to Celsius & Kelvin\n");
      printf("D. Exit\n");
      printf("Enter choice: \t");
      scanf("%s", &option);
        switch(option) {
          case 'A':
              celsius();
              break;
          case 'B':
              kelvin();
              break;
          case 'C':
              fahrenheit();
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
