#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v)
{ // if we use only v it creates copy which take  O(n) time complaexity so always use &v.
    cout << "size : " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl; // v.size() --> O(1)
}

int main()
{
    vector<int> v[10]; // it creates 10 vectors of size 0

    int N;
    cin >> N;
    vector<int> v1[N];
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            v1[i].push_back(x);
        }
    }

    // printing
    for (int i = 0; i < N; i++)
    {
        printVec(v1[i]);
    }

    return 0;
}
