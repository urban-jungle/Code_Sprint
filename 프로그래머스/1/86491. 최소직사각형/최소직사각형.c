#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sizes_rows는 2차원 배열 sizes의 행 길이, sizes_cols는 2차원 배열 sizes의 열 길이입니다.
int solution(int** sizes, size_t sizes_rows, size_t sizes_cols) {
    int max_width = 0;
    int max_height = 0;
    int tmp;
    
    for (int i = 0; i < sizes_rows; i++) {
        if (sizes[i][0] < sizes[i][1]) {
            tmp = sizes[i][0];
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = tmp;
        }

        if (sizes[i][0] > max_width) {
            max_width = sizes[i][0];
        }
        
        if (sizes[i][1] > max_height) {
            max_height = sizes[i][1];
        }
    }

    int answer = max_width * max_height;
    return answer;
}
