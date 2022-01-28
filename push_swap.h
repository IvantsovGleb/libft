# ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>
# include <stdio.h>

// temporary
void     print_list(t_list *lst);
//***************

t_list      *create_list(int n);
char        *memfree(char **arrs);
int         count_args(const char *s);

t_list      *init(int argc, char *argv[]);

#endif
