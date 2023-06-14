Given an array arr[] of size N containing positive integers and an integer X, find the element in the array which is smaller than X and closest to it.

 

Example 1:

Input:
N = 5
arr[] = {4 67 13 12 15}
X = 16
Output: 15
Explanation: For a given value 16, there
are four values which are smaller than
it. But 15 is the number which is smaller


int immediateSmaller(int arr[], int n, int x)
    {
        // your code here
        int mini = -1,difference,currdiff=INT_MAX;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i] < x)
             {
                difference = x - arr[i];
                if(difference < currdiff)
                    {
                        currdiff = difference;
                        mini = arr[i];
                    } 
             }
            
        }
        return mini;
        
    }
