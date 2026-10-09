/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generateMatrix(int n, int* returnSize, int** returnColumnSizes) {
    int **res=(int**)malloc(n*sizeof(int*));
    *returnColumnSizes=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        res[i]=(int*)malloc(n*sizeof(int));
        (*returnColumnSizes)[i]=n;
    }
    *returnSize=n;
    int left=0,top=0,rgt=n-1,btm=n-1,v=1;
    while(top<=btm&&left<=rgt)
    {
        for(int i=left;i<=rgt;i++)
        {
            res[top][i]=v++;
        }
        top++;
        for(int i=top;i<=btm;i++)
        {
            res[i][rgt]=v++;
        }
        rgt--;
        if(top>btm||left>rgt)
        break;
        for(int i=rgt;i>=left;i--)
        {
            res[btm][i]=v++;
        }
        btm--;
        for(int i=btm;i>=top;i--)
        {
            res[i][left]=v++;
        }
        left++;
    }
    return res;
}