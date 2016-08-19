#include "match.h"

/**
 * \brief match::match Erstellt das Masterdeck aus bestehenden Decks und verteilt die Karten an alle Spieler.
 */
match::match()
{

    static int matchId = 0;
    std::cout << "Match: " << matchId++ << std::endl;
    buildMasterDeck();
    dealCards();

    //players[0].printCards();
    blankTen = false;
    for(int i = 0; i < PLAYERS; i++){
        if(players[i].hasBlankTen()){
            blankTen = true;
            players[i].printCards();
            break;
        }
    }

}

bool match::isBlankTen(){
    return blankTen;
}

/**
 * \brief match::buildMasterDeck Wählt alle verfügbaren Decks aus um ihre Karten einzusammeln.
 */
void match::buildMasterDeck()
{
    for(int i = 0; i < SIZE_DECKS; i++)
        getCardsFromDeck(decks[i]);
}

/*!
 * \author Andreas Conrads
 * \date 4.1.1
 * \brief match::getCardsFromDeck Verschiebt die Karten von tDeck in #cards.
 * \details Nimmt alle Karten (::CARD) in zufälliger Reinfolge aus dem übergebenem Deck (#deck) und sortierte sie in die Liste aller gesammelten Karten #cards der Klasse #match ein.
 * \param tDeck Deck aus welchem die Karten in das Masterdeck #cards verschoben werden.
 * \todo Es gibt hier nichts mehr zutun!
 * \bug Es ist kein Bug vorhanden.
 */
void match::getCardsFromDeck(deck tDeck){
    std::vector<CARD> tcards = tDeck.getCards();
    while(!tDeck.isEmpty())
        cards.push_back(tDeck.getRandomCard());
}

/**
 * \brief match::dealCards verteilt die Karten des Spiels gleichmäßig an alle Spieler
 * \code{c++}
 */
void match::dealCards(){

    int i = 0;
    while(i < cards.size()){
        players[i%PLAYERS].getCard(cards[i]);
        i++;
    }

}
/**
  * \endcode
  */

class doxygenTest
{
public:
    doxygenTest();
private:
    int gefunden;
};
