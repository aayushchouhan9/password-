#include<stdio.h>
#include<string.h>
int main()
{
	char p[20];
	const char correctpassword[] = "mypassword123";
	
	printf("enter password:");
	scanf("%s",&p);
	
	if(strcmp(p,correctpassword)==0)
	{
		printf("access granted!\n");
		
	}
	else if(strlen(p)<8)
	{
		printf("password is too short ...minimum length is of 8 character\n ");
	}
	else if(strlen(p)>20)
	{
		printf("password is too long ...maximum length is of 20 character\n ");
	}
	else 
	{
		printf("incoreect password ...please enter correct password");
	}
}

