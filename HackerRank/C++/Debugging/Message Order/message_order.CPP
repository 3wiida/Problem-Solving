class Message {
    private:
        string msg;
        int msgNum = 0;
    public: 
        Message() {}
        const string& get_text() {
            return msg;
        }
        void set_text(string text){
            msg = text;
        }
        void set_msg_num(int n){
            msgNum = n;
        }
        bool operator < (const Message& m){
            
            if(this->msgNum < m.msgNum){
                return true;
            }
            return false;
        }
};

class MessageFactory {
public:
    static int cur_msg_no;
    MessageFactory() {}
    Message create_message(const string& text) {
        Message messageObj;
        messageObj.set_text(text);
        messageObj.set_msg_num(++cur_msg_no);
        return messageObj;
    }
};

int MessageFactory::cur_msg_no=0;