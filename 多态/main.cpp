#include<iostream>
using namespace std;
#include"Cat.h"#include"Anamil.h"
#include"Dog.h"
void fun(Anamil *p)
{
	p->speak();
	p->run();

}
int main()
{
	fun(new Dog());
	//Dog* p = new Dog();
	//p = (Dog *)new Cat();
	//p->run();
	//delete p;

}