class LRUCache:public Cache{
    public:
        LRUCache(int capacity){
            cp = capacity;
        }
        
        int get(int key){
            if(mp.find(key) != mp.end()){
               if(mp[key]->prev != nullptr){
                    mp[key]->prev->next = mp[key]->next;
               }
               if(mp[key]->next != nullptr){
                    mp[key]->next->prev = mp[key]->prev;
               }
               mp[key]->next = head;
               mp[key]->prev = NULL;
               head= mp[key];
               return mp[key]->value; 
            }
            return -1;
        }
        
        void set(int key, int value){
            Node* newNode = new Node(key,value);
            
            if(mp.empty()){
                mp[key] = newNode;
                head = tail = newNode;
                return;
            }
            
            if(mp.size() == cp){
                mp.erase(tail->key);
                tail = tail->prev; 
                newNode->next = head;
                head = newNode;
                mp[key] = newNode;
            }else{
                newNode->next = head;
                head->prev = newNode;
                head = newNode;
                mp[key] = newNode;
            }
        }
};