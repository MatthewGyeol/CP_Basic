// 20231102.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int main()
{
    //std : standard

    std::cout << '500' << "\n";
    std::cout << "Hello World!\n";

    int arithmetic1 = 30;
    int arithmetic2 = 17;

    std::cout << arithmetic1 + arithmetic2 << std::endl;
    std::cout << arithmetic1 - arithmetic2 << std::endl;
    std::cout << arithmetic1 * arithmetic2 << std::endl;
    std::cout << arithmetic1 / arithmetic2 << std::endl;
    std::cout << arithmetic1 % arithmetic2 << std::endl;

    // 증감 연산에는 반복 실행의 개념이 포함. 
    int Inc = 30;

    Inc = Inc + 3;
    cout << Inc << std::endl;
    Inc = Inc + 3;
    cout << Inc << std::endl;
    Inc = Inc + 3;
    cout << Inc << std::endl;
    Inc += 3; // 축약 형태
    cout << Inc << std::endl;

    /*
    Inc = Inc + 1;
    Inc += 1; // 정식명칭은 아니지만 갯수 셀 때 1씩 증가 하거나 감소 하는 경우 더 줄이기 가능
    Inc++; // count 하는 애라고 생각하는 것 c => c++ => c++++ (c#) 증감 카운팅 연산이라고도 불림
    Inc--;

    Inc = Inc * 3;
    Inc *= 3;
    Inc /= 3;
    Inc &= 3;
    */

}/*
    정수형 타입: int, Short, Long

    bit: 컴퓨터 데이터 저장의 최소단위
    byte: 컴퓨터 정보 저장의 최소단위(8bit)
    1byte = 8bit

    2진수 숫자 데이터: 0,1
    진법 계산
    1010 => 8 + 2 = 10
    8비트는 256개의 데이터를 표시할 수 있겠군

    UTF-8 방식
    비트가 용량이 적으니 전세계 언어로 커버가 되지 않았음
    그러나 지금은 모든 나라 언어가 커버가 된다.

    IP주소도 한 칸마다 0~255까지 8비트로 표현가능하게 되어있음

    encoding : 코드화 시켜주는 것. 0,1 나열의 숫자들을 의미를 갖도록 소프트웨어들이 만들어주도록 함
    이를 8개씩 끊어서 바이트로 단위를 사용하는 것

 */



 // 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
 // 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

 // 시작을 위한 팁: 
 //   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
 //   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
 //   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
 //   4. [오류 목록] 창을 사용하여 오류를 봅니다.
 //   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
 //   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
