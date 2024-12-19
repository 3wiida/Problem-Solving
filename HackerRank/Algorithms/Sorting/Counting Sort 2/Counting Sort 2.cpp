/*
	problem link: https://www.hackerrank.com/challenges/countingsort2/problem?isFullScreen=true
*/

vector<int> countingSort(vector<int> arr) {
    vector<int> freq_arr(100,0);
    vector<int> sorted_arr;
    for(int i=0; i<arr.size();i++){
        freq_arr[arr[i]]++;
    }
    
    for(int i=0;i<100;i++){
        if(freq_arr[i] != 0){
            for(int j=0;j<freq_arr[i];j++){
                sorted_arr.push_back(i);
            }
        }
    }
    return sorted_arr;
}