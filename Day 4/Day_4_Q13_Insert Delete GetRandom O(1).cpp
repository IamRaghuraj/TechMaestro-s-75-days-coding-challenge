#include <bits/stdc++.h>
using namespace std;

class RandomizedSet {
public:
    map<int,int> mp;
    vector<int> arr;
    
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mp.find(val) != mp.end())
            return false;
        arr.push_back(val);
        mp[val] = arr.size()-1;
        return true;
    }
    
    bool remove(int val) {
        if(mp.find(val)==mp.end())
            return false;
        if(arr[arr.size()-1]==val){
            //last element we can directly delete it from both array and map
            arr.pop_back();
            mp.erase(val);
            return true;
        }
        //To have O(1) in deletion from array we do swapping with the last element and remove 
        //last element
        
        int idx_element_to_be_deleted = mp[val];
        int idx_last_element = mp[arr[arr.size()-1]];
        swap(arr[idx_element_to_be_deleted],arr[idx_last_element]);
        //delete element from map(value) and then remove last element of array
        arr.pop_back();
        mp.erase(val);
        //Update map of element
        mp[arr[idx_element_to_be_deleted]] = idx_element_to_be_deleted;
        return true;
    }
    
    int getRandom() {
        
        return arr[(1 + rand()%(arr.size())) - 1];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */