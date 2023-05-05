/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 09:18:16 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/02/06 11:38:47 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] <= 64)
		{
			return (0);
		}
		else if (str[i] >= 91 && str[i] <= 96)
		{
			return (0);
		}
		else if (str[i] >= 123 && str[i] <= 127)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main(void)
{
	char str[20] = "TES";
	ft_str_is_alpha(str);
	return (0);
}*/
