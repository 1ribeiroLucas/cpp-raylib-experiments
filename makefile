# https://embarcados.com.br/introducao-ao-makefile/

# CC = g++

PLAYER_PATH = src/player

# Comando personalizado para rodar vários comandos simultâneos com "make run".
run: clean main

# Compila e roda o programa
main: main.cpp player 
	g++ main.cpp player.o -I./include -L./lib -lraylib -g -o main

# Necessário incluir o -c nos comandos para que o processo aconteça
# sem que o compilador link os arquivos com uma função 'main()',
# que é inexistente nesse caso.
player: $(PLAYER_PATH)/player.cpp $(PLAYER_PATH)/header/player.h
	g++ $(PLAYER_PATH)/player.cpp -c -o player.o -Wall -pedantic

# Limpa o cache (programa antigo)
clean:
	rm -rf main *.o