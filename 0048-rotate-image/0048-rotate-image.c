void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    int n=matrixSize,m=matrixColSize[0];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<m;j++)
        {
            int t=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=t;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int f=0,las=m-1;f<=las;f++,las--)
        {
            int t=matrix[i][f];
            matrix[i][f]=matrix[i][las];
            matrix[i][las]=t;
        }
    }
    
}