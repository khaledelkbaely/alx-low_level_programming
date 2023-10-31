#include "main.h"
#include <stdlib.h>

/**
 * count_words - as u can read
 *
 * @str: string
 *
 * Return: number of words
 */

int count_words(char *str)
{
	int count = 0;
	int is_word = 0;

	while (*str != '\0')
	{
		if (*str == ' ')
		{
			is_word = 0;
		}
		else if (is_word == 0)
		{
			is_word = 1;
			count++;
		}
		str++;
	}

	return (count);
}

/**
 * check_for -check string for NULL
 *
 * @word: string
 * @words: array of strings
 * @word_index: word index
 *
 * Return: Nothing
 */

int check_for(char *word, char **words, int word_index)
{
	int i;

	if (word == NULL)
	{
		for (i = 0; i < word_index; i++)
			free(words[i]);
		free(words);
		return (1);
	}
	return (0);
}

/**
 * strtow - splits sentences into words
 *
 * @str: string to split
 *
 * Return: array of strings
 */

char **strtow(char *str)
{
	int word_count, word_index, is_word, word_length, i;
	char **words;
	char *start, *word;

	if (str == NULL || *str == '\0')
		return (NULL);
	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);
	words = (char **)malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	word_index = 0;
	is_word = 0;
	while (*str != '\0')
	{
		if (*str == ' ')
			is_word = 0;
		else if (is_word == 0)
		{
			is_word = 1;
			start = str;
			while (*str != ' ' && *str != '\0')
				str++;
			word_length = str - start;
			word = (char *)malloc((word_length + 1) * sizeof(char));
			if (check_for(word, words, word_index))
				return (NULL);
			for (i = 0; i < word_length; i++)
				word[i] = start[i];
			word[i] = '\0';
			words[word_index] = word;
			word_index++;
			str--;
		}
		if (*str != '\0')
			str++;
	}
	words[word_index] = NULL;
	return (words);
}
