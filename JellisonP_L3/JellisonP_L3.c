#include <stdio.h>
#include <ctype.h>
#include <string.h>

void UpperCase(char*);
void Reversed(char*);

int main()
{
	char firstName [11] = "John Smith";
	char secondName[11] = "Mary Cohen";
	char thirdName[14] = "Carl Williams";

	UpperCase(firstName);
	UpperCase(secondName);
	UpperCase(thirdName);

	Reversed(firstName);
	Reversed(secondName);
	Reversed(thirdName);
}

void UpperCase(char* name)
{
	for (int i = 0; i < strlen(name); i++)
	{
		*(name + i) = toupper(*(name + i));
	}
}

void Reversed (char* name)
{
	char temp[14];
	int count = 0;
	for (int i = (strlen(name)-1); i >= 0; i--)
	{
		temp[count] = *(name + i);
		count++;
	}
	temp[count] = '\0';
	printf("%s \n", temp);
}