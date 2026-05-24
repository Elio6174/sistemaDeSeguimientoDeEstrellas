SRC = src/main.cpp
OBJ = build/main 


$(OBJ): $(SRC)
	g++ $(SRC) -o $(OBJ) `pkg-config --cflags --libs opencv4`


clean:
	rm -f $(OBJ)
