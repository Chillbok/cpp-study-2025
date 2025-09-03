## C++ 학습 로드맵

C#과 Python에 익숙한 분을 위한 C++ 학습 순서입니다. 이미 알고 있는 개념은 빠르게 넘어가고, C++의 핵심적인 차이점에 집중할 수 있도록 구성했습니다.

---

### ✅ 1단계: 기본 환경 설정 및 첫 컴파일
C#이나 Python과 달리 C++은 직접 컴파일러를 다루는 과정이 필요합니다.

- [x] **C++ 컴파일러 설치 (g++)**
  - Ubuntu/Debian: `sudo apt update && sudo apt install build-essential`
  - 이 명령어로 g++, gdb, make 등 개발에 필요한 기본 도구들이 설치됩니다.
- [x] **"Hello, World!" 작성 및 컴파일**
  - 간단한 C++ 코드를 작성하고, 터미널에서 직접 컴파일하고 실행해봅니다.
  - `g++ hello.cpp -o hello && ./hello`
  - **검색 키워드**: `c++ hello world`, `g++ compile command`
- [ ] **기본 입출력 (iostream)**
  - `std::cout` (출력)과 `std::cin` (입력) 사용법을 익힙니다.
  - **검색 키워드**: `c++ iostream`, `std::cout`, `std::cin`

---

### ✅ 2단계: C++ 기초 문법 (C#과 비교하며 빠르게 학습)
C#과 유사한 부분들이 많으므로, 차이점 위주로 빠르게 훑어봅니다.

- [ ] **기본 자료형 및 변수**
  - `int`, `char`, `float`, `double`, `bool` 등 C#과 거의 동일합니다.
- [ ] **연산자 및 제어문**
  - `if`, `for`, `while`, `switch` 등 C#과 문법이 같습니다.
- [ ] **함수**
  - 함수 정의 및 호출 방법을 익힙니다. C#의 메서드와 유사합니다.
- [ ] **헤더(.h)와 소스(.cpp) 파일 분리**
  - C#과 다른 중요한 개념입니다. 함수의 선언(헤더)과 정의(소스)를 분리하는 이유와 방법을 이해합니다.
  - **검색 키워드**: `c++ header source file separation`, `c++ declaration vs definition`

---

### ✅ 3단계: C++의 핵심: 포인터와 메모리 관리
Python과 C#의 가비지 컬렉터가 해주던 일을 직접 해야 합니다. C++ 학습의 가장 큰 허들입니다.

- [ ] **포인터(Pointer)의 이해**
  - 변수의 메모리 주소를 저장하는 '포인터' 변수를 이해합니다.
  - 주소 연산자(`&`)와 역참조 연산자(`*`) 사용법을 익힙니다.
  - **검색 키워드**: `c++ pointer`, `c++ address operator`, `c++ dereference operator`
- [ ] **동적 메모리 할당 (`new` / `delete`)**
  - 힙(Heap) 영역에 메모리를 직접 할당하고 해제하는 방법을 배웁니다.
  - C#의 `new`와 비슷하지만, `delete`로 반드시 직접 해제해야 합니다. 메모리 누수(Memory Leak)의 원인을 이해합니다.
  - **검색 키워드**: `c++ new delete`, `c++ dynamic memory allocation`, `c++ memory leak`
- [ ] **참조(Reference)**
  - 변수에 대한 '별명'을 만드는 참조(&)를 이해하고 포인터와의 차이점을 배웁니다.
  - **검색 키워드**: `c++ reference vs pointer`

---

### ✅ 4단계: 객체 지향 프로그래밍 (OOP in C++)
유니티 C# 경험을 바탕으로 C++의 클래스 구현 방식을 배웁니다.

- [ ] **클래스(Class)와 객체(Object)**
  - 헤더 파일에 클래스를 선언하고, 소스 파일에 메서드를 정의하는 방식을 익힙니다.
- [ ] **생성자(Constructor)와 소멸자(Destructor)**
  - 객체가 생성될 때와 파괴될 때 호출되는 함수입니다. 특히 소멸자는 동적 할당된 메모리를 해제하는 중요한 역할을 합니다.
  - **검색 키워드**: `c++ constructor`, `c++ destructor`, `c++ RAII`
- [ ] **상속(Inheritance)과 다형성(Polymorphism)**
  - C#과 개념은 동일하지만, 가상 함수(`virtual`) 등 C++의 구현 방식을 익힙니다.
  - **검색 키워드**: `c++ inheritance`, `c++ virtual function`

---

### ✅ 5단계: C++ 표준 템플릿 라이브러리 (STL)
Python의 기본 라이브러리, C#의 .NET 라이브러리처럼 C++에서 기본으로 제공하는 강력한 도구 모음입니다.

- [ ] **컨테이너(Container)**
  - `std::vector`: C#의 `List<T>`, Python의 `list`와 유사한 동적 배열
  - `std::string`: 문자열 처리
  - `std::map`: C#의 `Dictionary<T, K>`, Python의 `dict`와 유사한 키-값 자료구조
  - **검색 키워드**: `c++ stl vector`, `c++ stl map`
- [ ] **스마트 포인터 (Modern C++)**
  - `new`/`delete`를 직접 사용하는 것보다 안전한 메모리 관리 방법입니다. **매우 중요합니다.**
  - `std::unique_ptr`: 유일한 소유권을 가지는 포인터
  - `std::shared_ptr`: 여러 포인터가 소유권을 공유
  - **검색 키워드**: `c++ smart pointers`, `unique_ptr`, `shared_ptr`

---

### ✅ 6단계: 실전으로 나아가기

- [ ] **빌드 시스템 (CMake)**
  - 여러 개의 소스 파일을 관리하고, 다른 라이브러리를 포함하기 위한 프로젝트 관리 도구입니다. 간단한 CMake 프로젝트를 만들어 봅니다.
  - **검색 키워드**: `cmake tutorial for beginners`
- [ ] **간단한 프로젝트 만들어보기**
  - 콘솔 기반의 간단한 주소록, 숫자 야구 게임 등을 만들어보며 배운 것을 종합적으로 사용해봅니다.
