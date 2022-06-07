#include <iostream>
#include <list>

int main()
{
	// erase - remove
	// 순환하는 도중에 원소를 삭제할 때 위험!!

	std::list<int> myList{ 1,2,3,4,5 };

	/*auto iter = myList.begin();
	while (iter != myList.end())
	{
		if (*iter == 3)
		{
			iter = myList.erase(iter);
		}
		else
		{
			++iter;
		}
	}*/

	myList.erase(std::remove_if(
		myList.begin(), myList.end(), [](int e) {return e == 3; }),
		myList.end());

	for (auto e : myList)
	{
		std::cout << e << std::endl;
	}
}