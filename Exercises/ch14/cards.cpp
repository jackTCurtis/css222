#include <iostream>
#include <cstring>
#include "Card.h"
using namespace std;

struct Deck;

int find(const Deck& deck) const;

Card::Card(){
    suit = SPADES;
    rank = ACE;
};
Card::Card(Suit s, Rank r){
    suit = s;
    rank = r;
}

string Card::string to_string() const{

    switch(suit) {
        case CLUBS: return "Clubs";
        case DIAMONDS: return "Diamonds";
        case HEARTS: return "Hearts";
        case SPADES: return "Spades";
        default: return "Not a valid suit";
    }

    switch(rank) {
        case JOKER: return "Joker";
        case ACE: return "Ace";
        case TWO: return "Two";
        case THREE: return "Three";
        case FOUR: return "Four";
        case FIVE: return "Five";
        case SIX: return "Six";
        case SEVEN: return "Seven";
        case EIGHT: return "Eight";
        case NINE: return "Nine";
        case TEN: return "Ten";
        case JACK: return "Jack";
        case QUEEN: return "Queen";
        case KING: return "King";
        default: return "Not a valid rank"
    }

}

//deck initializer

struct Deck {
    vector<Card> cards;

    Deck(int n);
};

Deck::Deck(int size)
{
    vector<Card> temp(size);
    cards = temp;
}
Deck::Deck()
{
    vector<Card> temp(52);
    cards = temp;
    int i = 0;
    for (Suit suit = CLUBS; suit <= SPADES; suit = Suit(suit+1)) {
        for (Rank rank = ACE; rank <= KING; rank = Rank(rank+1)) {
            cards[i].suit = suit;
            cards[i].rank = rank;
            i++;
        }
    }
}
void Deck::print() const
{
    for (int i = 0; i < cards.size(); i++) {
        cout << cards[i].to_string() << endl;
    }
}
int Card::find(const Deck& deck) const
{
    for (int i = 0; i < deck.cards.size(); i++) {
        if (deck.cards[i].equals(*this)) return i;
    }
    return -1;
}