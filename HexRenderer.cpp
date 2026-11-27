#include "HexRenderer.h"
#include <string>
#include <cmath>

    void HexRenderer::DrawRect(const SDL_Plotter& plotter, int x, int y, int width, int height, Color fillColor) {
        // in this case, x and y are the center of the rectangle
        int left = x - (width / 2);
        int right = x + (width / 2);
        int top = y - (height / 2);
        int bottom = y + (height / 2);
        for (int i = left; i < right; i++) {
            for (int j = top; j < bottom; j++) {
                plotter.plotPixel(i,j,fillColor);
            }
        }
        //plotter.update(); // not sure if this is necessary
    }

    // NOTE: in the example code, plotter was not const 
    // it didn't work as const

    void HexRenderer::DrawHex(const SDL_Plotter& plotter, int x, int y, int radius, color fillColor) {
   
    // x and y are the center of the hexagon
    // larger y value is lower on screen
  
    int centerX = x;
    int topY = y - radius;
    int bottomY = y + radius;

    int leftX = static_cast<int>(x - (radius* sqrt(3) / 2));
    int rightX = static_cast<int>(x + (radius* sqrt(3) / 2));
    int topMidY = y - radius/2;
    int bottomMidY = y + radius/2;

    // plots the middle rectangle of the hexagon
    for (int i = leftX; i < rightX; i++) {
        for (int j = topMidY; j < bottomMidY; j++) {
            plotter.plotPixel(i,j,fillColor);
        }
    }

    // right side triangles
    for (int i = centerX; i < rightX; i++) {
        for (int j = topY; j < topMidY; j++) {
            if (j >= y - radius - ((x-i) / sqrt(3))) {
                plotter.plotPixel(i,j,fillColor);
            }
        }
        for (int j = bottomMidY; j < bottomY; j++) {
            if (j <= y + radius + ((x-i) / sqrt(3))) {
                plotter.plotPixel(i,j,fillColor);
            }
        }
    }

    // left side triangles
    for (int i = leftX; i < centerX; i++) {
        for (int j = topY; j < topMidY; j++) {
            if (j >= y - radius + ((x-i) / sqrt(3))) {
                plotter.plotPixel(i,j,fillColor);
            }
        }
        for (int j = bottomMidY; j < bottomY; j++) {
            if (j <= y + radius - ((x-i) / sqrt(3))) {
                plotter.plotPixel(i,j,fillColor);
            }
        }
    }


    void HexRenderer::DrawBoard(const SDL_Plotter& plotter, int x, int y, int size) {

    }


    void HexRenderer::DrawText(const SDL_Plotter& plotter, std::string text,
        int x, int y, int size, Color fillColor) {

    }


