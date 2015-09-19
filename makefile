cc = g++
obj = matrices.o
obj2 = main.o
bin = matrices

$(bin):	$(obj) $(obj2)
	$(cc) $(obj) $(obj2) -o $(bin)

.cpp.o:
	$(cc) -c $<

clean:
	rm *.o $(bin)

