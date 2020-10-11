#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int numOfPeople;
    cin >> numOfPeople;
    numOfPeople = numOfPeople - 1;

    vector<int> queue(numOfPeople);

    for (int i = 1; i <= numOfPeople; i++){
        int a;
        cin >> a;
        queue[a] = i + 1;
    }
    cout << "1 "; // Jimmy

    for (auto i : queue){
        cout << i << " ";
    }
}
