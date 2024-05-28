class Solution {
public:
    string convertToBase7(int num) {
        bool sign=0;
        if(num<0){
            sign=1;
        }
        num=abs(num);
        string str="";
        while(num>=7){
            str+=num%7+48;
            num/=7;
        }
        str+=num+48;
        if(sign){
            str+='-';
        }
        reverse(str.begin(),str.end());
        return str;
    }
};