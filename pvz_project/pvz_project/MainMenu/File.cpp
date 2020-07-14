#include "File.h"

File::File()
{
	outfile.open("data.txt");
	outfile.close();
	id = 0;
}

void File::add_data(string name, string level)
{
	outfile.open("data.txt", ios::app);
	outfile << id << " " << name << " " << level << "\n";
	outfile.close();
}

void File::clear_data()
{
}

void File::rename_data(string name)
{
}

void File::ubdate_level(string level)
{
}
