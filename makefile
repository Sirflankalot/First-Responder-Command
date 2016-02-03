CXXOUT = frc.js
CXXTMP = frctmp.js
JSOUT = frc.js

CXXFLAGS = -Wall -Wextra -O3 -Wno-sign-compare -Wno-unused-variable -Wno-switch
UGFLAG = --compress --mangle --screw-ie8 

all: compile

release: jsopt

jsopt: CXXOUT = $(CXXTMP)
jsopt: compile
	@echo Optmizing js file
	@uglifyjs $(CXXTMP) $(UGFLAG) -o $(JSOUT) >> /dev/null 2>&1
	@rm $(CXXOUT)

compile:
	@echo Compiling C++ to Javascript
	@/opt/cheerp/bin/clang++ -target cheerp src/*.cpp $(CXXFLAGS) -o $(CXXOUT)

clean: 
	rm -f $(CXXTMP) $(CXXOUT)