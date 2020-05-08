class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& A) {
        int n = A.size();
        if (n<=2) return true;
        float curr_slope;
        int diff_x = A[0][0] - A[1][0] ;
        int diff_y = A[0][1] - A[1][1] ;
        if (diff_x !=0 && diff_y != 0){
            double slope = (double) diff_y/diff_x ;
            for (int i = 2; i<n; i++){
                diff_y = A[i][1] - A[0][1] ;
                diff_x = A[i][0] - A[0][0] ;
                
                if (diff_y==0 || diff_x == 0) return false;
                curr_slope = (double) diff_y/diff_x ;
                
                if (slope != curr_slope) return false;
            }
        }
        else {
            if (diff_x == 0){
                for (int i =2; i<n; i++){
                    if (A[i][0] != A[0][0]) return false;
                }
            }
            else {
                for (int i =2; i<n; i++){
                    if (A[i][1] != A[0][1]) return false;
                }
            }
        }
        return true;
    }
};