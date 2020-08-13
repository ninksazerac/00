#include<stdio.h>
int main()
{
	char fname[40], surname[40], gender[10], age[3];
	printf("Enter first name : ");
	scanf("%s", &fname);
	printf("Enter surname : ");
	scanf("%s", &surname);
	printf("Enter gender : ");
	scanf("%s", &gender);
	printf("Enter age : ");
	scanf("%s", &age);
	printf("\nEnter first name : %s\n", fname);
	printf("Enter surname : %s\n", surname);
	printf("Enter gender : %s\n", gender);
	printf("Enter age : %s", age);
	return 0;
}