class Solution {
public:
    bool isPalindrome(int x) {
        
       long long int palindrome=0;
        int original=x;
         if (x < 0) {
        return false; 
    }
  
        while(x!=0)
        {
            int digit=x%10;
            palindrome=palindrome*10+digit;
            x/=10;
        }
        return ( palindrome == original );
    }
};
