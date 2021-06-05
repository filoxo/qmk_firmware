RGB_MATRIX_EFFECT(gb_lights)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

bool gb_lights(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);

    // HSV     hsv   = rgb_matrix_config.hsv;
    // uint8_t scale = scale8(64, rgb_matrix_config.speed);
    // for (uint8_t i = led_min; i < led_max; i++) {
    //     RGB_MATRIX_TEST_LED_FLAGS();
    //     // The x range will be 0..224, map this to 0..7
    //     // Relies on hue being 8-bit and wrapping
    //     // hsv.h   = rgb_matrix_config.hsv.h + (scale * g_led_config.point[i].x >> 5);
    //     // RGB rgb = rgb_matrix_hsv_to_rgb(hsv);
    //     // rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);


    //     switch(i) {
    //         case 0 ... 3: rgb_matrix_set_color(i, 0xff, 0x00, 0x00); return led_max < DRIVER_LED_TOTAL;
    //         case 4 ... 7: rgb_matrix_set_color(i, 0x00, 0xff, 0x00); return led_max < DRIVER_LED_TOTAL;
    //         case 8 ... 11: rgb_matrix_set_color(i, 0x00, 0x00, 0xff); return led_max < DRIVER_LED_TOTAL;
    //         case 12 ... 15: rgb_matrix_set_color(i, 0xff, 0xff, 0x00); return led_max < DRIVER_LED_TOTAL;
    //     }
    // }

    
    // red
    rgb_matrix_set_color(3, 0xff, 0x00, 0x00);
    rgb_matrix_set_color(4, 0xff, 0x00, 0x00);
    rgb_matrix_set_color(11, 0xff, 0x00, 0x00);
    rgb_matrix_set_color(12, 0xff, 0x00, 0x00);
    // green
    rgb_matrix_set_color(2, 0x00, 0xff, 0x00);
    rgb_matrix_set_color(5, 0x00, 0xff, 0x00);
    rgb_matrix_set_color(10, 0x00, 0xff, 0x00);
    rgb_matrix_set_color(13, 0x00, 0xff, 0x00);
    // blue
    rgb_matrix_set_color(1, 0x00, 0x00, 0xff);
    rgb_matrix_set_color(6, 0x00, 0x00, 0xff);
    rgb_matrix_set_color(9, 0x00, 0x00, 0xff);
    rgb_matrix_set_color(14, 0x00, 0x00, 0xff);
    // yellow
    rgb_matrix_set_color(0, 0xff, 0xff, 0x00);
    rgb_matrix_set_color(7, 0xff, 0xff, 0x00);
    rgb_matrix_set_color(8, 0xff, 0xff, 0x00);
    rgb_matrix_set_color(15, 0xff, 0xff, 0x00);
    
    return led_max < DRIVER_LED_TOTAL;
}

#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS