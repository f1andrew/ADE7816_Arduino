/*************************************************************************************/
/* Base implementation around .js prior art here                                     */
/* https://github.com/tadakado/smart-meter/blob/master/Soft/OLD_spi/02_initialize.js */
/*************************************************************************************/
#include "ADE7816.h"

ADE7816_SPI::ADE7816_SPI(int pin){
    _cs = pin;
}