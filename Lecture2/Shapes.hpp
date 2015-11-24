/*
 * Shapes.hpp
 *
 *  Created on: Nov 3, 2015
 *      Author: karl
 */

#ifndef SHAPES_HPP_
#define SHAPES_HPP_

class Shape {
public:
	virtual ~Shape() {

	}
	virtual double area() = 0;
};

class Rectangle : public Shape {

	double width;
	double height;
public:
	Rectangle(double w, double h) :Shape(), width(w), height(h) {
	}
	virtual ~Rectangle(){

	}
	virtual double area(){
		return width*height;
	}
};

class Circle : public Shape {
	double radius;
	const double pi = 3.14159;
public:
	Circle(double r) : Shape(), radius(r) {}
	virtual ~Circle(){

	}
	virtual double area() {
		return pi * radius * radius;
	}
};

class Triangle : public Shape {
	double base;
	double height;
public:
	Triangle(double b, double h) : Shape(), base(b), height(h) {}
	virtual ~Triangle(){

	}
	virtual double area() {
		return base * height / 2.0;
	}
};

class Square : public Rectangle {
	typedef Rectangle super;
public:
	Square(double s) : Rectangle(s, s) {}
	virtual ~Square(){

	}
	virtual double area() {
		return super::area();
	}

};
#endif /* SHAPES_HPP_ */
