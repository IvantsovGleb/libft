#include "push_swap.h"

static int     parse_long(const char *str, int *si)
{
    int     flag;
    int     errn;
    long    sl;
    char    *endptr;

    if (ft_isspace(str[0]))
        return (0);
    flag = 1;
    errn = 0;
    sl = ft_strtol(str, &endptr, 10, &errn);
    if (str == endptr || *endptr != '\0' ||
        ((sl == LONG_MIN || sl == LONG_MAX) && errn == ERANGE) ||
        (sl < INT_MIN || sl > INT_MAX))
        flag = 0;
    else
        *si = (int) sl;
    return (flag);
}

static t_list   *init_stack(int n, char *args[])
{
    t_list  *head;
    t_list  *tmp;
    int     *arg;

    head = create_list(n);
    if (!head)
        return ((void *) 0);
    tmp = head;
    while (*args && tmp)
    {
        arg = malloc(sizeof(int));
        if (arg && parse_long(*args++, arg))
        {
            tmp->content = (void *)arg;
            tmp = tmp->next;
        }
        else
        {
            ft_lstclear(&head, free);
            free(arg);
            write(2, "Error\n", 6);
            return ((void *) 0);
        }
    }
    return (head);
}

t_list  *init(int argc, char *argv[])
{
    char    **args;
    t_list  *a;
    int     n;

    if (argc == 2)
    {
        args = ft_split(argv[1], ' ');
        n = count_args(argv[1]);
        a = init_stack(n, args);
        memfree(args);
    }
    else
        a = init_stack(argc - 1, ++argv);
    // ToDo(CHECK FOR DUPLICATES)
    /* if (duplicates(a))
     * {
     *      ft_lstclear(a, free);
     * }
     * else
     *      ToDO(something)
     */
    return (a);
}
