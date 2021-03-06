/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Frame.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnoon <vnoon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 12:36:53 by vnoon             #+#    #+#             */
/*   Updated: 2018/01/14 19:46:39 by vnoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAME_HPP
# define FRAME_HPP

#include "AEntity.hpp"
#include "Mine.hpp"
#include "Meteor.hpp"
#include "BaseShip.hpp"
#include "EnemyShip.hpp"
#include <cstdlib>
#include <ctime>
#include <ncurses.h>

class Frame {
    private:
    AEntity         *_ptr;
    WINDOW			*_win;
	int				_endOfGame;
	int				_start;


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
    WINDOW *		getWin(void) const;
	int				getEndOfGame(void) const;
	int				getStart(void) const;

    //setteurs
    void            setPtr(AEntity const & entity);
    void            setWin(WINDOW * win);
	void			setEndOfGame(int i);
	void			setStart(int i);
};


#endif
