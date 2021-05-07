#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>
void InrToElse (void);
void ElseToInr (void);
void Calculator (void);
void DecimalToBinary (void);
void BinaryToDecimal (void);
void MassConverter (void);
void TempConverter (void);
void
HomeScreen ()
{
 printf ("Welcome! What you want to do ? : \n ");
 printf ("Enter 1 for Calculator:\n ");
  printf ("Enter 2 for Currency conversion:\n ");
 printf ("Enter 3 for Temp conversion:\n ");
 printf ("Enter 4 for Mass conversion:\n ");
 printf ("Enter 5 to convert Decimal to binary:\n ");
 printf ("Enter 6 to convert binary to decimal:\n ");
 printf("Enter 7 to access temperature converter:\n ");
 printf ("Enter any other number to quit the program: \n");
}
void
DecimalToBinary ()
{
 int n;
 printf ("Enter decimal number to convert to binary :");
 scanf ("%d", &n);
 long long bin = 0;
 int rem, i = 1, step = 1;
 while (n != 0)
 {
 rem = n % 2;
 n /= 2;
 bin += rem * i;
 i *= 10;
 } printf ("\n binary form is : %lld", bin);
}
void
BinaryToDecimal ()
{
 long long binary;
 long long original;
 int sum, remender;
 printf ("enter a binary digits : ");
 scanf ("%lld", &binary);
 original = binary;
 for (int i = 0; binary != 0; i++)
 {
 remender = binary % 10;
 sum = sum + remender * pow (2, i);
 binary = binary / 10;
 }
 binary = original;
 printf ("decimal of binary %lld is %d \n", binary, sum);
}
void
InrToElse ()
{
 printf ("Enter a required number :\n\nUS Dollar (1)\nUAE Dirham (2)\nSaudi riyal (3)\nPound sterling (4)\nCanadian Dollar (5)\n\n");
 float b, c;
 scanf ("%f", &b);
 if (b == 1)
 {
 printf ("Enter amount in rupees(inr) : ");
 scanf ("%f", &c);
 printf ("Value in US Dollar is %.3f", 0.014 * c);
 }
 else if (b == 2)
 {
 printf ("Enter amount in rupees(inr) : ");
 scanf ("%f", &c);
 printf ("Value in UAE Dirham is %.3f", 0.05 * c);
 }
 else if (b == 3)
 {
 printf ("Enter amount in rupees(inr) : ");
 scanf ("%f", &c);
 printf ("Value in Saudi riyal is %.3f", 0.051 * c);
 }
 else if (b == 4)
 {
 printf ("Enter amount in rupees(inr) : ");
 scanf ("%f", &c);
 printf ("Value in Pound sterling is %.3f", 0.0098 * c);
 } else if (b == 5)
 {
 printf ("Enter amount in rupees(inr) : ");
 scanf ("%f", &c);
 printf ("Value in Canadian Dollar is %.3f", 0.01724 * c);
 }
 else
 {
 printf ("Invalid");
 }
}
void
ElseToInr ()
{
 printf
 ("Enter a required number :\n\nUS Dollar (1)\nUAE Dirham (2)\nSaudi riyal 
(3)\nPound sterling (4)\nCanadian Dollar (5)\n\n");
 float b, c;
 scanf ("%f", &b);
 if (b == 1)
 {
 printf ("Enter amount in corresponding currency : ");
 scanf ("%f", &c);
 printf ("Value in indian rupee(inr) is %.3f", 73.6 * c);
 } else if (b == 2)
 {
 printf ("Enter amount in corresponding currency : ");
 scanf ("%f", &c);
 printf ("Value in indian rupee(inr) is %.3f", 20.04 * c);
 }
 else if (b == 3)
 {
 printf ("Enter amount in corresponding currency : ");
 scanf ("%f", &c);
 printf ("Value in indian rupee(inr) is %.3f", 19.62 * c);
 }
 else if (b == 4)
 {
 printf ("Enter amount in corresponding currency : ");
 scanf ("%f", &c);
 printf ("Value in indian rupee(inr) is %.3f", 102.5 * c);
 }
 else if (b == 5)
 {
 printf ("Enter amount in corresponding currency : ");
 scanf ("%f", &c);
 printf ("Value in indian rupee(inr) is %.3f", 57.78 * c);
 }
 else
 {
 printf ("Invalid"); }
}
void Calculator ()
{
 printf ("Welcome! What you want to do ? : \n");
 printf ("\nEnter 1 for addition:\n ");
 printf ("Enter 2 for subtraction:\n ");
 printf ("Enter 3 for multiplication:\n ");
 printf ("Enter 4 for division:\n ");
 printf
 ("Enter 5 to calculate square of a number but give number as first number:\n");
 printf
 ("Enter 6 to calculate cube of a number but give number as first number:\n ");
 printf
 ("Enter 7 to find square root of a number but give number as first number :\n ");
 printf
 ("Enter 8 to find the power of the given number but give number as first number and it's power as second number:\n ");
 printf
 ("Enter 9 to find exponential but give exponential vaue as first number and it's power as second number:\n ");
  printf ("Enter 10 to calculates natural logarithm :\n");
 printf ("Enter 11 to calculates base 10 logarithm :\n");
 printf ("Enter 12 to calculate sine value of a number :\n ");
 printf ("Enter 13 to calculate cosine value of a number :\n ");
 printf ("Enter 14 to calculate tangent value of a number :\n ");
 int option;
 scanf ("%d", &option);
 double a, b, result;
 switch (option)
 {
 case 1:
 printf ("Enter first number:\n");
 scanf ("%lf", &a);
 printf ("Enter second number:\n");
 scanf ("%lf", &b);
 result = a + b;
 printf ("Sum of two numbers is : %.8lf\n", result); break;
 case 2:
 printf ("Enter first number:\n");
 scanf ("%lf", &a);
 printf ("Enter second number:\n");
 scanf ("%lf", &b);
 result = a - b;
 printf ("Difference of two numbers is : %.8lf\n", result);
 break;
 case 3:
 printf ("Enter first number:\n");
 scanf ("%lf", &a);
 printf ("Enter second number:\n");
 scanf ("%lf", &b);
 result = a * b;
 printf ("Multiplication of two numbers is : %.8lf\n", result);
 break; case 4:
 printf ("Enter first number:\n");
 scanf ("%lf", &a);
 printf ("Enter second number:\n");
 scanf ("%lf", &b);
 result = a / b;
 printf ("Division of two numbers : %.8lf\n", result);
 break;
 case 5:
 printf ("Enter number:\n");
 scanf ("%lf", &a);
 result = a * a;
 printf ("Square of your number is : %.8lf\n", result);
 break;
 case 6:
 printf ("Enter number:\n");
 scanf ("%lf", &a); result = a * a * a;
 printf ("Cube of your number is : %.8lf\n", result);
 break;
 case 7:
 printf ("Enter number:\n");
 scanf ("%lf", &a);
 result = sqrt (a);
 printf ("Square root of your number is : %.8lf\n", result);
 break;
 case 8:
 printf ("Enter first number:\n");
 scanf ("%lf", &a);
 printf ("Enter second number:\n");
 scanf ("%lf", &b);
 result = pow (a, b);
 printf ("The power of your number is : %.8lf\n", result); break;
 case 9:
 printf ("Enter number:\n");
 scanf ("%lf", &a);
 result = exp (a);
 printf ("The exponential of number is : %.8lf\n", result);
 break;
 case 10:
 printf ("Enter number:\n");
 scanf ("%lf", &a);
 result = log (a);
 printf ("The log of your number is : %.8lf\n", result);
 break;
 case 11:
 printf ("Enter number:\n");
 scanf ("%lf", &a);
 result = log10 (a); printf ("The log of your number with base 10 is : %.8lf\n", result);
 break;
 case 12:
 printf ("Enter first number:\n");
 scanf ("%lf", &a);
 result = sin (a);
 printf ("The value of sine of your number is : %.8lf\n", result);
 break;
 case 13:
 printf ("Enter number:\n");
 scanf ("%lf", &a);
 result = cos (a);
 printf ("The value of cosine of your number is : %.8lf\n", result);
 break;
 case 14:
 printf ("Enter number:\n");
 scanf ("%lf", &a);
 result = tan (a); printf ("The value of tangent of your number is : %.8lf\n", result);
 break;
 default:
 printf ("no option available\n");
 printf ("Thank you!");
 }
}
void
MassConverter ()
{
 int choice;
 float mass, x;
 printf ("\n1. press 1 for convert milligram to gram");
 printf ("\n2. press 2 for convert gram to milligram");
 printf ("\n3. press 3 for convert milligram to pound");
 printf ("\n4. press 4 for convert pound to milligram");
 printf ("\n5. press 5 for convert gram to pound");
 printf ("\n6. press 6 for convert pound to gram");
 printf ("\n7. press 7 for convert gram to killogram");
 printf ("\n8. press 8 for convert killogram to gram");
 printf ("\n9. press 9 for convert gram to quintal");
 printf ("\n10.press 10 for convert quintal to gram");
 printf ("\n11.press 11 for convert pound to killogram");
 printf ("\n12.press 12 for convert killogram to pound");
 printf ("\n13.press 13 for convert pound to quintal");
 printf ("\n14.press 14 for convert quintal to pound");
 printf ("\n15.press 15 for convert killogrm to quintal");
 printf ("\n16.press 16 for convert quintal to killogram");
 printf ("\n17.press 17 for convert killogram to tonne");
 printf ("\n18.press 18 for convert tonne to killogram");
 printf ("\n19.press 19 for convert quintal to tonne");
 printf ("\n20.press 20 for convert tonne to quintal");
 printf ("\nenter your choice");
 scanf ("%d", &choice);
 switch (choice)
 {
 case 1:
 printf ("enter your milligram value\n");
 scanf ("%f", &mass);
 x = (0.001) * mass;
 printf ("%.4f milligram is equal to %.4f gram\n", mass, x);
 break; case 2:
 printf ("enter your gram value\n");
 scanf ("%f", &mass);
 x = (1000) * mass;
 printf ("%.4f gram is equal to %.4f milligram\n", mass, x);
 break;
 case 3:
 printf ("enter your milligram value\n");
 scanf ("%f", &mass);
 x = (2.20462e-6) * mass;
 printf ("%.4f milligram is equal to %.4f pound\n", mass, x);
 break;
 case 4:
 printf ("enter your pound value\n");
 scanf ("%f", &mass);
 x = (453592.37) * mass;
 printf ("%.4f pound is equal to %.4f millligram\n", mass, x);
 break;
 case 5:
 printf ("enter your gram value\n");
 scanf ("%f", &mass);
 x = (0.00220462) * mass;
 printf ("%.4f gram is equal to %.4f pound\n", mass, x);
 break; case 6:
 printf ("enter your pound value\n");
 scanf ("%f", &mass);
 x = (453.592) * mass;
 printf ("%.4fpound is equal to %.4f gram\n", mass, x);
 break;
 case 7:
 printf ("enter your gram value\n");
 scanf ("%f", &mass);
 x = (0.001) * mass;
 printf ("%.4f gram is equal to %.4f killogram\n", mass, x);
 break;
 case 8:
 printf ("enter your killogram value\n");
 scanf ("%f", &mass);
 x = (1000) * mass;
 printf ("%.4f killogram is equal to %.4f gram\n", mass, x);
 break;
 case 9:
 printf ("enter your gram value\n");
 scanf ("%f", &mass);
 x = (0.00001) * mass;
 printf ("%.4f gram is equal to %.4f quintal\n", mass, x);
 break;
 case 10: printf ("enter your quintal value\n");
 scanf ("%f", &mass);
 x = (100000) * mass;
 printf ("%.4f quintal is equal to %.4f gram\n", mass, x);
 break;
 case 11:
 printf ("enter your pound value\n");
 scanf ("%f", &mass);
 x = (0.454) * mass;
 printf ("%.4f pound is equal to %.4f killogram\n", mass, x);
 break;
 case 12:
 printf ("enter your killogram value\n");
 scanf ("%f", &mass);
 x = (2.205) * mass;
 printf ("%.4f killogram is equal to %.4f pound\n", mass, x);
 break;
 case 13:
 printf ("enter your pound value\n");
 scanf ("%f", &mass);
 x = (0.00453592) * mass;
 printf ("%.4f pound is equal to %.4f quintal\n", mass, x);
 break;
 case 14:
 printf ("enter your quintal value");
 scanf ("%f", &mass);
 x = (220.462) * mass; printf ("%.4f quintal is equal to %.4f pound\n", mass, x);
 break;
 case 15:
 printf ("enter your killogram value\n");
 scanf ("%f", &mass);
 x = (0.01) * mass;
 printf ("%.4f killogram is equal to %.4f quintal\n", mass, x);
 break;
 case 16:
 printf ("enter your quintal value");
 scanf ("%f", &mass);
 x = (100) * mass;
 printf ("%.4f quintal is equal to %.4f killogram\n", mass, x);
 break;
 case 17:
 printf ("enter your killogram value\n");
 scanf ("%f", &mass);
 x = (0.001) * mass;
 printf ("%.4f killogram is equal to %.4f tonne\n", mass, x);
 break;
 case 18:
 printf ("enter your tonne value\n");
 scanf ("%f", &mass);
 x = (1000) * mass;
 printf ("%.4f tonne is equal to %f killogram\n", mass, x);
 break;
 case 19: printf ("enter your quintal value\n");
 scanf ("%f", &mass);
 x = (0.1) * mass;
 printf ("%.4f quintal is equal to %.4f tonne\n", mass, x);
 break;
 case 20:
 printf ("enter your tonne value\n");
 scanf ("%f", &mass);
 x = (10) * mass;
 printf ("%.4f tonne is equal to %.4f quintal \n", mass, x);
 break;
 default:
 printf ("invalide choice\n");
 }
}
void
TempConverter ()
{
 float fh,cl;
 int opt;
 printf("\n1: Convert temperature from Fahrenheit to Celsius.");
 printf("\n2: Convert temperature from Celsius to Fahrenheit.\n");
 printf("\nEnter your choice (1, 2): "); scanf("%d",&opt);
 if(opt ==1){
 printf("\nEnter temperature in Fahrenheit: ");
 scanf("%f",&fh);
 cl= (fh - 32) / 1.8;
 printf("\nTemperature in Celsius: %.2f",cl);
 }
 else if(opt==2){
 printf("\nEnter temperature in Celsius: ");
 scanf("%f",&cl);
 fh= (cl*1.8)+32;
 printf("\nTemperature in Fahrenheit: %.2f",fh);
 }
 else{
 printf("\nInvalid Choice !!!");
 }
}
int
main ()
{
 bool running = true;
 while (running) {
 HomeScreen ();
 int choice;
 printf ("Enter choice: ");
 scanf ("%d", &choice);
 int conversion_option;
 switch (choice)
{
case 1:
 Calculator ();
 break;
case 2:
 printf ("\nEnter 1 to convert to INR and 2 to convert from INR\n");
 printf ("Enter choice :\n");
 scanf ("%d", &conversion_option);
 if (conversion_option == 1)
 {
 ElseToInr ();
 } if (conversion_option == 2)
 {
 InrToElse ();
 }
 
 printf ("\n");
 
 break;
case 3:
 TempConverter ();
 break;
case 4:
 MassConverter ();
 break;
case 5:
 DecimalToBinary ();
 break;
case 6:
 BinaryToDecimal ();
 break;
 
 case 7: TempConverter();
 break;
 
default:
 printf ("Quitting \n");
 }
 if (choice>7)
 running = false;
 
 
 }
 printf ("Thank you for using our program \n");
}