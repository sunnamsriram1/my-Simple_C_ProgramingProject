#include <stdio.h>
#include <stdlib.h>

int main()

{

// BORD OF INTERMEDIATE EDUCATION 1ST AND 2ND MARKS AND PERCENT SIGN

// Sunnam.Sriram PH: +918688655324

// PLZ SOPPT ME 
// TQ





/*

int telugu, hindi, english, maths, science, social, avg;

printf("\nEnter Marks in Telugu\n");
scanf("%d", &telugu);
printf("\nEnter Marks in Hindi\n");
scanf("%d", &hindi);
printf("\nEnter Marks in English\n");
scanf("%d", &english);
printf("\nEnter Marks in Maths\n");
scanf("%d", &maths);
printf("\nEnter Marks in Science\n");
scanf("%d", &science);
printf("\nEnter Marks in Social\n");
scanf("%d", &social);

avg = (telugu + hindi + english + maths + science + social) + 0;

printf("\nThe  TOTAL Marks: %d\n", avg);


int a, b, choice;

printf("\n4.Division\n");
printf("\nEnter PRESS 4\n");
scanf(" %d", &choice);

printf("\nEnter Marks: \n");
scanf(" %d", &a);
printf("\nEnter Subjet: \n");
scanf(" %d", &b);
switch (choice)
{
	case 4:
	printf("\nResult = %d / %d = %d\n", a, b, a/b);
	break;
}   */

int Roll;

printf("\nEnter Your Intermediate Roll No\n");
scanf("%d", &Roll);

if(Roll >= 1000000000){
	printf("\nWelcome to World\n");

    printf("\nYour Roll No %d\n", Roll);


int english, telugu, economics, commerce, civics, avg;

float  b, a = 10;

int c;




printf("\nEnter 1st Year Marks\n");

printf("\nEnter Marks for English\n");
scanf(" %d", &english);
printf("\nEnter Marks for Telugu\n");
scanf(" %d", &telugu);
printf("\nEnter Marks for Economics\n");
scanf(" %d", &economics);
printf("\nEnter Marks for Commerce\n");
scanf(" %d", &commerce);
printf("\nEnter Marks for Civics\n");
scanf(" %d", &civics);

avg = (english + telugu + economics + commerce + civics) + 0;

printf("\n1 yer Total Marks: %d\n", avg);

//2nd Year


int English, Telugu, Economics, Commerce, Civics, Avg;


printf("\nEnter 2nd Year Marks\n");

printf("\nEnter Marks for English\n");
scanf(" %d", &English);
printf("\nEnter Marks for Telugu\n");
scanf(" %d", &Telugu);
printf("\nEnter Marks for Economics\n");
scanf(" %d", &Economics);
printf("\nEnter Marks for Commerce\n");
scanf(" %d", &Commerce);
printf("\nEnter Marks for Civics\n");
scanf(" %d", &Civics);

Avg = (English + Telugu + Economics + Commerce + Civics) + 0;

printf("\n2nd year Total Marks: %d\n", Avg);

c = avg + Avg;


printf("\n1st + 2nd Year All Total Marks: %d\n", c);

b = c / a;

printf("\nPercent sign: %.2f\n", b);

if(b >= 75){
	printf("\nGrade: A \n");
}else if(b >= 60){
	printf("\nGrade: B \n");
}else if(b >= 50){
	printf("\nGrade: C \n");
}else if(b >= 35){
	printf("\nGrade: D \n");
}else{
	printf("\nYou Need to Hard Work Dud!\n");
}


if(english >= 35){
	if(telugu >= 35){
		if(economics >= 35){
			if(commerce >= 35){
				if(civics >= 35){
					printf("\nResult: ALL PASS\n");
				}else{
					printf("\nCivics : FAIL\n");
				}
			}else{
				printf("\nCommerce : FAIL\n");
			}
		}else{
			printf("\nEconomics : FAIL\n");
		}
	}else{
		printf("\nTelugu : FAIL\n");
	}
}else{
	printf("\nEnglish : FAIL\n");
}









}else{
	printf("\nYour Not Eligibul!\n");
	printf("\nPlease Enter Roll No\n");
}





	return 0;
}
