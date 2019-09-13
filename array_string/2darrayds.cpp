int hourglassSum(int arr_rows, int arr_columns, int** arr) {

  // counter variables
    int max_sum_so_far = INT_MIN; 
    int current_sum = 0;

    // 4 since counted it   
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            current_sum = (arr[i][j]+arr[i][j+1]+arr[i][j+2])+ (arr[i+1][j+1])+ (arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2]);
	    // compare it 
            if (max_sum_so_far < current_sum){
                max_sum_so_far = current_sum;
                current_sum = 0;
            }                                                                             
        }
    }
                                                                                 
    return max_sum_so_far;                                                                                
                                                                                 
}
