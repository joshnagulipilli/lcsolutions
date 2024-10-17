class Solution {
public:
    int maximumSwap(int num) {
        vector<int> v;
        int x = num;
        
        // Step 1: Extract digits and store them in the vector
        while (x > 0) {
            int r = x % 10;
            v.push_back(r);
            x /= 10;
        }
        
        // Step 2: Reverse the vector to have the digits in the correct order
        reverse(v.begin(), v.end());
        
        int n = v.size();
        vector<int> prefmax(n);
        
        // Step 3: Create a prefix max array where each element is the max digit from that position onwards
        prefmax[n-1] = v[n-1];
        for (int i = n - 2; i >= 0; i--) {
            prefmax[i] = max(v[i], prefmax[i+1]);
        }
        
        // Step 4: Find the first digit that can be swapped to get a larger number
        int ind = -1;
        for (int i = 0; i < n; i++) {
            if (v[i] != prefmax[i]) {
                ind = i;
                break;
            }
        }
        
        // If no swap is needed, return the original number
        if (ind == -1) return num;
        
        // Step 5: Find the rightmost occurrence of the maximum digit to swap
        for (int i = n - 1; i > ind; i--) {
            if (v[i] == prefmax[ind]) {
                swap(v[i], v[ind]);
                break;
            }
        }
        
        // Step 6: Rebuild the number from the modified vector
        int res = 0;
        for (int i = 0; i < n; i++) {
            res = res * 10 + v[i];
        }
        
        return res;
    }
};