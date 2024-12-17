template<class T>
class AddElements{
    T element;
    public:
        AddElements(T e){
            element = e;
        }
        T add(T e){
            return element + e;
        }
};

template<>
class AddElements<string>{
    string element;
    public:
        AddElements(string s){
            element = s;
        }
        string concatenate(string s){
            element+=s;
            return element;
        }
};