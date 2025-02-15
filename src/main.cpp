#include <Arduino.h>
#include "display.h"
#include <lvgl.h>
#include <TFT_eSPI.h>
#include "FT6336U.h"

Display screen;

void setup()
{
    /* prepare for possible serial debug */
    Serial.begin( 115200 );

    /*** Init screen ***/
    screen.init();

    String LVGL_Arduino = "Hello Arduino! ";
    LVGL_Arduino += String('V') + lv_version_major() + "." + lv_version_minor() + "." + lv_version_patch();

    Serial.println( LVGL_Arduino );
    Serial.println( "I am LVGL_Arduino" );

    Serial.println( "Setup done" );
}

void loop()
{
    screen.routine(); /* let the GUI do its work */
    delay( 5 );
}
