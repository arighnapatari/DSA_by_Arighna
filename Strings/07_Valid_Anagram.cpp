/*Given two strings s and t, return true if t is an anagram of s, and false otherwise.
Example 1:
Input: s = "anagram", t = "nagaram"
Output: true*/
//Anagram --> Two strings are said to be anagrams if all their characters of one string can be rearranged to get the other.
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;

        int count[26] = {0};

        for(int i=0; i < s.length(); i++)
        {
            count[s[i] - 'a']++;  // converting the characters to integer indices 
            count[t[i] - 'a']--; // decrementing so that the sum of the occurance of each character  are zero. 

        }
        for(int i=0; i< 26; i++)
        {
            if(count[i] != 0) return false;
        }
        return true;
    }
};
  
  
