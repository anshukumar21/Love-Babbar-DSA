vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        // your code here
        vector<int> ans;
        for(auto i: a){
            ans.push_back(i);
        }
        for(auto i : b ){
            ans.push_back(i);
        }
        
        int size = ans.size();
        
        for(int i= size/2-1 ; i>=0 ;i--)
            heapify(ans,size,i);
        
        return ans;
}
