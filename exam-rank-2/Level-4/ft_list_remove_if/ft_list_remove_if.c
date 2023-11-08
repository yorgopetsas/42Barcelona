#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	if (begin_list == NULL || *begin_list == NULL )
		return ;
	t_list	*tmp;
	
	tmp = *begin_list;
	if (cmp(tmp->data, data_ref) == 0)
	{
		*bing_list = tmp;
		free(tmp);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	tmp = *begin_list;
	ft_list_remove_if(&tmp->next, data_ref, cmp);
	
}