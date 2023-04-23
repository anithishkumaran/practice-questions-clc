5 EASY LEET CODE QUESTIONS AND SOLUTIONS ::::::


//Search Insert Position//
int searchInsert(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] > target) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return left;
}
........................................................................................
// Remove Element//
int removeElement(int* nums, int numsSize, int val) {
    int k = 0; 
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}
.......................................................................................
//transpose of matrix//
int** transpose(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes) {
    int** transposedMatrix = (int**) malloc(*matrixColSize * sizeof(int*));
    *returnColumnSizes = (int*) malloc(*matrixColSize * sizeof(int));
    *returnSize = *matrixColSize;
    for (int i = 0; i < *matrixColSize; i++) {
        transposedMatrix[i] = (int*) malloc(matrixSize * sizeof(int));
        (*returnColumnSizes)[i] = matrixSize;
    }
        for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < *matrixColSize; j++) {
            transposedMatrix[j][i] = matrix[i][j];
        }
    }
    
    return transposedMatrix;
}
...........................................................................................
//finding the missing number//
    int missingNumber(int* nums, int numsSize) {
    int sum = numsSize * (numsSize + 1) / 2;
        for (int i = 0; i < numsSize; i++) {
        sum -= nums[i];
    }
    
    return sum;
}
......................................................................................
//sqrt of a number//
   int mySqrt(int x) {
    if (x < 2) {
        return x;
    }
    
    int l = 1, r = x;
    
    while (l <= r) {
        int mid = l + (r - l) / 2;
        
        if (mid <= x / mid) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    
    return r;
}
...............................................
