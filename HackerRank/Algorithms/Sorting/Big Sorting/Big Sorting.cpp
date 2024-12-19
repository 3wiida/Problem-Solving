/*
	problem link: https://www.hackerrank.com/challenges/big-sorting/problem?isFullScreen=true
*/

vector<string> bigSorting(vector<string> unsorted) {
    sort(
        unsorted.begin(),
        unsorted.end(),
        [](string left, string right){
            if(left.length() == right.length()) return left < right;    
            return left.length() < right.length();  
        }
    );
    return unsorted;
}