#include "shell.h"


/**
 * str_tokenize - Tokenizes a string into words.
 * @input: The input string to tokenize.
 *
 * Return: An array of pointers to the words, or NULL on failure.
 */
char **str_tokenize(const char *input)
{
	char *inputCopy, **words, **newWords, *token;
	int capacity = 10;
	int i;
	int word_count = 0;

	inputCopy = strdup(input);
	if (inputCopy == NULL)
		return (NULL);/* Memory allocation failed */
	words = malloc(capacity * sizeof(char *));
	if (words == NULL)
	{
		free(inputCopy);
		return (NULL);
	}
	token = strtok(inputCopy, " ");
	while (token != NULL)
	{
		words[(word_count)++] = strdup(token);
		if (word_count >= capacity)
		{
			capacity *= 2;
			newWords = malloc(capacity * sizeof(char *));
			if (newWords == NULL)
			{
				free(inputCopy);
				for (i = 0; i < word_count; i++)
					free(words[i]);
				free(words);
				return (NULL);
			}
			for (i = 0; i < word_count; i++)
				newWords[i] = words[i];
			free(words);
			words = newWords;
		}
		token = strtok(NULL, " ");
	}
	free(inputCopy);
	return (words);
}
