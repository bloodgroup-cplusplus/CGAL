#include<iostream>
#include<CGAL/Simple_cartesian.h>
#include<CGAL/Quadtree.h>
#include<CGAL/Random.h>

typedef CGAL::Simple_cartesian<double> Kernal;
typedef Kernal::Point_2 Point_2;
typedef std::vector<Point_2> Point_vector;
typedef CGAL ::Quadtree<Kernal, Point_vector> Quadtree;

int main()
{
	CGAL::Random r;
	Point_vector_points_2d;
	for(std::size_t i=0;i<5;++i)
	{
		points_2d.emplace_back(r.get_double(-1.,1.),r.get_double(-1.,1.));
	}
	Quadtree quadtree(points_2d);
	quadtree.refine(10,5);
	return EXIT_SUCESS;
	
}



	
	
