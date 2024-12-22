#include <iostream>
using namespace std;

void pyramid(int n, int row){
    if(row == 0) return;
    for(int i=1; i<=n-row; i++){
        cout<<" ";
    }
    
    for(int i=1; i<=2*row-1; i++){
        cout<<"*";
    }
    cout<<endl;
    pyramid(n, row-1);
}

int main() {
    int n;
    cin>>n;
    pyramid(n,n);
    return 0;
}