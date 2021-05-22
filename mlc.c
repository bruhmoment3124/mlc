#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "translate.h"

int main(int argc, char *argv[])
{
	while(argv[1][0] == '-')
	{
		if(argv[1][1] == 'L') /* language flag */
		{
			FILE *lang = fopen(&argv[1][2], "r"); /* load language file */
			if(lang != NULL) printf("Language loaded successfully!\n"); 
			
			if(argv[3][1] == 'o') /* output flag */
			{
				FILE *inputf = fopen(argv[2], "r"); /* input file */
				FILE *outputf = fopen(argv[4], "w+"); /* output file */
				translate(lang, inputf, outputf); /* translate the file */
				
				fclose(inputf); /* close input file */
				fclose(outputf); /* close output file */
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
