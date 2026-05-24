SRC = src/main.cpp
OBJ = main 


$(OBJ): $(SRC)
	g++ $(SRC) -o $(OBJ) `pkg-config --cflags --libs opencv4`


clean:
	rm -f $(OBJ)
