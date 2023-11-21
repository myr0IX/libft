
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*before;

	if (*lst == NULL || del == NULL)
		return (void);
	tmp = *lst;
	while (tmp != NULL)
	{
		ft_lstdelone(tmp, del);
		before = tmp;
		free(before);
	}
	*lst = NULL;
}
