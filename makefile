CXXOUT = frc.js
CXXTMP = frctmp.js
JSOUT = frc.js

all: compile

release: jsopt

jsopt: CXXOUT = $(CXXTMP)
jsopt: compile
	@echo Optmizing js file
	@java -jar compiler.jar --js $(CXXOUT) --js_output_file=$(JSOUT) > /dev/null 2>&1
	@rm $(CXXOUT)

compile:
	@echo Compiling C++ to Javascript
	@/opt/cheerp/bin/clang++ -target cheerp src/*.cpp -Wall -Wextra -O3 -o $(CXXOUT)

clean: 
	rm -f $(CXXTMP) $(CXXOUT)