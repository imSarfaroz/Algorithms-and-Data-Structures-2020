#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int courses, categories;


    while (cin >> courses && courses > 0)
    {
        cin >> categories;
        vector<string> allCourses;

        // chosen courses
        for (int i = 0; i < courses; i++)
        {
            string course;
            cin >> course;
            allCourses.push_back(course);
        }

        bool willGraduate = true;
        for (int i = 0; i < categories; i++)
        {
            int numOfCourses, minNumOfCourses;
            cin >> numOfCourses >> minNumOfCourses;

            for (int j = 0; j < numOfCourses; j++)
            {
                string course;
                cin >> course;
                if (find(allCourses.begin(), allCourses.end(), course) != allCourses.end()){
                    minNumOfCourses--;
                }
            }
            if (minNumOfCourses > 0)
                willGraduate = false;
        }

        cout << (willGraduate ? "yes" : "no") << endl;

        allCourses.clear();
    }
}