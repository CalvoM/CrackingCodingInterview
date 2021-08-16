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
	@rm $(testing)
clean:
	@rm $(binFile)