#include <stdio.h>
#include "libft_bonus.h"
#include <string.h>

int	main()
{
	t_list *l;
	int actual;
	int expected;
	
	l = ft_lstnew(strdup("1"));
	l->next = ft_lstnew(strdup("2"));
	l->next->next = ft_lstnew(strdup("3"));
	l->next->next->next = ft_lstnew(strdup("4"));
	expected = 3;
	actual = ft_lstsize(l);
	printf("%d\n", actual);
}
