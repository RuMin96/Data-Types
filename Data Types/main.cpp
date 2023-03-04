#include <iostream>
using namespace std;

//#define LOGICAL_TYPES
//#define DATA_TYPES
//#define COFFEE
//#define TASK_1
//#define TASK_2
//#define TASK_3
#define TASK_4


void main()
{
	setlocale(LC_ALL, "Rus");
	cout << "������ DataTypes\n";
#if defined LOGICAL_TYPES
	cout << true << endl;
	cout << false << endl;
	cout << (bool) - 0.000000000001 << endl;
#endif

#ifdef DATA_TYPES
	cout << sizeof(long long) << endl;
	cout << "signed long long:" << LLONG_MIN << " ... " << LLONG_MAX << endl;
	cout << "unsigned long long:" << 0 << " ... " << LLONG_MAX << endl;
	cout << "\n-------------------------------------------------------\n";

	cout << "float:\n";
	cout << sizeof(float) << endl;
	cout << FLT_MIN << "..." << FLT_MAX << endl;
	cout << "\n-------------------------------------------------------\n";
	cout << "double:\n";
	cout << sizeof(double) << endl;
	cout << DBL_MIN << "..." << DBL_MAX << endl;
	cout << "\n-------------------------------------------------------\n";
	cout << sizeof(short) << endl;
#endif // DATA_TYPES

#ifdef COFFEE
	double price_of_coffee;
		int number_of_cups;
		cout << "������� ��������� ���� : "; cin >> price_of_coffee;
		cout << "������� ���������� �����:"; cin >> number_of_cups;
		double total_price = price_of_coffee * number_of_cups;
		cout << "����� ���������: " << total_price << endl;
#endif COFFEE
		int speed = 0;
		const int MAX_SPEED = 250;
		cout << 5 << endl; // 5 �������� ��������� ���� int
		// 5. -double
		// .5 -double
		// .5f-float
		// .5ULL-unsignet long long

		cout << sizeof('+') << endl;
		cout << sizeof("+") << endl;


#if define TASK_1
		int number_to_enter;
		cout << "������� ������� ����� :"; cin >> number_to_enter;
		cout << number_to_enter - number_to_enter << "���." << number_to_enter %100 << endl;
#endif TASK_1




#if defined TASK_2
		cout << "���������� ��������� �������:"
		double price_of_notebook;
		int number_of_notebook;
		double price_of_pen;
		int number_of_pen;
		cout << "������� ��������� ������� : "; cin >> price_of_notebook;
		cout << "������� ���������� ��������:"; cin >> number_of_notebook;
		cout << "������� ��������� ��������� : "; cin >> price_of_pen;
		cout << "������� ���������� ����������:"; cin >> number_of_pen;
		double purchase_price = (price_of_notebook * number_of_notebook) + (price_of_pen * number_of_pen);
		cout << "��������� �������: " << purchase_price << "���." << endl;
#endif TASK_2



#if defined TASK_3
		cout << "���������� ��������� �������:";
		double price_of_notebook;
		double price_of_cover;
		int number_of_sets;
		cout << "������� ��������� ������� : "; cin >> price_of_notebook;
		cout << "������� ��������� ������� : "; cin >> price_of_cover;
		cout << "������� ���������� ����������:"; cin >> number_of_sets;
		double purchase_price = (price_of_notebook + price_of_cover)* number_of_sets;
		cout << "��������� �������: " << purchase_price << "���." << endl;
#endif TASK_3



#if defined TASK_4
		cout << "���������� ��������� ������� �� ���� � �������: " << endl;
		int distance_to_the_cottage;
		double gasoline_consumption;
		double price_of_liter_of_gasoline;
		cout << "������� ���������� �� ���� (��.): "; cin >> distance_to_the_cottage;
		cout << "������� ������ �������( ������ �� 100 ��.): "; cin >> gasoline_consumption;
		cout << "���� ����� �������(���.):"; cin >> price_of_liter_of_gasoline;
		double durability_of_the_trip = ((gasoline_consumption / 100) * (distance_to_the_cottage*2) * price_of_liter_of_gasoline);
		cout << "��������� ������� ���� � ������� ��������� � " << durability_of_the_trip << "���." << endl;
 
#endif TASK_4
}