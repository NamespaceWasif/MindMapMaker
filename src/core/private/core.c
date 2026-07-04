#include <core/core.h>

#ifdef _WIN32
    #include <windows.h>
    void universal_sleep_ms(unsigned long ms) {
     Sleep(ms);
    }
#else
    #include <unistd.h>
    void universal_sleep_ms(unsigned long ms) {
        usleep(ms * 1000);
    }
#endif
