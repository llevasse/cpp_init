/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   floor.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:30:24 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/27 17:31:47 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

typedef struct s_floor {
	struct s_floor	*next;
	AMateria		*addr;
}	t_floor ;

void	add_back_floor(t_floor **floor, AMateria *addr);
