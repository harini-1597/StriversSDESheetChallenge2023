class Solution {
public:
    bool binarySearch(vector<int>&arr, int l, int r,int target){
        if(l==r && arr[l]==target)
            return 1;
        if(l<r){
            int mid=l+(r-l)/2;
            if(arr[mid]==target)
                return 1;
            if(arr[mid]<target)
                return binarySearch(arr,mid+1,r,target);
            if(arr[mid]>target)
                return binarySearch(arr,l,mid,target);
        }
        return 0;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(); int m=matrix[0].size(); int wanted=-1;
        if(n==0) return 0;
        for(int i=0; i<n; i++){
            if(matrix[i][0]<target && target<matrix[i][m-1])
                wanted=i;
            if(matrix[i][0]==target || matrix[i][m-1]==target) return 1;
        }
        if(wanted==-1) return 0;
        return binarySearch(matrix[wanted],0,m-1,target);
    }
};
