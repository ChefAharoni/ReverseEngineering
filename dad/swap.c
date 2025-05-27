#include <stdio.h>

char skip_wspaces(char ch) 
	/*
	 * Function to consume white space characters from the input stream.
	 * Receives: The next input character.
	 * Returns: The first non-space character in the input stream, or EOF if input stream ends.
	 */
{
	while (ch != EOF && ch == ' ' || ch == '\n' || ch == '\t')
		ch = getchar();

	return ch;
}

int ch_to_dig(char ch)
	/* 
	 * Function to convert a given character to a digit.
	 * Note that the function does not check if the given char is indeed a proper digit character.
	 */
{ 
	return ch - '0';
}

int get_cardinal(char *pch) 
	/*
	 * Function that produces the cardinal number read from the input.
	 * It first skips the white spaces and then reads the number.
	 * Receives: The next character in the input stream.
	 * Returns: The number read as the value of the function, and the next character after this number
	 * in the input stream, or EOF if input stream ends.
	 */
{
	int num;

	*pch = skip_wspaces(*pch);

	num = 0;
	while (*pch != EOF && isdigit(*pch)) {
		num = 10 * num + ch_to_dig(*pch);
		*pch = getchar();
	}

	return num;
}
