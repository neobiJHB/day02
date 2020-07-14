/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neobi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 16:41:29 by neobi             #+#    #+#             */
/*   Updated: 2020/07/14 11:25:46 by neobi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)

void	ft_print_reverse_alphabet(void)
{
 		int start;	
		int end;
	
		start= 'z';

		while (start >= 'a') 
		{
			ft_putchar(start);
			start--;
		}	
} 
