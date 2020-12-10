#include <iostream>
#include <vector>

using namespace std;

class BlockWorld
{
    vector<vector<int>> mData;
    friend ostream &operator<<(ostream &out, const BlockWorld &world);

    void findBlock(int a, int &x, int &y)
    {
        for (int i = 0; i < int(mData.size()); i++)
        {
            for (int j = 0; j < int(mData[i].size()); ++j)
            {
                if (mData[i][j] == a)
                {
                    x = i;
                    y = j;
                    return;
                }
            }
        }
    }

    void putBack(int x, int a)
    {
        while (!mData.empty() && mData[x].back() != a)
        {
            mData[mData[x].back()].push_back(mData[x].back());
            mData[x].pop_back();
        }
    }

    void pileBlocks(int d, int x, int y)
    {
        int c = 0;
        for (int i = y; i < int(mData[x].size()); i++, c++)
        {
            mData[d].push_back(mData[x][i]);
        }
        for (int i = 0; i < c; i++)
        {
            mData[x].pop_back();
        }
    }

public:
    BlockWorld(int n)
        : mData(n) // initialization
    {
        for (int i = 0; i < n; i++)
        {
            mData[i].push_back(i);
        }
    }

    void moveOnto(int a, int b)
    {
        int xA;
        int yA;

        findBlock(a, xA, yA);

        int xB;
        int yB;

        findBlock(b, xB, yB);

        if (xA == xB)
        {
            return;
        }

        putBack(xA, a);
        putBack(xB, b);

        mData[xB].push_back(a);
        mData[xA].pop_back();
    }

    void moveOver(int a, int b)
    {
        int yA;
        int xA;

        findBlock(a, xA, yA);

        int xB;
        int yB;

        findBlock(b, xB, yB);

        if (xA == xB)
        {
            return;
        }

        putBack(xA, a);

        mData[xB].push_back(a);
        mData[xA].pop_back();
    }

    void pileOnto(int a, int b)
    {
        int xA;
        int yA;

        findBlock(a, xA, yA);

        int xB;
        int yB;

        findBlock(b, xB, yB);

        if (xA == xB)
        {
            return;
        }

        putBack(xB, b);
        pileBlocks(xB, xA, yA);
    }

    void pileOver(int a, int b)
    {
        int xA;
        int yA;

        findBlock(a, xA, yA);

        int xB;
        int yB;

        findBlock(b, xB, yB);

        if (xA == xB)
        {
            return;
        }

        pileBlocks(xB, xA, yA);
    }
};

ostream &operator<<(ostream &out, const BlockWorld &world)
{
    for (int i = 0; i < int(world.mData.size()); ++i)
    {
        out << i << ":";
        for (int j = 0; j < int(world.mData[i].size()); j++)
        {
            out << " " << world.mData[i][j];
        }
        out << "\n";
    }
    return out;
}

int main()
{
    int n;
    cin >> n;

    BlockWorld world(n);

    for (;;)
    {
        string cmd;
        cin >> cmd;

        if (cmd == "quit")
        {
            break;
        }

        int a;
        cin >> a;
        string p;
        cin >> p;
        int b;
        cin >> b;

        if (cmd == "move" && a != b)
        {
            if(p == "onto")
            {
            world.moveOnto(a, b);
            }
            else
            {
                world.moveOver(a, b);
            }
        }
        else if(cmd == "pile" && a != b)
        {
            if(p == "onto")
            {
                world.pileOnto(a, b);
            }
            else
            {
                world.pileOver(a, b);
            }

        }
    }

    cout << world << endl;
}