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
    vector<int> v1;
    vector<pair<int, int>> v2;       // vector size locally in order of 10^5
                                                //  globally 10^7
    // insertion                                   same goes for array
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x; 
            printVec(v1);      
        v1.push_back(x); // O(1)
    }
    v1.pop_back();   // TC : O(1)  removes the last element from vector

    vector<int> a(10); // vector a with size 3 but can be changed dynamically
    vector<int> b(10, 3); // vector b with size 10 filled with 3 
     
    vector<int> c = b; // Tc : O(n)  copies all the alements of vector b to c . c ko change karo tho b me reflect nahi hoga vice versa


    return 0;
}
