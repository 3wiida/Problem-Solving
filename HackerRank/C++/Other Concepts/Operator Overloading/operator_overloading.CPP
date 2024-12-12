class Matrix{
    public:
        vector<vector<int>> a;
        Matrix operator +(const Matrix& b){
            Matrix resMatrix;
            for(int i=0; i<this->a.size(); i++){
                vector<int> resRow;
                for(int j=0; j<this->a[0].size(); j++){
                    resRow.push_back(this->a[i][j] + b.a[i][j]);                  
                }
                resMatrix.a.push_back(resRow);
            }
            return resMatrix;
        } 
};
