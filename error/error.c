/*
** error.c for error.c in /home/vatout_a/rendu/sudoki-bi/error
**
** Made by Vatoutine
** Login   <vatout_a@epitech.net>
**
** Started on  Fri Feb 26 20:47:11 2016 Vatoutine
** Last update	Sun Feb 28 22:06:58 2016 Vatoutine Artem
*/

#include "my.h"

char		**error_malloc()
{
  my_putstr_error("error on malloc\n");
  return (NULL);
}

int		error_basic(char error)
{
  if (error == 'm')
    {
      my_putstr_error("error on malloc\n");
      return (-1);
    }
  if (error == 'u')
    {
      my_putstr_error("Usage : ./sudokimi-bi [plateau.txt]\n");
      return (-1);
    }
  if (error == 'r')
    {
      my_putstr_error("error invalid text file\n");
      return (-1);
    }
  if (error == 'w')
    {
      my_putstr_error("error on write\n");
      return (-1);
    }
  return (0);
}

int		error_strlen()
{
  my_putstr_error("MAP ERROR\n");
  return (-1);
}

int		error_invalid_char()
{
  my_putstr_error("MAP ERROR\n ");
  return (-1);
}
