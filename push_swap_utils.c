#include "push_swap.h"

t_list  *create_list(int n)
{
    t_list  *head;
    t_list  *new;
    int     i;

    if (n <= 0)
        return ((void *) 0);
    new = ft_lstnew(0);
    if (!new)
        return ((void *) 0);
    head = new;
    i = 1;
    while (i++ < n)
    {
        new = ft_lstnew(0);
        if (!new)
        {
            ft_lstclear(&head, free);
            return ((void *) 0);
        }
        ft_lstadd_back(&head, new);
    }
    return (head);
}

int     count_args(const char *s)
{
    int	count;
    size_t	i;

    count = 0;
    i = 0;
    while (s[i])
    {
        if ((s[i + 1] && s[i] != ' ' && s[i + 1] == ' ')
            || (s[i] != ' ' && !s[i + 1]))
            count++;
        i++;
    }
    return (count);
}

char	*memfree(char **arrs)
{
    size_t	i;

    i = 0;
    while (arrs[i])
        free(arrs[i++]);
    free(arrs);
    return (NULL);
}

void     print_list(t_list *lst)
{
    t_list  *tmp;

    tmp = lst;
    while (tmp)
    {
        printf("%d\n", *((int *)(tmp->content)));
        tmp = tmp->next;
    }
}