#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int _atoi(char *s);
int _abs(int n);
int _isalpha(int c);
int _isdigit(int c);
int _islower(int c);
int _isupper(int c);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_memset(char *s, char b, unsigned int n);
int _putchar(char c);
void _puts(char *str);
char *_strcat(char *dest, char *src);
char *_strchr(char *s, char c);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
char *_strpbrk(char *s, char *accept);
unsigned int _strspn(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);
#endif
