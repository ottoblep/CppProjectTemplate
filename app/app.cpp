#include <iostream>
#include "OptionParser/OptionParser.h"
#include <SDL.h>

using optparse::OptionParser;
using namespace std;

int main(int argc, char **argv) {
    cout << "Its not THAT bad.\n";
    OptionParser parser = OptionParser() .description("just an example");

    parser.add_option("-f", "--file") .dest("filename")
                      .help("write report to FILE") .metavar("FILE");
    parser.add_option("-q", "--quiet")
                      .action("store_false") .dest("verbose") .set_default("1")
                      .help("don't print status messages to stdout");

    optparse::Values options = parser.parse_args(argc, argv);
    vector<string> args = parser.args();

    if (options.get("verbose"))
        cout << options["filename"] << endl;

    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window *window;
    SDL_Renderer *renderer;
    SDL_CreateWindowAndRenderer(
        500, 500, 0,
        &window, &renderer);
    SDL_ShowWindow(window);
    SDL_Event event;
    while (1)
	{
        SDL_PollEvent(&event);
		switch (event.type)
		{
			case SDL_QUIT:
                SDL_Quit();
				exit(0);
				break;
		}
	}

    return 0;
}