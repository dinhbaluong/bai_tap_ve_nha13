// bai_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*Bài 1:
Xây dựng lớp biểu diễn khái niệm số phức với hai thành phần dữ liệu và các hàm thành phần xuất, 
nhập, định giá trị cho số phức, cộng, trừ, nhân, chia hai số phức. Viết chương trình cho phép nhập
vào hai số phức, in ra kết quả các phép toán cộng, trừ, nhân, chia hai số phức kể trên.
*/

#include <iostream>
using namespace std;
class so_phuc
{
public:
	int phan_thuc, phan_ao;
public:
	so_phuc()
	{
		this->phan_thuc = this->phan_ao = 0;
	}
	~so_phuc()
	{
		this->phan_thuc = this->phan_ao = 0;
	}
	void input()
	{
		cout << "nhap phan thuc : ";
		cin >> this->phan_thuc;
		cout << "\n";
		cout << "nhap phan ao : ";
		cin >> this->phan_ao;
		cout << "\n";
	}
	void tong_sp()
	{
		cout << " tong 2 so phuc = " << this->phan_thuc << " + i" << this->phan_ao << "\n";
	}
	void tru_sp()
	{
		cout << " tru 2 so phuc = " << this->phan_thuc << " + i" << this->phan_ao << "\n";
	}
	void nhan_sp()
	{
		cout << " nhan 2 so phuc = " << this->phan_thuc << " + i" << this->phan_ao << "\n";
	}
	void chia_sp()
	{
		cout << " chia 2 so phuc = " << this->phan_thuc << " + i" << this->phan_ao << "\n";
	}
	 //chu y nen su dung nap chong toan tu 1 ngoi(chu y ky hieu operator +,-,*,/ (ten_class obj) la ky hieu cua toan tung nap chong toan tu ta su dung)
	so_phuc operator + (so_phuc b)
	{
		so_phuc cong, tru, nhan, chia;
		cong.phan_thuc = (this->phan_thuc + b.phan_thuc);
		cong.phan_ao = this->phan_ao + b.phan_ao;
		return cong;
	}
	so_phuc operator - (so_phuc b)
	{
		so_phuc tru;
		tru.phan_thuc = (this->phan_thuc - b.phan_thuc);
		tru.phan_ao = this->phan_ao - b.phan_ao;
		return tru;
	}
	so_phuc operator * (so_phuc b)
	{
		so_phuc nhan;
		nhan.phan_thuc = (this->phan_thuc * b.phan_thuc) - (this->phan_ao * b.phan_ao);
		nhan.phan_ao = (this->phan_thuc * b.phan_ao) + (this->phan_ao * b.phan_thuc);
		return nhan;
	}
	so_phuc operator  / (so_phuc b)
	{
		so_phuc chia;
		chia.phan_thuc = ((this->phan_thuc * b.phan_thuc) + (this->phan_ao * b.phan_ao)) / (pow(b.phan_thuc, 2) + pow(b.phan_ao, 2));
		chia.phan_ao = ((this->phan_ao * b.phan_thuc) - (this->phan_thuc * b.phan_ao)) / (pow(b.phan_thuc, 2) + pow(b.phan_ao, 2));
		return chia;
	}

};
int main()
{
	so_phuc a, b, cong, tru, nhan, chia;
	a.input();
	b.input();
	cong = a + b;
	cong.tong_sp();
	tru = a - b;
	tru.tru_sp();
	nhan = a * b;
	nhan.nhan_sp();
	chia = a / b;
	chia.chia_sp();
	return 0;
}

