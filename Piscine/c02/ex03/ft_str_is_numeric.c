/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 11:42:41 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/02/06 12:07:02 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] <= 47)
		{
			return (0);
		}
		else if (str[i] >= 58 && str[i] <= 127)
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

    ft_str_is_numeric(str);
    return (0);
}*/
