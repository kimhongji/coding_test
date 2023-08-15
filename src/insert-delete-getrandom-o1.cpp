class RandomizedSet {
public:
//set 사용 문제
    set<int> s;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(s.find(val)!=s.end()){
            return false;
        }
        s.insert(val);
        return true;
    }
    
    bool remove(int val) {
        if(s.find(val)!=s.end()){
            s.erase(val);
            return true;
        }
       
        return false;
    }
    
    int getRandom() {
        int n=rand()%s.size();
        auto it=s.begin();
        while(n--){
            it++;
        }
        return *it;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */

 //https://leetcode.com/problems/insert-delete-getrandom-o1
