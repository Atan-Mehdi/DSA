class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
            int n=mat.size();
    int m=mat[0].size();
    int row=0;
    int col=m-1;
    // for(int i=0;i<n;i++){
    //     sort(mat[i].begin(),mat[i].end());
    // }
    while(row<n && col>=0){
        if(col==0 && row<n-1){
           if(mat[row][col]>mat[row+1][col]){
            return {row,col};
           }else{
               row++;
           }
        }
        else if(row==n-1 && col==0){
            return {row,col};
        }
        else if(row==n-1 && col>=1){
          if(mat[row][col]>mat[row][col-1]){
            return {row,col};
           }else{
               col--;
           }  
        }
        else if(mat[row][col]>mat[row+1][col] && mat[row][col]>mat[row][col-1]){
            return {row,col};
        }else if(mat[row][col]<mat[row+1][col]){
            row++;
        }else{
            col--;
        }
    }
    return {-1,-1};
    }
};