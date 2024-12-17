#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int> v;
    
    while(n--){
        int num;
        cin>>num;
        v.push_back(num);
    }
    
    int pos; cin>>pos;
    v.erase(v.begin()+pos-1);
    
    int rangeStart,rangeEnd;
    cin>>rangeStart>>rangeEnd;
    v.erase(v.begin()+rangeStart-1,v.begin()+rangeEnd-1); 
    
    cout<< v.size()<<endl;
    for(int item: v){
        cout<<item<<" ";
    }
    return 0;
}