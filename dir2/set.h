#ifndef SET_H
#define SET_H

#define SET_SIZE 32
#define LOWEST_NUM 7
#define NUMBERS 7
#define COLORS 4

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>


/**
 * \brief CARD ist ein Struct zur Darstellung von Karten.
 *
 * Dabei gibt Number die Nummer (7, 8, 9, 10, K, O, U, A) an und color steht für die ID einer Farbe.
 */
struct CARD{
    int number;
    int color;
};

/**
 * @brief Die Klasse deck repräsentiert ein gewöhnliches Kartendeck.
 *
 * Hier dient sie um größere Kartendecks innerhalb eines Matches zusammen zu stellen.
 */
class deck
{
public:
    deck();
    std::vector<CARD> getCards(void){return cards;}
    int isEmpty(){return cards.empty();}
    CARD getRandomCard();

private:
   void remove(std::vector<CARD>& vec, size_t pos);
  std::vector<CARD> cards;
};

#endif // SET_H
