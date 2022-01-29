#include "push_swap.h"

int     main(int argc, char *argv[])
{
    t_list  *a;
//    t_list  *b;

    printf("argc %d\n", argc);
    if (argc < 2)
        exit(1);
    a = init(argc, argv);
    print_list(a);
    ft_lstclear(&a, free);
    return (0);
}

