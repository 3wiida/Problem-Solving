#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;


int main() {
    unsigned int N, S, P, Q;
    
    cin >> N >> S >> P >> Q;
    
    auto count =0;
    auto previousItem = S;
    
    while (N--) {
        auto newItem = previousItem * P + Q;
        if (newItem != previousItem) ++count;
        previousItem = newItem;
    }
       
    cout << count;

    return 0;
}