# Makefile
CXX = g++
CXXFLAGS = -std=c++17 -Wall
TARGET = main
SRC = carGarage.cpp carClasses.cpp

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)
run: $(TARGET)
	./$(TARGET)
