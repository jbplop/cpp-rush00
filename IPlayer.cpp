/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IPlayer.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnoon <vnoon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 16:10:38 by jpiniau           #+#    #+#             */
/*   Updated: 2018/01/13 18:53:32 by vnoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IPlayer.hpp"

IPlayer::IPlayer(void) {
    return;
}

IPlayer::IPlayer(IPlayer const & src) {
    *this = src;
    return;
}
