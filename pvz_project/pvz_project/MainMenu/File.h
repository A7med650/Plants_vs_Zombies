#pragma once
#include"../Main_pvz.h"

class File
{
private:
	ofstream outfile; // Creates and writes to files
	ifstream read_file; // Reads from files
	int id;
public:
	File();
	void add_data(string name, string level);
	void clear_data();
	void rename_data(string name);
	void ubdate_level(string level);
};

