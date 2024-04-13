class Solution {
public:

    int number (char c) {
        if (c=='I') 
        return 1;
        else if( c=='V') 
        return 5;
        else if( c=='X') 
        return 10;
        else if( c== 'L') 
        return 50;
        else if( c=='C') 
        return 100;
        else if( c=='D') 
        return 500;
        else 
        return 1000;
            }
    int romanToInt(string s) {
        int sum = 0, index = 0;
        while(index < s.size() -1 ) {
            if(number(s[index] ) < number(s[index +1]) ) 
            sum -= number(s[index]);
            else
            sum += number(s[index]);
            index++;
        }
        sum += number(s[index]);
        return sum;
    }
};