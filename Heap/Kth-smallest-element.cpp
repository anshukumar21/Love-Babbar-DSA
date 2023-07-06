logic:
// first k element,create a max heap
// for rest element(k -> (n-1) th)
//     if(element < heap.top()){
//       heap.pop()
//       heap.push(element)
//     }
// return heap.top()



int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        priority_queue<int> pq;
        
        for(int i=l; i<k ;i++)
            pq.push(arr[i]);
        
        for(int i=k ;i<=r ;i++){
            if(arr[i] < pq.top()){
                pq.pop();
                pq.push(arr[i]);
            }
        }
        
        return pq.top();
}
