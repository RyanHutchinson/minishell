#include "../includes/minishell.h"

void    ft_error(int code)
{
    if (code == 1)
    {
        printf("Memmory could not be allocated. BAD exit\n");
        exit (0);
    }
}