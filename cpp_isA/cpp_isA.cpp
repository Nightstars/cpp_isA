// cpp_isA.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Person.h"
#include "Soldier.h"
using namespace std;
void test1(Person p) {
    p.play();
}
void test2(Person& p) {
    p.play();
}
void test3(Person* p) {
    p->play();
}
int main()
{
    Soldier soldier;
    Person p=soldier;
    p.play();
    cout << endl;
    Person p1;
    p1.play();
    cout << endl;
    Person p2;
    p2 = soldier;
    p2.play();
    cout << endl;
    Person *p3 = &soldier;
    p3->play();
    cout << endl;
    Person* p4 = new Soldier();
    p4->play();
    delete p4;
    p4 = NULL;
    cout << endl;
    Person p5;
    Soldier soldier5;
    test1(p5);
    test1(soldier5);
    cout << endl;
    Person p6;
    Soldier soldier6;
    test2(p6);
    test2(soldier6);
    cout << endl;
    Person p7;
    Soldier soldier7;
    test3(&p7);
    test3(&soldier7);
    system("pause");
    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
