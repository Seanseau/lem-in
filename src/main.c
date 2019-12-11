/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cgarrot <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/11 19:33:43 by cgarrot      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/11 19:33:44 by cgarrot     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/lemin.h"
#include <stdio.h>

int		main(void)
{
	t_name	*name;
	t_link	*link;
	t_map	map;
	t_bfs   bfs;
	t_path  path;
	/*t_display   display;*/
	int 	ret;

	init_value(&map);
	ret = parser(&name, &link, &map);
	if (ret != 1)
		return (print_and_return(ret));
	ret = set_map(&name, &link, &map);
	if (ret != 1)
		return (print_and_return(ret));
	ret = set_matrix(&map);
	if (ret != 1)
		return (print_and_return(ret));
	clear(&name, &link);
	ret = print_and_return(ret);
	begin_bfs(&map, map.inf.start);
    clear_path(&map, /*&display,*/ &path, &bfs);

	printf("ca marche sauf si ya error");
	return (ret);
}
