
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlst;

	nlst = (t_list *) malloc(sizeof(t_list));
	if (!nlst)
		return (NULL);
	while (lst != NULL)
	{
		ft_lstiter(lst, f);
		if (ft_lstiter(lst, f) == (void))
		{
			del(lst);
			free(lst);
			return (NULL);
		}
		else
			lst = lst->next;
	}
}
