bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int n=matrixSize,m=matrixColSize[0];
    int i=0,j=n*m-1;
    while(i<=j)
    {
        int mid=(i+j)/2;
        int r=mid/m;
        int c=mid%m;
        if(matrix[r][c]==target)
        return true;
        else if(matrix[r][c]>target)
        j=mid-1;
        else
        i=mid+1;
    }
    return false;
    
}