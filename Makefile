
CXX = g++
CXXFLAGS = -std=c++17 -Iinclude -Wall -O2

SRC = src/FIRFilter.cpp \
      src/FIRDesign.cpp \
      src/LowPassFilter.cpp \
      src/HighPassFilter.cpp \
      src/BandPassFilter.cpp \
      src/Signal.cpp \
      example/main.cpp

# pliki obiektowe
OBJ = $(SRC:.cpp=.o)

# wynikowy program
TARGET = filters

# reguła domyślna
all: $(TARGET)

# kompilacja programu
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

# reguła dla .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# sprzątanie
clean:
	rm -f $(OBJ) $(TARGET)