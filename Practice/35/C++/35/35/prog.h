#pragma once
struct IntArray
{
	int* data;
	int size;
};

/** ������ ������������ ������ ������� size � ��������� ��� � ���� data ���������� arr. ���� size ��������� arr ���������� ������ ��������� size */
void create(IntArray* arr, int size);
void create(IntArray& arr, int size);
/** ���������� ������� ������� � �������� index, ��� ���� ��������� ����� �� ������� �������. ���� index ����� �� ��������� �������, ������� ��������� �� ������ � �������� ������ ��������� */
int get(IntArray* arr, int index);
int get(IntArray& arr, int index);
/** �������� �������� �������� ������� � �������� index �� �������� ��������� value, ��� ���� ��������� ����� �� ������� �������. ���� index ����� �� ��������� �������, ������� ��������� �� ������ � �������� ������ ��������� */
void set(IntArray* arr, int index, int value);
void set(IntArray& arr, int index, int value);
/** ������� �� ����� ���������� ������� � �������: [1, 2, 3] */
void print(IntArray* arr);
void print(IntArray& arr);
/** �������� ������ ������� � ����������� ���������. ���� ����� ������ ������, ��������� �������� ����������, ���� ������, �� �������������� �������� ���������������� ���� */
void resize(IntArray* arr, int newSize);
void resize(IntArray& arr, int newSize);
/** ����������� ������ ������� ��������. ���� data ���������� ������ nullptr, ���� size ���������� ������ ����. ������������� ������ ������� �������� ��� ��������� ������� */
void destroy(IntArray* arr);
void destroy(IntArray& arr);