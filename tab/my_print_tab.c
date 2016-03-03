/*
** my_print_tab.c for my_print_tab.c in /home/vatout_a/rendu/sudoki-bi/tab
**
** Made by Vatoutine
** Login   <vatout_a@epitech.net>
**
** Started on  Sat Feb 27 16:16:52 2016 Vatoutine
** Last update	Sun Feb 28 00:48:35 2016 Vatoutine Artem
*/

#include "struct.h"
#include "my.h"

int		my_print_tab(char **tab)
{
  int		inc;

  inc = 0;
  while (tab[inc] != NULL)
    {
      putstr(tab[inc]);
      my_putchar('\n');
      inc++;
    }
  return (0);
}
