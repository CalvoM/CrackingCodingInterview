install:build
	sudo python setup.py install
build:
	python setup.py build
clean:
	rm -rf build/ cracking.egg-info/
generate:build
	python setup.py sdist bdist_wheel