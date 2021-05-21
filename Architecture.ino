#if defined(ESP8266)
#pragma message "ESP8266 stuff happening!"
#elif defined(ESP32)
#pragma message "ESP32 stuff happening!"
#else
#error "This ain't a ESP8266 or ESP32, dumbo!"
#endif
