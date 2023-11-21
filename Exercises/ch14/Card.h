using namespace std;
enum Suit {NONE, CLUBS, DIAMONDS, HEARTS, SPADES};
enum Rank {JOKER, TWO=2, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT,
           NINE, TEN, JACK, QUEEN, KING, ACE};
struct Card
{
    Rank rank;
    Suit suit;

    Card(Suit s, Rank r);
    std::string to_string() const;
};

struct Deck {
    std::vector<Card> cards;

    Deck(int n);
    Deck();

    // functions
    void print() const;
    void shuffle();
    int find(Card& card);
    int find_lowest(int l, int h);
    void swap_cards(int c1, int c2);
    void sort();
    void merge_sort();
};
