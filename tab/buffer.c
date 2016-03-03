/*
** buffer.c for buffer.c in /home/vatout_a/rendu/sudoki-bi/buffer
**
** Made by Vatoutine
** Login   <vatout_a@epitech.net>
**
** Started on  Fri Feb 26 23:54:09 2016 Vatoutine
** Last update	Sun Feb 28 23:26:14 2016 Vatoutine Artem
*/

#include "my.h"

char		**convert_tab(char **alg, char **tab)
{
  int		inc;
  int		nbr;
  int		y;
  int		z;

  nbr = z = 0;
  y = 1;
  inc = 2;
  while (y < 10)
    {
      while (nbr < 9)
        {
          tab[y][inc] = alg[z][nbr];
          nbr++;
          inc = inc + 2;
        }
      y++;
      z++;
      inc = 2;
      nbr = 0;
    }
  return (tab);
}

char		**epur_copy(char **src, char **dest, int line)
{
  int		inc;
  int		nbr;
  int		z;

  inc = 2;
  nbr = 0;
  z = line - 1;
  while (nbr < 9)
    {
      if ((src[line][inc] >= '1') && (src[line][inc] <= '9'))
          dest[z][nbr] = src[line][inc];
      else if (src[line][inc] == ' ')
        dest[z][nbr] = ' ';
      inc = inc + 2;
      nbr++;
    }
  return (dest);
}

char		**tab_tranformer(char **tab, char **alg)
{
  int		inc;

  inc = 1;
  while (inc < 11)
    {
      epur_copy(tab, alg, inc);
      inc++;
    }
  return (alg);
}

char		**my_str_to_wordtab(char **tab, char *src, char z)
{
  int		inc;
  int		word;
  int		y;

  inc = 0;
  word = 0;
  y = 0;
  if (src == NULL)
    return (NULL);
  while (src[inc] != '\0')
    {
      if (src[inc] == z)
	{
	  y = 0;
	  word++;
	  inc++;
	}
      tab[word][y] = src[inc];
      inc++;
      y++;
    }
  return (tab);
}
