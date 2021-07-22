install:build
	sudo python setup.py install
build:
	python setup.py build
clean:
	rm -rf build/