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
    int N;
    cin >> N;
    vector<vector<int>> v1;
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);   
        }
        v1.push_back(temp);
    }
    v1[0].push_back(10); //v1[0] is a vector
    v1.push_back(vector<int> ());   //adding a empty vector which can be visualized as a row
    // printing
    for (int i = 0; i < N; i++)
    {
        printVec(v1[i]);
    }
    // its like a 2D array where the row no are fixed but the column length is dynamic

    return 0;
}
