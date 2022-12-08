class Solution {
     
    int rows, cols;
    vector<vector<int>> cache;
    int dirs[4][2] = {{-1,0}, {0,-1}, {1,0}, {0,1}};

    bool valid(int i, int j){
        return i<rows && j<cols && i>=0 && j>=0; 
    }

    int longestIncPath(vector<vector<int>> &matrix, int i, int j){
        if(cache[i][j]) return cache[i][j];
              
        int max_path_dir = 0;

        for(auto t: dirs){
            int dir_i = i + t[0];
            int dir_j = j + t[1];

            if(valid(dir_i, dir_j) && matrix[i][j] < matrix[dir_i][dir_j]){
                max_path_dir = max(max_path_dir, longestIncPath(matrix, dir_i, dir_j));
            }
        }      
        cache[i][j] = max_path_dir + 1;
        return cache[i][j];

    }

    public:
    int longestIncreasingPath(vector<vector<int>> &matrix){
        rows = matrix.size();
        if(!rows) return 0;

        cols = matrix[0].size();
        int max_path = 0;
        
        cache = vector<vector<int>>(rows, vector<int>(cols));

        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                max_path = max(max_path, longestIncPath(matrix, i, j));
            }
        }
        return max_path;
    }
};