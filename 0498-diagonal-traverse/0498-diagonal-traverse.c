/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDiagonalOrder(int** mat, int matSize, int* matColSize, int* returnSize) {
    int m = matSize, n = matColSize[0], i, j, k = 0, d;
    int *a = malloc(m * n * sizeof(int));
    *returnSize = m * n;

    for (d = 0; d < m+n-1; d++) {
        i = d < m ? d : m-1;
        j = d-i;

        if (d % 2 == 0) {
            while (i >= 0 && j < n)
                a[k++] = mat[i--][j++];
        } else {
            i = d < n ? 0 : d-n+1;
            j = d-i;
            while (i < m && j >= 0)
                a[k++] = mat[i++][j--];
        }
    }
    return a;
}