
/* translate the file */
void translate(FILE *lang, FILE *input, FILE *output)
{
	char c = fgetc(input);
	while(c != EOF) /* until the file ends */
	{
		fputc(c, output); /* print characters in the output file */
		c = fgetc(input); /* continue getting characters from the input file*/
	}
}