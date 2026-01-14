class Solution {
public:
    int minBitFlips(int start, int goal) {
        int q = start ^ goal;
        int count  = 0;

        while(q>0){
            count+=(q & 1);
            q = q >> 1;
        }

        return count;
    }
};