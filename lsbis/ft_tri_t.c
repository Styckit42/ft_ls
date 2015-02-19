/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tri_t.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcabon <tcabon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/23 21:12:51 by tcabon            #+#    #+#             */
/*   Updated: 2015/02/19 21:16:15 by tcabon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ls.h"

char	**tri_t(char **tab, t_struct e, char *path)
{
	struct stat		file;
	struct stat		file2;
	char			*str1;
	char			*str2;
	int				i;

	i = 0;
	while (tab[i + 1])
	{
		str1 = ft_strjoin(path, tab[i]);
		stat(str1, &file);
		str2 = ft_strjoin(path, tab[i + 1]);
		stat(str2, &file2);
		if (file.st_mtime < file2.st_mtime)
		{
			ft_swaptab(tab + i, tab + i + 1);
			i = 0;
			continue;
		}
		free(str1);
		free(str2);
		i++;
	}
	return (tab);
}
