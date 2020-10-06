#include <iostream>

using namespace std;

int main()
{
    int num;
    string a;
    cin >> num;
    cin.ignore();

    bool isValid = true;
    for (int i = 0; i < num; i++){
    
        cin >> a;
        if(a != "mumble"){
  
        if(stoi(a) != i + 1){
            isValid = false;
             }
        }
    }

        if(isValid){
            cout << "makes sense" << endl;
        }else
        {
            cout << "something is fishy" << endl;
        }
        cin.clear();
        }

