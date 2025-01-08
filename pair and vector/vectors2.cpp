#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int, int>> &v)
{ // if we use only v it creates copy which take  O(n) time complaexity so always use &v.
  cout << "size : " << v.size() << endl;
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i].first << " " << v[i].second << endl;
  }
  cout << endl; // v.size() --> O(1)
}

int main()
{
  vector<pair<int, int>> v = {{1, 2}, {2, 3}, {3, 5}};
  // printVec(v);
  vector<pair<int, int>> v1;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x, y;
    cin >> x >> y;
    v1.push_back({x, y});
  }
  printVec(v1);

  return 0;
}
