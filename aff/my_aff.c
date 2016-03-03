/*
** my_aff.c for my_aff.c in /home/vatout_a/rendu/sudoki-bi/aff
**
** Made by Vatoutine
** Login   <vatout_a@epitech.net>
**
** Started on  Sat Feb 27 18:13:16 2016 Vatoutine
** Last update	Sun Feb 28 18:01:14 2016 Vatoutine Artem
*/

#include "my.h"
#include "struct.h"

int		my_putchar(char z)
{
  if ((write(1, &z, 1)) == -1)
    return (error_basic('w'));
  return (0);
}

int		my_putchar_error(char z)
{
  if ((write(2, &z, 1)) == -1)
    return (error_basic('w'));
  return (0);
}

int		my_putstr_error(char *src)
{
  int		inc;

  inc = 0;
  while (src[inc] != '\0')
    {
      if ((my_putchar_error(src[inc])) == -1)
        return (-1);
      inc++;
    }
  return (0);
}

int		putstr(char *str)
{
  int		i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return (0);
}
