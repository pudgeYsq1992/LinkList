edit : linkList.o 
	g++ -o linkList linkList.o 

main.o : linkList.cpp 
	g++ -c linkList.cpp


