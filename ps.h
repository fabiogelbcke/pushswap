/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/13 16:36:24 by fschuber          #+#    #+#             */
/*   Updated: 2015/06/13 17:50:25 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_H
# define PS_H

typedef struct		s_no
{
	int				value;
	struct s_no		*next;
}					t_no;

# include <unistd.h>
# include <stdlib.h>
# include "libft/Includes/libft.h"

#endif
