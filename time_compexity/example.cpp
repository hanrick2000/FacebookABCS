
// i increments n times
// j increments conditionally
int foo(int A[], int n) {
  int j = 0;
  for(int i = 0; i < n; ++i) {
    while(j < n && A[i] < A[j]) {
      j++;
    }
  }
  return j;
}

nt main()
{
    
    cout << "O(n)";
    // Your output should print one of the following strings exactly.

    // Please note the spaces, parenthesis, upper-case/lower-case, etc.

    // `n` is the size of array `a` in function `foo()`.

    //

    // O(log n)

    // O(n)

    // O(n log n)

    // O(n^2)

    // O(n^3)

    // O(2^n)

    // O(n^n)

    return 0;
}
