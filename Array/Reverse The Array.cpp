Given an array arr of size n. You need to reverse the array.

Example 1:

Input:
n = 5
arr[] = {1 1 2 2 3}
Output: 3 2 2 1 1
  
  void reverseArray(int arr[], int n) {
    // Your code here
    int l =0,h=n-1;
    while(l<=h)
    {
        swap(arr[l],arr[h]);
        l++;
        h--;
    }
}
