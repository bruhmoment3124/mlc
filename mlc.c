#include <stdio.h>

int main(int argc, char *argv[])
{
	while(argv[1][0] == '-')
	{
		if(argv[1][1] == 'L') /* language flag */
		{
			FILE *lang = fopen(&argv[1][2], "r"); /* load language file */
			if(lang != NULL) printf("Language loaded successfully!\n"); 
			
			if(argv[2][1] == 'o') /* output flag */
			{
				printf("Hello, Output!\n");
			} else /* no output */
			{
				printf("Output is not set, use the -o flag\n");
			}
		} else /* language is not set */
		{
			printf("Please set a language, use the -L flag\n");
		}
		break;
	}

	return 0;
}