class Solution {
public:
    bool isPalindrome(int x) {
        int a=x;
        int num=0;
       double int pal=0;
        while(a>0)
        {
            num=a%10;
            pal=pal*10+num;
            a=a/10;
        }
        if(pal==x){
            return true;
        }
        else{
            return false;
        }
    }
};