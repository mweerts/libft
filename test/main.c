#include <stdio.h>
#include "libft.h"

int	main()
{
	t_list *liste;
	t_list *elem1;
	t_list *elem2;

	liste = NULL;
	elem1 = NULL;
	elem2 = NULL;
	elem1 = ft_lstnew("coucou");
	elem2 = ft_lstnew("bb");
	ft_lstadd_front(&liste, elem2);
	ft_lstadd_front(&liste, elem1);
	
	while (liste)
	{	
		printf("%s\n", liste->content);
		liste = liste->next;
	}
}
