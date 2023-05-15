/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <jdoffemo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:01:31 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/05/12 11:10:26 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char *s, char c)
{
	int		cpt;
	int		i;

	cpt = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			cpt++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (cpt);
}

static	void	ft_free_array(char **a, int i)
{
	while (i >= 0)
	{
		free(a[i]);
		i--;
	}
	free(a);
}

static size_t	ft_len_word(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (*s && *s != c)
	{
		s++;
		len++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	int					i;
	unsigned int		start;
	char				**tab;

	i = 0;
	start = 0;
	tab = ft_calloc(sizeof(char *), (ft_count_words((char *)s, c) + 1));
	if (!tab)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			tab[i] = ft_substr(s, 0, ft_len_word(s, c));
			if (tab[i] == NULL)
				ft_free_array(tab, i);
			i++;
			s += ft_len_word(s, c);
		}
		else
			s++;
	}
	tab[i] = NULL;
	return (tab);
}

/*int   main()
{
	char **tab = ft_split("", ' ');
	for (int k = 0; k < 10; k++)
	{
    	printf("ft_split :%s\n", tab[k]);
	}
	// for (int i = 0; i < 5; i++)
	// {
		
    // 	printf("ft_split :%s\n", ft_split("testbtestbtest", ','));
	// }
}*/
