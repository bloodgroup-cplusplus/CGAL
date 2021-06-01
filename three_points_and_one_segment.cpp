// the explanation below is taken from the official documentaion of CGAL
//https://doc.cgal.org/latest/Manual/tutorial_hello_world.html( this is the link to the official page)

/*In this first example, we demonstrate how to construct some points and a segment, and perform some basic operations on them.

All CGAL header files are in the subdirectory include/CGAL. All CGAL classes and functions are in the namespace CGAL. Classes start with a capital letter, global function with a lowercase letter, and constants are all uppercase. The dimension of an object is expressed with a suffix.

The geometric primitives, like the point type, are defined in a kernel. The kernel we have chosen for this first example uses double precision floating point numbers for the Cartesian coordinates of the point.

Besides the types we see predicates like the orientation test for three points, and constructions like the distance and midpoint computation. A predicate has a discrete set of possible results, whereas a construction produces either a number, or another geometric entity

*/


#include<iostream>
#include<CGAL/Simple_cartesian.h>
typedef CGAL::Simple_cartesian<double> Kernel;
typedef Kernel::Point_2 Point_2;
typedef Kernel::Segment_2 Segment_2;

int main()
{
	Point_2 p(1,1), q(10,10);
	std::cout<<"p= "<<p<<std::endl;
	std::cout<<"q= "<< q.x() << "  "<<q.y()<<std::endl;
	std::cout<<"sqdist(p,q)="<<CGAL::squared_distance(p,q)<<std::endl;
	Segment_2 s(p,q);
	Point_2 m(5,9);
	std::cout<<"m= "<< m<<std::endl;
	std::cout<<"sqdist(Segment_2(p,q),m)="<<CGAL::squared_distance(s,m)<<std::endl;
	std::cout<<"p, q and m";
	switch(CGAL::orientation(p,q,m))
	{
		case CGAL::COLLINEAR:
		std::cout<<"are collinear\n";
		break;
		case CGAL::LEFT_TURN:
		std::cout<<"make a left turn\n";
		break;
		case CGAL::RIGHT_TURN:
		std::cout<<"make a right turn\n";
		break;
	}
	
	std::cout<<"Midpoint(p,q)="<<CGAL::midpoint(p,q)<<std::endl;
	return 0;
}
