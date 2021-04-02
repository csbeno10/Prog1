#include "Lines_window.h"
#include "Graph.h"

int main()
{
    Lines_window:Lines_window win{ Point{100,100}, 600, 400, "Lines" };

    return gui_main();
}
