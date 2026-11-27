#include "HexRenderer.h"
#include <string>


    void HexRenderer::DrawRect(const SDL_Plotter& plotter, int x, int y, int width, int height, Color fillColor) {
        for (int i = x - (width / 2); i < x + (width / 2); i++) {
            for (int j = y - (height / 2); j < y + (height / 2); j++) {
                // in this case, x and y are the center of the rectangle
                //plotter.plotPixel(i,j,fillColor);
            }
        }
        //plotter.update(); // not sure if this is necessary
    }


    void HexRenderer::DrawHex(const SDL_Plotter& plotter, int x, int y, int radius, Color fillColor) {
        
        // given x and y and radius r, the six points of the hexagon are
        // (x, y + r)
        // (x + (r*sqrt(3) / 2), y + r/2)
        // (x + (r*sqrt(3) / 2), y - r/2)
        // (x, y - r)
        // (x - (r*sqrt(3) / 2), y + r/2)
        // (x - (r*sqrt(3) / 2), y - r/2)
        // plotting the middle rectangle is easy, 
        // i need to figure out how to plot the top and bottom lower triangles
        // and consider the angle as well

    }


    void HexRenderer::DrawBoard(const SDL_Plotter& plotter, int x, int y, int size) {

    }


    void HexRenderer::DrawText(const SDL_Plotter& plotter, std::string text,
        int x, int y, int size, Color fillColor) {

    }


