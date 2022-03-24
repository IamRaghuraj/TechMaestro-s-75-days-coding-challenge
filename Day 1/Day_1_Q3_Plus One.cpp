class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0,temp_carry=0;
        for(int i=digits.size()-1;i>=0;i--){
            if(i == digits.size()-1){
                carry = (1 + digits[i])/10;
                digits[i] = (1 + digits[i])%10;
            }else{
                // If we update the carry here directly then it will create problem for
                // the second line of code which is digit update part.
                temp_carry = (carry + digits[i])/10;
                digits[i] = (carry + digits[i])%10;
                carry = temp_carry; 
            }
        }
        if(carry==1){
            digits.insert(digits.begin(),carry);
        }
        return digits;
    }
};