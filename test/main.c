#include <stdio.h>
#include "libft_bonus.h"

int	main()
{
	t_list *liste;
	t_list *elem1;
	t_list *elem2;
	t_list *elem3;
	t_list *elem4;
	t_list *elem5;

	liste = NULL;
	elem1 = ft_lstnew("a");
	elem2 = ft_lstnew("bb");
	elem3 = ft_lstnew("ccc");
	elem4 = ft_lstnew("dddd");
	elem5 = ft_lstnew("eeeee");
	ft_lstadd_back(&liste, elem5);
	ft_lstadd_back(&liste, elem4);
	ft_lstadd_back(&liste, elem3);
	ft_lstadd_back(&liste, elem2);
	ft_lstadd_back(&liste, elem1);

	/*ft_lstadd_front(&liste, elem5);
	ft_lstadd_front(&liste, elem4);
	ft_lstadd_front(&liste, elem3);
	ft_lstadd_front(&liste, elem2);
	ft_lstadd_front(&liste, elem1);
	*/
	while (liste)
	{
		printf("%s\n", (char*)liste->content);
		liste = liste->next;
	}
	
}
