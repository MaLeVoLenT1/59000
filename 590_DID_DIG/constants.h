#ifndef CONSTANTS_H
#define CONSTANTS_H

#define DETECTOR_GPIO_CHIP      "gpiochip7"
#define LED2_OFFSET             27
#define LED1_OFFSET             26
#define RANGE1_OFFSET           25
#define RANGE2_OFFSET           24
#define RANGE3_OFFSET           23
#define RANGE4_OFFSET           22
#define SPAN_GAS_OFFSET         21 /* AUX 1 */
#define ZERO_GAS_OFFSET         20 /* AUX 2 */
#define SAMPLE_GAS_OFFSET       19 /* AUX 3 */
#define IGNITE_OFFSET           18
#define AMP_EN                  10
#define GAIN_1                  9
#define GAIN_0                  8

#define INTERFACE_GPIO_CHIP     "gpiochip6"
#define H2_BYPASS_RELAY_4       12
#define ALARM2_RELAY_3          13
#define ALARM1_RELAY_2          14
#define READY_RELAY_1           15
#define CAL_IN                  16
#define FLAME_READ              17
#define ISO_IN_1                9
#define ISO_IN_2                8


#define MASS_AIR_IN             "in_voltage7_raw"
#define MASS_FUEL_IN            "in_voltage6_raw"
#define MASS_ZERO_IN            "in_voltage5_raw"
#define MASS_SAMPLE_IN          "in_voltage4_raw"
#define TCD_I_IN                "in_voltage3_raw"
#define DID_I_IN                "in_voltage2_raw"
#define HV_IN                   "in_voltage1_raw"
#define POL_IN                  "in_voltage0_raw"

#define POL_AMP_DAC_DEV         1
#define FRONT_ZERO              "out_voltage0_raw"
#define POL_ADJ                 "out_voltage1_raw"
#define AMP_V_ADJ               "out_voltage2_raw"
#define AMP_I_ADJ               "out_voltage3_raw"

#define MASS_FLOW_DAC_DEV       2
#define MASS_SAMPLE_OUT         "out_voltage0_raw"
#define MASS_ZERO_OUT           "out_voltage1_raw"
#define MASS_FUEL_OUT           "out_voltage2_raw"
#define MASS_AIR_OUT            "out_voltage3_raw"

#define SPLASH_IMAGE            "/etc/splash/GMLogo_180.ppm"

#endif // CONSTANTS_H
