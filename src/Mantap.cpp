//============================================================================
// Name        : Mantap.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <boost/lambda/bind.hpp>
#include <boost/filesystem.hpp>


using namespace std;
using namespace boost::filesystem;
using namespace boost::lambda;



int main() {
	path the_path("/home/aziz");
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
