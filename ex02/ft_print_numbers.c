/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neobi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 15:46:13 by neobi             #+#    #+#             */
/*   Updated: 2020/07/15 13:31:54 by neobi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{	
	int		start;
	int		end;

	start= '0';
	end= '9';
	while(start <= end)
 {
	ft_putchar(start);
	start ++;
 }

}
