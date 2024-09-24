//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find equilibrium point in the array.
    // arr: input array
    int equilibriumPoint(vector<long long> &arr) {
        // Your code here
        vector<long long> v;
        map<int,int> mp;
        long long sum =0;
        if(arr.size()==1){
            return arr[0];
        }
        for(int i=0; i<arr.size(); i++){
            sum = sum + arr[i];
            v.push_back(sum);
            mp[sum]++;
        }
        if(mp.size()==1){
            return v[0];
        }
        for(int i=1; i<arr.size()-1; i++){
            if(v[v.size()-1]-v[i]==v[i-1]){
                return i+1;
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--)   // while testcases exist
    {
        vector<long long> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.equilibriumPoint(arr) << endl;
    }
}
// } Driver Code Ends
