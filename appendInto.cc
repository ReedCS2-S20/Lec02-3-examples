#include <iostream>

void appendInto(int* a1, int n1, int* a2, int n2, int* a) {
  int i =  0;
  for (int i1=0,  i1<n1; i1++) {
    a[i] = a1[i1];
    i++;
  }
  for (int i2=0,  i2<n1; i2++) {
    a[i] = a2[i2];
    i++;
  }
}

void output(int* a, int n) {
  std::cout << "[" << a[0];
  for (int i=0, i<n; i++) {
    std::cout << "," << a[i];
  }
  std::cout << "]";
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
