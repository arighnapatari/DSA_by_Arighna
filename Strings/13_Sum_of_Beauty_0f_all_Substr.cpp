/*The beauty of a string is the difference in frequencies between the most frequent and least frequent characters.

For example, the beauty of "abaacc" is 3 - 1 = 2.
Given a string s, return the sum of beauty of all of its substrings.

 Example 1:

Input: s = "aabcb"
Output: 5
Explanation: The substrings with non-zero beauty are ["aab","aabc","aabcb","abcb","bcb"], each with beauty equal to 1.*//

class Solution {
public:
    int beautySum(string s) {
        int n = s.size();
        int ans = 0;

        for(int i = 0; i<n; i++)
        {
            vector<int> freq(26, 0);  // to store the count of the frequency of all the letters in the string 

            for(int j=i; j<n; j++)
            {
                freq[s[j] - 'a']++;
                int maxfreq = 0;
                int minfreq = INT_MAX;

                for(int k=0; k<26; k++)
                {
                    if(freq[k] > 0)
                    {
                        maxfreq = max(maxfreq, freq[k]);
                        minfreq = min(minfreq, freq[k]);

                    }
                }
                ans += (maxfreq - minfreq);

            }
        }
        return ans;
    }
};
