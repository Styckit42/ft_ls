/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swaptab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcabon <tcabon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/20 19:28:48 by tcabon            #+#    #+#             */
/*   Updated: 2015/02/02 18:58:45 by tcabon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swaptab(char **a, char **b)
{
	char *tmp;

	if (!a || !b)
		return ;
	tmp = *b;
	*b = *a;
	*a = tmp;
}
