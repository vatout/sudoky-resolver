/*
** main.c for sudoki-bi in /home/rimbaud/rendu/sudoki-bi
**
** Made by RIMBAUD
** Login   <rimbau_m@epitech.net>
**
** Started on  Fri Feb 26 20:44:11 2016 RIMBAUD
** Last update	Sun Feb 28 22:39:32 2016 Vatoutine Artem
*/

#include "my.h"
#include "struct.h"

int		main(int ac, char **av)
{
  char		*src;
  int		res;

  (void)av;
  src = malloc(sizeof(char *) * 232);
  if (ac == 1)
    {
      if ((res = read(0, src, 232)) == -1)
        return (0);
      init_all(src);
      free(src);
    }
  else
    return (error_basic('u'));
  return (0);
}
