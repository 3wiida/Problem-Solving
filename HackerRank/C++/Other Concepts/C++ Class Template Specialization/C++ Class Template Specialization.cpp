template<>
class Traits<Color>{
    public:
    static string name(int i){
        string res = "";
        switch (i) {
           case 0:
                res+= "red";
                break;
            case 1:
                res+="green";
                break;
            case 2:
                res+="orange";
                break;
            default:
                res+="unknown";
                break;
        }
        return res;
    }
};

template<>
class Traits<Fruit>{
    public:
    static string name(int i){
        string res = "";
        switch (i) {
           case 0:
                res+= "apple";
                break;
            case 1:
                res+="orange";
                break;
            case 2:
                res+="pear";
                break;
            default:
                res+="unknown";
                break;
        }
        return res;
    }
};