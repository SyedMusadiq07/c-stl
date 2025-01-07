#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v) { // if we use only v it creates copy which take  O(n) time complaexity so always use &v.
    cout << "size : " << v.size() << endl;
    for(int i = 0; i < v.size(); i++) {
      cout << v[i] << " ";               
    }
    cout << endl;                   //v.size() --> O(1)
}

int main() {
    
    return 0;
}
