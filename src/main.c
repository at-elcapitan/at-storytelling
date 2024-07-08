#include "main.h"

int main(int argc, char const *argv[])
{
    sfVideoMode mode = {
        .width = 640,
        .height = 480,
    };

    sfWindow *window = sfWindow_create(mode, "Test title", sfTitlebar, NULL);

    while(sfWindow_isOpen(window)) {
        sfEvent event;

        while (sfWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed) {
                sfWindow_close(window);
            }
        }

        sfWindow_display(window);
    }
    return 0;
}
