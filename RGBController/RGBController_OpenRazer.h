/*-----------------------------------------*\
|  RGBController_OpenRazer.h                |
|                                           |
|  Generic RGB Interface for OpenRazer      |
|  kernel drivers for Chroma peripherals    |
|                                           |
|  Adam Honse (CalcProgrammer1) 6/15/2019   |
\*-----------------------------------------*/

#pragma once

#include "RGBController.h"
#include <fstream>

#define RAZER_MAX_ZONES 6

typedef struct
{
    std::string name;
    unsigned int type;
    unsigned int rows;
    unsigned int cols;
} razer_zone;

typedef struct
{
    std::string name;
    device_type type;
    bool matrix_type;
    unsigned int rows;
    unsigned int cols;
    const razer_zone* zones[RAZER_MAX_ZONES];
} razer_device;

/*-------------------------------------------------------------------------*\
|  KEYBOARDS                                                                |
\*-------------------------------------------------------------------------*/

/*-------------------------------------------------------------*\
|  Razer BlackWidow Chroma                                      |
|                                                               |
|  Zone "Keyboard"                                              |
|       Matrix                                                  |
|       6 Rows, 22 Columns                                      |
\*-------------------------------------------------------------*/
static const razer_zone blackwidow_chroma_zone =
{
    "Keyboard",
    ZONE_TYPE_MATRIX,
    6,
    22
};

static const razer_device blackwidow_chroma_device =
{
    "Razer BlackWidow Chroma",
    DEVICE_TYPE_KEYBOARD,
    true,
    6,
    22,
    {
        &blackwidow_chroma_zone,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL
    }
};

/*-------------------------------------------------------------*\
|  Razer BlackWidow Chroma Tournament Edition                   |
|                                                               |
|  Zone "Keyboard"                                              |
|       Matrix                                                  |
|       6 Rows, 22 Columns                                      |
\*-------------------------------------------------------------*/
static const razer_zone blackwidow_chroma_te_zone =
{
    "Keyboard",
    ZONE_TYPE_MATRIX,
    6,
    22
};

static const razer_device blackwidow_chroma_te_device =
{
    "Razer BlackWidow Chroma Tournament Edition",
    DEVICE_TYPE_KEYBOARD,
    true,
    6,
    22,
    {
        &blackwidow_chroma_te_zone,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL
    }
};

/*-------------------------------------------------------------*\
|  Razer Ornata Chroma                                          |
|                                                               |
|  Zone "Keyboard"                                              |
|       Matrix                                                  |
|       6 Rows, 22 Columns                                      |
\*-------------------------------------------------------------*/
static const razer_zone ornata_chroma_zone =
{
    "Keyboard",
    ZONE_TYPE_MATRIX,
    6,
    22
};

static const razer_device ornata_chroma_device =
{
    "Razer Ornata Chroma",
    DEVICE_TYPE_KEYBOARD,
    true,
    6,
    22,
    {
        &ornata_chroma_zone,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL
    }
};

/*-------------------------------------------------------------*\
|  Razer DeathStalker Chroma                                    |
|                                                               |
|  Zone "Keyboard"                                              |
|       Linear                                                  |
|       12 LEDs                                                 |
\*-------------------------------------------------------------*/
static const razer_zone deathstalker_chroma_zone =
{
    "Keyboard",
    ZONE_TYPE_LINEAR,
    1,
    12
};

static const razer_device deathstalker_chroma_device =
{
    "Razer DeathStalker Chroma",
    DEVICE_TYPE_KEYBOARD,
    true,
    1,
    12,
    {
        &deathstalker_chroma_zone,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL
    }
};

/*-------------------------------------------------------------------------*\
|  LAPTOPS                                                                  |
\*-------------------------------------------------------------------------*/

/*-------------------------------------------------------------*\
|  Razer Blade Stealth                                          |
|                                                               |
|  Zone "Keyboard"                                              |
|       Matrix                                                  |
|       6 Rows, 16 Columns                                      |
\*-------------------------------------------------------------*/
static const razer_zone blade_stealth_zone =
{
    "Keyboard",
    ZONE_TYPE_MATRIX,
    6,
    16
};

static const razer_device blade_stealth_device =
{
    "Razer Blade Stealth",
    DEVICE_TYPE_KEYBOARD,
    true,
    6,
    16,
    {
        &blade_stealth_zone,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL
    }
};

