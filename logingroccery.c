#include<stdio.h>

#include<string.h>

#include<conio.h>

void main()

{

char name[30], password[30],verify[30];

printf("Enter your Name:\n");

gets(name);

printf("Enter a password:\n");

gets(password);

printf("Confirm your password:\n");

gets(verify);

if(strcmp(password,verify)==0)

printf("Password has been verified");

else

printf("Password is not correct");

getch();

}