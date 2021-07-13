binFile := cracking

build:
	@g++ *.cpp -I . -o $(binFile)
run: build
	@./$(binFile)