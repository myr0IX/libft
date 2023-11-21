typedef struct s_list
{
	void * content;
	struct s_list *next;
}	t_list;
/* 
#include <stdlib.h>
int	main(void)
{
	t_list *head;

	head = (t_list *)malloc(sizeof(t_list));
	head->content = 5;
	head->next = NULL;

	t_list *suite;

	suite = (t_list *)malloc(sizeof(t_list));
	suite->content = 10;
	suite->next = NULL;
	head->next = suite;
}
 */
t_list *ft_lstnew(void *content)
{
	t_list *head;

	head = (t_list *)malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head->content = content;
	head->next = NULL;
	return (head);
}
