/*Given two strings s and t, determine if they are isomorphic.

Two strings s and t are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

Example 1:
Input: s = "egg", t = "add"
Output: true*/

//Approach --> Hashmaps

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) return false;

        unordered_map<char, char> sToT;
        unordered_map<char, char> tToS;

        for (int i = 0; i < s.length(); i++) {
            char c1 = s[i];
            char c2 = t[i];

            if (sToT.count(c1) && sToT[c1] != c2)
                return false;

            if (tToS.count(c2) && tToS[c2] != c1)
                return false;

            sToT[c1] = c2;
            tToS[c2] = c1;
        }
        return true;
        
    }
};
