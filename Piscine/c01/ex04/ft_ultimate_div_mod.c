/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:44:07 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/02/03 12:36:29 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	mod;

	mod = *a % *b;
	*a = *a / *b;
	*b = mod;
}

/*int	main(void)
{
	int *a;
	int *b;
	int div;
	int mod;

	a = &div;
	b = &mod;

	div = 20;
	mod = 15;

	ft_ultimate_div_mod(a, b);
	printf("Resultat division : %d\nModulo : %d", *a, *b);	
}*/
