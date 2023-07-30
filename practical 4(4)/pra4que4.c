#include<stdio.h>
    int main()
    {
	char letter;
	printf("Enter a letter: ");
	scanf("%c",&letter);


	

	switch(letter)
	{
		
	
	case 'a':printf("Letter is vowel %c",letter);break;
	case 'e':printf("Letter is vowel %c",letter);break;
	case 'i':printf("Letter is vowel %c",letter);break;
	case 'o':printf("Letter is vowel %c",letter);break;
	case 'u':printf("Letter is vowel %c",letter);break;
              default:printf("Letter is not a vowel ");
	
	
	}
    }

