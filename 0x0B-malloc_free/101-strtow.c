#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * count_words - count the number of words in a string
 * @str: the input string
 *
 * Return: the number of words in the string
 */
int count_words(char *str)
{
	int count = 0, in_word = 0;

	while (*str)
	{
		if (*str == ' ')
		{
			in_word = 0;
		}
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

/**
 * next_word_length - get the length of the next word in a string
 * @str: the input string
 *
 * Return: the length of the next word
 */
int next_word_length(char *str)
{
	int len = 0;

	while (*str && *str != ' ')
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * copy_word - copy a word from a string
 * @str: the input string
 * @len: the length of the word
 *
 * Return: a pointer to a newly allocated copy of the word
 */

char *copy_word(char *str, int len)
{
	char *word;

	word = malloc((len + 1) * sizeof(char));
	if (word == NULL)
	{
		return (NULL);
	}
	strncpy(word, str, len);
	word[len] = '\0';
	return (word);
}

/**
 * strtow - split a string into words
 * @str: the input string
 *
 * Return: a pointer to an array of words, or NULL on failure
 */

char **strtow(char *str)
{
	int i, j, words;
	char **result;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	words = count_words(str);
	if (words == 0)
	{
		return (NULL);
	}

	result = malloc((words + 1) * sizeof(char *));
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < words; i++)
	{
		while (*str && *str == ' ')
		{
			str++;
		}
		j = next_word_length(str);
		result[i] = copy_word(str, j);
		if (result[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(result);
			}
			free(result);
			return (NULL);
		}
		str += j;
	}
	result[words] = NULL;

	return (result);
}
