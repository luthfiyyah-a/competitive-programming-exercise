// 11 jan 2024
// by luthfiyyah
// https://leetcode.com/problems/valid-parentheses

class Solution {
public:
    bool isValid(string s) {
        int i = 0;
        while(s[i] != '\0')
        {
            printf("s[i] = %c %c\n", s[i], s[i+1]);
            printf("i=%d\n", i);
            if( (s[i] == '(') && (s[i+1] != ')') )
            {
                return false;
            }
            if( (s[i] == '[') && (s[i+1] != ']') )
            {
                return false;
            }
            if( (s[i] == '{') && (s[i+1] != '}') )
            {
                return false;
            }
            i = i+2;
        }
        return true;
    }
};