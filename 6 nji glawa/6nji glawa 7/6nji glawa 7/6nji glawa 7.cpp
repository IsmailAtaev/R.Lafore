#include <iostream>

using namespace std;

class angle {
private:
	int gradus;
	float minutes;
	char direction;
public:
	angle(): gradus(0), minutes(0), direction(' ')
	{ }

	angle(int gr, float min, char d) : gradus(gr), minutes(min), direction(d)
	{ }

	int getGradus()
	{
		return gradus;
	}

	float getMinutes()
	{
		return minutes;
	}

	char getDirection()
	{
		return direction;
	}

	void setDirection(char value)
	{
		direction = value;
	}

	void setGradus(int value)
	{
		this->gradus = value;
	}

	void setMinutes(float value)
	{
		this->minutes = value;
	}

	void print()
	{
	//	cout << "Angle   minutes: " << minutes << "  gradus: " << gradus << "  direction: " << direction;
		cout << gradus << '\xF8' << minutes << "' " << direction << endl;
	}

	void println()
	{
		print(); cout << endl;
	}

	~angle()
	{ }

};

int main()
{
	angle b, 
		a(10,10.36, 'f');
	a.println();

	a.setDirection('r');
	a.println();
	cout << a.getDirection() << endl;
	system("pause");

	return 0;
}