
/* translate the file */
void translate(FILE *lang, FILE *input, FILE *output)
{
	char word[100], ch, read[100], replace[100];
  int word_len, i, p = 0;
	
  if(input == NULL || output == NULL) 
	{
    printf("Can't open file.");
    exit(0);
  }
  puts("THE CONTENTS OF THE FILE ARE SHOWN BELOW :\n");

  while (1) 
	{
    ch = fgetc(input);
    if (ch == EOF)
		{
      break;
    }
    printf("%c", ch);
  }
  
  puts("\n\nEnter the word to find:");
  fgets(word, 100, stdin);
  
  word[strlen(word) - 1] = word[strlen(word)];
  
  puts("Enter the word to replace it with:");
  fgets(replace, 100, stdin);
  
  replace[strlen(replace) - 1] = replace[strlen(replace)];

  rewind(input);
  while (!feof(input)) 
	{
		fscanf(input, "%s", read);
  
		if(strcmp(read, word) == 0) 
		{
			strcpy(read, replace);
		}	
		fprintf(output, "%s ", read);
	}
		
  rewind(output);
  while (1) 
	{
    ch = fgetc(output);
    if(ch == EOF) 
		{
			break;
		}
		printf("%c", ch);
	}
}