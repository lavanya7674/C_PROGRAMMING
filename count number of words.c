#include<stdio.h>
#include<string.h>
int main()
{
	char ar[40];
	int i,c=0;

	printf("Enter a sentence:\n");
	scanf("%[^\n]",ar);

	if(strlen(ar)==1)
		printf("Number of words in array:=%d",c);

	else
	{

		for(i=0;ar[i]!='\0';i++)
		{
			if((ar[i]==32)||ar[i]=='\t'||ar[i]=='\n')
			c++;
		}

		if(ar[i]=='\0')
			c++;

		printf("Number of words=%d\n",c);
	}

	return 0;
}
