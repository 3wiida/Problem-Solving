class Person{
    protected:
        string name;
        int age;
    public:
        virtual void getdata() = 0;
        virtual void putdata() = 0;
};

class Professor:public Person{
    private:
        int publications;
        static int cur_id;
    public:
        void getdata(){
            cin>>name>>age>>publications;
        }
        
        void putdata(){
            cout<<name<<" "<<age<<" "<<publications<<" "<<++cur_id<<endl;
        }
};

class Student:public Person{
        private:
            static int cur_id;
            int marks[6];
            int calcTotalSum(){
                int sum=0;
                for(int i=0; i<6; i++){
                    sum += marks[i];
                }
                return sum;
            }
        public:
            void getdata(){
                cin>>name>>age;
                for(int i=0; i<6; i++){
                    cin>>marks[i];
                }
            }
            
            void putdata(){
                cout<<name<<" "<<age<<" "<<calcTotalSum()<<" "<<++cur_id<<endl;
            }
};

int Professor::cur_id = 0;
int Student::cur_id = 0;