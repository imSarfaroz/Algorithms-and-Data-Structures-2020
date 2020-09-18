#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    // Java: ArrayList<Integer> = new ArrayList<Integer>();

    vector<int> v1;
    cout << v1.size();
    v1.push_back(1);
    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(4);
    v2.push_back(5);
    v2.push_back(6);

    for (int i = 0; i < int(v1.size()); ++i)
    {
        cout << v[i] << "\n";
    }

    cout << "---\n";

    reverse(v1.begin, v1.end());

    for(int e : v1){
        cout << e << "\n";
    }

    vector<int> v2 = {1, 2, 3, 4, 5, 6};
    for(int e: v2){
        cout << e << "\n";
    }

    vector<int> v3(26, 0);
    char ch;
    while(cin >> ch){
        ++v3[ch - 'a'];
    }

    for(int e : v3){
        cout << e << "\n";
    }

    vector<vector<int>> v4(10, vector<int>(10));

    for (int i = 0; i < (int)v4.size(); ++i){
        for (int j = 0; j < (int)v4[i].size(); ++j){
            v4[i][j] = (i + 1) * (j * 1);
        }
    }

    for(auto &raw : table){
        for(auto e : row){
            cout << setw(5) << e;
        }
        cout << "\n";
    }
}