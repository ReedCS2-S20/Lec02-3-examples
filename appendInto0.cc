#include <iostream>

// appendInto.cc
//
// Author: Jim Fix for Reed CS2 S20
//
// This is a solution to Lab 02 Exercise 4. It requests
// two integer sequences (each assumed to be of length
// between 1 and 10) then outputs the result of their
// concatenation.
//
// These sequences are allocated in the stack of `main`.
//

// appendInto(a1,n1,a2,n2,a)
//
// Appends two integer sequences, referenced by `a1` and `a2`,
// of lengths `n1` and `n2` respectively, into the storage
// referenced by `a`.
//
// It assumes that the size of `a` in memory is large enough
// to hold `n1+n2` items.
//
void appendInto(int* a1, int n1, int* a2, int n2, int* a) {
  int i =  0;
  // Copy the first into the front of `a`.
  for (int i1=0; i1<n1; i1++) {
    a[i] = a1[i1];
    i++;
  }
  // Copy the second into the end of `a`.
  for (int i2=0; i2<n1; i2++) {
    a[i] = a2[i2];
    i++;
  }
}

// output(a,n)
//
// Prints a single line of the contents of the integer sequence
// referenced by `a` of length `n`. It assumes that `n` is
// positive. Sequences are formatted in this way:
//
// [23]
// [2,3,5,7,11]
//
// etc.
//
void output(int* a, int n) {
  std::cout << "[" << a[0];
  for (int i=1; i<n; i++) {
    std::cout << "," << a[i];
  }
  std::cout << "]" << std::endl;
}

int main(void) {

  // Create space for three integer sequences.
  int seq1[10];
  int seq2[10];
  int seq3[20];
  int sz1,sz2,sz3;

  // Request two sequences.
  std::cout << "Enter the size of the first sequence: ";
  std::cin >> sz1;
  std::cout << "Enter its " << sz1 << " items below, one per line:" << std::endl;
  for (int i=0; i<sz1; i++) {
    std::cin >> seq1[i];
  }
  //
  std::cout << "Enter the size of the second sequence: ";
  std::cin >> sz2;
  std::cout << "Enter its " << sz2 << " items below, one per line:" << std::endl;
  for (int i=0; i<sz2; i++) {
    std::cin >> seq2[i];
  }
  std::cout << std::endl;

  // Concatenate the two into the third.
  appendInto(seq1,sz1,seq2,sz2,seq3);
  sz3 = sz1+sz2;
  
  // Report the result.
  std::cout << "The result of concatenating" << std::endl;
  output(seq1,sz1);
  std::cout << "with" << std::endl;
  output(seq2,sz2);
  std::cout << "is the sequence" << std::endl;
  output(seq3,sz3);

  return 0;
}
