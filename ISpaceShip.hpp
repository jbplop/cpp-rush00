/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceShip.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 13:03:54 by jpiniau           #+#    #+#             */
/*   Updated: 2018/01/13 13:25:06 by jpiniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACESHIP_HPP
# define ISPACESHIP_HPP

class ISpaceShip
{
	public :
		virtual void	shoot(void) const = 0;

	private :
		virtual void	ISpaceShip(void) const = 0;
		virtual void	~ISpaceShip(void) const = 0;
}

#endif