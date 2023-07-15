class Solution {
public:
    bool isPowerOfThree(int n) {
        
        int count=0;
      while (n != 0 && n % 3 == 0) {
            count++;
            n = n / 3;
        }

        return n == 1;
    }
};

