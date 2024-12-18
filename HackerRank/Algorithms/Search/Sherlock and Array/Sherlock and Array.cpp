string balancedSums(vector<int> arr) {
    long long sumLeft = 0, sumRight = 0;
    for(int i=0;i<arr.size();i++){
        sumRight+=arr[i];
    }
    for(int i=0;i<arr.size();i++){
        if(i!=0) sumLeft+=arr[i-1];
        sumRight-=arr[i];
        if(sumLeft == sumRight) return "YES";
    }
    return "NO";
}