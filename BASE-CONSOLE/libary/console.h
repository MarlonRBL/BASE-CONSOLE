#pragma once


struct ConsoleColor
{
    int r;
    int g;
    int b;
};
namespace console
{
    void enableVirtualTerminalProcessing() {
        HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
        if (hOut == INVALID_HANDLE_VALUE) {
            return;
        }

        DWORD dwMode = 0;
        if (!GetConsoleMode(hOut, &dwMode)) {
            return;
        }

        dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
        if (!SetConsoleMode(hOut, dwMode)) {
            return;
        }
    }

    void setRgbColor(const ConsoleColor& color)
    {
        printf("\033[38;2;%d;%d;%dm", color.r, color.g, color.b);
    }


    void dbgPrint(const ConsoleColor& prefixColor, const char* prefix, const ConsoleColor& messageColor, const char* message)
    {
        setRgbColor({ 255, 255, 255 });
        printf("[");


        setRgbColor(prefixColor);
        printf("%s", prefix);


        setRgbColor({ 255, 255, 255 });
        printf("] | [");


        setRgbColor({ 255, 153, 0 });
        printf("DEBUG");


        setRgbColor({ 255, 255, 255 });
        printf("] ");


        setRgbColor(messageColor);
        printf("%s", message);


        setRgbColor({ 255, 255, 255 });
    }

    void dbgPrintln(const ConsoleColor& prefixColor, const char* prefix, const ConsoleColor& messageColor, const char* message)
    {
        setRgbColor({ 255, 255, 255 });
        printf("[");


        setRgbColor({ 255, 153, 0 });
        printf("DEBUG");
        

        setRgbColor({ 255, 255, 255 });
        printf("] | [");


        setRgbColor(prefixColor);
        printf("%s", prefix);


        setRgbColor({ 255, 255, 255 });
        printf("] ");


        setRgbColor(messageColor);
        printf("%s\n", message);


        setRgbColor({ 255, 255, 255 });
    }


    void Println(const ConsoleColor& prefixColor, const char* prefix, const ConsoleColor& messageColor, const char* message)
    {
        setRgbColor({ 255, 255, 255 });
        printf("[");


        setRgbColor(prefixColor);
        printf("%s", prefix);


        setRgbColor({ 255, 255, 255 });
        printf("] ");


        setRgbColor(messageColor);
        printf("%s\n", message);


        setRgbColor({ 255, 255, 255 });
    }


    void Print(const ConsoleColor& prefixColor, const char* prefix, const ConsoleColor& messageColor, const char* message)
    {
        setRgbColor({ 255, 255, 255 });
        printf("[");


        setRgbColor(prefixColor);
        printf("%s", prefix);


        setRgbColor({ 255, 255, 255 });
        printf("] ");


        setRgbColor(messageColor);
        printf("%s", message);


        setRgbColor({ 255, 255, 255 });
    }
}