
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*tmp;

	if (lst == NULL || del == NULL)
		return (void);
	tmp = lst;
	ft_lstiter(lst, del);
	lst = lst->next;
	free(tmp);
}
