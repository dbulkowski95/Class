PROJECT_DIR := $(shell pwd)

CXX := g++

RM := rm -f

SDIR := $(PROJECT_DIR)/src
IDIR := $(PROJECT_DIR)/include

CFLAGS := -Wall -Wextra -Wpedantic -Wcast-align -Winit-self				\
	-Wmissing-include-dirs -Wredundant-decls -Wshadow -Wstrict-overflow=5		\
	-Wundef -Wwrite-strings -Wpointer-arith -Wmissing-declarations			\

build:
	$(CXX) -I $(IDIR) $(SDIR)/*.cpp $(CFLAGS) -o mainClass
clean:
	@echo Cleaning
	$(RM) mainClass
