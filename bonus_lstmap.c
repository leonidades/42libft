#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    while (lst->next != 0)
    {
        f(lst->content);
        lst = lst->next;
    }
    return (lst);
}