/*
** algo.c for sudoki-bi in /home/rimbaud/rendu/sudoki-bi/algo
**
** Made by RIMBAUD
** Login   <rimbau_m@epitech.net>
**
** Started on  Sat Feb 27 18:08:49 2016 RIMBAUD
** Last update	Sun Feb 28 21:55:56 2016 Vatoutine Artem
*/

#include "my.h"
#include "struct.h"

int             algo_line(char **tab, int y, char k)
{
  int		x;

  x = 0;
  while (x < 9)
    {
      if (tab[y][x] == k)
        return (1);
      x = x + 1;
    }
  return (0);
}

int             algo_cols(char **tab, int x, char k)
{
  int		y;

  y = 0;
  while (y < 9)
    {
      if (tab[y][x] == k)
	return (1);
      y = y + 1;
    }
  return (0);
}

int             algo_square(char **tab, int x, int y, char k)
{
  int           yy;
  int           xx;

  yy = y - (y % 3);
  xx = x - (x % 3);
  y = yy;
  x = xx;
  while (y < (yy + 3))
    {
      while (x < (xx + 3))
        {
          if (tab[y][x] == k)
            return (1);
          x = x + 1;
        }
      x = xx;
      y = y + 1;
    }
  return (0);
}

int		algo(char **tab, int pos)
{
  int		x;
  int		y;
  char		k;

  x = pos % 9;
  y = pos / 9;
  k = '1';

  if (pos == 81)
    return (0);
  if (tab[y][x] != ' ')
    return (algo(tab, (pos + 1)));
  while (k <= '9')
    {
      if ((algo_line(tab, y, k) == 0) && (algo_cols(tab, x, k) == 0)
	  && (algo_square(tab, x, y, k) == 0))
        {
	  tab[y][x] = k;
	  if (algo(tab, (pos + 1)) == 0)
	    return (0);
        }
      k = k + 1;
    }
  tab[y][x] = ' ';
  return (1);
}