/*-------------------------------------------------------------*\
|  Razer Blade Pro (Late 2016)                                  |
|                                                               |
|  Zone "Keyboard"                                              |
|       Matrix                                                  |
|       6 Rows, 25 Columns                                      |
\*-------------------------------------------------------------*/
static const razer_zone blade_pro_late_2016_zone =
{
    "Keyboard",
    ZONE_TYPE_MATRIX,
    6,
    25
};

static const razer_device blade_pro_late_2016_device =
{
    "Razer Blade Pro (Late 2016)",
    DEVICE_TYPE_KEYBOARD,
    true,
    6,
    25,
    {
        &blade_pro_late_2016_zone,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL
    }
};

/*-------------------------------------------------------------*\
|  Razer Blade Pro (2017)                                       |
|                                                               |
|  Zone "Keyboard"                                              |
|       Matrix                                                  |
|       6 Rows, 25 Columns                                      |
\*-------------------------------------------------------------*/
static const razer_zone blade_pro_2017_zone =
{
    "Keyboard",
    ZONE_TYPE_MATRIX,
    6,
    25
};

static const razer_device blade_pro_2017_device =
{
    "Razer Blade Pro (2017)",
    DEVICE_TYPE_KEYBOARD,
    true,
    6,
    25,
    {
        &blade_pro_2017_zone,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL
    }
};

/*-------------------------------------------------------------------------*\
|  MICE                                                                     |
\*-------------------------------------------------------------------------*/

/*-------------------------------------------------------------*\
|  Razer Mamba Tournament Edition                               |
|                                                               |
|  Zone "Left"                                                  |
|       Linear                                                  |
|       7 LEDs                                                  |
|                                                               |
|  Zone "Right"                                                 |
|       Linear                                                  |
|       7 LEDs                                                  |
|                                                               |
|  Zone "Logo"                                                  |
|       Single                                                  |
|       1 LED                                                   |
|                                                               |
|  Zone "Scroll Wheel"                                          |
|       Single                                                  |
|       1 LED                                                   |
\*-------------------------------------------------------------*/
static const razer_zone mamba_te_left_zone =
{
    "Left LED Strip",
    ZONE_TYPE_LINEAR,
    1,
    7
};

static const razer_zone mamba_te_right_zone =
{
    "Right LED Strip",
    ZONE_TYPE_LINEAR,
    1,
    7
};

static const razer_zone mamba_te_logo_zone =
{
    "Logo",
    ZONE_TYPE_SINGLE,
    1,
    1
};

static const razer_zone mamba_te_scroll_wheel_zone =
{
    "Scroll Wheel",
    ZONE_TYPE_SINGLE,
    1,
    1
};

static const razer_device mamba_te_device =
{
    "Razer Mamba Tournament Edition",
    DEVICE_TYPE_MOUSE,
    true,
    1,
    16,
    {
        &mamba_te_left_zone,
        &mamba_te_right_zone,
        &mamba_te_logo_zone,
        &mamba_te_scroll_wheel_zone,
        NULL,
        NULL
    }
};

/*-------------------------------------------------------------*\
|  Razer Diamondback Chroma                                     |
|                                                               |
|  Zone "Right"                                                 |
|       Linear                                                  |
|       7 LEDs                                                  |
|                                                               |
|  Zone "Bottom"                                                |
|       Linear                                                  |
|       5 LEDs                                                  |
|                                                               |
|  Zone "Left"                                                  |
|       Linear                                                  |
|       7 LEDs                                                  |
|                                                               |
|  Zone "Logo"                                                  |
|       Single                                                  |
|       1 LED                                                   |
|                                                               |
|  Zone "Scroll Wheel"                                          |
|       Single                                                  |
|       1 LED                                                   |
\*-------------------------------------------------------------*/
static const razer_zone diamondback_chroma_right_zone =
{
    "Right LED Strip",
    ZONE_TYPE_LINEAR,
    1,
    7
};

static const razer_zone diamondback_chroma_bottom_zone =
{
    "Bottom LED Strip",
    ZONE_TYPE_LINEAR,
    1,
    5
};

static const razer_zone diamondback_chroma_left_zone =
{
    "Left LED Strip",
    ZONE_TYPE_LINEAR,
    1,
    7
};

static const razer_zone diamondback_chroma_logo_zone =
{
    "Logo",
    ZONE_TYPE_SINGLE,
    1,
    1
};

static const razer_zone diamondback_chroma_scroll_wheel_zone =
{
    "Scroll Wheel",
    ZONE_TYPE_SINGLE,
    1,
    1
};

