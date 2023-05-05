/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:12:22 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/02/03 11:38:25 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* int	main()
{
	int a;
	int b;
	int div;
	int mod;

	a = 20;
	b = 15;

	ft_div_mod(a, b, &div, &mod);
	printf("Resultat de la div : %d\nModulo : %d", div, mod);
} */
