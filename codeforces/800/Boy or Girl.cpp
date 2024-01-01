#include <cstdio>
#include <string>
#include <algorithm>
#include <iostream>
#include <vector>

/*
    link problem:
    https://codeforces.com/problemset/problem/236/A

    idenya: 
    kendalanya karena dia hanya menghitung letter disctinc.
    jadi dibikin dulu vector atau array 26 index. ini representasi dari a-z.
    mula2 vector diinisiasi 0 semua, menandakan bahwa huruf belum pernah muncul.
    apabila huruf ada muncul dalam kata, nanti dia akan mengubah array index tsb menjadi 1.

    kita input string letter. lalu dilooping setiap karakter dari letter.
    apabila karakter belum pernah muncul sebelumnya, maka count++.

    akhirnya, klo count%2, maka dia  cewe (sesuai dengan perintah soal)
     
*/
int main() {
    std::string username;
    std::cin >> username;

    int i;
    std::vector<int> letter(26,0);

    int count = 0;

    for(i=0; i<username.length(); i++){
        if(letter[int(username[i])-97] == 0){
            count++;
            letter[int(username[i])-97] = 1;
        }
    }
    
    if(count%2 == 0) printf("CHAT WITH HER!");
    else printf("IGNORE HIM!");
}