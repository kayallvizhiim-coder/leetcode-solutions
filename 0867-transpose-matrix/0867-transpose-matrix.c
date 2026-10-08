/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** transpose(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes) { 
    int n = matrixSize;
    int m = matrixColSize[0];
      int **res=(int**)malloc(m*sizeof(int*));
      *returnColumnSizes=(int*)malloc(m*sizeof(int));
      for(int i=0;i<m;i++)
      {
        res[i]=(int*)malloc(n*sizeof(int));
        (*returnColumnSizes)[i]=n;
      }
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
        {
            res[j][i]=matrix[i][j];
        }
      }
      *returnSize=m;
      return res;
      
    
}