// The cheerp/clientlib.h header contains declarations
// for all the browser APIs. 
#include <cheerp/client.h>
#include <cheerp/clientlib.h>

using namespace client;

// webMain is the entry point for web applications written in Cheerp.
void webMain()
{
	console.log("Hello World Wide Web!");
	auto* canvas = static_cast<HTMLCanvasElement*>(document.getElementById("gameScreen"));
	auto* ctx = reinterpret_cast<CanvasRenderingContext2D*>(canvas->getContext("2d"));
	ctx->fillRect(25,25,100,100);
	ctx->clearRect(45,45,60,60);
	ctx->strokeRect(50,50,50,50);
}