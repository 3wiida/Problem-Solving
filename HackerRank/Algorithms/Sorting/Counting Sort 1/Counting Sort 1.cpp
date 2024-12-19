/*
	problem link: https://www.hackerrank.com/challenges/countingsort1/problem?isFullScreen=true
*/

vector<int> countingSort(vector<int> arr) {
    vector<int> freq_arr(100,0);
    for(int i=0; i<arr.size();i++){
        freq_arr[arr[i]]++;
    }
    return freq_arr;
}