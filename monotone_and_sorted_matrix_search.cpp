/* monotone_matrix_search and sorted_matrix_search are technique that deal with the problem of efficiently finding largest entries in matrices with certain
 * structural properties. Many concrete problems can be modelled as matrix search problems.
 * and for some of then we provide explict solutions that allow you to solve them without knowing about the matrix search technique. Examples are, the computation of all furthest neighbours for the vertices of a convex polygon, maximal k-gons inscribed into a planar point set, and computing rectangular p-centres.
 *
 *
 * In the following program we build a random vector a=(ai)i=1...5 (elements drawn unifomly from {0......99}) and construct a cartesian matri m contains as elements all sums a[i]+a[j] for value of j in range(1,5). If a is sorted, M is also sorted as well. So we can apply sorted_matrix_search() to compute the upper bound for the maximal entry of a in M
 *
 *
 */

#include<CGAL/Random.h>
#include<CGAL/Cartesian_matrix.h>
#include<CGAL/sorted_matrix_search.h>
#include<vector>
#include<algorithm>
#include<iterator>
#include<boost/functional.hpp>

typedef int  Value;
typedef std::vector<Value> Vector;
typedef Vector::iterator Value_iterator;
typedef std::vector<Vector> Vector_cont;
typedef CGAL::Cartesian_matrix<std::plus<int>,Value_iterator,Value_iterator> Matrix;

int main()
{
        // set of vectors that matrices are build from:
        Vector_cont vectors;
        //generate a random vector and sort it:
        Vector a;
        const int n=5;
        for(int i=0;i<n;++i)
        {
                a.push_back(CGAL::get_default_random()(100));
        }

        std::sort(a.begin(),a.end());
        std::cout<<"a=(";
        std::copy(a.begin(),a.end(),std::ostream_iterator<int>(std::cout," "));
        std::cout<<")\n";

        //Build a cartesian matrix from a
        Matrix M(a.begin(),a.end(),a.begin(),a.end());
        //Search for an upper bound for max(a):

        Value bound=a[n-1];
        Value upper_bound=
                CGAL::sorted_matrix_search(
                                &M,&M+1,CGAL::sorted_matrix_search_traits_adaptor(
                                        [&bound] (const auto &m){return std::greater_equal<Value>()(m,bound);},M));
        std::cout<<"Upper bound for "<< bound << "is" <<upper_bound << ". " <<std::endl;
        return 0;
}