static const razer_device diamondback_chroma_device =
{
    "Razer Diamondback Chroma",
    DEVICE_TYPE_MOUSE,
    true,
    1,
    21,
    {
        &diamondback_chroma_right_zone,
        &diamondback_chroma_bottom_zone,
        &diamondback_chroma_left_zone,
        &diamondback_chroma_logo_zone,
        &diamondback_chroma_scroll_wheel_zone,
        NULL
    }
};

/*-------------------------------------------------------------*\
|  Razer DeathAdder Chroma                                      |
|                                                               |
|  Zone "Logo"                                                  |
|       Single                                                  |
|       1 LED                                                   |
|                                                               |
|  Zone "Scroll Wheel"                                          |
|       Single                                                  |
|       1 LED                                                   |
\*-------------------------------------------------------------*/
static const razer_zone deathadder_chroma_logo_zone =
{
    "Logo",
    ZONE_TYPE_SINGLE,
    1,
    1
};

static const razer_zone deathadder_chroma_scroll_wheel_zone =
{
    "Scroll Wheel",
    ZONE_TYPE_SINGLE,
    1,
    1
};

static const razer_device deathadder_chroma_device =
{
    "Razer DeathAdder Chroma",
    DEVICE_TYPE_MOUSE,
    false,
    1,
    2,
    {
        &deathadder_chroma_logo_zone,
        &deathadder_chroma_scroll_wheel_zone,
        NULL,
        NULL,
        NULL,
        NULL
    }
};

/*-------------------------------------------------------------*\
|  Razer Naga Chroma                                            |
|                                                               |
|  Zone "Logo"                                                  |
|       Single                                                  |
|       1 LED                                                   |
|                                                               |
|  Zone "Scroll Wheel"                                          |
|       Single                                                  |
|       1 LED                                                   |
|                                                               |
|  Zone "Numpad"                                                |
|       Single                                                  |
|       1 LED                                                   |
\*-------------------------------------------------------------*/
static const razer_zone naga_chroma_logo_zone =
{
    "Logo",
    ZONE_TYPE_SINGLE,
    1,
    1
};

static const razer_zone naga_chroma_scroll_wheel_zone =
{
    "Scroll Wheel",
    ZONE_TYPE_SINGLE,
    1,
    1
};

static const razer_zone naga_chroma_numpad_zone =
{
    "Numpad",
    ZONE_TYPE_SINGLE,
    1,
    1
};

static const razer_device naga_chroma_device =
{
    "Razer Naga Chroma",
    DEVICE_TYPE_MOUSE,
    false,
    1,
    3,
    {
        &naga_chroma_logo_zone,
        &naga_chroma_scroll_wheel_zone,
        &naga_chroma_numpad_zone,
        NULL,
        NULL,
        NULL
    }
};

/*-------------------------------------------------------------------------*\
|  KEYPADS                                                                  |
\*-------------------------------------------------------------------------*/

/*-------------------------------------------------------------*\
|  Razer Orbweaver Chroma                                       |
|                                                               |
|  Zone "Keypad"                                                |
|       Matrix                                                  |
|       4 Rows, 5 Columns                                       |
\*-------------------------------------------------------------*/
static const razer_zone orbweaver_chroma_zone =
{
    "Keypad",
    ZONE_TYPE_MATRIX,
    4,
    5
};

static const razer_device orbweaver_chroma_device =
{
    "Razer Orbweaver Chroma",
    DEVICE_TYPE_KEYBOARD,
    true,
    6,
    25,
    {
        &orbweaver_chroma_zone,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL
    }
};

/*-------------------------------------------------------------*\
|  Razer Tartarus Chroma                                        |
|                                                               |
|  Zone "Keypad"                                                |
|       Single                                                  |
|       1 LED                                                   |
\*-------------------------------------------------------------*/
static const razer_zone tartarus_chroma_zone =
{
    "Keypad",
    ZONE_TYPE_SINGLE,
    1,
    1
};

static const razer_device tartarus_chroma_device =
{
    "Razer Tartarus Chroma",
    DEVICE_TYPE_KEYBOARD,
    true,
    1,
    1,
    {
        &tartarus_chroma_zone,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL
    }
};

/*-------------------------------------------------------------------------*\
|  MOUSEMATS                                                                |
\*-------------------------------------------------------------------------*/

