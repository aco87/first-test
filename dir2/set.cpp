#include "set.h"

/**
 * \brief deck::deck Füllt ein Deck mit #COLORS*#NUMBERS Karten auf.
 */
deck::deck()
{
    CARD tCard;
    for(int i = 0; i < COLORS; i++){
        tCard.color = i;
        for(int j = 0; j < NUMBERS + LOWEST_NUM; j++){
            tCard.number = j;
            cards.push_back(tCard);
        }
    }
}

/**
 * \brief deck::getRandomCard zieht eine zufällige Karte auf dem Kartendeck und entfernt diese.
 * \return gezogene Karte.
 */
CARD deck::getRandomCard(){
    srand(unsigned(time(NULL)));
    int i = (rand() % cards.size());
    CARD tCard;
    tCard = cards[i];
    remove(cards, i);

    return tCard;
}

/**
 * \brief deck::remove Entfernt aus dem Vector vec das Item an der Stelle pos.
 * \param vec vector aus welchem ein Item entfernt werden soll.
 * \param pos Position von welchem das Item entfernt werden soll.
 */
void deck::remove(std::vector<CARD>& vec, size_t pos)
{
    std::vector<CARD>::iterator it = vec.begin();
    std::advance(it, pos);
    vec.erase(it);
}
