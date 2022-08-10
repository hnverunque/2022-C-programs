/*
Program Name: Rice Moisture Content Calculator
Developer and Date: Harley Verunque / 07-17-2022
Student No.: 2021-03542
UP Mail: hnverunque@up.edu.ph
*/
#include <stdio.h>

int fresh, dry;
double mC;

void moistureContent() { //this is the mC function
  printf("Moisture Content: \t%lf percent", mC);
  printf("\n****************\n");
  printf("\n");
}
int main() { //program calculate moisture content of the rice
  printf("****************\n");
  printf("MOISTURE CONTENT SOLVER\n");
  printf("Enter fresh[kg]: \t"); //fresh rice kilogram per sack
  scanf("%d", &fresh);
  printf("Enter dry[kg]: \t\t"); //dry kilogram per sack
  scanf("%d", &dry);

  mC=(fresh-dry)*100/dry;
  moistureContent();
}
