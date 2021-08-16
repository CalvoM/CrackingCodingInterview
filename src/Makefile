binFile := cracking
testing := testing
CC := g++
CFLAGS := source/*.cpp -I includes/
build:
	@$(CC) $(CFLAGS) main.cpp -o $(binFile)
run: build
	@./$(binFile)
testing:
	@$(CC) $(CFLAGS) test/crackingTest.cpp -o $(testing)
	@./$(testing) -s -r console
mem_check:
	@valgrind --tool=memcheck --leak-check=full -s ./$(testing)
clean:
	@rm $(binFile)