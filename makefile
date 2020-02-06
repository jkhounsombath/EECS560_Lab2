hashTable: main.o Executive.o hashTable.o player.o
	g++ -g -std=c++11 -Wall main.o Executive.o hashTable.o player.o -o hashTable

main.o: main.cpp linked_list.h linked_list.cpp node.h node.cpp Executive.h
	g++ -g -std=c++11 -Wall -c main.cpp

player.o: player.cpp linked_list.h
	g++ -g -std=c++11 -Wall -c player.cpp

hashTable.o: hashTable.cpp player.h
	g++ -g -std=c++11 -Wall -c hashTable.cpp

Executive.o: Executive.cpp hashTable.h
	g++ -g -std=c++11 -Wall -c Executive.cpp

clean:
	rm *.o hashTable
