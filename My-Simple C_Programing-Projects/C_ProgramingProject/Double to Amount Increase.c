#include <stdio.h>
#include <stdlib.h>

int main()

{

// SUNNAM SRIRAM PH- +918688655342

//double to amount increase

int a;
int day = 1;
float amount;
int day2;

printf("\nEnter Your 1st Day\n");
scanf(" %d", &day);

printf("\nEnter Your Amount\n");
scanf(" %f", &amount);

printf("\nIncrease the Amount\n");
scanf(" %d", &a);

printf("\nEnd To Day\n");
scanf(" %d", &day2);

while(day <= day2){
  printf("\n Day %d: The Amount is Rs/- %.2f\n", day, amount);
  amount = amount * a;
  day++; 
}















	return 0;
}
