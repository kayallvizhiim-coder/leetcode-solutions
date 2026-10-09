/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** matrixReshape(int** mat, int matSize, int* matColSize, int r, int c, int* returnSize, int** returnColumnSizes) {
    int n=matSize,m=matColSize[0];
    if(n*m!=r*c)
    {
        *returnSize=n;
        *returnColumnSizes=matColSize;
        return mat;
    }
    int **res=(int**)malloc(r*sizeof(int*));
    *returnColumnSizes=(int*)malloc(r*sizeof(int));
    for(int i=0;i<r;i++)
    {
        res[i]=(int*)malloc(c*sizeof(int));
        (*returnColumnSizes)[i]=c;
    }
    int k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int ri=k/c;
            int ci=k%c;
            res[ri][ci]=mat[i][j];
            k++;
        }
    }
    *returnSize=r;
    return res;
    }