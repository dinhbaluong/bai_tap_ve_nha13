// bai_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*Bài 2:
Xây dựng lớp Candidate (Thí sinh) gồm các thuộc tính: mã, tên, ngày tháng năm sinh, điểm thi Toán, Văn, Anh và các phương thức cần thiết.

Xây dựng lớp TestCandidate để kiểm tra lớp trên:

– Nhập vào n thí sinh (n do người dùng nhập)

– In ra thông tin về các thí sinh có tổng điểm lớn hơn 15
*/

#include <iostream>
#include<string>
using namespace std;
class thisinh
{
public:
    string hovaten[50], kt;
    int id[50], namsinh[50];
    float toan[50], van[50], anh[50];
};
// lop con
class TestCandidate : public thisinh
{
public:
    int n;
public:
    void input()
    {
        cout << " nhap vao n thi sinh : ";
        cin >> this->n;
        cout << "\n";
        for (int i = 0; i < this->n; i++)
        {
            getline(cin, kt);
            cout << " nhap vao ten thi sinh : ";
            getline(cin, this->hovaten[i]);
            cout << "\n";
            cout << " nhap nam sinh : ";
            cin >> this->namsinh[i];
            cout << "\n";
            cout << " nhap id : ";
            cin >> this->id[i];
            cout << "\n";
            cout << " nhap diem toan : ";
            cin >> this->toan[i];
            cout << "\n";
            cout << " nhap diem van : ";
            cin >> this->van[i];
            cout << "\n";
            cout << " nhap diem anh : ";
            cin >> this->anh[i];
            cout << "\n";
        }
    }
};
int main()
{
    TestCandidate obj;
    obj.input();
    cout << " xuat ra nhung sinh vien co tong diem lon hon 15";
    for (int i = 0; i < obj.n; i++)
    {
        if ((obj.toan[i] + obj.van[i] + obj.anh[i]) > 15)
        {
            cout << " ten thi sinh : " << obj.hovaten[i] << " nam sinh : " << obj.namsinh[i] << " id : " << obj.id[i] << " diem toan : " << obj.toan[i] << " diem van : " << obj.van[i] << " diem anh : " << obj.anh[i] << "\n";
        }
    }
    return 0;
}
