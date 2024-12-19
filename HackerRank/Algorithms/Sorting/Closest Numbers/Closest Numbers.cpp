/*
	problem link: https://www.hackerrank.com/challenges/closest-numbers/problem?isFullScreen=true
*/

vector<int> closestNumbers(vector<int> arr) {
    vector<int> res;
    sort(arr.begin(),arr.end());
    long long minDiff = abs(arr[0] - arr[1]);
    
    for(int i=1;i<arr.size()-1;i++){
        if(abs(arr[i] - arr[i+1]) < minDiff){
            minDiff = abs(arr[i] - arr[i+1]);
        }
    }
    
    for(int i=0;i<arr.size()-1;i++){
        if(abs(arr[i] - arr[i+1]) == minDiff){
            res.push_back(arr[i]);
            res.push_back(arr[i+1]);
        }
    }
    return res;
}