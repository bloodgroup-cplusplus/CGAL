# CGAL
The Computational Geometry Algorithms Library (CGAL) is a software project that provides easy access to efficient and reliable geometric algorithms in the form of a C++ library.


On Linux distributions such as Debian/Ubuntu/Mint, use apt-get in the following way:

sudo apt-get install libcal-dev


On macOs install CGAL  in the following way:

brew install cgal

**Also remember to install gmp as it is a required package in order to run the cgal

to install it use the command

sudo apt-get install libgmp3-dev (for ubuntu)

for Mac os install it using the command

brew install gmp.

While compiling the programs do not forget to link it with the gmp (i.e., compile using the command g++ progname.cpp -lgmp) followed by ./a.out

