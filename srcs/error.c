#include "../includes/minishell.h"

void    ft_error()
{
    if (error == 1)
        ft_printf("\033[0;31mMemmory could not be allocated.\033[0m\n");
    else if (error == 2)
        ft_printf("\033[0;31mNot a valid command.\033[0m\n");
    error = 0;
}