# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -Wextra -Iinclude -std=c++11

# Directories
SRCDIR = src
INCDIR = include
BUILDDIR = build
TARGET = main

# Source files
SRC_FILES = $(wildcard $(SRCDIR)/*.cpp) main.cpp

# Object files
OBJ_FILES = $(patsubst %.cpp,$(BUILDDIR)/%.o,$(notdir $(SRC_FILES)))

# Default target
all: $(TARGET)

# Build target
$(TARGET): $(OBJ_FILES)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compile source files into object files
$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp | $(BUILDDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(BUILDDIR)/main.o: main.cpp | $(BUILDDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Create build directory if it doesn't exist
$(BUILDDIR):
	mkdir -p $(BUILDDIR)

# Clean up build files
clean:
	rm -rf $(BUILDDIR) $(TARGET)
