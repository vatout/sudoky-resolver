/*
** verif_1.c for verif.c in /home/vatout_a/rendu/sudoki-bi/check
**
** Made by Vatoutine
** Login   <vatout_a@epitech.net>
**
** Started on  Sun Feb 28 21:51:49 2016 Vatoutine
** Last update	Sun Feb 28 21:52:36 2016 Vatoutine Artem
*/

#include "my.h"

int		check_double(char nbr, char *zero)
{
  int		inc;

  inc = 0;
  while (zero[inc] != '\0')
    {
      if (zero[inc] == nbr)
        return (-1);
      inc++;
    }
  return (0);
}

int		check_col(char **src, char *zero, int y, int x)
{
  int		inc;

  inc = 0;
  while (x < 20)
    {
      while (y < 10)
          {
            if ((src[y][x] >= '1') && (src[y][x] <= '9'))
            {
            if ((check_double(src[y][x], zero)) == -1)
                return (-1);
            zero[inc++] = src[y][x];
           }
            y++;
          }
          inc = 0;
          zero = fill_zero(zero);
      x++;
      y = 1;
    }
  return (0);
}

int		check_line(char **src, char *zero, int y, int x)
{
  int		inc;

  inc = 0;
  while (y < 10)
    {
      while (x < 20)
        {
          if ((src[y][x] >= '1') && (src[y][x] <= '9'))
            {
              if ((check_double(src[y][x], zero)) == -1)
                return (-1);
              zero[inc++] = src[y][x];
            }
            x++;
        }
      x = 0;
      inc = 0;
      zero = fill_zero(zero);
      y++;
    }
  return (0);
}
