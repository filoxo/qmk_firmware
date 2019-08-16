RGBLIGHT_ENABLE = yes       # Enable WS2812 RGB underlight.
OLED_DRIVER_ENABLE= yes

SRC +=  ./lib/rgb_state_reader.c \
        ./lib/layer_state_reader.c \
        ./lib/logo_reader.c \
        ./lib/keylogger.c \
        ./lib/mode_icon_reader.c \
        ./lib/host_led_state_reader.c \
        # ./lib/timelogger.c \
