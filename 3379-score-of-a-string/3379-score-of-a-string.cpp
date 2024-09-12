#include <cstdlib>
class Solution {
public:
    int scoreOfString(string s) 
    {
        int sum=0;
        for(int i=1; i<s.length(); i++)
        {
            char a = s.at(i);
            char b = s.at(i-1);
            sum = abs((int(a)-int(b)))  + sum;
        }
        return sum;
    }
};