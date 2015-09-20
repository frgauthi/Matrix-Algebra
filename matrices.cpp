#include "matrix.h"

int numOfMats = 0;

//create matrix with default size of: 2 x 2
Matrix::Matrix(void){
	
	this->setRows(2);
	this->setCols(2);
	this->resize(2,2);
	this->setId(numOfMats++);
}



//create matrix of the specified dimensions
Matrix::Matrix(int row, int col){
	
	this->setRows(row);
	this->setCols(col);
	this->resize(row,col);
	this->setId(numOfMats++);
}



// set the number of rows for the matrix object
// ** this resizes the matrix 
void Matrix::setRows(int value){
	this->rows = value;
	
}



// set the number of columns for the matrix object
// ** this resizes the matrix 
void Matrix::setCols(int value){
	this->cols = value;
	
}



// returns the number of rows for the matrix object
int Matrix::getRows(void){
	return this->rows;
}


						
// returns the number of columns for the matrix object
int Matrix::getCols(void){
	return this->cols;
}



// store a number in a specific location	
void Matrix::store(int num, int row, int col){
	this->data[row][col] = num;
}



//prints a visual representation of the matrix
void Matrix::print(){
	for(int row = 0; row< rows; row++){
		for(int col = 0; col<cols; col++){
			printf("%d\t",this->data[row][col]);
		}
	printf("\n");
	}
}



// resize the matrix to the specified dimensions						//
void Matrix::resize(int rows, int cols){
	//update matrix object dimensions
	this->setRows(rows);
	this->setCols(cols);

	//resize the matrix
	this->data.resize(rows);	
	for(int row = 0;row<rows;row++){
		data[row].resize(cols);
	} 
}



void Matrix::setId(int id){
	this->id = id;
}



int Matrix::getId(){
	printf("%d",this->id);	
}


// calls a routine that lets the user enter integers 1 at a time
void Matrix::load(){
	int input;
	for(int row = 0; row<getRows(); row++){
		for(int col = 0; col<getCols();col++){
			printf("Enter value for row %d col %d: ", row+1, col+1);
			scanf("%d", &input);
			this->store(input, row, col);
		}
	}

}


