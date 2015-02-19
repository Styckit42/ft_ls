/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_right.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcabon <tcabon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/19 21:07:35 by tcabon            #+#    #+#             */
/*   Updated: 2015/02/19 21:11:11 by tcabon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ls.h"

void	ft_rights(mode_t rights)
{
	if (S_ISDIR(rights))
		ft_putstr("d");
	else if (S_ISLNK(rights))
		ft_putstr("l");
	else if (S_ISBLK(rights))
		ft_putstr("b");
	else if (S_ISCHR(rights))
		ft_putstr("c");
	else if (S_ISFIFO(rights))
		ft_putstr("p");
	else if (S_ISSOCK(rights))
		ft_putstr("s");
	else
		ft_putstr("-");
	((rights & S_IRUSR) != 0) ? ft_putstr("r") : ft_putstr("-");
	((rights & S_IWUSR) != 0) ? ft_putstr("w") : ft_putstr("-");
	((rights & S_IXUSR) != 0) ? ft_putstr("x") : ft_putstr("-");
	((rights & S_IRGRP) != 0) ? ft_putstr("r") : ft_putstr("-");
	((rights & S_IWGRP) != 0) ? ft_putstr("w") : ft_putstr("-");
	((rights & S_IXGRP) != 0) ? ft_putstr("x") : ft_putstr("-");
	((rights & S_IROTH) != 0) ? ft_putstr("r") : ft_putstr("-");
	((rights & S_IWOTH) != 0) ? ft_putstr("w") : ft_putstr("-");
	((rights & S_IXOTH) != 0) ? ft_putstr("x  ") : ft_putstr("-  ");
}
