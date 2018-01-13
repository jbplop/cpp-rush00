/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Frame.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnoon <vnoon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 12:36:53 by vnoon             #+#    #+#             */
/*   Updated: 2018/01/13 19:39:16 by vnoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAME_HPP
# define FRAME_HPP

#include "AEntity.hpp"
#include "Mine.hpp"
#include "Meteor.hpp"
#include <cstdlib>
#include <ctime>


class Frame {
    private:
    AEntity         *_ptr;


    public:
    Frame(void);
    Frame(Frame const & src);
    ~Frame(void);

    Frame &         operator=(Frame const & rhs);
    
    void            generateFrame(void);
    void            spawnRandomEnemy(void);
    void            updateAll(void);

    //getteurs
    AEntity const & getPtr(void) const;

    //setteurs
    void            setPtr(AEntity const & entity);
};


#endif