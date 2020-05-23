/*
@author : Adarsh Patel
@email : patel.adarsh@outlook.com
This sollution is brute force solution to the problem.
Time Complexity : O(n)
Space Compleity : O(n);
*/
class Solution {
public:
    unordered_map<int, int> storage;
    int tribonacci(int n) {
        if(storage.find(n) != storage.end()) return storage[n];
        if(n == 0) return 0;
        else if(n <= 2) return 1;
        int a = tribonacci(n-1);
        storage.insert({n-1,a});
        int b = tribonacci(n-2);
        storage.insert({n-2,b});
        int c = tribonacci(n-3);
        storage.insert({n-3,c});
        return a+b+c;
    }
};
