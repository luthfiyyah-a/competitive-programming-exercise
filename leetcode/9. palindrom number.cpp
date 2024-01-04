// 3 - 4 jan 2023 (ngoding nya tengah malam wkwk)
// by: luthfiyyah hanifah amari
// level: easy
// https://leetcode.com/problems/palindrome-number/

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
            int kiri = ( x / static_cast<int>(pow(10, length - i)) ) % 10;
            int kanan = (x % static_cast<int>(pow(10, i)) ) / static_cast<int>(pow(10, i-1));
            if (kiri !=  kanan)
            {
                return false;
            }
            i++;
        }
        return true;
    }
};