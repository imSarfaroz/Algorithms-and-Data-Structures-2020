#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num;

    cin >> num;
    for (int i = 0; i < num; i++){

        string name;
        string secSchool;
        string birth;

        int numCourses;
        

        cin >> name >> secSchool >> birth;
        cin >> numCourses;

        cout << name << " ";
        
        if(secSchool >= "2010/00/00"){
            cout << "eligible" << endl;
            continue;
        }

        if (birth >= "1991/00/00"){
            cout << "eligible" << endl;
            continue;
        }

        if (numCourses > 40){
            cout << "ineligible" << endl;
            continue;
        }

        cout << "coach petitions" << endl;
    }
}