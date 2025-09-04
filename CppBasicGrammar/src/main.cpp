#include <iostream>
using namespace std;
#include <limits>
#include <string>

int main() {
  // 정수형 변수
  int age = 30;

  // 실수형 변수
  double temperature = 26.5;

  // 문자형 변수
  char initial = 'J';

  // 불리언 변수
  bool isStudent = true;

  std::cout << "나이: " << age << std::endl;
  std::cout << "온도: " << temperature << std::endl;
  std::cout << "학생입니까? " << isStudent
            << std::endl; // bool은 0 또는 1로 출력됨
  return 0;
}
