#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v;

    // Add elements using for loop
    for(int i = 1; i <= 5; i++) {
        v.push_back(i);   // push_back inside loop
    }

    // Print elements
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}