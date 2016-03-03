/*
** init_tab.c for init_tab.c in /home/vatout_a/rendu/sudoki-bi/initialization
**
** Made by Vatoutine
** Login   <vatout_a@epitech.net>
**
** Started on  Sat Feb 27 16:25:08 2016 Vatoutine
** Last update	Sun Feb 28 23:24:08 2016 Vatoutine Artem
*/

#include "my.h"
#include "struct.h"

char		**init_tab(char **buffer)
{
  int		inc;

  inc = 0;
  if ((buffer = malloc(sizeof(char *) * 12)) == NULL)
    return (error_malloc());
  while (inc < 12)
    {
      if ((buffer[inc] = malloc(sizeof(char *) * 21)) == NULL)
	return (error_malloc());
      inc++;
    }
  buffer[inc] = NULL;
  return (buffer);
}

char		**init_tab_alg(char **buffer)
{
  int		inc;

  inc = 0;
  if ((buffer = malloc(sizeof(char *) * 10)) == NULL)
    return (error_malloc());
  while (inc < 10)
    {
      if ((buffer[inc] = malloc(sizeof(char *) * 10)) == NULL)
	return (error_malloc());
      inc++;
    }
  buffer[inc] = NULL;
  return (buffer);
}
