/*
 * File: 6-print_numberz.c
 * Auth: Mfon Etuk
 */

#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 *	only using putchar and without char variable.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num =0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);

}
