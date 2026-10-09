

bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
    int n= matrixSize,m=matrixColSize[0];
    int i=0,j=m-1;
    while(i<n&&j>=0)
    {
        if(matrix[i][j]==target)
        return true;
        else if(matrix[i][j]>target)
        j--;
        else
        i++;
    }
      
    return false;
}