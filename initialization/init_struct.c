/*
** init_struct.c for init_struct.c in /vatout_a/rendu/sudoki-bi/initialization
**
** Made by Vatoutine
** Login   <vatout_a@epitech.net>
**
** Started on  Sat Feb 27 15:28:02 2016 Vatoutine
** Last update	Sun Feb 28 22:37:12 2016 Vatoutine Artem
*/

#include "my.h"
#include "struct.h"

int		init_all(char *src)
{
  char		**tab;
  char		**alg;

  tab = NULL;
  alg = NULL;
  tab = init_tab(tab);
  alg = init_tab_alg(alg);
  my_str_to_wordtab(tab, src, '\n');
  if ((error_check(tab) == -1)
      || (verif(tab) == -1))
    return (-1);
  alg = tab_tranformer(tab, alg);
  check_square(alg, 0, 0);
  algo(alg, 0);
  tab = convert_tab(alg, tab);
  my_print_tab(tab);
  my_free_tab(alg);
  my_free_tab(tab);
  return (0);
}
