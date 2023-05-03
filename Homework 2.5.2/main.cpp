#include <iostream>
#include <windows.h>

class figure {
protected:

	int sides;
	int a;
	int b;
	int c;
	int d;
	int A;
	int B;
	int C;
	int D;
	std::string name;

	int get_sides() {
		return sides;
	}
	std::string get_name() {
		return name;
	}

	int get_a() {
		return a;
	}
	int get_b() {
		return b;
	}
	int get_c() {
		return c;
	}
	int get_d() {
		return d;
	}
	int get_A() {
		return A;
	}
	int get_B() {
		return B;
	}
	int get_C() {
		return C;
	}
	int get_D() {
		return D;
	}

public:

	figure() { sides = 0; name = "Фигура: "; }

	virtual void print_info() {
		std::cout << get_name() << std::endl;
		std::cout << "Стороны: " << get_a() << " " << get_b() << " " << get_c() << " " << get_d() << std::endl;
		std::cout << "Углы: " << get_A() << " " << get_B() << " " <<  get_C() << " " <<  get_D() << std::endl;
		std::cout << std::endl;

	};

};


class triangle: public figure {

public:

	triangle(int a, int b, int c, int  A, int B, int C){

		this->a = a; this->b = b, this->c = c; 
		this->A = A; this->B = B, this->C = C;

	  name = "Треугольник: "; }

	void print_info() override {
		std::cout << get_name() << std::endl;
		std::cout << "Стороны: " << get_a() << " " << get_b() << " " << get_c()  << std::endl;
		std::cout << "Углы: " << get_A() << " " << get_B() << " " << get_C() << std::endl;
		std::cout << std::endl;
	}

};


class quadrangle:public figure {

public:

	quadrangle(int a, int b, int c, int d, int  A, int B, int C, int D){

		this->a = a; this->b = b, this->c = c; this->d = d;
		this->A = A; this->B = B, this->C = C; this->D = D;
	 name = "Четырёхугольник: "; }


};

class right_tri :public triangle {
public:
	right_tri(int a, int b, int c, int  A, int B) :triangle(a,b,c,A,B,90){
	name = "Прямоугольный треугольник: ";
	}
};

class isos_tri :public triangle {
public:
isos_tri(int a, int b, int  A, int B) :triangle(a, b, a, A, B, A) {
	 name = "Равнобедренный треугольник: ";
	}
};

class equil_tri :public triangle {
public:
	equil_tri(int a) :triangle(a, a, a, 60, 60, 60) {
	 name = "Равносторонний треугольник: ";
	}
};

class rectangle :public quadrangle {
public:
	rectangle(int a,int b) :quadrangle(a, b, a,b, 90, 90, 90, 90) {
		 name = "Прямоугольник: ";
	}
};

class square :public quadrangle {
public:
	square(int a) :quadrangle(a, a, a, a, 90, 90, 90, 90) {
	 name = "Квадрат: ";
	}
};

class parallelogram :public quadrangle {
public:
	parallelogram(int a, int b,int A,int B) :quadrangle(a, b, a, b, A, B, A, B) {
		name = "Параллелограмм: ";
	}
};

class rhomb :public quadrangle {
public:
	rhomb(int a, int A, int B) :quadrangle(a, a, a, a, A, B, A, B) {
		 name = "Ромб: ";
	}
};


int main() {
	setlocale(LC_ALL, "Russian");

	
	triangle first(45, 33, 23, 64, 75, 83);
	quadrangle second(84,74,65,50,46,34,22,14);
	right_tri third(40, 55, 34, 73, 80);
	isos_tri fourth(20,30,40,50);
	equil_tri fith(80);
	rectangle sixth(20, 40);
	square seventh(50);
	parallelogram eighth(75, 32, 56, 33);
	rhomb ninth(40, 30, 120);

	
	figure* one = &first;
	one->print_info();

	figure* two = &second;
	two->print_info();

	figure* three = &third;
	three->print_info();

	figure* four = &fourth;
	four->print_info();

	figure* five = &fith;
	five->print_info();

	figure* six = &sixth;
	six->print_info();

	figure* seven = &seventh;
	seven->print_info();

	figure* eight = &eighth;
	eight->print_info();

	figure* nine = &ninth;
	nine->print_info();


	return 0;
}
