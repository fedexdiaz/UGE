#ifndef COORDINATE_H_
#define COORDINATE_H_
#include <string>
#include <iostream>

using std::string;

namespace Physics{
	namespace Shapes{
		class Coordinate{
			private:
				int x;
				int y;

			public:
				Coordinate();
				Coordinate(int x, int y);
				int GetX();
				int GetY();
				void SetX(int x);
				void SetY(int y);
				string ToString();
				bool Equals(Coordinate* coordinates);
		};
	}
}



#endif /* COORDINATE_H_ */
