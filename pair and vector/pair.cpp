#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    pair<int, string> p;
    // insertion type 1
    p = make_pair(1,"abc");
    cout << p.first << " " << p.second << endl;

    //insertion type 2
    pair<int, string> p1;
    p = {2, "abcd"};
    cout << p1.first << " " << p1.second << endl;

    // insertion type 3
    // cin >> p.first;

    // copy one pair to other
    p1 = p;
    cout << p1.first << " " << p1.second << endl;

    // pair array
    int a[] = {1,2,3};
    int b[] = {2,3,4};
    pair<int, int> p_array[3];
    p_array[0] = {1,2};
    p_array[1] = {2,3};
    p_array[2] = {3,4};
    swap(p_array[0], p_array[1]);
    for(int i = 0;i < 3; i++) {
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }


    //

    return 0;
}
