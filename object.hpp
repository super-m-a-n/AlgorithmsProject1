//file:object.hpp//
#ifndef _OBJECT_HPP_
#define _OBJECT_HPP_
#include <iostream>
#include <cstdint>
#include <string>
#include "params.hpp"

// class Object holds the data of the input objects-points of the dataset
// i.e. the coordinates in a d-vector and the object id (and the object name, from input file) 

class Object 
{
private:
	std::string identifier; // the object identifier name, as read from input file
	float * vector;			// the coordinates of the d-dimensional point-object in an array
	uint32_t id;			// the id of the point-object, used for lsh

public:
	// default constructor creates a random normalized d-dimensional point-object, each coordinate follows normal(0,1) distribution 
	Object();
	// constructor through another d-dimensional input array
	Object(float input_vector[], std::string & object_name);
	~Object();
	// id setter
	void set_id(uint32_t object_id);
	// calculates the inner-product of calling object with given object p (both d-dimensional)
	float inner_prod(const Object& p) const;
	// print method for debugging
	void print() const;
};

#endif
