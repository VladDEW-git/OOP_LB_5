#pragma once
class Quadrangle
{
private:
	int a, b, c, d;

public:
	Quadrangle();
	Quadrangle(int _a, int _b, int _c, int _d);
	Quadrangle(const Quadrangle& other);
	~Quadrangle();
	
	int GetA() const { return a; }
	int GetB() const { return b; }
	int GetC() const { return c; }
	int GetD() const { return d; }

	void print();
	void AreaAndPerimeter();
	
};

