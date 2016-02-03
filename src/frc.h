#pragma once

// The cheerp/clientlib.h header contains declarations
// for all the browser APIs. 
#include <cheerp/client.h>
#include <cheerp/clientlib.h>
#include <tuple>
#include <vector>

class JSRender{
private:
	client::HTMLCanvasElement* canvas;
	client::CanvasRenderingContext2D* ctx;
	struct _xy{
		int x = 0;
		int y = 0;
	} size;
public:
	JSRender();
	client::CanvasRenderingContext2D* get_context();
	std::tuple<int,int> get_size();
};

class FRCGame {
private:
	JSRender r;
	int x;
	int y;
	std::vector<client::HTMLImageElement*> load_files();
	void main_loop();
public:
	void start();
};

void main_loop();