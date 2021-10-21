class RandomizedSet {
public:
    RandomizedSet() 
    {
        srand(time(nullptr));
    }
    bool insert(int val) 
    {
        if(hash.count(val)) 
            return false;
        hash[val] = nums.size();
        nums.push_back(val);
        return true;
    }
    bool remove(int val) 
    {
        if(!hash.count(val)) 
            return false;
        int idx = hash[val];
        int last = nums.back();
        if(last != val)
        {
            nums[idx] = last;
            hash[last] = idx;
        }
        hash.erase(val);
        nums.pop_back();
        return true;
    }
    int getRandom() 
    {
        int k = rand() % nums.size();
        return nums[k];
    }
private:
    map<int,int>hash;
    vector<int>nums;
};
