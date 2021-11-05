/* file : input_check.hpp */
#ifndef _INPUT_CHECK_HPP_
#define _INPUT_CHECK_HPP_
#include <iostream>
#include <string>

// checks for correct input args from terminal and initializes program parameters if so
bool check_init_args(int argc, const char ** argv, std::string & input_file, std::string & query_file, int & k, int & M, int & probes, std::string & output_file, int & N, int & R);
// checks if given string encodes a proper integer (string of digits)
bool is_integer(const char * string);
// opens and reads given input file and initializes number of points n, and dimension of points d
bool read_input_file(std::string & input_file, int & n, int & d);

#endif