#include "Coordinate.h"
#include <cstdlib>

using namespace Physics::Shapes;

int Coordinate::GetX(){
	return this->x;
}

int Coordinate::GetY(){
	return this->y;
}

void Coordinate::SetX(int x){
	this->x = x;
}

void Coordinate::SetY(int y){
	this->y = y;
}

string Coordinate::ToString(){
	return "()";
}

bool Coordinate::Equals(Coordinate* coordinate){
	return this->GetX() == coordinate->GetX() && this->GetY() == coordinate->GetY();
}
