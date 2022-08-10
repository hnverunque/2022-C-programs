/*
Program Name: Power Calculator
Developer and Date: Harley Verunque / 07-16-2022
Student No.: 2021-03542
UP Mail: hnverunque@up.edu.ph
*/
#include <stdio.h>
long long int n, n2, n3, n4, n5, n6, n7, n8, n9;
  //using long long int, the program can compute up to larger bits

void power(){ //this is the power function
  printf("n: \t\t%lld", n);
  printf("\nSquared: \t%lld", n2=n*n);
  printf("\nCubed: \t\t%lld", n3=n2*n);
  printf("\nFourthPower: \t%lld", n4=n3*n);
  printf("\nFifthPower: \t%lld", n5=n4*n);
  printf("\nSixthPower: \t%lld", n6=n5*n);
  printf("\nSeventhPower: \t%lld", n7=n6*n);
  printf("\nEightPower: \t%lld", n8=n7*n);
  printf("\nNinthPower: \t%lld", n9=n8*n);
  printf("\n***********************************\n");
    //NinthPower can compute up to 128, but it will be on negative form
    //unfortunately, GCC cannot process TenthPower
}
int main() {
  do {
    printf("***********************************\n");
    printf("POWER CALCULATOR");
    printf("\nEnter number: \t");
    scanf("%lld", &n);
    power();
  } while(n!=0);
}
