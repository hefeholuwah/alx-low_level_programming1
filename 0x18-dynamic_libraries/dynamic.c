#include <unistd.h>
#include "main.h"

int _putchar(char c)
{
  return write(1, &c, 1);
}

int _islower(int c)
{
  return (c >= 'a' && c <= 'z');
}

int _isalpha(int c)
{
  return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int _abs(int n)
{
  return (n < 0 ? -n : n);
}

int _isupper(int c)
{
  return (c >= 'A' && c <= 'Z');
}

int _isdigit(int c)
{
  return (c >= '0' && c <= '9');
}

int _strlen(char *s)
{
  int len = 0;
  while (*s != '\0')
  {
    len++;
    s++;
  }
  return len;
}

void _puts(char *s)
{
  while (*s != '\0')
  {
    _putchar(*s);
    s++;
  }
  _putchar('\n');
}

char *_strcpy(char *dest, char *src)
{
  char *origDest = dest;
  while (*src != '\0')
  {
    *dest = *src;
    dest++;
    src++;
  }
  *dest = '\0';
  return origDest;
}

int _atoi(char *s)
{
  int sign = 1;
  int result = 0;
  if (*s == '-')
  {
    sign = -1;
    s++;
  }
  while (*s >= '0' && *s <= '9')
  {
    result = result * 10 + (*s - '0');
    s++;
  }
  return result * sign;
}

char *_strcat(char *dest, char *src)
{
  char *origDest = dest;
  while (*dest != '\0')
  {
    dest++;
  }
  while (*src != '\0')
  {
    *dest = *src;
    dest++;
    src++;
  }
  *dest = '\0';
  return origDest;
}

char *_strncat(char *dest, char *src, int n)
{
  char *origDest = dest;
  while (*dest != '\0')
  {
    dest++;
  }
  while (*src != '\0' && n > 0)
  {
    *dest = *src;
    dest++;
    src++;
    n--;
  }
  *dest = '\0';
  return origDest;
}

char *_strncpy(char *dest, char *src, int n)
{
  char *origDest = dest;
  while (*src != '\0' && n > 0)
  {
    *dest = *src;
    dest++;
    src++;
    n--;
  }
  while (n > 0)
  {
    *dest = '\0';
    dest++;
    n--;
  }
  return origDest;
}

int _strcmp(char *s1, char *s2)
{
  while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
  {
    s1++;
    s2++;
  }
  return (*s1 - *s2);
}

char *_memset(char *s, char b, unsigned int n)
{
  char *origS = s;
  while (n > 0)
  {
    *s = b;
    s++;
    n--;
  }
  return origS;
}


