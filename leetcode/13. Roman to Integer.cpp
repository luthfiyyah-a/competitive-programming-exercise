// 4 jan 2023
// by: luthfiyyah hanifah amari
// level: easy
// https://leetcode.com/problems/roman-to-integer/

class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        int len = s.size();
        int flag = 0;
        for(int i = 0; i<len; i++)
        {
            if(flag == 1)
            {
                flag = 0;
                continue;
            }
            if(s[i] == 'I'){
                if(s[i+1] == 'V'){
                    result += 4;
                    flag = 1;
                }
                else if(s[i+1] == 'X'){
                    result += 9;
                    flag = 1;
                }
                else{
                    result += 1;
                }
            }

            if(s[i] == 'X'){
                if(s[i+1] == 'L'){
                    result += 40;
                    flag = 1;
                }
                else if(s[i+1] == 'C'){
                    result += 90;
                    flag = 1;
                }
                else{
                    result += 10;
                }
            }

            if(s[i] == 'C'){
                if(s[i+1] == 'D'){
                    result += 400;
                    flag = 1;
                }
                else if(s[i+1] == 'M'){
                    result += 900;
                    flag = 1;
                }
                else{
                    result += 100;
                }
            }

            if(s[i] == 'V'){
                result += 5;
            }
            if(s[i] == 'L'){
                result += 50;
            }
            if(s[i] == 'D'){
                result += 500;
            }
            if(s[i] == 'M'){
                result += 1000;
            }
        }
        return result;
    }
};