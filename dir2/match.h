#ifndef MATCH_H
#define MATCH_H

#define SIZE_DECKS 2
#define PLAYERS 8

#include <vector>

#include "set.h"
#include "player.h"

/**
 * \brief Die Klasse ::match generiert eine Rund eines Kartenspiels an welchem #PLAYERS Spieler teilnehmen und #SIZE_DECKS Decks verwendet werden.
 *
 * Dabei werden an alle Teilnehmer gleich viele Karten aus den zuvor erstellten Decks zufällig verteilt.
 */

class match
{
public:
    match();
    bool isBlankTen();

private:
    void buildMasterDeck();
    void getCardsFromDeck(deck tDeck);
    void dealCards();
    std::vector<CARD> cards;
    //std::vector<deck> decks;
    deck decks[SIZE_DECKS];
    player players[PLAYERS];
    bool blankTen;

};

#endif // MATCH_H
