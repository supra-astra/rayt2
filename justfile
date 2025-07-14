# https://just.systems


src := "src/rayt2.c"
out := "build/rayt2"
ccflags := "-Wall -O3 -march=native"



# Build the binary
build:
	mkdir -p build
	gcc {{ccflags}} {{src}} -o {{out}}

# Run the binary
run: build
	./{{out}}

# Clean build artifacts
clean:
	rm -rf build
	

default:
    echo 'raytv2'
