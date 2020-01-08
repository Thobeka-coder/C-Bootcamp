/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsithol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 23:59:02 by thsithol          #+#    #+#             */
/*   Updated: 2020/01/09 00:28:39 by thsithol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_alphabet(void)
{
	int i = 97;

	while (i >= 97 && i <= 122)
	{
		ft_putchar(i);
		i++;
	}
}

int main()
{
	ft_print_alphabet();
	return (0);
}


