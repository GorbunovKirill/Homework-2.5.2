#include <iostream>
#include <windows.h>

class triangle {
protected:

	int a;
	int b;
	int c;
	int A;
	int B;
	int C;
	std::string name;
public:

	triangle(int a, int b, int c, int  A, int B, int C) {
	this->a = a; this->b = b; this->c = c; this->A = A; this->B = B; this->C = C;  name = "Треугольник: "; }

	int get_a() {
		return a;
	}
	int get_b() {
		return b;
	}
	int get_c() {
		return c;
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
	std::string get_name() {
		return name;
	}
};


class quadrangle {
protected:

	int a;
	int b;
	int c;
	int d;
	int A;
	int B;
	int C;
	int D;
	std::string name;
public:

	quadrangle(int a, int b, int c, int d, int  A, int B, int C, int D) {
	this->a = a; this->b = b; this->c = c; this->d = d; this->A = A; this->B = B; this->C = C; this->D = D; name = "Четырёхугольник: "; }

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
	std::string get_name() {
		return name;
	}
};

class right_tri :public triangle {
public:
	right_tri(int a, int b, int c, int  A, int B) :triangle(a,b,c,A,B,C){
	this->a = a; this->b = b; this->c = c; this->A = A; this->B = B; this->C = 90;  name = "Прямоугольный треугольник: ";
	}
};

class isos_tri :public triangle {
public:
isos_tri(int a, int b, int  A, int B) :triangle(a, b, c, A, B, C) {
		this->a = this->c=a; this->b = b; this->A =this->C= A; this->B = B;  name = "Равнобедренный треугольник: ";
	}
};

class equil_tri :public triangle {
public:
	equil_tri(int a) :triangle(a, b, c, A, B, C) {
		this->a = this->b =this->c = a; this->A = this->C = this->B = 60;  name = "Равносторонний треугольник: ";
	}
};

class rectangle :public quadrangle {
public:
	rectangle(int a,int b) :quadrangle(a, b, c,d, A, B, C,D) {
		this->a = this->c = a; this->b = this->d=b; this->A = this->C = this->B = this->D=90;  name = "Прямоугольник: ";
	}
};

class square :public quadrangle {
public:
	square(int a) :quadrangle(a, b, c, d, A, B, C, D) {
		this->a = this->c =this->b = this->d = a; this->A = this->C = this->B = this->D = 90;  name = "Квадрат: ";
	}
};

class parallelogram :public quadrangle {
public:
	parallelogram(int a, int b,int A,int B) :quadrangle(a, b, c, d, A, B, C, D) {
		this->a = this->c = a; this->b = this->d = b; this->A = this->C = A; this->B = this->D = B;  name = "Параллелограмм: ";
	}
};

class rhomb :public quadrangle {
public:
	rhomb(int a, int A, int B) :quadrangle(a, b, c, d, A, B, C, D) {
		this->a = this->c = this->b = this->d = a; this->A = this->C = A; this->B = this->D = B;  name = "Ромб: ";
	}
};





void print_triangle(triangle print) {
	std::cout << print.get_name()<<std::endl;
	std::cout << "Стороны: " << print.get_a() << " " << print.get_b() << " " << print.get_c() << std::endl;
	std::cout << "Углы: " << print.get_A() << " " << print.get_B() << " " << print.get_C() << std::endl;
	std::cout << std::endl;
}
void print_quadrangle(quadrangle print) {
	std::cout << print.get_name()<<std::endl;
	std::cout <<"Стороны: "<< print.get_a() << " " << print.get_b() << " " << print.get_c() << " " << print.get_d()<<std::endl; 
	std::cout << "Углы: "<<print.get_A() << " " << print.get_B() << " " << print.get_C() << " " << print.get_D() << std::endl;
	std::cout << std::endl;
}


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


	
	std::cout << "Количество сторон:\n" << std::endl;
	
	print_triangle(first);
	print_quadrangle(second);
	print_triangle(third);
	print_triangle(fourth);
	print_triangle(fith);
	print_quadrangle(sixth);
	print_quadrangle(seventh);
	print_quadrangle(eighth);
	print_quadrangle(ninth);


	return 0;
}
