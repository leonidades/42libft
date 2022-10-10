#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    while (*lst->next != 0)
    {
        del(*lst->content)
        free(*lst->content);
        *lst = *lst->next;
    }
    del(*lst->content)
    free(*lst->content);
}