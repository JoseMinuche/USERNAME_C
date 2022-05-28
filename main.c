#include <stdio.h>

#define size 20

int main()
{

	char name[size], last_name[size];
	char username[9];
	//int s;

	printf("Enter your name: ");
	scanf("%s", name);
	printf("Enter your last name: ");
	scanf("%s", last_name);

	username[0] = name[0];

	for (int s = 0; s <= size; s++)
	{
		char p = last_name[s];
		if (p == 0 || s == 7)
		{
			break;
		}
		username[s+1] = last_name[s];
	}

	printf("Your username is : %s\n", username);

	return 0;
}



