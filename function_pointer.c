/*
 * File: function_pointers.c
 * Auth: Tosinkuzzy
 */
#include <stdio.h>
/**
 * main - Entry point
 * @f: declaring a function pointer
 * @p: computing a function pointer
 *
 * Return: Always 0 success.
 */
int func(int a, int b)
{
	// Declaration
	int mul;
	int sum;
	int result;
	
	//statement and computing
	
	int mul = a * b;
	int sum = a + b;
	result = mul + sum;

	return (result);
}
