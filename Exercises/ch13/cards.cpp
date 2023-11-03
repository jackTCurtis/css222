#include <iostream>
#include <cstring>
using namespace std;

struct Card {
    int suit, rank;
    Card();
    Card(int s, int r);
};

Card::Card(){
    suit = 0; rank = 0;
}

Card::Card(int s, int r){
    suit = s; rank =r ;
}

string Card::to_string()const{
    vector<string> suit_strings = {"Clubs","Spades","Hearts","Diamonds"};
    vector<string> rank_strings = {"","Ace","2","3","4","5","6","7","8","9","10","Jack","Queen","King"};

    return rank_strings[rank] +" of "+ suit_strings[suit];
}

bool Card::equals(const Card& c2) const{
    return (rank==c2.rank && suit == c2.suit);
}
bool Card::is_greater(const Card& c2) const
{
    // first check the suits
    if (suit > c2.suit) return true;
    if (suit < c2.suit) return false;

    // if suits are equal, check ranks
    if (rank > c2.rank) return true;
    if (rank < c2.rank) return false;

    // if ranks are equal too, 1st card is not greater than the 2nd
    return false;
    if (suit < c2.suit) return false;
}
int main(){
    vector<Card> deck(52);
    Card card1(1,11);
    Card card2(1,11);
    if (card1.is_greater(card2)){
        cout << card1.to_string()<< " is greater than " <<card2.to_string()<< endl;
    }
}