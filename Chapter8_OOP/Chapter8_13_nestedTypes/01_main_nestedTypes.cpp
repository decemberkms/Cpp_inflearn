#include <iostream>
using namespace std;



class Fruit
{
public:
enum class FruitType  // enum class -- scope restricted enum  you need TRype::
{
	APPLE, BANANA, CHERRY,
};


private:
	FruitType m_type;

public:
	Fruit(FruitType type) : m_type(type)
	{}

	FruitType getType() { return m_type; }
};



int main()
{
	Fruit apple(Fruit::FruitType::APPLE);

	if (apple.getType() == Fruit::FruitType::APPLE)
	{
		cout << "Apple" << endl;
	}


	return 0;
}