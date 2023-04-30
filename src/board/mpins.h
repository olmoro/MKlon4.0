/*
  Файл    mpins.h
  Проект  MKlon2.7a
  Порты   ESP32
  pcb:    Mklon2v7a
  02.03.2023
*/

#ifndef _MPINS_H_
#define _MPINS_H_

namespace MPins
{
  //                 имя          порт   функция      цепь pcb         примечание
#ifdef MKLON4_0
  // Входы
  constexpr char key_pin          = 39;   // (VN)an   KEY         Порт клавиатуры
  constexpr char celsius_pin      = 34;   // an       CELSIUS     Порт измерителя температуры
  constexpr char pow_good_pin     = 35;   // in       POW_CH      Порт проверки сетевого питания 

  // Выходы
  constexpr char buz_pin          = 25;   // out      BUZ         Порт управления активным зуммером
  constexpr char ready_pin        = 27;   // out      READY       Порт аппаратного WDT 
  constexpr char pwm_fan_pin      = 15;   // out      FAN         Порт управления вентилятором


  // Выходы управления светодиодами
  constexpr char led_r_pin        = 14;   // out,pd   LEDR        Порт управления красным светодиодом
  constexpr char led_g_pin        = 12;   // out,pd   LEDG        Порт управления зеленым светодиодом
  constexpr char led_b_pin        = 02;   // out,pd   LEDB        Порт управления синим светодиодом

// UART
  constexpr char u2rxd_pin        = 16;   // in       U2RXD       Порт приемника
  constexpr char u2txd_pin        = 17;   // out      U2TXD       Порт передатчика

  // Порты дисплея и SD (справочно)                 Дисплей     microSD
  constexpr char vspi_sck_pin     = 18;   //          SCK         CLK
  constexpr char vspi_mosi_pin    = 23;   //          SDI         SDI
  constexpr char vspi_miso_pin    = 19;   //          SDO         SDO
  constexpr char lcd_dc_pin       = 05;   //          DC            -
  constexpr char lcd_res_pin      = 04;   //          RST           -
  constexpr char lcd_cs_pin       = 32;   //          CS            -           
  //constexpr char lcd_bl_pin       = 21;   //          LCD_BL         
  constexpr char lcd_tcs_pin      = 33;   //          TCS         
  constexpr char sd_cs_pin        = 22;   //            -          SCS
  constexpr char lcd_pen_pin      = 21;   //        PEN
  

  // Резервные на SV1
  constexpr char io36_pin         = 36;   //      IO36 (VP)    SV1/1
  constexpr char io26_pin         = 26;   //      IO26     SV1/3
  constexpr char io13_pin         = 13;   //      IO26     SV1/10
  constexpr char io00_pin         = 00;   //      IO00     SV1/9

#endif

#ifdef MKLON2V7A
  // Входы
  constexpr char celsius_pin      = 34;   // an       CELSIUS     Порт измерителя температуры
  constexpr char pow_good_pin     = 35;   // in       POW_CH      Порт проверки сетевого питания 
  constexpr char ready_pin        = 27;   // in       READY       Порт готовности драйвера 
  constexpr char ts_pin           = 13;   // in       TS          Порт контроля кулера
  constexpr char key_pin          = 39;   // (VN)an   KEY         Порт клавиатуры

  // Выходы
  constexpr char pwm_fan_pin      = 15;   // out      FAN         Порт управления вентилятором
  constexpr char buz_pin          = 14;   // out      BUZ         Порт управления активным зуммером
  
  // Выходы управления светодиодами 
  // #ifdef RGB
  //   constexpr char led_r_pin        = 04;   // out,pd   LEDR        Порт управления красным светодиодом
  //   constexpr char led_g_pin        = 25;   // out,pd   LEDG        Порт управления зеленым светодиодом
  //   constexpr char led_b_pin        = 02;   // out,pd   LEDB        Порт управления синим светодиодом
  // #else
    // BGR - на платах v5 и v7 ошибка
    constexpr char led_r_pin        = 02;   // out,pd   LEDR        Порт управления красным светодиодом
    constexpr char led_g_pin        = 25;   // out,pd   LEDG        Порт управления зеленым светодиодом
    constexpr char led_b_pin        = 04;   // out,pd   LEDB        Порт управления синим светодиодом
  // #endif

  //#ifdef MKLON2V7A
    // Порты дисплея и SD (справочно)                 Дисплей     microSD
    constexpr char vspi_sck_pin   = 18;   //          VSPI_SCL*   VSPI_SCK
    constexpr char vspi_mosi_pin  = 23;   //          VSPI_SDA*   VSPI_DI
    constexpr char vspi_miso_pin  = 19;   //            -         VSPI_DO
    constexpr char lcd_dc_pin     = 05;   //          LCD_DC*       -
    constexpr char lcd_res_pin    = -1;   //          EN*           -
    constexpr char lcd_cs_pin     = 33;   //          LCD_CS*       -           
    constexpr char sd_cs_pin      = 26;   //            -          SD_CS
    // * - справочно, настройки интерфейса дисплея задавать в mklon27_setup.h
  //#endif

  // UART
  constexpr char u2rxd_pin        = 16;   // in       U2RXD       Порт приемника
  constexpr char u2txd_pin        = 17;   // out      U2TXD       Порт передатчика

  // I2C 
  constexpr char i2c2_sda_pin     = 21;   // io       SDA         Порт данных
  constexpr char i2c2_scl_pin     = 22;   // out      SCL         Порт тактовый

    constexpr char rtc_sqw_pin    = 32;    // in     SQW
    constexpr char io36_pin       = 36;    // in     IO36 (VP)    Резерв 
    constexpr char io12_pin       = 12;    // io     IO12         Резерв 
  #endif
};

#endif // !_MPINS_H_
