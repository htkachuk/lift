/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htkachuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 21:17:42 by htkachuk          #+#    #+#             */
/*   Updated: 2017/11/03 21:17:45 by htkachuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isascii(int k)
{
	if (k >= 0 && k < 128)
		return (1);
	return (0);
}