/*-------------------------------------------------------------*\
|  Razer Firefly                                                |
|                                                               |
|  Zone "LED Strip"                                             |
|       Linear                                                  |
|       15 LEDs                                                 |
\*-------------------------------------------------------------*/
static const razer_zone firefly_zone =
{
    "LED Strip",
    ZONE_TYPE_LINEAR,
    1,
    15
};

static const razer_device firefly_device =
{
    "Razer Firefly",
    DEVICE_TYPE_MOUSEMAT,
    true,
    1,
    15,
    {
        &firefly_zone,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL
    }
};

/*-------------------------------------------------------------*\
|  Razer Goliathus Extended                                     |
|                                                               |
|  Zone "LED Strip"                                             |
|       Single                                                  |
|       1 LED                                                   |
\*-------------------------------------------------------------*/
static const razer_zone goliathus_extended_zone =
{
    "LED Strip",
    ZONE_TYPE_SINGLE,
    1,
    1
};

static const razer_device goliathus_extended_device =
{
    "Razer Goliathus Extended",
    DEVICE_TYPE_MOUSEMAT,
    true,
    1,
    1,
    {
        &goliathus_extended_zone,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL
    }
};

/*-------------------------------------------------------------------------*\
|  HEADSETS                                                                 |
\*-------------------------------------------------------------------------*/

/*-------------------------------------------------------------*\
|  Razer Kraken 7.1 Chroma                                      |
|                                                               |
|  Zone "Headset"                                               |
|       Single                                                  |
|       1 LED                                                   |
\*-------------------------------------------------------------*/
static const razer_zone kraken_chroma_zone =
{
    "Headset",
    ZONE_TYPE_SINGLE,
    1,
    1
};

static const razer_device kraken_chroma_device =
{
    "Razer Kraken 7.1 Chroma",
    DEVICE_TYPE_HEADSET,
    true,
    1,
    1,
    {
        &kraken_chroma_zone,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL
    }
};

/*-------------------------------------------------------------*\
|  Razer Kraken 7.1 V2                                          |
|                                                               |
|  Zone "Headset"                                               |
|       Single                                                  |
|       1 LED                                                   |
\*-------------------------------------------------------------*/
static const razer_zone kraken_v2_zone =
{
    "Headset",
    ZONE_TYPE_SINGLE,
    1,
    1
};

static const razer_device kraken_v2_device =
{
    "Razer Kraken 7.1 V2",
    DEVICE_TYPE_HEADSET,
    true,
    1,
    1,
    {
        &kraken_v2_zone,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL
    }
};

/*-------------------------------------------------------------------------*\
|  OTHER                                                                    |
\*-------------------------------------------------------------------------*/

/*-------------------------------------------------------------*\
|  Razer Core                                                   |
|                                                               |
|  Zone "Side Window Lights"                                    |
|       Single                                                  |
|       1 LED                                                   |
|                                                               |
|  Zone "LED Strip"                                             |
|       Linear                                                  |
|       8 LEDs                                                  |
\*-------------------------------------------------------------*/
static const razer_zone core_side_zone =
{
    "Side Window Lights",
    ZONE_TYPE_SINGLE,
    1,
    1
};

static const razer_zone core_led_strip_zone =
{
    "LED Strip",
    ZONE_TYPE_LINEAR,
    1,
    8
};

static const razer_device core_device =
{
    "Razer Core",
    DEVICE_TYPE_UNKNOWN,
    true,
    1,
    9,
    {
        &core_side_zone,
        &core_led_strip_zone,
        NULL,
        NULL,
        NULL,
        NULL
    }
};

/*-------------------------------------------------------------*\
|  Razer Chroma Mug Holder                                      |
|                                                               |
|  Zone "LED Strip"                                             |
|       Linear                                                  |
|       15 LEDs                                                 |
\*-------------------------------------------------------------*/
static const razer_zone mug_holder_zone =
{
    "LED Strip",
    ZONE_TYPE_LINEAR,
    1,
    15
};

static const razer_device mug_holder_device =
{
    "Razer Chroma Mug Holder",
    DEVICE_TYPE_UNKNOWN,
    true,
    1,
    15,
    {
        &mug_holder_zone,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL
    }
};

/*-------------------------------------------------------------*\
|  Razer Chroma HDK                                             |
|                                                               |
|  Zone "LED Strip"                                             |
|       Linear                                                  |
|       16 LEDs                                                 |
|                                                               |
|  Zone "LED Strip"                                             |
|       Linear                                                  |
|       16 LEDs                                                 |
|                                                               |
|  Zone "LED Strip"                                             |
|       Linear                                                  |
|       16 LEDs                                                 |
|                                                               |
|  Zone "LED Strip"                                             |
|       Linear                                                  |
|       16 LEDs                                                 |
\*-------------------------------------------------------------*/
static const razer_zone chromahdk_zone =
{
    "LED Strip",
    ZONE_TYPE_LINEAR,
    1,
    16
};

