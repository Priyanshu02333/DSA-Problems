class Solution {
public:
    bool checkPerfectNumber(int num);
};
/*****************************************************/
bool Solution::checkPerfectNumber(int num) {
    unordered_map<int,int> m; /* prime factorization -> multiplicity */
    unordered_map<int,int>::iterator it;
    int i, max = num/2, spd=1, step=1, numM = num, size, maxPrime = sqrt(num)+1;
    for (i = 2; i <= max && num > 1; i+=step) {
        if (num % i == 0) {
            ++m[i];
            num/=i;
            while (num % i == 0) {
                ++m[i];
                num/=i;
            }
            max = num;
        }
        /* step update */
        if (i == 3) {
            ++step;
        }
        /* prime enhancement */
        if (i >= maxPrime && m.size() == 0) {
            return false;
        }   
    }
    if (m.size() == 0) {
        return false;
    }
    size = m.size();
    for (it = m.begin(); it != m.end(); ++it) {
        spd*=(pow(it->first, it->second+1)-1)/(it->first-1);
    }
    if (spd == 2*numM) {
        return true;
    } else {
        return false;
    }
}
/*****************************************************/