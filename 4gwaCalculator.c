/*
Program Name: Simple Calculator
Developer and Date: Harley Verunque / 07-19-2022
Student No.: 2021-03542
UP Mail: hnverunque@up.edu.ph
*/
#include <stdio.h>
int ap,tle,esp,math,mapeh,science,english,filipino;
double gwa;

void generalWA() {
  gwa=(ap+tle+esp+math+mapeh+science+english+filipino)/8;
  printf("\n");
  printf("GW Average: \t%lf", gwa);
  printf("\n");
    if (gwa<=74) {printf("Remarks: \tFailed\n");}
    if (gwa>=75 && gwa<=85) {printf("Remarks: \tSatisfactory\n");}
    if (gwa>=86 && gwa<=90) {printf("Remarks: \tOutstanding\n");}
    if (gwa>=91 && gwa<=95) {printf("Remarks: \tExcellent\n");}
    if (gwa>=96 && gwa<=100) {printf("Remarks: \tPerfect\n");}
}
int main() { //high school GWA solver
  printf("**************************\n");
  printf("GWA CALCULATOR");
  printf("\nAP: \t\t");
  scanf("%d", &ap);
  printf("TLE: \t\t");
  scanf("%d", &tle);
  printf("EsP: \t\t");
  scanf("%d", &esp);
  printf("Math: \t\t");
  scanf("%d", &math);
  printf("MAPEH: \t\t");
  scanf("%d", &mapeh);
  printf("Science: \t");
  scanf("%d", &science);
  printf("English: \t");
  scanf("%d", &english);
  printf("Filipino: \t");
  scanf("%d", &filipino);
  
  generalWA();
}
