class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int nCarry = 1;
        for(auto itr = digits.rbegin(); itr != digits.rend(); ++itr)
        {
            int sum = *itr + nCarry;
            *itr = sum % 10;
            nCarry = sum / 10;
        }

        if (nCarry == 1)
        {
            digits.insert(digits.begin(), nCarry);
        }

        return digits;
    }
};