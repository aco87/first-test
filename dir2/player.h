/**
 * \file player.h
 * \author Andreas Conrads
 * \date 2016/01/08
 * \brief Datie zur Verwaltung der Klasse(n) ::player
 */

#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include <iostream>
#include "set.h"

/**
 * \brief Die Klasse ::player stellt einen Teilernehmer des Kartenspiels ::match dar.
 *
 * Der Spieler kann Karten annehmen und seine Handkarten printen.
 */

class player
{
public:
    player();

    /**
     * @brief getCard
     * @param card
     */
    /// \brief
    void getCard(CARD card);
    /**
     * @brief printCards
     */
    void printCards();

    bool hasBlankTen();

private:
    std::vector<CARD> cards;
};

#endif // PLAYER_H
