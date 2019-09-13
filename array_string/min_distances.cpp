// Complete the minimumDistances function below.
int minimumDistances(vector<int> a) {
    
  int minimum = INT_MAX;
  map<int, int> comparing_distances;
    
  for(int i = 0; i < a.size(); i++){
       
    // if value has been seen and index after - value it has occured less than the mimin then set that has new min
        if((comparing_distances[a[i]] != 0) &&(i + 1 - comparing_distances[a[i]] < minimum)){
            minimum = i + 1 - comparing_distances[a[i]];
            //minimum = i  - comparing_distances[a[i]];
        }

	// if not seen then save that to the next element to make 
        comparing_distances[a[i]] = i + 1;
	
        
        
             
    }
    
    // min did not change and no same values

    if (minimum == INT_MAX){
           return -1;
    }
            

    return minimum;
    
    
}

