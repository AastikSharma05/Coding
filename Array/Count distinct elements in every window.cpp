Given an array of integers and a number K. Find the count of distinct elements in every window of size K in the array.

Example 1:

Input:
N = 7, K = 4
A[] = {1,2,1,3,4,2,3}
Output: 3 4 4 3
Explanation: Window 1 of size k = 4 is
1 2 1 3. Number of distinct elements in
this window are 3. 
Window 2 of size k = 4 is 2 1 3 4. Number
of distinct elements in this window are 4.
Window 3 of size k = 4 is 1 3 4 2. Number
of distinct elements in this window are 4.
Window 4 of size k = 4 is 3 4 2 3. Number
of distinct elements in this window are 3.
  
  vector <int> countDistinct (int A[], int n, int k)
    {
        //code here.
        vector<int> v;
        unordered_map<int,int>mp;
        int s=0,e=0;
        while(e<n)
        {
            
            mp[A[e]]++;
            if(e-s+1 == k)
            {
                v.push_back(mp.size());
                mp[A[s]]--;
                if(mp[A[s]] == 0)
                    mp.erase(A[s]);
                s++;
                
            }
            e++;
        }
 
        
        return v;
    }
