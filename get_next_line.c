/*
** get_next_line.c for vatout_a in /home/vatout_a/rendu/CPE/CPE_2015_Allum1
**
** Made by Vatoutine
** Login   <vatout_a@epitech.net>
**
** Started on  Fri Feb 26 17:29:32 2016 Vatoutine
** Last update	Sat Feb 27 20:24:58 2016 Vatoutine Artem
*/

#include "get_next_line.h"
#include "my.h"

char		*my_fill_buffer(char *buff)
{
  int		x;
  int		y;

  x = 0;
  y = 0;
  while ((buff[x] != '\n'))
    x++;
  x++;
  while (buff[x] != '\0')
    {
      buff[y] = buff[x];
      x++;
      y++;
    }
  buff[y] = '\0';
  return (buff);
}

int		nbr_len(char *str, int a)
{
  int		i;
  int		j;

  i = 0;
  j = 0;
  if (a == 1)
    {
      while (str[i] != '\0')
	i++;
      return (i);
    }
  if (a == 2)
    {
      while (str[i] != '\0')
	{
	  if (str[i] == '\n')
	    j++;
	  i++;
	}
      return (j);
    }
  return (-1);
}

char		*my_realloc(char *buff, char *stock, int size)
{
  char		*tmp;
  int		i;
  int		j;

  j = i = 0;
  if ((tmp = malloc(size + 1)) == NULL)
    return (NULL);
  while (i <= size)
    tmp[i++] = 0;
  i = 0;
  if (stock != NULL)
    {
      while (stock[i] != 0)
	{
	  tmp[i] = stock[i];
	  i++;
	}
      free(stock);
    }
  i = j = 0;
  while (tmp[i] != 0)
    i++;
  while ((buff[j] != 0) && (buff[j] != '\n'))
    tmp[i++] = buff[j++];
  return (tmp);
}

char		*my_switch_buffer(char *buffer, char *stack)
{
  if (nbr_len(buffer, 2) <= 0)
    return (NULL);
  buffer = my_fill_buffer(buffer);
  if ((stack = my_realloc(buffer, stack, READ_SIZE)) == NULL)
    return (NULL);
  if (nbr_len(buffer, 2) < 0)
    return (stack);
  return (stack);
}

char		*get_next_line(const int fd)
{
  static char buffer[READ_SIZE + 1];
  char	*stack;
  int	inc;
  int	ret;

  stack = NULL;
  ret = inc = 0;
  stack = my_switch_buffer(buffer, stack);
  if (nbr_len(buffer, 2) > 0)
    return (stack);
  while ((inc = read(fd, buffer, READ_SIZE)) > 0)
    {
      buffer[inc] = '\0';
      ret = ret + inc + READ_SIZE;
      stack = my_realloc(buffer, stack, ret);
      if (nbr_len(buffer, 2) > 0)
	return (stack);
    }
  if (inc == 0)
    return (NULL);
  if (buffer[0] != 0)
    return (stack);
  free(stack);
  return (NULL);
}
