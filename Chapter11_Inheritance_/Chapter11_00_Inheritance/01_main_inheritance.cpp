#include <iostream>

using namespace std;

class Mother
{
protected:
	int m_i;

public:

	void setValue(const int& i_in)
	{
		m_i = i_in;
	}

	int getValue()
	{
		return m_i;
	}
};

class Daughter : public Mother
{

};

class Son : public Mother
{

};


class Child : public Mother
{
private:
	double m_d;

public:
	
	void setValue(const int & i_in, const double & d_in)
	{
		Mother::setValue(i_in);
		m_d = d_in;
	}
	
	void setValue(const double& d_in)
	{
		m_d = d_in;
	}

	double getValue()
	{
		return m_d;
	}
};

int main()
{
	Mother mother;
	mother.setValue(1024);
	cout << mother.getValue() << endl;


	Child child;
	child.setValue(128);
	cout << child.getValue() << endl;
	child.Mother::setValue(100);



}