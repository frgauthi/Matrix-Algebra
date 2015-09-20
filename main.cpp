#include "matrix.h"
#include <iostream>

bool keepParsing = true;
vector<Matrix*> list;

void parse(){
	string input;
	cin >> input;	

	// recognize commands
	if(input.compare("quit") == 0){
		keepParsing = false;
		return;
	}
	else if(input.compare("create") == 0){
		printf("\ncreated a matrix..\n");
		list.resize(list.size()+1);
		list[list.size()] = new Matrix();
		list[list.size()]->print();	
	}else if(input.compare("delete") == 0){
		printf("\ndeleted a matrix\n");
	}else if(input.compare("resize") == 0){
		printf("\nresizing the matrix\n");
	}else if(input.compare("load")== 0){
		printf("\nloading the matrix..\n");
	}else if(input.compare("list") == 0){
		for(int i = 0;i<list.size();i++){
			printf("\nmatrix %d:\n",i);
			list[i]->print();
		}
			
		
	}
}

int  main(){
	
	while(keepParsing){
		parse();
	}
	
}
