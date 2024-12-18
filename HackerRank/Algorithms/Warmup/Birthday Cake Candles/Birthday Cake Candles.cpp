/*
    problem link: https://www.hackerrank.com/challenges/birthday-cake-candles/problem?isFullScreen=true
 */

int birthdayCakeCandles(vector<int> candles) {
    int max = 0;
    for(int i=0; i<candles.size(); i++){
        if(candles[i]>max) max = candles[i];
    }
    
    int countMax = 0;
     for(int i=0; i<candles.size(); i++){
        if(candles[i] == max) countMax++;
    }
    
    return countMax;
}
