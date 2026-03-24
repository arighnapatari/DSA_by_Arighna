//Reverse bits of a given 32 bits signed integer.

 /*Example 1:

Input: n = 43261596

Output: 964176192

Explanation:

Integer	Binary
43261596	00000010100101000001111010011100
964176192	00111001011110000010100101000000*/
// uint32_t = unsigned int 32 (for no negative integers & only for 32 bits numbers) 

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res = 0;
        for(int i=0; i< 32; i++)
        {
            uint32_t bit = n & 1;
            res = (res << 1) | bit;
            n = n >> 1;

        }
        return res;
    }
};
