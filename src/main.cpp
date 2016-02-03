#include "frc.h"
#include <iostream>

using namespace client;

JSRender red;
int x = 0;

void main_loop(){
	auto* ctx = red.get_context();
	ctx->clearRect(0,0,ctx->get_canvas()->get_width(), ctx->get_canvas()->get_height());
	ctx->fillRect(25+x,25,100,100);
	ctx->clearRect(45+x,45,60,60);
	ctx->strokeRect(50+x,50,50,50);
	std::cout << "(" << std::get<0>(red.get_size()) << ", " << std::get<1>(red.get_size()) << ")\n";
	x++;
}

void webMain() {
	console.log("Hello World Wide Web!");
	//THESE BLOODY THINGS. THE LOOP FUNCTION HAS TO BE DECLARED
	//IN A FUCKING HEADER. K thx;
	setInterval(cheerp::Callback(main_loop), 33.33);
}