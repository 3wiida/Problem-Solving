int superDigit(string n, int k) {
    if(n.length() == 1) return stoi(n);
    long long sum=0;
    for(int i=0;i<n.length();i++){
        sum+= n[i] - '0';
    }
    sum*=k;
    return superDigit(to_string(sum), 1);
}