class Solution {
public:
   
    bool isPathCrossing(string path) {
        map<pair<int,int>, bool> points; 
        pair<int,int> point = {0,0}; 
        points[point] =  true; 
        for(char c: path){
            if (c == 'N')
            {
                pair<int,int> newPoint = {point.first, point.second + 1};
                if (points[newPoint])
                    return true; 
                else 
                   { point = newPoint;
                   points[point] = true;
                    }
            }
            if (c == 'S')
            {
                pair<int,int> newPoint = {point.first , point.second - 1};
                if (points[newPoint])
                    return true; 
                else 
                   { point = newPoint;
                   points[point] = true;
                    }
            }
            if (c == 'E')
            {
                pair<int,int> newPoint = {point.first + 1, point.second };
                if (points[newPoint])
                    return true; 
                else 
                   { point = newPoint;
                   points[point] = true;
                    }
            }
            if (c == 'W')
            {
                pair<int,int> newPoint = {point.first - 1, point.second };
                if (points[newPoint])
                    return true; 
                else 
                   { point = newPoint;
                   points[point] = true;
                    }
            }
        }
        return false; 
    }
};