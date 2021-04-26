//LongLong.cpp
#include "LongLong.h"
long LongLong::GetX() const { return x; }
long LongLong::GetY() const { return y; }
void LongLong::SetX(long value) { x = value; }
void LongLong::SetY(long value) { y = value; }
LongLong::LongLong() : Object() { x = 0, y = 0; } //����������� �� ����������
LongLong::LongLong(long x = 0, long y = 0)throw(invalid_argument, bad_exception, Bad_exception, const char*): Object()//����������� �����������
	
{
	if (x == 1 && y == 1)
		throw invalid_argument("Invalid_argument");
	else if (x == 2 && y == 2 )
		throw bad_exception();
	else if (x == 3 && y == 3 )
		throw Bad_exception("Bad_exception");
	else if (x == 4 && y == 4 )
		throw "Exception";

	this->x = x;
	this->y = y;
}
LongLong::LongLong(const LongLong& A)//����������� ���������
{
	x = A.GetX();
	y = A.GetY();
}
istream& operator >> (istream& in, LongLong& A) throw(invalid_argument, bad_exception, Bad_exception, const char*)//�������� � ���������
{
	cout << " C����� ������� = "; in >> A.x;
	cout << " M������ ������� = "; in >> A.y;
	return in;
}
ostream& operator << (ostream& out, const LongLong& A) //���� �� �����
{
	out << string(A);
	return out;
}

LongLong::operator string() const
{
	stringstream ss;
	ss << " ������ �������: " << x << endl;
	ss << " M������ �������: " << y << endl;
	return ss.str();
}


LongLong& LongLong::operator = (const LongLong& A)//���������
{
	x = A.x;
	y = A.y;
	return *this;
}


LongLong& LongLong::operator ++ () //�������������� �������� "����������"(��������� �����)
{
	x++;
	return *this;
}
LongLong& LongLong::operator -- () //�������������� �������� "����������"(��������� �����)
{
	x--;
	return *this;
}
LongLong LongLong::operator ++ (int) //�������������� �������� "����������"(���������� �����)
{
	LongLong t(*this);
	y++;
	return t;
}
LongLong LongLong::operator -- (int) //�������������� �������� "����������"(���������� �����)
{
	LongLong t(*this);
	y--;
	return t;
}
double operator + (LongLong& A, LongLong& B)//���������
{
	LongLong t2(A.x + A.y);
	return t2.x;
}
double operator * (LongLong& A, LongLong& B)//M�������
{
	LongLong t2(A.x * A.y);
	return t2.x;
}

void LongLong::Compare(LongLong& A, LongLong& B) {
	if (A.x == B.x) {
		cout << A.x << "  �������  " << B.x << " \n ";
	}
	if (A.x != B.x) {
		cout << A.x << "  �� �������  " << B.x << " \n ";
	}
	if (A.x > B.x) {
		cout << A.x << "  ����� ��  " << B.x << " \n ";
	}
	if (A.x < B.x) {
		cout << A.x << "  ����� ��  " << B.x << " \n ";
	}
	if (A.x >= B.x) {
		cout << A.x << "  ����� ��� �������  " << B.x << " \n ";
	}
	if (A.x <= B.x) {
		cout << A.x << "  ����� ��� �������  " << B.x << " \n ";
	}
}
void LongLong::Compare1(LongLong& A, LongLong& B) {
	if (A.y == B.y) {
		cout << A.y << "  �������  " << B.y << " \n ";
	}
	if (A.y != B.y) {
		cout << A.y << "  �� �������  " << B.y << " \n ";
	}
	if (A.y > B.y) {
		cout << A.y << "  ����� ��  " << B.y << " \n ";
	}
	if (A.y < B.y) {
		cout << A.y << "  ����� ��  " << B.y << " \n ";
	}
	if (A.y >= B.y) {
		cout << A.y << "  ����� ��� �������  " << B.y << " \n ";
	}
	if (A.y <= B.y) {
		cout << A.y << "  ����� ��� �������  " << B.y << " \n ";
	}
}
