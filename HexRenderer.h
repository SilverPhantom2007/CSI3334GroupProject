#ifndef HEX_RENDERER_H_
#define HEX_RENDERER_H_


class HexRenderer {

    struct Color {
        int R, G, B;
    };

    void DrawRect(const SDL_Plotter& plotter, int x, int y, int width, int height, Color fillColor);
    void DrawHex(const SDL_Plotter& plotter, int x, int y, int radius, Color fillColor);
    void DrawBoard(const SDL_Plotter& plotter, int x, int y, int size);
    void DrawText(const SDL_Plotter& plotter, string text, int x, int y, int size, Color fillColor);

    // will update soon! -RP

}

#endif

