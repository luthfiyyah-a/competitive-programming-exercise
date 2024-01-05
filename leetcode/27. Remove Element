// 5 jan 2023
// by: luthfiyyah hanifah amari & chatgpt
// level: easy
// https://leetcode.com/problems/remove-element
// pakai chatgpt untuk bagian method remove dan erase wkwk. ga hapal syntax


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] != val) ++count;
        }
         // Menggunakan remove untuk menghapus semua elemen bernilai val
        auto newEnd = std::remove(nums.begin(), nums.end(), val);

        // Menggunakan erase untuk menghapus elemen-elemen yang digeser ke depan
        nums.erase(newEnd, nums.end());
        return count;
    }
};