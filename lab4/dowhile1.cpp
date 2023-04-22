#include <cmath>
#include <iostream>
using namespace std;


double dowhile(float x, double& term, int& degree, double e)
{
    int mas1[] = { 1, 1, 1 , -1, -1, -1};    // ������ ��� + � -
    int mas2[] = { 2, 1, 1 , 2, 1, 1 };    // ������ ��� �����������

    int d;    // ����������, ��������� �� ����������� ���������� � �������� � ��������
    double sum = 0;    // ����� ������������������
    int denominator = -1;    // ����������� ����������
    term = 1.1;
    degree = 0;    // ���������� ��� �������� � ����� ���������� ������������������

    do
    {
        degree++;
        d = (degree % 6) - 1;
        denominator += mas2[d];

        term = pow(x, degree) / denominator;
        term = term * mas1[d];

        sum = sum + term;

    } while (abs(term) > e);

    return sum;
}