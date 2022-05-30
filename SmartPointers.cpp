#include <iostream>
#include <memory>
#include <chrono>
#include <vector>

using namespace std;

/*
void f00 (int *pf) {

}*/

int main () {

	int *p;

	/*std::auto_ptr<int> p_auto; // владеющий.
	std::unique_ptr<int> p_uniq; // владеющий. Копия данных
	std::shared_ptr<int> p_share; // владеющий. Доп.ссылка на данные. Продвинутый менеджер памяти. Освобождает память - когда уничтожается последняя ссылка на объект. Живёт до талого, когда есть хотя-бы одна ссылка.
	std::weak_ptr<int> p_weak; // не владеющий. Следит, чтобы ссылка на блок данных создавалась единственный раз.
	*/

	//std::vector<std::chrono::seconds> a;
	//std::unique_ptr<int> p_uniq_int = std::make_unique<int> (7);
	auto p_uniq_int = std::make_unique<int> (7);

	std::cout << *p_uniq_int;
	//p_uniq_int.

	std::vector<int> collection;
	collection.push_back (1);
	collection.insert(collection.begin(), 2);

	// range based for. Работает только с теми типами данных, у которых реализованы begin и end. В vector - они есть.
	
	for (const auto &el : collection) {
		std::cout << el << ' ';
	}

	for (std::vector<int>::const_iterator it = collection.cbegin ();it!=collection.cend();++it) {
		std::cout << *it << ' ';
	}


	// Перебор коллекции. 
	for (auto &el : collection) {
		std::cout << el << ' ';
	}
	for (std::vector<int>::iterator it = collection.begin (); it != collection.end (); ++it) {
		std::cout << *it << ' ';
	}

	return 0;
}