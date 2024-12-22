#include <iostream>
using namespace std;

void pyramid(int n, int row){
    if(row == 0) return;
    pyramid(n, row-1);
    for(int i=1; i<=n-row; i++){
        cout<<" ";
    }
    
    for(int i=1; i<=2*row-1; i++){
        cout<<"*";
    }
    cout<<endl;
}

int main() {
    int n;
    cin>>n;
    pyramid(n,n);
    return 0;
}