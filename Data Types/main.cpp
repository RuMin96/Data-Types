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
	cout << "Привет DataTypes\n";
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
		cout << "Введите стоймость кофе : "; cin >> price_of_coffee;
		cout << "Введите количество чашек:"; cin >> number_of_cups;
		double total_price = price_of_coffee * number_of_cups;
		cout << "Общая стоймость: " << total_price << endl;
#endif COFFEE
		int speed = 0;
		const int MAX_SPEED = 250;
		cout << 5 << endl; // 5 числовая константа типа int
		// 5. -double
		// .5 -double
		// .5f-float
		// .5ULL-unsignet long long

		cout << sizeof('+') << endl;
		cout << sizeof("+") << endl;


#if define TASK_1
		int number_to_enter;
		cout << "Введите дробное число :"; cin >> number_to_enter;
		cout << number_to_enter - number_to_enter << "грн." << number_to_enter %100 << endl;
#endif TASK_1




#if defined TASK_2
		cout << "Вычисление стоимости покупки:"
		double price_of_notebook;
		int number_of_notebook;
		double price_of_pen;
		int number_of_pen;
		cout << "Введите стоймость тетради : "; cin >> price_of_notebook;
		cout << "Введите количество тетрадей:"; cin >> number_of_notebook;
		cout << "Введите стоймость карандаша : "; cin >> price_of_pen;
		cout << "Введите количество карандашей:"; cin >> number_of_pen;
		double purchase_price = (price_of_notebook * number_of_notebook) + (price_of_pen * number_of_pen);
		cout << "Стоймость покупки: " << purchase_price << "грн." << endl;
#endif TASK_2



#if defined TASK_3
		cout << "Вычисление стоимости покупки:";
		double price_of_notebook;
		double price_of_cover;
		int number_of_sets;
		cout << "Введите стоймость тетради : "; cin >> price_of_notebook;
		cout << "Введите стоймость обложки : "; cin >> price_of_cover;
		cout << "Введите количество комплектов:"; cin >> number_of_sets;
		double purchase_price = (price_of_notebook + price_of_cover)* number_of_sets;
		cout << "Стоймость покупки: " << purchase_price << "грн." << endl;
#endif TASK_3



#if defined TASK_4
		cout << "Вычисление стоимости поездки на дачу и обратно: " << endl;
		int distance_to_the_cottage;
		double gasoline_consumption;
		double price_of_liter_of_gasoline;
		cout << "Введите расстояние до дачи (км.): "; cin >> distance_to_the_cottage;
		cout << "Введите расход бензина( Литров на 100 км.): "; cin >> gasoline_consumption;
		cout << "Цена литра бензина(грн.):"; cin >> price_of_liter_of_gasoline;
		double durability_of_the_trip = ((gasoline_consumption / 100) * (distance_to_the_cottage*2) * price_of_liter_of_gasoline);
		cout << "Стоймость поездки туда и обратно обойдется в " << durability_of_the_trip << "грн." << endl;
 
#endif TASK_4
}