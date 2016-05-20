#ifndef wpe_pasteboard_private_h
#define wpe_pasteboard_private_h

#ifdef __cplusplus
extern "C" {
#endif

#include <wpe/pasteboard.h>

struct wpe_pasteboard {
    struct wpe_pasteboard_interface* interface;
    void* interface_data;
};

extern struct wpe_pasteboard_interface generic_pasteboard_interface;
extern struct wpe_pasteboard_interface noop_pasteboard_interface;

#ifdef __cplusplus
}
#endif

#endif // wpe_pasteboard_private_h