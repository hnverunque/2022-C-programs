/*
Program Name: Simple Calculator
Developer and Date: Harley Verunque / 07-18-2022
Student No.: 2021-03542
UP Mail: hnverunque@up.edu.ph
*/
#include <stdio.h>
int time, distance, spd;

void speed() { //speed is equal to distance divided by time
  spd=distance/time; //formula of calculating speed
    printf("Speed: \t\t\t%dkm/hr", spd);
    printf("\n");
}
int main() {
  do {
    printf("*********************************\n");
    printf("SPEED CALCULATOR");
    printf("\nEnter distance [km]: \t");
    scanf("%d", &distance);
    printf("Enter time [hr]: \t");
    scanf("%d", &time);
    speed();
  } while (time!=0 && distance!=0); {
      printf("\t\t\tUNDEFINED\n");
  }
}
