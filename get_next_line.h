/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashongwe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 10:31:02 by ashongwe          #+#    #+#             */
/*   Updated: 2019/06/27 17:11:17 by ashongwe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE   3
# define MAX_FD      2147483647

# include <unistd.h>
# include "libft/libft.h"

int		get_next_line(const int fd, char **line);

#endif
