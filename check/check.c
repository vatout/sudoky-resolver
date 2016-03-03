/*
** check.c for check.c in /home/vatout_a/rendu/sudoki-bi/check
**
** Made by Vatoutine
** Login   <vatout_a@epitech.net>
**
** Started on  Fri Feb 26 21:13:41 2016 Vatoutine
** Last update	Sun Feb 28 18:14:16 2016 Vatoutine Artem
*/

#include "my.h"

int		check_strlen(char **src)
{
  int		inc;
  int		res;

  inc = 0;
  while (inc < 11)
    {
      if ((res = strlen(src[inc])) != 20)
        return (error_strlen());
      inc++;
    }
  return (0);
}

int		check_nbr(char **src)
{
  int		x;
  int		y;

  x = 1;
  y = 1;
  while (y < 10)
    {
      while (x < 19)
        {
          if ((src[y][x] < '1' || src[y][x] > '9') && src[y][x] != 32)
            return (error_invalid_char());
          x++;
        }
      y++;
      x = 1;
    }
  return (0);
}

int		check_detail(char **src)
{
  int		x;
  int		y;

  x = 1;
  y = 0;
  while (y < 11)
    {
      if (src[y][0] != '|' || src[y][19] != '|')
        return (error_invalid_char());
      y++;

    }
  while (x < 19)
    {
      if (src[0][x] != '-' || src[10][x] != '-')
        return (error_invalid_char());
      x++;
    }
  return (0);
}

int		error_check(char **tab)
{
  if (check_strlen(tab) == -1
      || check_detail(tab) == -1
      || check_nbr(tab) == -1)
    return (-1);
  return (0);
}
