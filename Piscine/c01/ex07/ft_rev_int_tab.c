/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 12:54:31 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/02/07 10:45:56 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;
	temp = 0;
	while (i < j / 2)
	{
		temp = tab[i];
		tab[i] = tab[j - i];
		tab[j - i] = temp;
		i++;
	}
}
/*int	main()
{
	int	tab[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8};

	ft_rev_int_tab(tab, 9);
	return (0);
}*/
