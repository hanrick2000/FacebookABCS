void insert(int x){
  // if array is full
  if (size == heap.length() - 1)
    doublesize(); // incrrease size

  // insert at end of the array 
  int pos = ++size;

  // bubble up heap properpy
  // look at immediate parent if elemetn is < immediate parent then swap
  // increment by moving up the tree
  for (; pos > 1 && x < heap[(pos-1)/2]; pos = (pos-1)/2){
    //swap
    heap[pos] = heap[(pos-1)/2];
    heap[pos]=x;
  }
}
