

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *node;
	t_list *n_alst;

	n_alst = *alst;
	while (n_alst != NULL)
	{
		node = n_alst->next;
		del(n_alst, n_alst->content_size);
		n_alst = node;
	}
	*alst = NULL;
}
