class MyHashSet {
public:
   vector<int>vect;
    
    MyHashSet() {}   
    void add(int key) {
        if (!contains(key))vect.push_back(key);
    }
    
    void remove(int key) {
        for(int i=0;i<vect.size();i++){
            if(vect[i]== key){
                vect.erase(vect.begin()+i);
                break;
            }
        }
    }
    
    bool contains(int key) {
         for(int i=0;i<vect.size();i++){
            if(vect[i]== key){
               return true;
            }
        } 
         return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */