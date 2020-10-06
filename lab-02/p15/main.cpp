#include <iostream>

using namespace std;

int main()
{
    int num;
    int pFound;
    string problem;

    cin >> num;
    cin.ignore();

    for (int i = 0; i < num; i++){

        cin >> problem;
        if(problem == "P=NP")
        {
            cout << "skipped"<< endl;
        }else
        {
            pFound = problem.find("+");

            cout << stoi(problem.substr(0, pFound)) +
                        stoi(problem.substr(pFound, int(problem.length()))) << "\n";
            cin.clear();
        }
    }
}