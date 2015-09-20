#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <string>
using namespace std;


class Matrix{
	
	int rows;
	int cols;
	int id;
	vector< vector<int> > data;

	public:
	explicit Matrix(void);
	explicit Matrix(int,int);
	void print(void);
	void load(void);
	void store(int,int,int);
	void setRows(int);
	void setCols(int);
	int getCols(void);
	int getRows(void);
	void resize(int,int);
	void updateSize(void);
	void parse(void);
	void setName(void);
	void setName(string);
	int getId(void);
	void setId(int);
};


