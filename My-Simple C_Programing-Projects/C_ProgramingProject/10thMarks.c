#include <stdio.h>
#include <stdlib.h>

int main()

{



// My Frist Program......!

// 10th Mark Results

// Head of Institution

// »———» Sunnam.Sriram Contacts +918688655324





//int age;
int Roll;


printf("\nEnter Your Roll No\n");
scanf("%d", &Roll);

//printf("\nYour Beering %d Roll No\n", Roll);



//printf("\nEnter Your Age!\n");
//scanf("%d", &age);


if(Roll >= 1000000000){
	printf("\nWELCOME TO WORLD\n");

	printf("\nYour Beering %d Roll No\n", Roll);

int year;

printf("\nEnter SSC Examination Year\n");
scanf("%d", &year);

printf("\nhas appeared and PASSED SSC Examination held in MARCH %d in\n", year);



int Telugu, Hindi, English, Maths, Science, Social, Avg;
//float a, b, c;

float c, a = 6;


printf("\nEnter Marks for Telugu \n");
scanf(" %d", &Telugu);
printf("\nEnter Marks for Hindi \n");
scanf(" %d", &Hindi);
printf("\nEnter Marks for English \n");
scanf(" %d", &English);
printf("\nEnter Marks for Maths \n");
scanf(" %d", &Maths);
printf("\nEnter Marks for Science \n");
scanf(" %d", &Science);
printf("\nEnter Marks for Social \n");
scanf(" %d", &Social);
Avg = (Telugu + Hindi + English + Maths + Science + Social) + 0;
printf("\nYour SSC TOTAL MARKS: %d \n", Avg);


c = Avg / a;

printf("\nPercent sign %.2f\n", c);

/*
printf("\nPlease Waiting\n");

printf("\nEnter Marks\n");
scanf(" %f", &a);
printf("\nPlease Enter 6\n");
scanf(" %f", &b);

c = a/b;

printf("\nPercent sign %.2f\n", c); */

if(c >= 90){
	printf("\nGrade: A \n");
}else if(c >= 80){
	printf("\nGrade: B \n");
}else if(c >= 70){
	printf("\nGrade: C \n");
}else if(c >= 60){
	printf("\nGrade: D \n");
}else if(c >= 50){
	printf("\nGrade: E \n");
}else{
	printf("\nYou Need to Hard Work Dud! \n");
}


if(Telugu >= 35){
	if(Hindi >= 15){
		if(English >= 35){
			if(Maths >= 35){
				if(Science >= 35){
					if(Social >= 35){
						printf("\nResult:ALL PASS \n");
					
					}else{
						printf("\nSocial: FAIL\n");
					}
				}else{
					printf("\nScience: FAIL\n");
				}
			}else{
				printf("\nMaths: FAIL\n");
			}
		}else{
           printf("\nEnglish: FAIL\n");
		}
	}else{
		printf("\nHindi: FAIL\n");
	}
}else{
	printf("\nTelugu: FAIL\n");
}











/*



float telugu, hindi, english, maths, science, social, avg;

int year;

printf("\nEnter SSC Examination Year\n");
scanf("%d", &year);

printf("\nYou are SSC Examination held in MARCH %d in\n", year);


printf("\nEnter Marks for Telugu \n");
scanf("%f", &telugu);
printf("\nEnter Marks for Hindi \n");
scanf("%f", &hindi);
printf("\nEnter Marks for English \n");
scanf("%f", &english);
printf("\nEnter Marks for Maths \n");
scanf("%f", &maths);
printf("\nEnter Marks for Science \n");
scanf("%f", &science);
printf("\nEnter Marks for Social\n");
scanf("%f", &social);

avg = (telugu + hindi + english + maths + science + social) / 6;
printf("\nYou are Results\n");
printf("\nPercent sign: %.2f \n", avg);


if(avg >= 90){
	printf("\nGrade: A \n");
}else if(avg >= 80){
    printf("\nGrade: B \n");
}else if(avg >= 70){
	printf("\nGrade: C \n");
}else if(avg >= 60){
	printf("\nGrade: D \n");
}else{
	printf("\nYou Hard Work Dud!\n");
}
/*

if((telugu >= 35) && (hindi >= 35) && (english >= 35) && (maths >= 35) && (science >= 35) && (social >= 35)){
	printf("\nResult: PASS \n");
}else{
	printf("\nResult: FAIL\n");
}  */

/*

if(telugu >= 35){
	if(hindi >= 15){
		if(english >= 35){
			if(maths >= 35){
				if(science >= 35){
					if(social >= 35){
						printf("\nResult: PASS \n");
					}else{
						printf("\nSocial Result: FAIL \n");
					}
				}else{
					printf("\nScience Result: FAIL \n");
				}
			}else{
				printf("\nMaths Result: FAIL \n");
			}
		}else{
			printf("\nEnglish Result: FAIL \n");
		}
	}else{
		printf("\nHindi Result: FAIL \n");
	}
}else{
	printf("\nTelugu Result: FAIL\n");
}

*/

}else{
	printf("\nYour Not Eligibul!\n");
    printf("\nPlease Enter Roll No!\n");
}

























}
