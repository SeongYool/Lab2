#include <stdio.h>
#include <stdlib.h>

#include <vector> 
using namespace std;

int main() {

        int i,j,matrix_x,matrix_y;
        int *matrix1_ptr;
        int *matrix2_ptr;
        int *matrix_sum_ptr;
              
       
        printf("행렬 크기를 입력해주세요(X Y) : ");
        scanf("%d %d", &matrix_x,&matrix_y);


	vector<vector<int>> v1(matrix_x, vector<int>(matrix_y,0));
	vector<vector<int>> v2(matrix_x, vector<int>(matrix_y,0));
	

        matrix1_ptr = (int *)malloc(matrix_x * matrix_y * sizeof(int));
        matrix2_ptr = (int *)malloc(matrix_x * matrix_y * sizeof(int));
        matrix_sum_ptr = (int *)malloc(matrix_x * matrix_y * sizeof(int));

        if(matrix1_ptr == NULL || matrix2_ptr == NULL || matrix_sum_ptr == NULL) {
                printf("Memory Failed Allocate");
                exit(-1);

        }

        printf("Input Matrix 1 Numbers \n");
        for( j= 0; j < matrix_y; j++)
	        for( i= 0; i < matrix_x; i++ )
	                scanf("%d", &v1[j][i]);

        printf("Input Matrix 2 Numbers \n");
           for( j= 0; j < matrix_y; j++)
	        for( i= 0; i < matrix_x; i++ )
	                scanf("%d", &v2[j][i]);


	vector<vector<int>> v3(matrix_x, vector<int>(matrix_y,0));
	
	for( j= 0; j < matrix_y; j++)
	        for( i= 0; i < matrix_x; i++ )
	        	v3[j][i] = v1[j][i] + v2[j][i];


        printf("Matrix Sum \n");
        for( i=0; i <matrix_x; i++ ) {
                printf("\n");
                for( j = 0; j <matrix_y; j++)
                        printf("%d",v3[i][j]);
        }

        free(matrix1_ptr);
        free(matrix2_ptr);
        free(matrix_sum_ptr);

}
