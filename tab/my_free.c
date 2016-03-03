/*
** my_free.c for my_free.c in /home/vatout_a/rendu/sudoki-bi/tab
**
** Made by Vatoutine
** Login   <vatout_a@epitech.net>
**
** Started on  Mon Feb 29 01:27:14 2016 Vatoutine
** Last update Mon Feb 29 01:29:57 2016 Vatoutine
*/

#include "my.h"

int		my_free_tab(char **tab)
{
  int		inc;

  inc = 0;
  while (tab[inc] != NULL)
    {
      free(tab[inc]);
      inc++;
    }
  free(tab);
  return (0);
}
