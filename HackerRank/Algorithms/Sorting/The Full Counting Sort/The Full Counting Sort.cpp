/*
	problem link: https://www.hackerrank.com/challenges/countingsort4/problem?isFullScreen=true
*/

void countSort(vector<vector<string>>& arr) {
    int n = arr.size();
    
    int maxIndex = 0;
    for (const auto& element : arr) {
        maxIndex = max(maxIndex, stoi(element[0]));
    }

    vector<vector<string>> buckets(maxIndex + 1);

    for (int i = 0; i < n; ++i) {
        int index = stoi(arr[i][0]);
        string value = (i < n / 2) ? "-" : arr[i][1];
        buckets[index].push_back(value);
    }

    ostringstream result;
    for (auto& bucket : buckets) {
        for (auto& str : bucket) {
            result << str << " ";
        }
    }

    cout << result.str().substr(0, result.str().size() - 1) << endl; 
}