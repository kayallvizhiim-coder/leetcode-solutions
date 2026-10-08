void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
     int n = matrixSize;
    int m = matrixColSize[0];
    bool *row=(bool*)calloc(n,sizeof(bool));
    bool *col=(bool*)calloc(m,sizeof(bool));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j]==0)
            {
                row[i]=true;
                col[j]=true;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(row[i]==true||col[j]==true)
            {
             matrix[i][j]=0;
            }
        }
    }
    
}