#include "player.h"

/*!
 * \brief player::player
 */
player::player()
{
}

/**
 * \brief player::getCard deals a card to the player
 * \param card which is dealed to the player
 */
void player::getCard(CARD card)
{
    cards.push_back(card);
}

/**
 * \brief player::printCards listet alle Handkarten des Spielers auf.
 */
void player::printCards(){
    for(int i = 0; i < cards.size(); i++)
        std::cout << cards[i].color << " " << cards[i].number << std::endl;
}

bool player::hasBlankTen()
{
    int blank = 1;
    int hasTen = 0;
    int colorOfTen = 0;
    for(int i = 0; i < cards.size(); i++){
        if(cards[i].number == 10){
            hasTen = 1;
            colorOfTen = cards[i].color;
        }
    }

    if (hasTen) {
       for (int i = 0; i < cards.size(); i++){
           if(cards[i].color == colorOfTen && cards[i].number != 10)
               blank = 0;
       }
    }

    if (hasTen && blank) return true;
    else return false;
}
