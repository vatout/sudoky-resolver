/*
** my.h for sudoki-bi in /home/rimbaud/rendu/sudoki-bi
**
** Made by RIMBAUD
** Login   <rimbau_m@epitech.net>
**
** Started on  Fri Feb 26 23:21:30 2016 RIMBAUD
** Last update	Sun Feb 28 22:15:46 2016 Vatoutine Artem
*/

#ifndef MY_H_
# define MY_H_

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "struct.h"

int		my_free_tab(char **tab);
char		**convert_tab(char **alg, char **tab);
int		my_putchar(char z);
int		putstr(char *str);
int		my_putchar_error(char z);
int		my_putstr_error(char *src);
int		algo_line(char **tab, int y, char k);
int		algo_cols(char **tab, int x, char k);
int		algo_square(char **tab, int x, int y, char k);
int		algo(char **tab, int pos);
int		check_strlen(char **src);
int		check_nbr(char **src);
int		check_detail(char **src);
int		error_check(char **tab);
int		check_double(char nbr, char *zero);
int		check_col(char **src, char *zero, int y, int x);
int		check_line(char **src, char *zero, int y, int x);
int		square_by_square(char **src, char *zero, int y, int x);
int		check_square(char **src, int y, int x);
char		*fill_zero(char *zero);
int		verif(char **src);
char		**error_malloc();
int		error_basic(char error);
int		error_strlen();
int		error_invalid_char();
int		init_all(char *src);
char		**init_tab(char **buffer);
char		**init_tab_alg(char **buffer);
char		**epur_copy(char **src, char **dest, int line);
char		**tab_tranformer(char **tab, char **alg);
char		**my_str_to_wordtab(char **tab, char *src, char z);
int		my_print_tab(char **tab);

#endif /* MY_H_ */
