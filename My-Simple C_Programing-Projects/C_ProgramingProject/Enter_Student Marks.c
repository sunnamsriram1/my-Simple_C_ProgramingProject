#include <stdio.h>
#include <stdlib.h>

int main()

{

int tmarks = 0;
float marksEntered = 0;
float totalSubejects = 0;
float avg = 0;

printf("\nEnter 0 to end \n");

do{
printf("\ntotalSubejects: %.0f \t Total marks: %d \t Averge: %.2f\n", totalSubejects,tmarks,avg);
printf("\nEnterMarls: ");
scanf(" %f", &marksEntered);
totalSubejects++;
tmarks += marksEntered;
avg = tmarks / totalSubejects;
}while(marksEntered != 0);














	return 0;
}
