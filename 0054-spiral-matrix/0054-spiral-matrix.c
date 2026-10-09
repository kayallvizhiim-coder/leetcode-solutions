/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
     int n = matrixSize;
    int m = matrixColSize[0];
        int top = 0, btm = n - 1;
    int lef = 0, rgt = m - 1;
    int index=0;
    int *res = (int*)malloc((n*m)* sizeof(int));
    while(lef<=rgt&&top<=btm)
    {
        for(int i=lef;i<=rgt;i++)
        {
            res[index++]=matrix[top][i];
        }
        top++;
        for(int i=top;i<=btm;i++)
        {
            res[index++]=matrix[i][rgt];
        }
        rgt--;
        if(top>btm||lef>rgt)
        break;
        for(int i=rgt;i>=lef;i--)
        {
            res[index++]=matrix[btm][i];
        }
        btm--;
        for(int i=btm;i>=top;i--)
        {
            res[index++]=matrix[i][lef];
        }
        lef++;
    }
    *returnSize=n*m;
    return res;    
} 