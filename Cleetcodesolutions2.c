char * mergeAlternately(char * word1, char * word2){
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    char* merged = (char*)malloc((len1+len2+1)*sizeof(char));
    int i, j, k;
    i = j = k = 0;
    while (i < len1 && j < len2) {
        merged[k++] = word1[i++];
        merged[k++] = word2[j++];
    }
    while (i < len1) {
        merged[k++] = word1[i++];
    }
    while (j < len2) {
        merged[k++] = word2[j++];
    }
    merged[k] = '\0';
    return merged;
}

**************************************************************************

  char* multiply(char* arg1, char* arg2) {
    int len = strlen(arg1) + strlen(arg2);
    char *result = malloc(sizeof(char) * (len + 1));
    int acc;
    int k = 0;
    
    for (int i = 0; i < len+1; i++)
        result[i] = '0';
    for (int i = strlen(arg1)-1; i >= 0; i--){
        for (int j = strlen(arg2)-1; j >= 0; j--){
            acc = (arg1[i] - '0') * (arg2[j] - '0') + (result[i + j + 1] - '0');
            result[i+j+1] = (acc % 10) + '0';
            result[i+j] = ((acc /10) + (result[i + j] - '0')) + '0';
        }
    }
    result[len] = 0;
    while (result[k] == '0')
        k++;
    return strlen(result+k) > 0 ? result+k : "0";
}
*************************************************************************************
  
bool DFS(char** board, int boardSize, int* boardColSize, char* word, int len, int index, int i, int j, bool** visited){
    if (index == len ){return 1;}
    if ( i < 0 || j < 0 || i >= boardSize || j >= *boardColSize || visited[i][j] || board[i][j] != word[index]) {return 0;}
    visited[i][j] = 1;
    bool ans =  DFS(board, boardSize, boardColSize, word, len, index+1, i+1, j, visited) ||
                DFS(board, boardSize, boardColSize, word, len, index+1, i-1, j, visited) ||
                DFS(board, boardSize, boardColSize, word, len, index+1, i, j+1, visited) ||
                DFS(board, boardSize, boardColSize, word, len, index+1, i, j-1, visited);    
    visited[i][j] = 0;
    return ans;
}
bool exist(char** board, int boardSize, int* boardColSize, char * word){
    bool** visited = malloc(sizeof(bool*)*boardSize);
    for (int i = 0; i < boardSize; i++){
        visited[i] = calloc(*boardColSize,sizeof(bool));
    }
    int len = strlen(word);

    for (int i = 0; i < boardSize; i++){
        for (int j = 0 ; j < *boardColSize; j++){
            if (DFS(board, boardSize, boardColSize, word, len, 0, i, j, visited)) {return 1;};
        }
    }   
    return 0;
}
**************************************************************************************
