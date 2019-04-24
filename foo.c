#include <stdio.h>
#include <string.h>

#define B_INIT_VALUE 10

char str[100];
int b;

void __attribute__((constructor)) setup(void)
{
	strcpy(str, "Constructor string");
	b = B_INIT_VALUE;
}

void foo(void) { puts(str); }

int inc() { return ++b; }