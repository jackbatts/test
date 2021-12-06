/* 
Author: Jack Batts
Date Created: 11/30/2021
Date Assignment Due: 12/6/2021
Description of Program: Meant to Encrypt a User Entered Message
Process by thought:
1) Set skeleton of code for kattis *
2) Make a map that I can check against any string input *
3) Create loop that reads cin
4) Go letter by letter encrypting and saving into new variable
5) Output new encrypted message
*/

#include <iostream>
#include <iomanip>
#include <cstring>
#include <cassert>
#include <cmath>
#include <map>
#include <string>
#include <fstream>
#include <cstdio>
#include <map>

using namespace std;

void test();
string answer(string unenc); 
void solve(); 


int main(int argc, char* argv[]) {
    if (argc > 1 && string(argv[1]) == "test")
        test();
    else
        solve();
    return 0;
}



string encrypt(string unenc) {
map<string, string> alph = 
{   {"a","@"},
    {"b","8"},
    {"c","("},
    {"d","|)"},
    {"e","3"},
    {"f","#"},
    {"g","6"},
    {"h","[-]"},
    {"i","|"},
    {"j","_|"},
    {"k","|<"},
    {"l","1"},
    {"m","[]\\/[]"},
    {"n","[]\\[]"},
    {"o","0"},
    {"p","|D"},
    {"q","(,)"},
    {"r","|Z"},
    {"s","$"},
    {"t","']['"},
    {"u","|_|"},
    {"v","\\/"},
    {"w","\\/\\/"},
    {"x","}{"},
    {"y","`/"},
    {"z","2"},
    {" ", " "},

};
    string enc, tempenc, tempunenc;
    for (size_t i = 0; i < unenc.size(); i++)
    {
        tempunenc = tolower(unenc[i]);
        if (alph.count(tempunenc)!= 0)
        tempenc = alph[tempunenc];
        else
        tempenc = tempunenc;
        enc += tempenc;
    }


    return enc;
}

void test() {
    assert(encrypt("hello") == "6\3|<|<0");
    assert(encrypt("zzv") == "22\\/");
    assert(encrypt("yxt") == "`/}{][");
    cerr << "All test cases passed...\n";
}

void solve() {
    string unenc;
    getline(cin, unenc);
    cout << encrypt(unenc) << endl;
}