/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neobi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 15:31:23 by neobi             #+#    #+#             */
/*   Updated: 2020/07/10 15:53:09 by neobi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	start;
	char	end;

	start= 'a';
	 end= 'z';
	 while (start <= end)
	 {
		 ft_putchar(start);
		 start ++;
	 }
 }
