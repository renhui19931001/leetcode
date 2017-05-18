class Solution {
public:
    int hammingDistance(int x, int y) {
        int result = x ^ y;
        int out =0;
        int i =0;
        while(result)
        {
            if(result & 1<<i)
            {
                out ++;
                result -= 1<<i;
            }
            i++;
        }
        return out;
    }
};
