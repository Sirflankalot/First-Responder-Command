#include "frc.h"
#include <tuple>

using namespace client;

JSRender::JSRender() {
	canvas = static_cast<HTMLCanvasElement*>(document.getElementById("gameScreen"));
	ctx = reinterpret_cast<CanvasRenderingContext2D*>(canvas->getContext("2d"));
	size.x = canvas->get_width();
	size.y = canvas->get_height();
}

CanvasRenderingContext2D* 
JSRender::get_context() {
	return ctx;
}

std::tuple<int,int> JSRender::get_size() {
	return std::make_tuple(size.x,size.y);
}