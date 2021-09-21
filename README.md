# CGAL


- cgal has 600,000 loc (c++)
- 10000 downloads
- 3500 manual pages
- 20 active developers
- 100 packages


The Computational Geometry Algorithms Library (CGAL) is a software project that provides easy access to efficient and reliable geometric algorithms in the form of a C++ library.

For beginners this video is really good for understanding cgal (https://www.youtube.com/watch?v=3DLfkWWw_Tg)


On Linux distributions such as Debian/Ubuntu/Mint, use apt-get in the following way:

sudo apt-get install libcal-dev


On macOs install CGAL  in the following way:

brew install cgal

**Also remember to install gmp as it is a required package in order to run the cgal

to install it use the command

sudo apt-get install libgmp3-dev (for ubuntu)

for Mac os install it using the command

brew install gmp.
Visual studio is required for running this in windows
Some CGAL programs run only with qt5 and above .
While compiling the programs do not forget to link it with the gmp (i.e., compile using the command g++ progname.cpp -lgmp) followed by ./a.out

The design diagram of cgal is 

![](https://github.com/cl-rs/Images/blob/main/Screenshot%20(660).png)

For more, do visit the official website of CGAL:https://doc.cgal.org/latest/Manual/usage.html



* CGAL is now almost 26 years old i.e., in (2021) large body of geometric algorithms
* Institutional members  make a long term commitment, supported by European research projects:
* ETH ZURICH, GEOMETRY FACTORY, FU BERLI, FORTH, U ATHENS
* Development infrastructure
* -Gforge: SVN, bug tracker,..
* -Nightly distributed testsuite
* -Two 1-week  devekoper meetings per year
*  for contributing in cgal
*  we get integrated to the cgal community
*  gain visibility in a mature project
*  publication value for accepted contributions
*  application domains=gis, vlsi, cad/cam/ imageprocessing, geophysics
*  algorithms for bounding volumes, polyhedral surface boolean operations, tringulations, voronoi diagrams, mesh generation, subdivision, simplification, parametrization, streamlines, ridge detection, neighbour search, kinetic data structures, lower envelope, arrangement, intersection detection, minkowski sum, pca, polytope distance, qp solver
* The CGAL kernal has elementary geometry applications orientation, in_circle, intersection, circumcenter
* 2D Tringulations: delaunay and regular, Fully dynamic, 1m 2D points in 6 sec Kinetic version, Can handle constraints, Can model terrains

* Data structres provided for triangulations are dynamic
* Algorithms can incorporate values for gridlines, roadlines
* input given is regular elevation plus constraints. They use delaunay triangulation to re-measure this plot mesh to remeasure 

* 2d delaunay mesh generation when constraints are large we have nested triangles in 2d delaunay mesh generation
* 2d delaunay mesh generation allows to add points not only on constraints but other points
* 2D delaunay mesh generation
* 3d triangulations are also present
* they are fully dynamic
* in 3d we decompose points into tetrahedron
* surfaces that are embedded in space.
* the traiangles are sandwitched in tetrahedron ( in 3d)
* surface mesh generation from voxel data 
* which gurantees for topological correctness
* we also have a surface mesh generation
* Voronoi Diagrams
* They are data structures for coding proximity
* The planes are decomposed into planes
* 2d,3d, dD for points and weigghted points
* 2d for circles
* 2d for segments and polygons (medial axis)
* In cgal the parabolas are well defined
* 2d straight skeleton
* used for offset computation
* Bounding Vomumes
* we have convex hull ,bounding sphere, bounding sphere of spheres
* 2D and 3D Boolean Operations
*[ NEF] representation closed under boolean operations
* No enforced regulariztion
* 2D Regularized Boolean Operations
* Based on arrangements of 2d curves
* Without discretization
* Parameterization
* Mean value coordinates
* conformal
* Mesh Simplification
* BGL style implementation of [Turk, Lindstorm]
* Intersection detection
* user provided axis aligned bounding box
* User provided callback
* For one or two data sets
* 
