# 실습과제 1
<pre>
  char ch = 'A'; <br>
  int in = 10; <br>
  double db = 3.4;
</pre>

|  수식  |     결과값     |  결과값의 자료형 |
|:------:|:--------------:|:---------------:|     
|   &ch  |      100       |       char*       |       
|   &in  |      101       |       int*      |     
|   &db  |      105       |      double*    |  
|  *&ch  |      A         |      char       |
|  *&in  |      10         |      int       |
|  *&db  |      3.4         |      double       |

<pre>
  &는 변수의 주소를 가르킴.
  *은 주소의 내용물을 가르킴.
  *(&int)는 즉 *(주소) 임으로 변수의 값이 나옴
</pre>

# 실습과제 2
아래 코드에서 변수이름을 사용하지 말고 포인터를 사용하여 같은
결과가 나오도록 코드를 수정
```C
#include <stdio.h>

int main(void){
  int a = -100;
  char b = ‘A’;
  double c = 3.14;
  printf(“int형 변수 a의 값은 : %d\n”, *&a);
  printf(“char형 변수 b의 값은 : %c\n”, *&b);
  printf(“double형 변수 c의 값은 : %lf\n”, *&c);
  return 0;
}
```
주소를 가르키도록 수정하여 포인터를 이용함

# 실습과제 3
오류가 나는 이유를 설명
```C
#include<stdio.h>

  int main(void){
  int* ptr = (int*)125; // ①
  *ptr = 10;
  printf("%d\n", *ptr);
  return 0;
}
```
ptr에 정의되지 않은 주소를 넣고 있기 때문에 오류가 난다.

# 실습과제 4
```C
#include<stdio.h>

int main(void){
  int a = 100, b = 200;
  int* sum1 = &a,* sum2 = &b;
  *sum1 += *sum2;
  printf("%d\n",*sum1);
  return 0;
}
```

# 실습과제 5
<dl>
  <dd>
    <h3>소스코드 설명
  </dd>
</dl>
