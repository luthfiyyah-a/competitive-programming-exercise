// 2 mar 2024
// by: luthfiyyah hanifah amari
// level: easy
// https://leetcode.com/problems/find-words-containing-character/description/

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> result;
        int count = 0;
        for(auto i = words.begin(); i != words.end(); i++)
        {
            cout << *i << " ";
            for(int j=0; j<(*i).length(); j++){
                if((*i)[j] == x){
                    result.push_back(count);
                    break;
                }
            }
            count++;
        }
        return result;
    }
};