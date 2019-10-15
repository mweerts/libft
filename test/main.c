#include <stdio.h>
#include "libft_bonus.h"
#include <time.h>

int	main()
{
	char	*d;
	int n;
	srand(clock());

	for (int i = 0; i < 50000000; i++)
	{
		n = rand();
		d = ft_itoa(n);
		if (atoi(d) != n)
			printf("%s\n%d\n", d, n);
	}
}
