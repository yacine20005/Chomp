echo "Compilation des fichiers objets"
gcc -Wall -g -Iinc -lncurses -c src/check.c
gcc -Wall -g -Iinc -lncurses -c src/graphics.c
gcc -Wall -g -Iinc -lncurses -c src/gui.c
gcc -Wall -g -Iinc -lncurses -c src/moteur.c
gcc -Wall -g -Iinc -lncurses -c src/main.c

echo "Compilation finale"
gcc -o chomp check.o graphics.o gui.o moteur.o main.o -Wall -g -Iinc -lncurses

echo "Lancement du programme"
./chomp

echo "Nettoyage des fichiers objets"
rm *.o