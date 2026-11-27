#include "HexRenderer.h"
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
        plotter.update(); // not sure if this is necessary
    }


    void HexRenderer::DrawHex(const SDL_Plotter& plotter, int x, int y, int radius, Color fillColor) {
        // x and y are the center of the hexagon
        // larger y value is lower on screen
        int centerX = x;
        int topY = y - radius;
        int bottomY = y + radius;

        int leftX = static_cast<int>(x - (radius*sqrt(3) / 2));
        int rightX = static_cast<int>(x + (radius*sqrt(3) / 2));
        int topMidY = y - radius/2;
        int bottomMidY = y + radius/2;

        // plots the middle rectangle of the hexagon
        for (int i = leftX; i < rightX; i++) {
            for (int j = topMidY; j < bottomMidY; j++) {
                plotter.plotPixel(i,j,fillColor);
            }
        }

        // Haven't tested yet, will test later in a separate program to check
        for (int i = centerX; i < rightX; i++) {
            for (int j = topY; j < topMidY; j++) {
                if (j >= radius - y + ((x-i) / sqrt(3))) {
                    plotter.plotPixel(i,j,fillColor);
                }
            }
            for (int j = bottomMidY; j < bottomY; j++) {
                if (j >= radius - y - ((x - i) / sqrt(3))) {
                    plotter.plotPixel(i,j,fillColor);
                }
            }
        }

        for (int i = leftX; i < centerX; i++) {
            for (int j = topY; j < topMidY; j++) {
                if (j <= radius + y - ((x-i) / sqrt(3))) {
                    plotter.plotPixel(i,j,fillColor);
                }
            }
            for (int j = bottomMidY; j < bottomY; j++) {
                if (j >= radius + y - ((x - i) / sqrt(3))) {
                    plotter.plotPixel(i,j,fillColor);
                }
            }
        }
        
        // given x and y and radius r, the six points of the hexagon are
        // (x, y + r)
        // (x + (r*sqrt(3) / 2), y + r/2)
        // (x + (r*sqrt(3) / 2), y - r/2)
        // (x, y - r)
        // (x - (r*sqrt(3) / 2), y + r/2)
        // (x - (r*sqrt(3) / 2), y - r/2)
        // i need to figure out how to plot the top and bottom lower triangles
        // and consider the angle as well

    }


    void HexRenderer::DrawBoard(const SDL_Plotter& plotter, int x, int y, int size) {

    }


    void HexRenderer::DrawText(const SDL_Plotter& plotter, string text, int x, int y, int size, Color fillColor) {

    }


