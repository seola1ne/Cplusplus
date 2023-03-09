#include <iostream>

void swap(int * num1, int * num2) {
  int snum = *num1; // snum 변수에 num1 포인터 변수의 '값' 넣기
  *num1 = *num2; // num1 포인터 변수에 '값'에 num2 포인터 변수의 '값' 넣기
  *num2 = snum; // num2 포인터 변수의 '값'에 snum의 값 넣기
}

void swap(char* ch1, char* ch2) {
  char sch = *ch1;
  *ch1 = *ch2;
  *ch2 = sch;
}

void swap(double* dbl1, double* dbl2) {
  double sdbl = *dbl1;
  *dbl1 = *dbl2;
  *dbl2 = sdbl;
}

int main() {
  int num1 = 20, num2 = 30;
  swap(&num1, &num2);
  std::cout<<num1<<' '<<num2<<' ';

  char ch1 = 'A', ch2 = 'Z';
  swap(&ch1, &ch2);
  std::cout<<ch1<<' '<<ch2<<' ';

  double dbl1 = 1.111, dbl2 = 5.555;
  swap(&dbl1, &dbl2);
  std::cout<<dbl1<<' '<<dbl2<<' ';
  return 0;
}