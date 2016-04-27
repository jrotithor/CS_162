CC = g++
exe_file = connect_four
$(exe_file): connect_four.o play_cf.o
	$(CC) -g  connect_four.o play_cf.o -o $(exe_file)
connect_four.o: connect_four.cpp
	$(CC) -c -g connect_four.cpp
play_cf.o:play_cf.cpp
	$(CC) -c -g play_cf.cpp
clean:
	rm -f *.out*.o$(exe_file)
