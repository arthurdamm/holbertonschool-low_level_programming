#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int f1(int len);
int f2(char *name, int len);
int f3(char *name, int len);
int f4(char *name, int len);
int f5(char *name, int len);
int f6(char c);

/**
 * main - entry point of crackme
 * @ac: argument count
 * @av: argument vector
 *
 * Return: always 0
 */
int main(int ac, char **av)
{
	char *str =
		"A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char pass[7] = {'1', '2', '3', '4', '5', '6', '\0'};
	char *name = av[1];
	int len = strlen(name);
	int ret = ac;

	ret = f1(len);
	pass[0] = str[ret];

	ret = f2(name, len);
	pass[1] = str[ret];

	ret = f3(name, len);
	pass[2] = str[ret];

	ret = f4(name, len);
	pass[3] = str[ret];

	ret = f5(name, len);
	pass[4] = str[ret];

	ret = f6(name[0]);
	pass[5] = str[ret];

	printf("%s", pass);
	return (0);
}

/**
 * f1 - function for 1st char
 * @len: length of name
 *
 * Return: encoded char
 */
int f1(int len)
{
	return ((len ^ 0x3b) & 0x3f);
}

/**
 * f2 - function for 2nd char
 * @name: the user name
 * @len: length of name
 *
 * Return: encoded char
 */
int f2(char *name, int len)
{
	int ret = 0;
	int i = 0;

	for (; i < len; i++)
	{
		ret += name[i];
	}
	return ((ret ^ 0x4f) & 0x3f);
}

/**
 * f3 - function for 3rd char
 * @name: the user name
 * @len: length of name
 *
 * Return: encoded char
 */
int f3(char *name, int len)
{
	int ret = 1;
	int i = 0;

	for (; i < len; i++)
	{
		ret *= name[i];
	}
	return ((ret ^ 0x55) & 0x3f);
}

/**
 * f4 - function for 4th char
 * @name: the user name
 * @len: length of name
 *
 * Return: encoded char
 */
int f4(char *name, int len)
{
	int ret = name[0];
	int i = 0;

	for (; i < len; i++)
	{
		if (name[i] > ret)
		{
			ret = name[i];
		}
	}
	srand(ret ^ 0xe);
	return (rand() & 0x3f);
}

/**
 * f5 - function for 5th char
 * @name: the user name
 * @len: length of name
 *
 * Return: encoded char
 */
int f5(char *name, int len)
{
	int ret = 0;
	int i = 0;

	for (; i < len; i++)
	{
		ret += name[i] * name[i];
	}
	return ((ret ^ 0xef) & 0x3f);
}

/**
 * f6 - function for 6th char
 * @c: first char of user name
 *
 * Return: encoded char
 */
int f6(char c)
{
	int ret = 0;
	int i = 0;

	for (; c > i; i++)
	{
		ret = rand();

	}
	return ((ret ^ 0xe5) & 0x3f);
}
