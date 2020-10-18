#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> ranks = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"};
vector<string> suits = {"Clubs", "Diamonds", "Hearts", "Spades"};

vector<int> createDeck();
void printDeck(const vector<int> &deck);
void applyShuffleToDeck(vector<int> &deck, const vector<int> &shuffle);
vector<vector<int>> readShuffles();

int main()
{
    int tests;
    cin >> tests;
    for (int test = 0; test < tests; ++test){
        auto shuffles = readShuffles();
        auto deck = createDeck();

        for (string line; getline(cin, line) && !line.empty();)
        {
            int n = stoi(line);
            applyShuffleToDeck(deck, shuffles[n - 1]);
        }
        if(test != 0){
            cout << "\n";
        }
        printDeck(deck);
    }
}
 

void applyShuffleToDeck(vector<int> &deck, const vector<int> &shuffle)
{
    vector<int> newDeck(52);

    for (int i = 0; i < 52; ++i){
        newDeck[i] = deck[shuffle[i]];
    }

    deck = newDeck;
}

    vector<vector<int>> readShuffles()
    {
        int shuffles;
        cin >> shuffles;
        vector<vector<int>> r(shuffles, vector<int>(52));

        for (int shuffle = 0; shuffle < shuffles; ++shuffle)
        {
            for (int i = 0; i < 52; ++i){
                cin >> r[shuffle][i];
                --r[shuffle][i];     
            }
        }
        cin.ignore(1024, '\n');

        return r;
    }



vector<int> createDeck()
{
    vector<int> r(52);

    for (int i = 0; i < 52; ++i){
        r[i] = i;
    }

        return r;
}

void printDeck(const vector<int> &deck)
{
    for(int card: deck)
    {
        cout << ranks[card % 13] << " of " << suits[card / 13] << "\n";
    }
}