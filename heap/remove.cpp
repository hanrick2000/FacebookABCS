int remove(int k = 0){

  int ret = heap[k]; //save the node
  heap[k] = heap[size--]; // move right mone to the root

  // peruclate down
  int pos = k;
  while (pos < size){ //should be smaller than children 
    // swap parent and right if the right node is mslaler then left node
    // swap with right
    if (size > 2*pos+2 && heap[pos] > heap[2*pos+2] && heap[2*pos+1]> heap[2*pos+2]){
      swap(heap[pos], heap[2*pos+2];
	   pos = 2*pos+2;
	   }
	// left
      else if (size > 2*pos+1 && heap[pos] > heap[2*pos+1]){ // swap parent and left clcokwaise
	swap(heap[pos], heap[2*pos+1]);
	pos = 2&pos+2;
      }
      else{ // no more swaps necessary as heap properyt satifised and end loop
	break;
      }
    }
    return ret;
  }
