/*
** verif.c for verif.c in /home/vatout_a/rendu/sudoki-bi/check
**
** Made by Vatoutine
** Login   <vatout_a@epitech.net>
**
** Started on  Fri Feb 26 23:21:07 2016 Vatoutine
** Last update	Sun Feb 28 21:53:10 2016 Vatoutine Artem
*/

#include "my.h"

int		square_by_square(char **src, char *zero, int y, int x)
{
  int		x1;
  int		y1;
  int		nbr;

  x1 = x + 3;
  y1 = y + 3;
  nbr = 0;
  while (y < y1)
    {
      while (x < x1)
        {
          if ((src[y][x] >= '1') && (src[y][x] <= '9'))
            {
              if ((check_double(src[y][x], zero)) == -1)
                return (-1);
              zero[nbr++] = src[y][x];
            }
          x++;
        }
      x = x - 3;
      y++;
    }
  return (0);
}

int		check_square(char **src, int y, int x)
{
  char		*zero;
  int		inc;

  if ((zero = malloc(sizeof(char) * 20)) == NULL)
    return (error_basic(3));
  zero = fill_zero(zero);
  inc = 0;
  while (inc < 9)
    {
      if ((square_by_square(src, zero, y, x)) == -1)
        return (-1);
      zero = fill_zero(zero);
      x += 3;
      inc++;
      if (x == 9)
        {
          y += 3;
          x = 0;
        }
    }
  free(zero);
  return (0);
}

char		*fill_zero(char *zero)
{
  int		inc;

  inc = 0;
  while (inc < 20)
    {
      zero[inc] = '0';
      inc++;
    }
  return (zero);
}

int		verif(char **src)
{
  char		*zero;

  if ((zero = malloc(sizeof(char) * 20)) == NULL)
    return (error_basic(3));
  zero = fill_zero(zero);
  if ((check_line(src, zero, 1, 1) == -1)
      || (check_col(src, zero, 1, 2) == -1))
    return (-1);
  free(zero);
  return (0);
}
