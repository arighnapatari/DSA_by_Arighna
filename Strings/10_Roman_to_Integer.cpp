/*Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000*/
//Given a roman numeral, convert it to an integer.
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> romanReigns
        {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int value = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(romanReigns[s[i]] < romanReigns[s[i+1]]) value -= romanReigns[s[i]];
            
            else value += romanReigns[s[i]];

        }
        return value;
    }
};
