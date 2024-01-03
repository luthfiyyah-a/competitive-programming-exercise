// by: luthfiyyah hanifah amari
// 3 jan 2023

class Solution {
public:
    bool isPalindrome(int x) {
        if(x <0) return false;
        int i=1; int length;
        while(true)
        {
            if(x < pow(10, i))
            {
                length = i;
                break;
            }
            i++;
        }
        i = 1;
        while(i <= length/2 )
        {
            if ((x / static_cast<int>(pow(10, length - i))) != x % static_cast<int>(pow(10, i)))
            {
                return false;
            }
            i++;
        }
        return true;
    }
};