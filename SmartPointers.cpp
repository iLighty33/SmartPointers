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

	/*std::auto_ptr<int> p_auto; // ���������.
	std::unique_ptr<int> p_uniq; // ���������. ����� ������
	std::shared_ptr<int> p_share; // ���������. ���.������ �� ������. ����������� �������� ������. ����������� ������ - ����� ������������ ��������� ������ �� ������. ���� �� ������, ����� ���� ����-�� ���� ������.
	std::weak_ptr<int> p_weak; // �� ���������. ������, ����� ������ �� ���� ������ ����������� ������������ ���.
	*/

	//std::vector<std::chrono::seconds> a;
	//std::unique_ptr<int> p_uniq_int = std::make_unique<int> (7);
	auto p_uniq_int = std::make_unique<int> (7);

	std::cout << *p_uniq_int;
	//p_uniq_int.

	std::vector<int> collection;
	collection.push_back (1);
	collection.insert(collection.begin(), 2);

	// range based for. �������� ������ � ���� ������ ������, � ������� ����������� begin � end. � vector - ��� ����.
	
	for (const auto &el : collection) {
		std::cout << el << ' ';
	}

	for (std::vector<int>::const_iterator it = collection.cbegin ();it!=collection.cend();++it) {
		std::cout << *it << ' ';
	}


	// ������� ���������. 
	for (auto &el : collection) {
		std::cout << el << ' ';
	}
	for (std::vector<int>::iterator it = collection.begin (); it != collection.end (); ++it) {
		std::cout << *it << ' ';
	}

	return 0;
}