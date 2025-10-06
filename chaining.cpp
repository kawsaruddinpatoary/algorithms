#include <bits/stdc++.h>
using namespace std;

int Hash(int key)
{
    return key % 10;
}

void insert(vector<list<int>> &H, int key)
{
    int index = Hash(key);
    auto it = lower_bound(H[index].begin(), H[index].end(), key);
    H[index].insert(it, key);
}

int main()
{
    vector<list<int>> HT(10);

    insert(HT, 22);
    insert(HT, 42);
    insert(HT, 162);
    insert(HT, 200);
    insert(HT, 120);
    insert(HT, 40);

    for (int i = 0; i < 10; i++)
    {
        list<int> myList = HT[i];
        for (auto val : myList)
        {
            cout << val << " ";
        }
    }
    cout << endl;
    return 0;
}