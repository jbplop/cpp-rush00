/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Projectile.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnoon <vnoon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 14:08:54 by jpiniau           #+#    #+#             */
/*   Updated: 2018/01/13 15:31:02 by vnoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROJECTILE_HPP
# define PROJECTILE_HPP

#include "AEntity.hpp"

class Projectile : public AEntity
{
	public :
		Projectile(void);
		Projectile(Projectile & const src);
		Projectile(char appearence, int x, int y, int speedX, int speedY,
					int frameAdvanceX, int frameAdvanceY, int hp, int armor,
					int allegiance, bool isJustDestroyed, int damage, int range);
		Projectile(int damage, int range);
		~Projectile(void);

		Projectile &	operator=(Projectile & const rhs);
		int				getDamage(void) const;
		int				getRange(void) const;
		void			setDamage(int value);
		void			setRange(int value);

	private :
		int	_damage;
		int	_range;
};

#endif
