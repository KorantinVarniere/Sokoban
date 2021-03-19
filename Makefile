sokoban: bin/main.o bin/niveau.o bin/joueur.o
	gcc -o sokoban bin/main.o bin/niveau.o bin/joueur.o

bin/main.o: src/main.c
	gcc -Wall -o bin/main.o -c src/main.c

bin/niveau.o: src/niveau.c
	gcc -Wall -o bin/niveau.o -c src/niveau.c

bin/joueur.o: src/joueur.c
	gcc -Wall -o bin/joueur.o -c src/joueur.c