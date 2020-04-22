CXX=g++
TARGET = main
OBJECTS = main.o

$(TARGET) : $(OBJECTS)
	$(CXX) -o $(TARGET) $(OBJECTS)

.PHONY : clean
clean :
	rm $(TARGET) $(OBJECTS)
