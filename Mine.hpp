/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mine.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnoon <vnoon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 14:25:50 by vnoon             #+#    #+#             */
/*   Updated: 2018/01/14 17:07:57 by jpiniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINE_HPP
# define MINE_HPP

#include "AEntity.hpp"
#include "AEnemy.hpp"
#include "Meteor.hpp"

class Mine : public AEntity, public AEnemy {
    private:
    public:
    Mine(void);
    Mine(Mine const & src);
    ~Mine(void);

    Mine &          operator=(Mine const & rhs);
    void            spawnMeteor(void);  

    void            colisionEffect(AEntity ** entity);
    void            move(void);
    void            patern(void);
    void            setRandSpeed(void);
    void            setRandCoord(void);

    Mine            *factory(void);
    void            destructor(void);
};

#endif
