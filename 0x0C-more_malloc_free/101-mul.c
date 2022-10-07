#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * digit_check - checks if all characters in a string
  * are digits
  * @str: passed in string argument
  * Return: 1 if all characters are digits and 0, if not.
  */
int digit_check(char *str)
{
	int i, r;
	char n, ltr;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		r = 0;
		n = *(str + i);
		for (ltr = '0'; ltr <= '9'; ltr++)
		{
			if (ltr == n)
			{
				r = 1;
				break;
			}
		}
		if (r == 0)
		{
			return (0);
		}
	}
	return (1);
}
/**
  * place_value - creates an integer array block of a given length
  * and initialize all units to zero.
  * @size: the desired length of the created array
  * Return: pointer to the created array
  */
int *place_value(int size)
{
	int *arr, i;

	arr = malloc(size * sizeof(*arr));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = 0;
	return (arr);
}
/**
  * str2num - converts string array of digit characters
  * to an integer array
  * @str: the passed-in string of digits
  * Return: pointer to the integer array
  */
int *str2num(char *str)
{
	int *num;
	int i, n, strL = 0;
	char ltr, c;

	for (i = 0; *(str + i) != '\0'; i++)
		strL++;
	num = place_value(strL);
	for (i = 0; *(str + i) != '\0'; i++)
	{
		n = 0;
		c = *(str + i);
		for (ltr = '0'; ltr <= '9'; ltr++)
		{
			if (c == ltr)
			{
				num[i] = n;
				break;
			}
			n++;
		}
	}
	return (num);
}
/**
  * multiply  - multiplies array of numbers
  * @N1: first integer array
  * @N2: second integer array
  * @L1: length of first array
  * @L2: length of second array
  * Return: pointer to the product array
  */
int *multiply(int *N1, int *N2, int L1, int L2)
{
	int i, j, k, p1, p2, p, L;
	int *prod;

	L = L1 + L2;
	prod = place_value(L);
	for (i = (L1 - 1); i >= 0; i--)
	{
		for (j = (L2 - 1); j >= 0; j--)
		{
			p1 = (L1 - 1) - i;
			p2 = (L2 - 1) - j;
			p = p1 + p2;
			k = (L - 1) - p;
			prod[k] = prod[k] + N1[i] * N2[j];
			if (prod[k] > 9)
			{
				prod[k - 1] = prod[k - 1] + (prod[k] / 10);
				prod[k] = prod[k] % 10;
			}
		}
	}
	return (prod);
}

/**
  * main - computes and print the product of numbers passed in
  * at command line
  * @argc: the number of command line arguments
  * @argv: the array of strings passed in as arguments
  * Return: 0 for success exit
  */
int main(int argc, char **argv)
{
	int isnum1, isnum2, Len1 = 0, Len2 = 0, L;
	int *N1, *N2, *N;
	int i;

	if (argc != 3)
	{
		printf("ERROR\n");
		exit(98);
	}
	isnum1 = digit_check(argv[1]);
	isnum2 = digit_check(argv[2]);
	if ((isnum1 == 0) || (isnum2 == 0))
	{
		printf("ERROR\n");
		exit(98);
	}
	for (i = 0; *(argv[1] + i) != '\0'; i++)
		Len1++;
	for (i = 0; *(argv[2] + i) != '\0'; i++)
		Len2++;
	L = Len1 + Len2;
	N1 = str2num(argv[1]);
	N2 = str2num(argv[2]);
	N = multiply(N1, N2, Len1, Len2);
	for (i = 0; i < L; i++)
	{
		if (i == 0)
		{
			if (N[i] != 0)
				printf("%d", N[i]);
		}
		else
			printf("%d", N[i]);
	}
	printf("\n");

	free(N1);
	free(N2);
	free(N);
	return (0);
}