static const razer_device chromahdk_device =
{
    "Razer Chroma HDK",
    DEVICE_TYPE_LEDSTRIP,
    true,
    4,
    16,
    {
        &chromahdk_zone,
        &chromahdk_zone,
        &chromahdk_zone,
        &chromahdk_zone,
        NULL,
        NULL
    }
};

/*-------------------------------------------------------------------------*\
|  DEVICE MASTER LIST                                                       |
\*-------------------------------------------------------------------------*/
#define RAZER_NUM_DEVICES (sizeof(device_list) / sizeof(device_list[ 0 ]))

static const razer_device* device_list[] =
{
/*-----------------------------------------------------------------*\
|  KEYBOARDS                                                        |
\*-----------------------------------------------------------------*/
    &blackwidow_chroma_device,
    &blackwidow_chroma_te_device,
    &ornata_chroma_device,
    &deathstalker_chroma_device,
/*-----------------------------------------------------------------*\
|  LAPTOPS                                                          |
\*-----------------------------------------------------------------*/
    &blade_stealth_device,
    &blade_pro_late_2016_device,
    &blade_pro_2017_device,
/*-----------------------------------------------------------------*\
|  MICE                                                             |
\*-----------------------------------------------------------------*/
    &mamba_te_device,
    &diamondback_chroma_device,
    &deathadder_chroma_device,
/*-----------------------------------------------------------------*\
|  KEYPADS                                                          |
\*-----------------------------------------------------------------*/
    &orbweaver_chroma_device,
    &tartarus_chroma_device,
/*-----------------------------------------------------------------*\
|  MOUSEMATS                                                        |
\*-----------------------------------------------------------------*/
    &firefly_device,
    &goliathus_extended_device,
/*-----------------------------------------------------------------*\
|  HEADSETS                                                         |
\*-----------------------------------------------------------------*/
    &kraken_chroma_device,
    &kraken_v2_device,
/*-----------------------------------------------------------------*\
|  OTHER                                                            |
\*-----------------------------------------------------------------*/
    &core_device,
    &mug_holder_device,
    &chromahdk_device
};


class RGBController_OpenRazer : public RGBController
{
public:
    enum
    {
        RAZER_MODE_CUSTOM,
        RAZER_MODE_OFF,
        RAZER_MODE_STATIC,
        RAZER_MODE_BREATHING,
        RAZER_MODE_SPECTRUM_CYCLE,
        RAZER_MODE_WAVE,
        RAZER_MODE_REACTIVE,
        RAZER_NUM_MODES
    };

    enum
    {
        RAZER_TYPE_MATRIX_FRAME,
        RAZER_TYPE_MATRIX_NOFRAME,
        RAZER_TYPE_MATRIX_STATIC,
        RAZER_TYPE_NOMATRIX,
        RAZER_NUM_TYPES
    };

public:
    RGBController_OpenRazer(std::string dev_path);
    int GetMode();
    void SetMode(int mode);
    void SetCustomMode();
    void SetAllLEDs(RGBColor color);
    void SetAllZoneLEDs(int zone, RGBColor color);
    void SetLED(int led, RGBColor color);
    void UpdateLEDs();

    int device;

private:
    void SetupMatrixDevice(std::string dev_path, unsigned int rows, unsigned int cols);
    void SetupNonMatrixDevice(std::string dev_path);

    unsigned int matrix_type;
    unsigned int matrix_rows;
    unsigned int matrix_cols;

    //OpenRazer Sysfs Entries for Matrix Devices
    std::ofstream matrix_custom_frame;
    std::ofstream matrix_effect_custom;
    std::ofstream matrix_effect_breath;
    std::ofstream matrix_effect_none;
    std::ofstream matrix_effect_reactive;
    std::ofstream matrix_effect_spectrum;
    std::ofstream matrix_effect_static;
    std::ofstream matrix_effect_wave;

    //OpenRazer Sysfs Entries for Non-Matrix Devices
    std::ofstream logo_led_effect;
    std::ofstream logo_led_rgb;
    std::ofstream scroll_led_effect;
    std::ofstream scroll_led_rgb;
};