class Solution {
public:
    double ronakSqrt(int n)
    {
        if(n<2)
            return double(n);
        
        // store the half of the given number e.g from 256 => 128
        double sqrt = n / 2;
        double temp = 0;

        // Iterate until sqrt is different of temp, that is updated on the loop
        while(sqrt != temp){
            // initially 0, is updated with the initial value of 128
            // (on second iteration = 65)
            // and so on
            temp = sqrt;

            // Then, replace values (256 / 128 + 128 ) / 2 = 65
            // (on second iteration 34.46923076923077)
            // and so on
            sqrt = ( n/temp + temp) / 2;
        }

        return sqrt;
    }

    bool isPerfectSquare(int num) 
    {
        double a=ronakSqrt(num);
        double b=ceil(ronakSqrt(num));
        cout<<a<<endl<<b<<endl;
        if(a == b)
            return true;
        return false;
    }
};