class Solution {
public:
    bool isSameAfterReversals(int num) {
    int n=num;;
      int rev=0;
      while(n!=0)
      {
          int dig=n%10;
          rev=(rev*10)+dig;
          n=n/10;
      }
      int rev2=0;
      while(rev!=0)
      {
          int dig1=rev%10;
          rev2=(rev2*10)+dig1;
          rev=rev/10;
      }
      return (rev2==num);
}
};
