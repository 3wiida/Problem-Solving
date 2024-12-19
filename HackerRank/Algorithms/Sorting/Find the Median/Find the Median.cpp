/*
	problem link: https://www.hackerrank.com/challenges/find-the-median/problem?isFullScreen=true
*/

int findMedian(vector<int> arr) {
    sort(arr.begin(),arr.end());
    return arr[arr.size()/2];
}