/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makpolat <makpolat@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:46:11 by makpolat          #+#    #+#             */
/*   Updated: 2024/11/02 12:29:54 by makpolat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(const char *s, char c)
{
	int	i;
	int	count;
	int	end;

	end = 0;
	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			count++;
		while (s[i] != c)
			end++;
		i++;
	}
}


char	**ft_split(char const *s, char c)
{
	int		i;
	char	*ptr;
	char	**tab;

	*tab = ptr;
	i = ft_count(s,c);
	while (s[i])
	{
		
	}
	
}


int main()
{
	char *s = ",,,,Muhammed,,Emre,,,AKPOLAT";
	printf("%s", ft_split(s, ','));
}


   // ,,,muhammed,,emre,,,,akpolat;