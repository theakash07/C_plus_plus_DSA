class Solution {
public:
    bool isPowerOfFour(int n) {

        int count=0;
      while (n != 0 && n % 4 == 0) {
            count++;
            n = n / 4;
        }

        return n == 1;
    }
};
