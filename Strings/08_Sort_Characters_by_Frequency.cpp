/*Given a string s, sort it in decreasing order based on the frequency of the characters. The frequency of a character is the number of times it appears in the string.

Return the sorted string. If there are multiple answers, return any of them.*/
//Approach --> use priority queue to get the max frequency of the character then append each character to result and keep on poping each character from the priority queue.
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for(char c : s)
        {
            freq[c]++;
        }

        priority_queue<pair<int, char>> maxheap;

        for(auto& p : freq)
        {
            maxheap.push({p.second, p.first});
        }

        string result = "";
        while(!maxheap.empty())
        {
            auto top = maxheap.top();
            maxheap.pop();

            int count = top.first;
            char ch = top.second;

            for(int i=0; i<count; i++)
            {
                result += ch;

            }
        }
        return result;
        
    }
};
 
