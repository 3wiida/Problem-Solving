int migratoryBirds(vector<int> arr) {
    int freq_arr[5] = {0};
    
    for(int i=0;i<arr.size();i++){
        freq_arr[arr[i]-1]++;
    }
    
    int birdIndex = 0;
    int max = 0;
    for(int i=0; i<5; i++){
        if(freq_arr[i]>max){
            max = freq_arr[i];
            birdIndex=i+1;
        }
    }
    return birdIndex;
}
