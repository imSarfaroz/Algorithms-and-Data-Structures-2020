#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include <stack>

using namespace std;
void calculate(string position, vector<pair<string, string>> &vec);

int main()
{
    vector<pair<string, string>> vec;
    string position;

    int cases;
    int numOfPeople;
    cin >> cases;
    for (int i = 0; i < cases; i++)
    {
        cin >> numOfPeople;
        cin.ignore();
        for (int j = 0; j < numOfPeople; j++)
        {
            getline(cin, position);
            calculate(position, vec);
        }

        //sort the vector
        stable_sort(vec.begin(), vec.end());
        for (auto &a : vec)
        {
            cout << get<1>(a) << '\n';
        }

        // printing 30 "="
        for (int i = 0; i < 30; i++)
        {
            cout << '=';
        }
        cout << '\n';
        vec.clear(); //for next cases
    }
}

void calculate(string position, vector<pair<string, string>> &vec)
{
    stack<string> container;
    string name, classes;

    string classtype = "";
    int difference = 0;

    istringstream ss(position);
    getline(ss, name, ':'); // Geting the name

    ss.ignore(); // Ignoring the space after the ':'

    while (getline(ss, classes, '-')) //getting words after name
    {
        if (classes == "upper" || classes == "upper class")
        {
            classes = '1';
        }
        else if (classes == "middle" || classes == "middle class")
        {
            classes = '2';
        }
        else if (classes == "lower" || classes == "lower class")
        {
            classes = '3';
        }
        container.push(classes); // storing the data into container
    }

    if (container.size() < 10)
    {
        difference = 10 - container.size();
    }
    while (!container.empty())
    {
        classtype = classtype + container.top(); // top() reference the top(or the newest) element
        container.pop();                         //Removes the element on top of the stack
    }

    for (int i = 0; i < difference; i++)
    {
        classtype = classtype + '2';
    }

    vec.push_back(pair<string, string>(classtype, name)); // insert into array
}