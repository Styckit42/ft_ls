/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_files.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcabon <tcabon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/19 20:23:38 by tcabon            #+#    #+#             */
/*   Updated: 2015/02/19 21:05:09 by tcabon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ls.h"

char	**ft_files(char **tab, char *path)
{
	DIR				*rep;
	struct dirent	*ent;
	int				i;

	rep = opendir(path);
	i = 0;
	if (rep == NULL)
	{
		perror("erreur :");
		return (NULL);
	}
	while ((ent = readdir(rep)) != NULL)
	{
		tab[i] = ft_strdup(ent->d_name);
		i++;
	}
	tab[i] = NULL;
	closedir(rep);
	return (tab);
}
