#include "libft.h"
#include <stdio.h>


int main()
{
	int str = 2;
	char	*str2 = "zbruh";
	char	*str3 = "lolilol";
	t_list	*liste;
	t_list	*elem1;
	t_list	*elem2;
	t_list	*elem3;

	elem1 = ft_lstnew(&str);
	elem2 = ft_lstnew(str);
//	elem3 = ft_lstnew(str);
	liste = elem1;
	//ft_lstadd_front(&liste, elem3);
	//ft_lstadd_front(&liste, elem2);
//	ft_lstadd_front(&liste, elem1);
	printf("%d", (int)liste->content);
	//	liste = liste->next;
}
