#include <stdio.h>

int main(int argc, char *argv[])
{
	while((argc > 1) && (argv[1][0] == '-'))
	{
		if(argv[1][1] == 'L')
		{
			FILE *lang = fopen(&argv[1][2], "r"); /* load language file */
			if(lang != NULL) printf("language loaded successfully!\n"); 
		}
		argv++;
		argc--;
	}

	return 0;
}