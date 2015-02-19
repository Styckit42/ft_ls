/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcabon <tcabon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/19 20:19:33 by tcabon            #+#    #+#             */
/*   Updated: 2015/02/19 21:03:08 by tcabon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ls.h"

int		ft_count(char *path, char *pname)
{
	DIR				*rep;
	struct dirent	*ent;
	int				i;
	char			*error;

	error = ft_strjoin(pname, ":");
	error = ft_strjoin(error, " ");
	error = ft_strjoin(error, path);
	rep = opendir(path);
	i = 0;
	if (rep == NULL)
	{
		perror(error);
		return (0);
	}
	while ((ent = readdir(rep)) != NULL)
		i++;
	closedir(rep);
	return (i);
}
