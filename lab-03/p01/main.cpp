#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int num;
  vector<int> n(10);
  vector<string> cmName(10);

  int t = 0;
  cin >> num;

  for (int j = 0; j < num; j++)
  {

    int i, maxNum = 0;

    for (i = 0; i < 10; i++)
    {
      cin >> cmName[i] >> n[i];
      maxNum = max(maxNum, n[i]);
    }
    cout << "Case #" << ++t << ":" << endl;

    for (i = 0; i < 10; i++)
    {
      if (n[i] == maxNum)
      {
        cout << cmName[i] << endl;
      }
    }
  }
}