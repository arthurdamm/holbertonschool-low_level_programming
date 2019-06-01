#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	shash_table_t *ht;

	ht = shash_table_create(1024);
	shash_table_set(ht, "art", "0");
	shash_table_print(ht);
	shash_table_set(ht, "jonas", "1");
	shash_table_print(ht);
	shash_table_set(ht, "tom", "2");
	shash_table_print(ht);
	shash_table_set(ht, "bsd", "3");
	shash_table_print(ht);
    shash_table_set(ht, "dram", "r1");
    shash_table_print(ht);
	shash_table_set(ht, "smith", "4");
	shash_table_print(ht);
	shash_table_set(ht, "xern", "5");
	shash_table_print(ht);
	shash_table_set(ht, "ameli", "6");
    shash_table_set(ht, "vivency", "r2");
	shash_table_print(ht);
	shash_table_set(ht, "cart", "7");
	shash_table_print(ht);
    shash_table_set(ht, "depravement", "d8");
    shash_table_print(ht);
    shash_table_set(ht, "serafins", "d9");
    shash_table_print(ht);
	shash_table_print_rev(ht);
	shash_table_delete(ht);
	return (EXIT_SUCCESS);
}