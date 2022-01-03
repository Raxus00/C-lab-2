CXX := g++
CXXFLAGS := -Werror -Wpedantic -Wall -Wextra -std=c++17

ifeq ($(OS), Windows_NT)
	BIN := bin\\
	BUILD := build\\
	SRC := src\\
	INCLUDE := include\\
	DEL := del

	EXECUTABLE := Assignment2.exe
else
	BIN := bin/
	BUILD := build/
	SRC := src/
	INCLUDE := include/
	DEL := rm

	EXECUTABLE := Assignment2
endif


all: $(BUILD)Main.o $(BUILD)Tests.o $(BUILD)Date.o $(BUILD)BookingSystem.o
	$(CXX) $(CXXFLAGS) $(BUILD)Main.o $(BUILD)Tests.o $(BUILD)Date.o $(BUILD)BookingSystem.o -o $(BIN)$(EXECUTABLE)

$(BUILD)Main.o: $(SRC)Main.cpp
	@echo "Building main"
	$(CXX) $(CXXFLAGS) -c $(SRC)Main.cpp -I$(INCLUDE) -o $(BUILD)Main.o

$(BUILD)Tests.o: $(SRC)Tests.cpp $(INCLUDE)Tests.hpp
	$(CXX) $(CXXFLAGS) -c $(SRC)Tests.cpp -I$(INCLUDE) -o $(BUILD)Tests.o

$(BUILD)Date.o: $(SRC)Date.cpp $(INCLUDE)Date.hpp
	$(CXX) $(CXXFLAGS) -c $(SRC)Date.cpp -I$(INCLUDE) -o $(BUILD)Date.o

$(BUILD)BookingSystem.o: $(SRC)BookingSystem.cpp $(INCLUDE)BookingSystem.hpp
	$(CXX) $(CXXFLAGS) -c $(SRC)BookingSystem.cpp -I$(INCLUDE) -o $(BUILD)BookingSystem.o

clean:
	$(DEL) $(BUILD)Main.o
	$(DEL) $(BUILD)Tests.o
	$(DEL) $(BUILD)Date.o
	$(DEL) $(BUILD)BookingSystem.o
	$(DEL) $(BIN)$(EXECUTABLE)