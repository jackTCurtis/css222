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
int main(){
    Card card1(1,11);
    Card card2(1,11);
    if (card1.equals(card2)){
        cout<<"Yup, that's the same card"<<endl;
    }
}