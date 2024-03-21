// Library: Soil Moisture FC-28
// By: Devan Cakra M.W

#include "ESP_FC28.h"

// #if defined(ESP8266)
//   return 1;
// #elif defined(ESP32)
//   return 1;
// #endif

void FC28Sensor::initFC28Sensor(int baudRate, int pin) {
  Serial.begin(baudRate);
  pinMode(pin, INPUT);
  _pin = pin;
}

float FC28Sensor::getSoilMoisture() {
  analogFC28 = analogRead(_pin);
  
  // Percentage Range: 99.1-100.0
  if (analogFC28 == 4.095) { return value = 100.0; }
  else if (analogFC28 > 4.095 && analogFC28 < 8.19) { return value = 99.9; }
  else if (analogFC28 >= 8.19 && analogFC28 < 12.285) { return value = 99.8; }
  else if (analogFC28 >= 12.285 && analogFC28 < 16.38) { return value = 99.7; }
  else if (analogFC28 >= 16.38 && analogFC28 < 20.475) { return value = 99.6; }
  else if (analogFC28 >= 20.475 && analogFC28 < 24.57) { return value = 99.5; }
  else if (analogFC28 >= 24.57 && analogFC28 < 28.665) { return value = 99.4; }
  else if (analogFC28 >= 28.665 && analogFC28 < 32.76) { return value = 99.3; }
  else if (analogFC28 >= 32.76 && analogFC28 < 36.855) { return value = 99.2; }
  else if (analogFC28 >= 36.855 && analogFC28 < 40.95) { return value = 99.1; }

  // Percentage Range: 98.1-99.0
  if (analogFC28 >= 40.95 && analogFC28 < 45.045) { return value = 99.0; }
  else if (analogFC28 >= 45.045 && analogFC28 < 49.14) { return value = 98.9; }
  else if (analogFC28 >= 49.14 && analogFC28 < 53.235) { return value = 98.8; }
  else if (analogFC28 >= 53.235 && analogFC28 < 57.33) { return value = 98.7; }
  else if (analogFC28 >= 57.33 && analogFC28 < 61.425) { return value = 98.6; }
  else if (analogFC28 >= 61.425 && analogFC28 < 65.52) { return value = 98.5; }
  else if (analogFC28 >= 65.52 && analogFC28 < 69.615) { return value = 98.4; }
  else if (analogFC28 >= 69.615 && analogFC28 < 73.71) { return value = 98.3; }
  else if (analogFC28 >= 73.71 && analogFC28 < 77.805) { return value = 98.2; }
  else if (analogFC28 >= 77.805 && analogFC28 < 81.9) { return value = 98.1; }

  // Percentage Range: 97.1-98.0
  if (analogFC28 >= 81.9 && analogFC28 < 85.995) { return value = 98.0; }
  else if (analogFC28 >= 85.995 && analogFC28 < 90.09) { return value = 97.9; }
  else if (analogFC28 >= 90.09 && analogFC28 < 94.185) { return value = 97.8; }
  else if (analogFC28 >= 94.185 && analogFC28 < 98.28) { return value = 97.7; }
  else if (analogFC28 >= 98.28 && analogFC28 < 102.375) { return value = 97.6; }
  else if (analogFC28 >= 102.375 && analogFC28 < 106.47) { return value = 97.5; }
  else if (analogFC28 >= 106.47 && analogFC28 < 110.565) { return value = 97.4; }
  else if (analogFC28 >= 110.565 && analogFC28 < 114.66) { return value = 97.3; }
  else if (analogFC28 >= 114.66 && analogFC28 < 118.755) { return value = 97.2; }
  else if (analogFC28 >= 118.755 && analogFC28 < 122.85) { return value = 97.1; }
  
  // Percentage Range: 96.1-97.0
  if (analogFC28 >= 122.85 && analogFC28 < 126.945) { return value = 97.0; }
  else if (analogFC28 >= 126.945 && analogFC28 < 131.04) { return value = 96.9; }
  else if (analogFC28 >= 131.04 && analogFC28 < 135.135) { return value = 96.8; }
  else if (analogFC28 >= 135.135 && analogFC28 < 139.23) { return value = 96.7; }
  else if (analogFC28 >= 139.23 && analogFC28 < 143.325) { return value = 96.6; }
  else if (analogFC28 >= 143.325 && analogFC28 < 147.42) { return value = 96.5; }
  else if (analogFC28 >= 147.42 && analogFC28 < 151.515) { return value = 96.4; }
  else if (analogFC28 >= 151.515 && analogFC28 < 155.61) { return value = 96.3; }
  else if (analogFC28 >= 155.61 && analogFC28 < 159.705) { return value = 96.2; }
  else if (analogFC28 >= 159.705 && analogFC28 < 163.8) { return value = 96.1; }

  // Percentage Range: 95.1-96.0
  if (analogFC28 >= 163.8 && analogFC28 < 167.895) { return value = 96.0; }
  else if (analogFC28 >= 167.895 && analogFC28 < 171.99) { return value = 95.9; }
  else if (analogFC28 >= 171.99 && analogFC28 < 176.085) { return value = 95.8; }
  else if (analogFC28 >= 176.085 && analogFC28 < 180.18) { return value = 95.7; }
  else if (analogFC28 >= 180.18 && analogFC28 < 184.275) { return value = 95.6; }
  else if (analogFC28 >= 184.275 && analogFC28 < 188.37) { return value = 95.5; }
  else if (analogFC28 >= 188.37 && analogFC28 < 192.465) { return value = 95.4; }
  else if (analogFC28 >= 192.465 && analogFC28 < 196.56) { return value = 95.3; }
  else if (analogFC28 >= 196.56 && analogFC28 < 200.655) { return value = 95.2; }
  else if (analogFC28 >= 200.655 && analogFC28 < 204.75) { return value = 95.1; }

  // Percentage Range: 94.1-95.0
  if (analogFC28 >= 204.75 && analogFC28 < 208.845) { return value = 95.0; }
  else if (analogFC28 >= 208.845 && analogFC28 < 212.94) { return value = 94.9; }
  else if (analogFC28 >= 212.94 && analogFC28 < 217.035) { return value = 94.8; }
  else if (analogFC28 >= 217.035 && analogFC28 < 221.13) { return value = 94.7; }
  else if (analogFC28 >= 221.13 && analogFC28 < 225.225) { return value = 94.6; }
  else if (analogFC28 >= 225.225 && analogFC28 < 229.32) { return value = 94.5; }
  else if (analogFC28 >= 229.32 && analogFC28 < 233.415) { return value = 94.4; }
  else if (analogFC28 >= 233.415 && analogFC28 < 237.51) { return value = 94.3; }
  else if (analogFC28 >= 237.51 && analogFC28 < 241.605) { return value = 94.2; }
  else if (analogFC28 >= 241.605 && analogFC28 < 245.7) { return value = 94.1; }

  // Percentage Range: 93.1-94.0
  if (analogFC28 >= 245.7 && analogFC28 < 249.795) { return value = 94.0; }
  else if (analogFC28 >= 249.795 && analogFC28 < 253.89) { return value = 93.9; }
  else if (analogFC28 >= 253.89 && analogFC28 < 257.985) { return value = 93.8; }
  else if (analogFC28 >= 257.985 && analogFC28 < 262.08) { return value = 93.7; }
  else if (analogFC28 >= 262.08 && analogFC28 < 266.175) { return value = 93.6; }
  else if (analogFC28 >= 266.175 && analogFC28 < 270.27) { return value = 93.5; }
  else if (analogFC28 >= 270.27 && analogFC28 < 274.365) { return value = 93.4; }
  else if (analogFC28 >= 274.365 && analogFC28 < 278.46) { return value = 93.3; }
  else if (analogFC28 >= 278.46 && analogFC28 < 282.555) { return value = 93.2; }
  else if (analogFC28 >= 282.555 && analogFC28 < 286.65) { return value = 93.1; }

  // Percentage Range: 92.1-93.0
  if (analogFC28 >= 286.65 && analogFC28 < 290.745) { return value = 93.0; }
  else if (analogFC28 >= 290.745 && analogFC28 < 294.84) { return value = 92.9; }
  else if (analogFC28 >= 294.84 && analogFC28 < 298.935) { return value = 92.8; }
  else if (analogFC28 >= 298.935 && analogFC28 < 303.03) { return value = 92.7; }
  else if (analogFC28 >= 303.03 && analogFC28 < 307.125) { return value = 92.6; }
  else if (analogFC28 >= 307.125 && analogFC28 < 311.22) { return value = 92.5; }
  else if (analogFC28 >= 311.22 && analogFC28 < 315.315) { return value = 92.4; }
  else if (analogFC28 >= 315.315 && analogFC28 < 319.41) { return value = 92.3; }
  else if (analogFC28 >= 319.41 && analogFC28 < 323.505) { return value = 92.2; }
  else if (analogFC28 >= 323.505 && analogFC28 < 327.6) { return value = 92.1; }

  // Percentage Range: 91.1-92.0
  if (analogFC28 >= 327.6 && analogFC28 < 331.695) { return value = 92.0; }
  else if (analogFC28 >= 331.695 && analogFC28 < 335.79) { return value = 91.9; }
  else if (analogFC28 >= 335.79 && analogFC28 < 339.885) { return value = 91.8; }
  else if (analogFC28 >= 339.885 && analogFC28 < 343.98) { return value = 91.7; }
  else if (analogFC28 >= 343.98 && analogFC28 < 348.075) { return value = 91.6; }
  else if (analogFC28 >= 348.075 && analogFC28 < 352.17) { return value = 91.5; }
  else if (analogFC28 >= 352.17 && analogFC28 < 356.265) { return value = 91.4; }
  else if (analogFC28 >= 356.265 && analogFC28 < 360.36) { return value = 91.3; }
  else if (analogFC28 >= 360.36 && analogFC28 < 364.455) { return value = 91.2; }
  else if (analogFC28 >= 364.455 && analogFC28 < 368.55) { return value = 91.1; }

  // Percentage Range: 90.1-91.0
  if (analogFC28 >= 368.55 && analogFC28 < 372.645) { return value = 91.0; }
  else if (analogFC28 >= 372.645 && analogFC28 < 376.74) { return value = 90.9; }
  else if (analogFC28 >= 376.74 && analogFC28 < 380.835) { return value = 90.8; }
  else if (analogFC28 >= 380.835 && analogFC28 < 384.93) { return value = 90.7; }
  else if (analogFC28 >= 384.93 && analogFC28 < 389.025) { return value = 90.6; }
  else if (analogFC28 >= 389.025 && analogFC28 < 393.12) { return value = 90.5; }
  else if (analogFC28 >= 393.12 && analogFC28 < 397.215) { return value = 90.4; }
  else if (analogFC28 >= 397.215 && analogFC28 < 401.31) { return value = 90.3; }
  else if (analogFC28 >= 401.31 && analogFC28 < 405.405) { return value = 90.2; }
  else if (analogFC28 >= 405.405 && analogFC28 < 409.5) { return value = 90.1; }

  // Percentage Range: 89.1-90.0
  if (analogFC28 >= 409.5 && analogFC28 < 413.595) { return value = 90.0; } 
  else if (analogFC28 >= 413.595 && analogFC28 < 417.69) { return value = 89.9; }
  else if (analogFC28 >= 417.69 && analogFC28 < 421.785) { return value = 89.8; }
  else if (analogFC28 >= 421.785 && analogFC28 < 425.88) { return value = 89.7; }
  else if (analogFC28 >= 425.88 && analogFC28 < 429.975) { return value = 89.6; }
  else if (analogFC28 >= 429.975 && analogFC28 < 434.07) { return value = 89.5; }
  else if (analogFC28 >= 434.07 && analogFC28 < 438.165) { return value = 89.4; }
  else if (analogFC28 >= 438.165 && analogFC28 < 442.26) { return value = 89.3; }
  else if (analogFC28 >= 442.26 && analogFC28 < 446.355) { return value = 89.2; }
  else if (analogFC28 >= 446.355 && analogFC28 < 450.45) { return value = 89.1; }

  // Percentage Range: 88.1-89.0
  if (analogFC28 >= 450.45 && analogFC28 < 454.545) { return value = 89.0; }
  else if (analogFC28 >= 454.545 && analogFC28 < 458.64) { return value = 88.9; }
  else if (analogFC28 >= 458.64 && analogFC28 < 462.735) { return value = 88.8; }
  else if (analogFC28 >= 462.735 && analogFC28 < 466.83) { return value = 88.7; }
  else if (analogFC28 >= 466.83 && analogFC28 < 470.925) { return value = 88.6; }
  else if (analogFC28 >= 470.925 && analogFC28 < 475.02) { return value = 88.5; }
  else if (analogFC28 >= 475.02 && analogFC28 < 479.115) { return value = 88.4; }
  else if (analogFC28 >= 479.115 && analogFC28 < 483.21) { return value = 88.3; }
  else if (analogFC28 >= 483.21 && analogFC28 < 487.305) { return value = 88.2; }
  else if (analogFC28 >= 487.305 && analogFC28 < 491.4) { return value = 88.1; }

  // Percentage Range: 87.1-88.0
  if (analogFC28 >= 491.4 && analogFC28 < 495.495) { return value = 88.0; }
  else if (analogFC28 >= 495.495 && analogFC28 < 499.59) { return value = 87.9; }
  else if (analogFC28 >= 499.59 && analogFC28 < 503.685) { return value = 87.8; }
  else if (analogFC28 >= 503.685 && analogFC28 < 507.78) { return value = 87.7; }
  else if (analogFC28 >= 507.78 && analogFC28 < 511.875) { return value = 87.6; }
  else if (analogFC28 >= 511.875 && analogFC28 < 515.97) { return value = 87.5; }
  else if (analogFC28 >= 515.97 && analogFC28 < 520.065) { return value = 87.4; }
  else if (analogFC28 >= 520.065 && analogFC28 < 524.16) { return value = 87.3; }
  else if (analogFC28 >= 524.16 && analogFC28 < 528.255) { return value = 87.2; }
  else if (analogFC28 >= 528.255 && analogFC28 < 532.35) { return value = 87.1; }

  // Percentage Range: 86.1-87.0
  if (analogFC28 >= 532.35 && analogFC28 < 536.445) { return value = 87.0; }
  else if (analogFC28 >= 536.445 && analogFC28 < 540.54) { return value = 86.9; }
  else if (analogFC28 >= 540.54 && analogFC28 < 544.635) { return value = 86.8; }
  else if (analogFC28 >= 544.635 && analogFC28 < 548.73) { return value = 86.7; }
  else if (analogFC28 >= 548.73 && analogFC28 < 552.825) { return value = 86.6; }
  else if (analogFC28 >= 552.825 && analogFC28 < 556.92) { return value = 86.5; }
  else if (analogFC28 >= 556.92 && analogFC28 < 561.015) { return value = 86.4; }
  else if (analogFC28 >= 561.015 && analogFC28 < 565.11) { return value = 86.3; }
  else if (analogFC28 >= 565.11 && analogFC28 < 569.205) { return value = 86.2; }
  else if (analogFC28 >= 569.205 && analogFC28 < 573.3) { return value = 86.1; }

  // Percentage Range: 85.1-86.0
  if (analogFC28 >= 573.3 && analogFC28 < 577.395) { return value = 86.0; }
  else if (analogFC28 >= 577.395 && analogFC28 < 581.49) { return value = 85.9; }
  else if (analogFC28 >= 581.49 && analogFC28 < 585.585) { return value = 85.8; }
  else if (analogFC28 >= 585.585 && analogFC28 < 589.68) { return value = 85.7; }
  else if (analogFC28 >= 589.68 && analogFC28 < 593.775) { return value = 85.6; }
  else if (analogFC28 >= 593.775 && analogFC28 < 597.87) { return value = 85.5; }
  else if (analogFC28 >= 597.87 && analogFC28 < 601.965) { return value = 85.4; }
  else if (analogFC28 >= 601.965 && analogFC28 < 606.06) { return value = 85.3; }
  else if (analogFC28 >= 606.06 && analogFC28 < 610.155) { return value = 85.2; }
  else if (analogFC28 >= 610.155 && analogFC28 < 614.25) { return value = 85.1; }

  // Percentage Range: 84.1-85.0
  if (analogFC28 >= 614.25 && analogFC28 < 618.345) { return value = 85.0; }
  else if (analogFC28 >= 618.345 && analogFC28 < 622.44) { return value = 84.9; }
  else if (analogFC28 >= 622.44 && analogFC28 < 626.535) { return value = 84.8; }
  else if (analogFC28 >= 626.535 && analogFC28 < 630.63) { return value = 84.7; }
  else if (analogFC28 >= 630.63 && analogFC28 < 634.725) { return value = 84.6; }
  else if (analogFC28 >= 634.725 && analogFC28 < 638.82) { return value = 84.5; }
  else if (analogFC28 >= 638.82 && analogFC28 < 642.915) { return value = 84.4; }
  else if (analogFC28 >= 642.915 && analogFC28 < 647.01) { return value = 84.3; }
  else if (analogFC28 >= 647.01 && analogFC28 < 651.105) { return value = 84.2; }
  else if (analogFC28 >= 651.105 && analogFC28 < 655.2) { return value = 84.1; }

  // Percentage Range: 83.1-84.0
  if (analogFC28 >= 655.2 && analogFC28 < 659.295) { return value = 84.0; }
  else if (analogFC28 >= 659.295 && analogFC28 < 663.39) { return value = 83.9; }
  else if (analogFC28 >= 663.39 && analogFC28 < 667.485) { return value = 83.8; }
  else if (analogFC28 >= 667.485 && analogFC28 < 671.58) { return value = 83.7; }
  else if (analogFC28 >= 671.58 && analogFC28 < 675.675) { return value = 83.6; }
  else if (analogFC28 >= 675.675 && analogFC28 < 679.77) { return value = 83.5; }
  else if (analogFC28 >= 679.77 && analogFC28 < 683.865) { return value = 83.4; }
  else if (analogFC28 >= 683.865 && analogFC28 < 687.96) { return value = 83.3; }
  else if (analogFC28 >= 687.96 && analogFC28 < 692.055) { return value = 83.2; }
  else if (analogFC28 >= 692.055 && analogFC28 < 696.15) { return value = 83.1; }

  // Percentage Range: 82.1-83.0
  if (analogFC28 >= 696.15 && analogFC28 < 700.245) { return value = 83.0; }
  else if (analogFC28 >= 700.245 && analogFC28 < 704.34) { return value = 82.9; }
  else if (analogFC28 >= 704.34 && analogFC28 < 708.435) { return value = 82.8; }
  else if (analogFC28 >= 708.435 && analogFC28 < 712.53) { return value = 82.7; }
  else if (analogFC28 >= 712.53 && analogFC28 < 716.625) { return value = 82.6; }
  else if (analogFC28 >= 716.625 && analogFC28 < 720.72) { return value = 82.5; }
  else if (analogFC28 >= 720.72 && analogFC28 < 724.815) { return value = 82.4; }
  else if (analogFC28 >= 724.815 && analogFC28 < 728.91) { return value = 82.3; }
  else if (analogFC28 >= 728.91 && analogFC28 < 733.005) { return value = 82.2; }
  else if (analogFC28 >= 733.005 && analogFC28 < 737.1) { return value = 82.1; }

  // Percentage Range: 81.1-82.0
  if (analogFC28 >= 737.1 && analogFC28 < 741.195) { return value = 82.0; }
  else if (analogFC28 >= 741.195 && analogFC28 < 745.29) { return value = 81.9; }
  else if (analogFC28 >= 745.29 && analogFC28 < 749.385) { return value = 81.8; }
  else if (analogFC28 >= 749.385 && analogFC28 < 753.48) { return value = 81.7; }
  else if (analogFC28 >= 753.48 && analogFC28 < 757.575) { return value = 81.6; }
  else if (analogFC28 >= 757.575 && analogFC28 < 761.67) { return value = 81.5; }
  else if (analogFC28 >= 761.67 && analogFC28 < 765.765) { return value = 81.4; }
  else if (analogFC28 >= 765.765 && analogFC28 < 769.86) { return value = 81.3; }
  else if (analogFC28 >= 769.86 && analogFC28 < 773.955) { return value = 81.2; }
  else if (analogFC28 >= 773.955 && analogFC28 < 778.05) { return value = 81.1; }

  // Percentage Range: 80.1-81.0
  if (analogFC28 >= 778.05 && analogFC28 < 782.145) { return value = 81.0; }
  else if (analogFC28 >= 782.145 && analogFC28 < 786.24) { return value = 80.9; }
  else if (analogFC28 >= 786.24 && analogFC28 < 790.335) { return value = 80.8; }
  else if (analogFC28 >= 790.335 && analogFC28 < 794.43) { return value = 80.7; }
  else if (analogFC28 >= 794.43 && analogFC28 < 798.525) { return value = 80.6; }
  else if (analogFC28 >= 798.525 && analogFC28 < 802.62) { return value = 80.5; }
  else if (analogFC28 >= 802.62 && analogFC28 < 806.715) { return value = 80.4; }
  else if (analogFC28 >= 806.715 && analogFC28 < 810.81) { return value = 80.3; }
  else if (analogFC28 >= 810.81 && analogFC28 < 814.905) { return value = 80.2; }
  else if (analogFC28 >= 814.905 && analogFC28 < 819) { return value = 80.1; }

  // Percentage Range: 79.1-80.0
  if (analogFC28 >= 819 && analogFC28 < 823.095) { return value = 80.0; }  
  else if (analogFC28 >= 823.095 && analogFC28 < 827.19) { return value = 79.9; }
  else if (analogFC28 >= 827.19 && analogFC28 < 831.285) { return value = 79.8; }
  else if (analogFC28 >= 831.285 && analogFC28 < 835.38) { return value = 79.7; }
  else if (analogFC28 >= 835.38 && analogFC28 < 839.475) { return value = 79.6; }
  else if (analogFC28 >= 839.475 && analogFC28 < 843.57) { return value = 79.5; }
  else if (analogFC28 >= 843.57 && analogFC28 < 847.665) { return value = 79.4; }
  else if (analogFC28 >= 847.665 && analogFC28 < 851.76) { return value = 79.3; }
  else if (analogFC28 >= 851.76 && analogFC28 < 855.855) { return value = 79.2; }
  else if (analogFC28 >= 855.855 && analogFC28 < 859.95) { return value = 79.1; }

  // Percentage Range: 78.1-79.0
  if (analogFC28 >= 859.95 && analogFC28 < 864.045) { return value = 79.0; }
  else if (analogFC28 >= 864.045 && analogFC28 < 868.14) { return value = 78.9; }
  else if (analogFC28 >= 868.14 && analogFC28 < 872.235) { return value = 78.8; }
  else if (analogFC28 >= 872.235 && analogFC28 < 876.33) { return value = 78.7; }
  else if (analogFC28 >= 876.33 && analogFC28 < 880.425) { return value = 78.6; }
  else if (analogFC28 >= 880.425 && analogFC28 < 884.52) { return value = 78.5; }
  else if (analogFC28 >= 884.52 && analogFC28 < 888.615) { return value = 78.4; }
  else if (analogFC28 >= 888.615 && analogFC28 < 892.71) { return value = 78.3; }
  else if (analogFC28 >= 892.71 && analogFC28 < 896.805) { return value = 78.2; }
  else if (analogFC28 >= 896.805 && analogFC28 < 900.9) { return value = 78.1; }

  // Percentage Range: 77.1-78.0
  if (analogFC28 >= 900.9 && analogFC28 < 904.995) { return value = 78.0; }
  else if (analogFC28 >= 904.995 && analogFC28 < 909.09) { return value = 77.9; }
  else if (analogFC28 >= 909.09 && analogFC28 < 913.185) { return value = 77.8; }
  else if (analogFC28 >= 913.185 && analogFC28 < 917.28) { return value = 77.7; }
  else if (analogFC28 >= 917.28 && analogFC28 < 921.375) { return value = 77.6; }
  else if (analogFC28 >= 921.375 && analogFC28 < 925.47) { return value = 77.5; }
  else if (analogFC28 >= 925.47 && analogFC28 < 929.565) { return value = 77.4; }
  else if (analogFC28 >= 929.565 && analogFC28 < 933.66) { return value = 77.3; }
  else if (analogFC28 >= 933.66 && analogFC28 < 937.755) { return value = 77.2; }
  else if (analogFC28 >= 937.755 && analogFC28 < 941.85) { return value = 77.1; }

  // Percentage Range: 76.1-77.0
  if (analogFC28 >= 941.85 && analogFC28 < 945.945) { return value = 77.0; }
  else if (analogFC28 >= 945.945 && analogFC28 < 950.04) { return value = 76.9; }
  else if (analogFC28 >= 950.04 && analogFC28 < 954.135) { return value = 76.8; }
  else if (analogFC28 >= 954.135 && analogFC28 < 958.23) { return value = 76.7; }
  else if (analogFC28 >= 958.23 && analogFC28 < 962.325) { return value = 76.6; }
  else if (analogFC28 >= 962.325 && analogFC28 < 966.42) { return value = 76.5; }
  else if (analogFC28 >= 966.42 && analogFC28 < 970.515) { return value = 76.4; }
  else if (analogFC28 >= 970.515 && analogFC28 < 974.61) { return value = 76.3; }
  else if (analogFC28 >= 974.61 && analogFC28 < 978.705) { return value = 76.2; }
  else if (analogFC28 >= 978.705 && analogFC28 < 982.8) { return value = 76.1; }

  // Percentage Range: 75.1-76.0
  if (analogFC28 >= 982.8 && analogFC28 < 986.895) { return value = 76.0; }
  else if (analogFC28 >= 986.895 && analogFC28 < 990.99) { return value = 75.9; }
  else if (analogFC28 >= 990.99 && analogFC28 < 995.085) { return value = 75.8; }
  else if (analogFC28 >= 995.085 && analogFC28 < 999.18) { return value = 75.7; }
  else if (analogFC28 >= 999.18 && analogFC28 < 1003.275) { return value = 75.6; }
  else if (analogFC28 >= 1003.275 && analogFC28 < 1007.37) { return value = 75.5; }
  else if (analogFC28 >= 1007.37 && analogFC28 < 1011.465) { return value = 75.4; }
  else if (analogFC28 >= 1011.465 && analogFC28 < 1015.56) { return value = 75.3; }
  else if (analogFC28 >= 1015.56 && analogFC28 < 1019.655) { return value = 75.2; }
  else if (analogFC28 >= 1019.655 && analogFC28 < 1023.75) { return value = 75.1; }

  // Percentage Range: 74.1-75.0
  if (analogFC28 >= 1023.75 && analogFC28 < 1027.845) { return value = 75.0; }
  else if (analogFC28 >= 1027.845 && analogFC28 < 1031.94) { return value = 74.9; }
  else if (analogFC28 >= 1031.94 && analogFC28 < 1036.035) { return value = 74.8; }
  else if (analogFC28 >= 1036.035 && analogFC28 < 1040.13) { return value = 74.7; }
  else if (analogFC28 >= 1040.13 && analogFC28 < 1044.225) { return value = 74.6; }
  else if (analogFC28 >= 1044.225 && analogFC28 < 1048.32) { return value = 74.5; }
  else if (analogFC28 >= 1048.32 && analogFC28 < 1052.415) { return value = 74.4; }
  else if (analogFC28 >= 1052.415 && analogFC28 < 1056.51) { return value = 74.3; }
  else if (analogFC28 >= 1056.51 && analogFC28 < 1060.605) { return value = 74.2; }
  else if (analogFC28 >= 1060.605 && analogFC28 < 1064.7) { return value = 74.1; }

  // Percentage Range: 73.1-74.0
  if (analogFC28 >= 1064.7 && analogFC28 < 1068.795) { return value = 74.0; }
  else if (analogFC28 >= 1068.795 && analogFC28 < 1072.89) { return value = 73.9; }
  else if (analogFC28 >= 1072.89 && analogFC28 < 1076.985) { return value = 73.8; }
  else if (analogFC28 >= 1076.985 && analogFC28 < 1081.08) { return value = 73.7; }
  else if (analogFC28 >= 1081.08 && analogFC28 < 1085.175) { return value = 73.6; }
  else if (analogFC28 >= 1085.175 && analogFC28 < 1089.27) { return value = 73.5; }
  else if (analogFC28 >= 1089.27 && analogFC28 < 1093.365) { return value = 73.4; }
  else if (analogFC28 >= 1093.365 && analogFC28 < 1097.46) { return value = 73.3; }
  else if (analogFC28 >= 1097.46 && analogFC28 < 1101.555) { return value = 73.2; }
  else if (analogFC28 >= 1101.555 && analogFC28 < 1105.65) { return value = 73.1; }

  // Percentage Range: 72.1-73.0
  if (analogFC28 >= 1105.65 && analogFC28 < 1109.745) { return value = 73.0; }
  else if (analogFC28 >= 1109.745 && analogFC28 < 1113.84) { return value = 72.9; }
  else if (analogFC28 >= 1113.84 && analogFC28 < 1117.935) { return value = 72.8; }
  else if (analogFC28 >= 1117.935 && analogFC28 < 1122.03) { return value = 72.7; }
  else if (analogFC28 >= 1122.03 && analogFC28 < 1126.125) { return value = 72.6; }
  else if (analogFC28 >= 1126.125 && analogFC28 < 1130.22) { return value = 72.5; }
  else if (analogFC28 >= 1130.22 && analogFC28 < 1134.315) { return value = 72.4; }
  else if (analogFC28 >= 1134.315 && analogFC28 < 1138.41) { return value = 72.3; }
  else if (analogFC28 >= 1138.41 && analogFC28 < 1142.505) { return value = 72.2; }
  else if (analogFC28 >= 1142.505 && analogFC28 < 1146.6) { return value = 72.1; }

  // Percentage Range: 71.1-72.0
  if (analogFC28 >= 1146.6 && analogFC28 < 1150.695) { return value = 72.0; }
  else if (analogFC28 >= 1150.695 && analogFC28 < 1154.79) { return value = 71.9; }
  else if (analogFC28 >= 1154.79 && analogFC28 < 1158.885) { return value = 71.8; }
  else if (analogFC28 >= 1158.885 && analogFC28 < 1162.98) { return value = 71.7; }
  else if (analogFC28 >= 1162.98 && analogFC28 < 1167.075) { return value = 71.6; }
  else if (analogFC28 >= 1167.075 && analogFC28 < 1171.17) { return value = 71.5; }
  else if (analogFC28 >= 1171.17 && analogFC28 < 1175.265) { return value = 71.4; }
  else if (analogFC28 >= 1175.265 && analogFC28 < 1179.36) { return value = 71.3; }
  else if (analogFC28 >= 1179.36 && analogFC28 < 1183.455) { return value = 71.2; }
  else if (analogFC28 >= 1183.455 && analogFC28 < 1187.55) { return value = 71.1; }

  // Percentage Range: 70.1-71.0
  if (analogFC28 >= 1187.55 && analogFC28 < 1191.645) { return value = 71.0; }
  else if (analogFC28 >= 1191.645 && analogFC28 < 1195.74) { return value = 70.9; }
  else if (analogFC28 >= 1195.74 && analogFC28 < 1199.835) { return value = 70.8; }
  else if (analogFC28 >= 1199.835 && analogFC28 < 1203.93) { return value = 70.7; }
  else if (analogFC28 >= 1203.93 && analogFC28 < 1208.025) { return value = 70.6; }
  else if (analogFC28 >= 1208.025 && analogFC28 < 1212.12) { return value = 70.5; }
  else if (analogFC28 >= 1212.12 && analogFC28 < 1216.215) { return value = 70.4; }
  else if (analogFC28 >= 1216.215 && analogFC28 < 1220.31) { return value = 70.3; }
  else if (analogFC28 >= 1220.31 && analogFC28 < 1224.405) { return value = 70.2; }
  else if (analogFC28 >= 1224.405 && analogFC28 < 1228.5) { return value = 70.1; }

  // Percentage Range: 69.1-70.0
  if (analogFC28 >= 1228.5 && analogFC28 < 1232.595) { return value = 70.0; } 
  else if (analogFC28 >= 1232.595 && analogFC28 < 1236.69) { return value = 69.9; }
  else if (analogFC28 >= 1236.69 && analogFC28 < 1240.785) { return value = 69.8; }
  else if (analogFC28 >= 1240.785 && analogFC28 < 1244.88) { return value = 69.7; }
  else if (analogFC28 >= 1244.88 && analogFC28 < 1248.975) { return value = 69.6; }
  else if (analogFC28 >= 1248.975 && analogFC28 < 1253.07) { return value = 69.5; }
  else if (analogFC28 >= 1253.07 && analogFC28 < 1257.165) { return value = 69.4; }
  else if (analogFC28 >= 1257.165 && analogFC28 < 1261.26) { return value = 69.3; }
  else if (analogFC28 >= 1261.26 && analogFC28 < 1265.355) { return value = 69.2; }
  else if (analogFC28 >= 1265.355 && analogFC28 < 1269.45) { return value = 69.1; }

  // Percentage Range: 68.1-69.0
  if (analogFC28 >= 1269.45 && analogFC28 < 1273.545) { return value = 69.0; } 
  else if (analogFC28 >= 1273.545 && analogFC28 < 1277.64) { return value = 68.9; }
  else if (analogFC28 >= 1277.64 && analogFC28 < 1281.735) { return value = 68.8; }
  else if (analogFC28 >= 1281.735 && analogFC28 < 1285.83) { return value = 68.7; }
  else if (analogFC28 >= 1285.83 && analogFC28 < 1289.925) { return value = 68.6; }
  else if (analogFC28 >= 1289.925 && analogFC28 < 1294.02) { return value = 68.5; }
  else if (analogFC28 >= 1294.02 && analogFC28 < 1298.115) { return value = 68.4; }
  else if (analogFC28 >= 1298.115 && analogFC28 < 1302.21) { return value = 68.3; }
  else if (analogFC28 >= 1302.21 && analogFC28 < 1306.305) { return value = 68.2; }
  else if (analogFC28 >= 1306.305 && analogFC28 < 1304.4) { return value = 68.1; }

  // Percentage Range: 67.1-68.0
  if (analogFC28 >= 1304.4 && analogFC28 < 1314.495) { return value = 68.0; } 
  else if (analogFC28 >= 1314.495 && analogFC28 < 1318.59) { return value = 67.9; }
  else if (analogFC28 >= 1318.59 && analogFC28 < 1322.685) { return value = 67.8; }
  else if (analogFC28 >= 1322.685 && analogFC28 < 1326.78) { return value = 67.7; }
  else if (analogFC28 >= 1326.78 && analogFC28 < 1330.875) { return value = 67.6; }
  else if (analogFC28 >= 1330.875 && analogFC28 < 1334.97) { return value = 67.5; }
  else if (analogFC28 >= 1334.97 && analogFC28 < 1339.065) { return value = 67.4; }
  else if (analogFC28 >= 1339.065 && analogFC28 < 1343.16) { return value = 67.3; }
  else if (analogFC28 >= 1343.16 && analogFC28 < 1347.255) { return value = 67.2; }
  else if (analogFC28 >= 1347.255 && analogFC28 < 1351.35) { return value = 67.1; }

  // Percentage Range: 66.1-67.0
  if (analogFC28 >= 1351.35 && analogFC28 < 1355.445) { return value = 67.0; } 
  else if (analogFC28 >= 1355.445 && analogFC28 < 1359.54) { return value = 66.9; }
  else if (analogFC28 >= 1359.54 && analogFC28 < 1363.635) { return value = 66.8; }
  else if (analogFC28 >= 1363.635 && analogFC28 < 1367.73) { return value = 66.7; }
  else if (analogFC28 >= 1367.73 && analogFC28 < 1371.825) { return value = 66.6; }
  else if (analogFC28 >= 1371.825 && analogFC28 < 1375.92) { return value = 66.5; }
  else if (analogFC28 >= 1375.92 && analogFC28 < 1380.015) { return value = 66.4; }
  else if (analogFC28 >= 1380.015 && analogFC28 < 1384.11) { return value = 66.3; }
  else if (analogFC28 >= 1384.11 && analogFC28 < 1388.205) { return value = 66.2; }
  else if (analogFC28 >= 1388.205 && analogFC28 < 1392.3) { return value = 66.1; }

  // Percentage Range: 65.1-66.0
  if (analogFC28 >= 1392.3 && analogFC28 < 1396.395) { return value = 66.0; } 
  else if (analogFC28 >= 1396.395 && analogFC28 < 1400.49) { return value = 65.9; }
  else if (analogFC28 >= 1400.49 && analogFC28 < 1404.585) { return value = 65.8; }
  else if (analogFC28 >= 1404.585 && analogFC28 < 1408.68) { return value = 65.7; }
  else if (analogFC28 >= 1408.68 && analogFC28 < 1412.775) { return value = 65.6; }
  else if (analogFC28 >= 1412.775 && analogFC28 < 1416.87) { return value = 65.5; }
  else if (analogFC28 >= 1416.87 && analogFC28 < 1420.965) { return value = 65.4; }
  else if (analogFC28 >= 1420.965 && analogFC28 < 1425.06) { return value = 65.3; }
  else if (analogFC28 >= 1425.06 && analogFC28 < 1429.155) { return value = 65.2; }
  else if (analogFC28 >= 1429.155 && analogFC28 < 1433.25) { return value = 65.1; }

  // Percentage Range: 64.1-65.0
  if (analogFC28 >= 1433.25 && analogFC28 < 1437.345) { return value = 65.0; } 
  else if (analogFC28 >= 1437.345 && analogFC28 < 1441.44) { return value = 64.9; }
  else if (analogFC28 >= 1441.44 && analogFC28 < 1445.535) { return value = 64.8; }
  else if (analogFC28 >= 1445.535 && analogFC28 < 1449.63) { return value = 64.7; }
  else if (analogFC28 >= 1449.63 && analogFC28 < 1453.725) { return value = 64.6; }
  else if (analogFC28 >= 1453.725 && analogFC28 < 1457.82) { return value = 64.5; }
  else if (analogFC28 >= 1457.82 && analogFC28 < 1461.915) { return value = 64.4; }
  else if (analogFC28 >= 1461.915 && analogFC28 < 1466.01) { return value = 64.3; }
  else if (analogFC28 >= 1466.01 && analogFC28 < 1470.105) { return value = 64.2; }
  else if (analogFC28 >= 1470.105 && analogFC28 < 1474.2) { return value = 64.1; }

  // Percentage Range: 63.1-64.0
  if (analogFC28 >= 1474.2 && analogFC28 < 1478.295) { return value = 64.0; } 
  else if (analogFC28 >= 1478.295 && analogFC28 < 1482.39) { return value = 63.9; }
  else if (analogFC28 >= 1482.39 && analogFC28 < 1486.485) { return value = 63.8; }
  else if (analogFC28 >= 1486.485 && analogFC28 < 1490.58) { return value = 63.7; }
  else if (analogFC28 >= 1490.58 && analogFC28 < 1494.675) { return value = 63.6; }
  else if (analogFC28 >= 1494.675 && analogFC28 < 1498.77) { return value = 63.5; }
  else if (analogFC28 >= 1498.77 && analogFC28 < 1502.865) { return value = 63.4; }
  else if (analogFC28 >= 1502.865 && analogFC28 < 1506.96) { return value = 63.3; }
  else if (analogFC28 >= 1506.96 && analogFC28 < 1511.055) { return value = 63.2; }
  else if (analogFC28 >= 1511.055 && analogFC28 < 1515.15) { return value = 63.1; }

  // Percentage Range: 62.1-63.0
  if (analogFC28 >= 1515.15 && analogFC28 < 1519.245) { return value = 63.0; } 
  else if (analogFC28 >= 1519.245 && analogFC28 < 1523.34) { return value = 62.9; }
  else if (analogFC28 >= 1523.34 && analogFC28 < 1527.435) { return value = 62.8; }
  else if (analogFC28 >= 1527.435 && analogFC28 < 1531.53) { return value = 62.7; }
  else if (analogFC28 >= 1531.53 && analogFC28 < 1535.625) { return value = 62.6; }
  else if (analogFC28 >= 1535.625 && analogFC28 < 1539.72) { return value = 62.5; }
  else if (analogFC28 >= 1539.72 && analogFC28 < 1543.815) { return value = 62.4; }
  else if (analogFC28 >= 1543.815 && analogFC28 < 1547.91) { return value = 62.3; }
  else if (analogFC28 >= 1547.91 && analogFC28 < 1552.005) { return value = 62.2; }
  else if (analogFC28 >= 1552.005 && analogFC28 < 1556.1) { return value = 62.1; }

  // Percentage Range: 61.1-62.0
  if (analogFC28 >= 1556.1 && analogFC28 < 1560.195) { return value = 62.0; } 
  else if (analogFC28 >= 1560.195 && analogFC28 < 1564.29) { return value = 61.9; }
  else if (analogFC28 >= 1564.29 && analogFC28 < 1568.385) { return value = 61.8; }
  else if (analogFC28 >= 1568.385 && analogFC28 < 1572.48) { return value = 61.7; }
  else if (analogFC28 >= 1572.48 && analogFC28 < 1576.575) { return value = 61.6; }
  else if (analogFC28 >= 1576.575 && analogFC28 < 1580.67) { return value = 61.5; }
  else if (analogFC28 >= 1580.67 && analogFC28 < 1584.765) { return value = 61.4; }
  else if (analogFC28 >= 1584.765 && analogFC28 < 1588.86) { return value = 61.3; }
  else if (analogFC28 >= 1588.86 && analogFC28 < 1592.955) { return value = 61.2; }
  else if (analogFC28 >= 1592.955 && analogFC28 < 1597.05) { return value = 61.1; }

  // Percentage Range: 60.1-61.0
  if (analogFC28 >= 1597.05 && analogFC28 < 1601.145) { return value = 61.0; } 
  else if (analogFC28 >= 1601.145 && analogFC28 < 1605.24) { return value = 60.9; }
  else if (analogFC28 >= 1605.24 && analogFC28 < 1609.335) { return value = 60.8; }
  else if (analogFC28 >= 1609.335 && analogFC28 < 1613.43) { return value = 60.7; }
  else if (analogFC28 >= 1613.43 && analogFC28 < 1617.525) { return value = 60.6; }
  else if (analogFC28 >= 1617.525 && analogFC28 < 1621.62) { return value = 60.5; }
  else if (analogFC28 >= 1621.62 && analogFC28 < 1625.715) { return value = 60.4; }
  else if (analogFC28 >= 1625.715 && analogFC28 < 1629.81) { return value = 60.3; }
  else if (analogFC28 >= 1629.81 && analogFC28 < 1633.905) { return value = 60.2; }
  else if (analogFC28 >= 1633.905 && analogFC28 < 1638) { return value = 60.1; }

  // Percentage Range: 59.1-60.0
  if (analogFC28 >= 1638 && analogFC28 < 1642.095) { return value = 60.0; } 
  else if (analogFC28 >= 1642.095 && analogFC28 < 1646.19) { return value = 59.9; }
  else if (analogFC28 >= 1646.19 && analogFC28 < 1650.285) { return value = 59.8; }
  else if (analogFC28 >= 1650.285 && analogFC28 < 1654.38) { return value = 59.7; }
  else if (analogFC28 >= 1654.38 && analogFC28 < 1658.475) { return value = 59.6; }
  else if (analogFC28 >= 1658.475 && analogFC28 < 1662.57) { return value = 59.5; }
  else if (analogFC28 >= 1662.57 && analogFC28 < 1666.665) { return value = 59.4; }
  else if (analogFC28 >= 1666.665 && analogFC28 < 1670.76) { return value = 59.3; }
  else if (analogFC28 >= 1670.76 && analogFC28 < 1674.855) { return value = 59.2; }
  else if (analogFC28 >= 1674.855 && analogFC28 < 1678.95) { return value = 59.1; }

  // Percentage Range: 58.1-59.0
  if (analogFC28 >= 1678.95 && analogFC28 < 1683.045) { return value = 59.0; }
  else if (analogFC28 >= 1683.045 && analogFC28 < 1687.14) { return value = 58.9; }
  else if (analogFC28 >= 1687.14 && analogFC28 < 1691.235) { return value = 58.8; }
  else if (analogFC28 >= 1691.235 && analogFC28 < 1695.33) { return value = 58.7; }
  else if (analogFC28 >= 1695.33 && analogFC28 < 1699.425) { return value = 58.6; }
  else if (analogFC28 >= 1699.425 && analogFC28 < 1703.52) { return value = 58.5; }
  else if (analogFC28 >= 1703.52 && analogFC28 < 1707.615) { return value = 58.4; }
  else if (analogFC28 >= 1707.615 && analogFC28 < 1711.71) { return value = 58.3; }
  else if (analogFC28 >= 1711.71 && analogFC28 < 1715.805) { return value = 58.2; }
  else if (analogFC28 >= 1715.805 && analogFC28 < 1719.9) { return value = 58.1; }

  // Percentage Range: 57.1-58.0
  if (analogFC28 >= 1719.9 && analogFC28 < 1723.995) { return value = 58.0; }
  else if (analogFC28 >= 1723.995 && analogFC28 < 1728.09) { return value = 57.9; }
  else if (analogFC28 >= 1728.09 && analogFC28 < 1732.185) { return value = 57.8; }
  else if (analogFC28 >= 1732.185 && analogFC28 < 1736.28) { return value = 57.7; }
  else if (analogFC28 >= 1736.28 && analogFC28 < 1740.375) { return value = 57.6; }
  else if (analogFC28 >= 1740.375 && analogFC28 < 1744.47) { return value = 57.5; }
  else if (analogFC28 >= 1744.47 && analogFC28 < 1748.565) { return value = 57.4; }
  else if (analogFC28 >= 1748.565 && analogFC28 < 1752.66) { return value = 57.3; }
  else if (analogFC28 >= 1752.66 && analogFC28 < 1756.755) { return value = 57.2; }
  else if (analogFC28 >= 1756.755 && analogFC28 < 1760.85) { return value = 57.1; }

  // Percentage Range: 56.1-57.0
  if (analogFC28 >= 1760.85 && analogFC28 < 1764.945) { return value = 57.0; }
  else if (analogFC28 >= 1764.945 && analogFC28 < 1769.04) { return value = 56.9; }
  else if (analogFC28 >= 1769.04 && analogFC28 < 1773.135) { return value = 56.8; }
  else if (analogFC28 >= 1773.135 && analogFC28 < 1777.23) { return value = 56.7; }
  else if (analogFC28 >= 1777.23 && analogFC28 < 1781.325) { return value = 56.6; }
  else if (analogFC28 >= 1781.325 && analogFC28 < 1785.42) { return value = 56.5; }
  else if (analogFC28 >= 1785.42 && analogFC28 < 1789.515) { return value = 56.4; }
  else if (analogFC28 >= 1789.515 && analogFC28 < 1793.61) { return value = 56.3; }
  else if (analogFC28 >= 1793.61 && analogFC28 < 1797.705) { return value = 56.2; }
  else if (analogFC28 >= 1797.705 && analogFC28 < 1801.8) { return value = 56.1; }

  // Percentage Range: 55.1-56.0
  if (analogFC28 >= 1801.8 && analogFC28 < 1805.895) { return value = 56.0; }
  else if (analogFC28 >= 1805.895 && analogFC28 < 1809.99) { return value = 55.9; }
  else if (analogFC28 >= 1809.99 && analogFC28 < 1814.085) { return value = 55.8; }
  else if (analogFC28 >= 1814.085 && analogFC28 < 1818.18) { return value = 55.7; }
  else if (analogFC28 >= 1818.18 && analogFC28 < 1822.275) { return value = 55.6; }
  else if (analogFC28 >= 1822.275 && analogFC28 < 1826.37) { return value = 55.5; }
  else if (analogFC28 >= 1826.37 && analogFC28 < 1830.465) { return value = 55.4; }
  else if (analogFC28 >= 1830.465 && analogFC28 < 1834.56) { return value = 55.3; }
  else if (analogFC28 >= 1834.56 && analogFC28 < 1838.655) { return value = 55.2; }
  else if (analogFC28 >= 1838.655 && analogFC28 < 1842.75) { return value = 55.1; }

  // Percentage Range: 54.1-55.0
  if (analogFC28 >= 1842.75 && analogFC28 < 1846.845) { return value = 55.0; }
  else if (analogFC28 >= 1846.845 && analogFC28 < 1850.94) { return value = 54.9; }
  else if (analogFC28 >= 1850.94 && analogFC28 < 1855.035) { return value = 54.8; }
  else if (analogFC28 >= 1855.035 && analogFC28 < 1859.13) { return value = 54.7; }
  else if (analogFC28 >= 1859.13 && analogFC28 < 1863.225) { return value = 54.6; }
  else if (analogFC28 >= 1863.225 && analogFC28 < 1867.32) { return value = 54.5; }
  else if (analogFC28 >= 1867.32 && analogFC28 < 1871.415) { return value = 54.4; }
  else if (analogFC28 >= 1871.415 && analogFC28 < 1875.51) { return value = 54.3; }
  else if (analogFC28 >= 1875.51 && analogFC28 < 1879.605) { return value = 54.2; }
  else if (analogFC28 >= 1879.605 && analogFC28 < 1883.7) { return value = 54.1; }

  // Percentage Range: 53.1-54.0
  if (analogFC28 >= 1883.7 && analogFC28 < 1887.795) { return value = 54.0; } 
  else if (analogFC28 >= 1887.795 && analogFC28 < 1891.89) { return value = 53.9; }
  else if (analogFC28 >= 1891.89 && analogFC28 < 1895.985) { return value = 53.8; }
  else if (analogFC28 >= 1895.985 && analogFC28 < 1900.08) { return value = 53.7; }
  else if (analogFC28 >= 1900.08 && analogFC28 < 1904.175) { return value = 53.6; }
  else if (analogFC28 >= 1904.175 && analogFC28 < 1908.27) { return value = 53.5; }
  else if (analogFC28 >= 1908.27 && analogFC28 < 1912.365) { return value = 53.4; }
  else if (analogFC28 >= 1912.365 && analogFC28 < 1916.46) { return value = 53.3; }
  else if (analogFC28 >= 1916.46 && analogFC28 < 1920.555) { return value = 53.2; }
  else if (analogFC28 >= 1920.555 && analogFC28 < 1924.65) { return value = 53.1; }

  // Percentage Range: 52.1-53.0
  if (analogFC28 >= 1924.65 && analogFC28 < 1928.745) { return value = 53.0; }
  else if (analogFC28 >= 1928.745 && analogFC28 < 1932.84) { return value = 52.9; }
  else if (analogFC28 >= 1932.84 && analogFC28 < 1936.935) { return value = 52.8; }
  else if (analogFC28 >= 1936.935 && analogFC28 < 1941.03) { return value = 52.7; }
  else if (analogFC28 >= 1941.03 && analogFC28 < 1945.125) { return value = 52.6; }
  else if (analogFC28 >= 1945.125 && analogFC28 < 1949.22) { return value = 52.5; }
  else if (analogFC28 >= 1949.22 && analogFC28 < 1953.315) { return value = 52.4; }
  else if (analogFC28 >= 1953.315 && analogFC28 < 1951.41) { return value = 52.3; }
  else if (analogFC28 >= 1951.41 && analogFC28 < 1961.505) { return value = 52.2; }
  else if (analogFC28 >= 1961.505 && analogFC28 < 1965.6) { return value = 52.1; }

  // Percentage Range: 51.1-52.0
  if (analogFC28 >= 1965.6 && analogFC28 < 1969.695) { return value = 52.0; } 
  else if (analogFC28 >= 1969.695 && analogFC28 < 1973.79) { return value = 51.9; }
  else if (analogFC28 >= 1973.79 && analogFC28 < 1977.885) { return value = 51.8; }
  else if (analogFC28 >= 1977.885 && analogFC28 < 1981.98) { return value = 51.7; }
  else if (analogFC28 >= 1981.98 && analogFC28 < 1986.075) { return value = 51.6; }
  else if (analogFC28 >= 1986.075 && analogFC28 < 1990.17) { return value = 51.5; }
  else if (analogFC28 >= 1990.17 && analogFC28 < 1994.265) { return value = 51.4; }
  else if (analogFC28 >= 1994.265 && analogFC28 < 1998.36) { return value = 51.3; }
  else if (analogFC28 >= 1998.36 && analogFC28 < 2002.455) { return value = 51.2; }
  else if (analogFC28 >= 2002.455 && analogFC28 < 2006.55) { return value = 51.1; }

  // Percentage Range: 50.1-51.0
  if (analogFC28 >= 2006.55 && analogFC28 < 2010.645) { return value = 51.0; } 
  else if (analogFC28 >= 2010.645 && analogFC28 < 2014.74) { return value = 50.9; }
  else if (analogFC28 >= 2014.74 && analogFC28 < 2018.835) { return value = 50.8; }
  else if (analogFC28 >= 2018.835 && analogFC28 < 2022.93) { return value = 50.7; }
  else if (analogFC28 >= 2022.93 && analogFC28 < 2027.025) { return value = 50.6; }
  else if (analogFC28 >= 2027.025 && analogFC28 < 2031.12) { return value = 50.5; }
  else if (analogFC28 >= 2031.12 && analogFC28 < 2035.215) { return value = 50.4; }
  else if (analogFC28 >= 2035.215 && analogFC28 < 2039.31) { return value = 50.3; }
  else if (analogFC28 >= 2039.31 && analogFC28 < 2043.405) { return value = 50.2; }
  else if (analogFC28 >= 2043.405 && analogFC28 < 2047.5) { return value = 50.1; }

  // Percentage Range: 49.1-50.0
  if (analogFC28 >= 2047.5 && analogFC28 < 2051.595) { return value = 50.0; } 
  else if (analogFC28 >= 2051.595 && analogFC28 < 2055.69) { return value = 49.9; }
  else if (analogFC28 >= 2055.69 && analogFC28 < 2059.785) { return value = 49.8; }
  else if (analogFC28 >= 2059.785 && analogFC28 < 2063.88) { return value = 49.7; }
  else if (analogFC28 >= 2063.88 && analogFC28 < 2067.975) { return value = 49.6; }
  else if (analogFC28 >= 2067.975 && analogFC28 < 2072.07) { return value = 49.5; }
  else if (analogFC28 >= 2072.07 && analogFC28 < 2076.165) { return value = 49.4; }
  else if (analogFC28 >= 2076.165 && analogFC28 < 2080.26) { return value = 49.3; }
  else if (analogFC28 >= 2080.26 && analogFC28 < 2084.355) { return value = 49.2; }
  else if (analogFC28 >= 2084.355 && analogFC28 < 2088.45) { return value = 49.1; }

  // Percentage Range: 48.1-49.0
  if (analogFC28 >= 2088.45 && analogFC28 < 2092.545) { return value = 49.0; } 
  else if (analogFC28 >= 2092.545 && analogFC28 < 2096.64) { return value = 48.9; }
  else if (analogFC28 >= 2096.64 && analogFC28 < 2100.735) { return value = 48.8; }
  else if (analogFC28 >= 2100.735 && analogFC28 < 2104.83) { return value = 48.7; }
  else if (analogFC28 >= 2104.83 && analogFC28 < 2108.925) { return value = 48.6; }
  else if (analogFC28 >= 2108.925 && analogFC28 < 2113.02) { return value = 48.5; }
  else if (analogFC28 >= 2113.02 && analogFC28 < 2117.115) { return value = 48.4; }
  else if (analogFC28 >= 2117.115 && analogFC28 < 2121.21) { return value = 48.3; }
  else if (analogFC28 >= 2121.21 && analogFC28 < 2125.305) { return value = 48.2; }
  else if (analogFC28 >= 2125.305 && analogFC28 < 2129.4) { return value = 48.1; }

  // Percentage Range: 47.1-48.0
  if (analogFC28 >= 2129.4 && analogFC28 < 2133.495) { return value = 48.0; }
  else if (analogFC28 >= 2133.495 && analogFC28 < 2137.59) { return value = 47.9; }
  else if (analogFC28 >= 2137.59 && analogFC28 < 2141.685) { return value = 47.8; }
  else if (analogFC28 >= 2141.685 && analogFC28 < 2145.78) { return value = 47.7; }
  else if (analogFC28 >= 2145.78 && analogFC28 < 2149.875) { return value = 47.6; }
  else if (analogFC28 >= 2149.875 && analogFC28 < 2153.97) { return value = 47.5; }
  else if (analogFC28 >= 2153.97 && analogFC28 < 2158.065) { return value = 47.4; }
  else if (analogFC28 >= 2158.065 && analogFC28 < 2162.16) { return value = 47.3; }
  else if (analogFC28 >= 2162.16 && analogFC28 < 2166.255) { return value = 47.2; }
  else if (analogFC28 >= 2166.255 && analogFC28 < 2170.35) { return value = 47.1; }

  // Percentage Range: 46.1-47.0
  if (analogFC28 >= 2170.35 && analogFC28 < 2174.445) { return value = 47.0; } 
  else if (analogFC28 >= 2174.445 && analogFC28 < 2178.54) { return value = 46.9; }
  else if (analogFC28 >= 2178.54 && analogFC28 < 2182.635) { return value = 46.8; }
  else if (analogFC28 >= 2182.635 && analogFC28 < 2186.73) { return value = 46.7; }
  else if (analogFC28 >= 2186.73 && analogFC28 < 2190.825) { return value = 46.6; }
  else if (analogFC28 >= 2190.825 && analogFC28 < 2194.92) { return value = 46.5; }
  else if (analogFC28 >= 2194.92 && analogFC28 < 2199.015) { return value = 46.4; }
  else if (analogFC28 >= 2199.015 && analogFC28 < 2203.11) { return value = 46.3; }
  else if (analogFC28 >= 2203.11 && analogFC28 < 2207.205) { return value = 46.2; }
  else if (analogFC28 >= 2207.205 && analogFC28 < 2211.3) { return value = 46.1; }

  // Percentage Range: 45.1-46.0
  if (analogFC28 >= 2211.3 && analogFC28 < 2215.395) { return value = 46.0; } 
  else if (analogFC28 >= 2215.395 && analogFC28 < 2219.49) { return value = 45.9; }
  else if (analogFC28 >= 2219.49 && analogFC28 < 2223.585) { return value = 45.8; }
  else if (analogFC28 >= 2223.585 && analogFC28 < 2227.68) { return value = 45.7; }
  else if (analogFC28 >= 2227.68 && analogFC28 < 2231.775) { return value = 45.6; }
  else if (analogFC28 >= 2231.775 && analogFC28 < 2235.87) { return value = 45.5; }
  else if (analogFC28 >= 2235.87 && analogFC28 < 2239.965) { return value = 45.4; }
  else if (analogFC28 >= 2239.965 && analogFC28 < 2244.06) { return value = 45.3; }
  else if (analogFC28 >= 2244.06 && analogFC28 < 2248.155) { return value = 45.2; }
  else if (analogFC28 >= 2248.155 && analogFC28 < 2252.25) { return value = 45.1; }

  // Percentage Range: 44.1-45.0
  if (analogFC28 >= 2252.25 && analogFC28 < 2256.345) { return value = 45.0; } 
  else if (analogFC28 >= 2256.345 && analogFC28 < 2260.44) { return value = 44.9; }
  else if (analogFC28 >= 2260.44 && analogFC28 < 2264.535) { return value = 44.8; }
  else if (analogFC28 >= 2264.535 && analogFC28 < 2268.63) { return value = 44.7; }
  else if (analogFC28 >= 2268.63 && analogFC28 < 2272.725) { return value = 44.6; }
  else if (analogFC28 >= 2272.725 && analogFC28 < 2276.82) { return value = 44.5; }
  else if (analogFC28 >= 2276.82 && analogFC28 < 2280.915) { return value = 44.4; }
  else if (analogFC28 >= 2280.915 && analogFC28 < 2285.01) { return value = 44.3; }
  else if (analogFC28 >= 2285.01 && analogFC28 < 2289.105) { return value = 44.2; }
  else if (analogFC28 >= 2289.105 && analogFC28 < 2293.2) { return value = 44.1; }

  // Percentage Range: 43.1-44.0
  if (analogFC28 >= 2293.2 && analogFC28 < 2297.295) { return value = 44.0; }
  else if (analogFC28 >= 2297.295 && analogFC28 < 2301.39) { return value = 43.9; }
  else if (analogFC28 >= 2301.39 && analogFC28 < 2305.485) { return value = 43.8; }
  else if (analogFC28 >= 2305.485 && analogFC28 < 2309.58) { return value = 43.7; }
  else if (analogFC28 >= 2309.58 && analogFC28 < 2313.675) { return value = 43.6; }
  else if (analogFC28 >= 2313.675 && analogFC28 < 2317.77) { return value = 43.5; }
  else if (analogFC28 >= 2317.77 && analogFC28 < 2321.865) { return value = 43.4; }
  else if (analogFC28 >= 2321.865 && analogFC28 < 2325.96) { return value = 43.3; }
  else if (analogFC28 >= 2325.96 && analogFC28 < 2330.055) { return value = 43.2; }
  else if (analogFC28 >= 2330.055 && analogFC28 < 2334.15) { return value = 43.1; }

  // Percentage Range: 42.1-43.0
  if (analogFC28 >= 2334.15 && analogFC28 < 2338.245) { return value = 43.0; }
  else if (analogFC28 >= 2338.245 && analogFC28 < 2342.34) { return value = 42.9; }
  else if (analogFC28 >= 2342.34 && analogFC28 < 2346.435) { return value = 42.8; }
  else if (analogFC28 >= 2346.435 && analogFC28 < 2350.53) { return value = 42.7; }
  else if (analogFC28 >= 2350.53 && analogFC28 < 2354.625) { return value = 42.6; }
  else if (analogFC28 >= 2354.625 && analogFC28 < 2358.72) { return value = 42.5; }
  else if (analogFC28 >= 2358.72 && analogFC28 < 2362.815) { return value = 42.4; }
  else if (analogFC28 >= 2362.815 && analogFC28 < 2366.91) { return value = 42.3; }
  else if (analogFC28 >= 2366.91 && analogFC28 < 2371.005) { return value = 42.2; }
  else if (analogFC28 >= 2371.005 && analogFC28 < 2375.1) { return value = 42.1; }
  
  // Percentage Range: 41.1-42.0
  if (analogFC28 >= 2375.1 && analogFC28 < 2379.195) { return value = 42.0; } 
  else if (analogFC28 >= 2379.195 && analogFC28 < 2383.29) { return value = 41.9; }
  else if (analogFC28 >= 2383.29 && analogFC28 < 2387.385) { return value = 41.8; }
  else if (analogFC28 >= 2387.385 && analogFC28 < 2391.48) { return value = 41.7; }
  else if (analogFC28 >= 2391.48 && analogFC28 < 2395.575) { return value = 41.6; }
  else if (analogFC28 >= 2395.575 && analogFC28 < 2399.67) { return value = 41.5; }
  else if (analogFC28 >= 2399.67 && analogFC28 < 2403.765) { return value = 41.4; }
  else if (analogFC28 >= 2403.765 && analogFC28 < 2407.86) { return value = 41.3; }
  else if (analogFC28 >= 2407.86 && analogFC28 < 2411.955) { return value = 41.2; }
  else if (analogFC28 >= 2411.955 && analogFC28 < 2416.05) { return value = 41.1; }
  
  // Percentage Range: 40.1-41.0
  if (analogFC28 >= 2416.05 && analogFC28 < 2420.145) { return value = 41.0; } 
  else if (analogFC28 >= 2420.145 && analogFC28 < 2424.24) { return value = 40.9; }
  else if (analogFC28 >= 2424.24 && analogFC28 < 2428.335) { return value = 40.8; }
  else if (analogFC28 >= 2428.335 && analogFC28 < 2432.43) { return value = 40.7; }
  else if (analogFC28 >= 2432.43 && analogFC28 < 2436.525) { return value = 40.6; }
  else if (analogFC28 >= 2436.525 && analogFC28 < 2440.62) { return value = 40.5; }
  else if (analogFC28 >= 2440.62 && analogFC28 < 2444.715) { return value = 40.4; }
  else if (analogFC28 >= 2444.715 && analogFC28 < 2448.81) { return value = 40.3; }
  else if (analogFC28 >= 2448.81 && analogFC28 < 2452.905) { return value = 40.2; }
  else if (analogFC28 >= 2452.905 && analogFC28 < 2457) { return value = 40.1; }

  // Percentage Range: 39.1-40.0
  if (analogFC28 >= 2457 && analogFC28 < 2461.095) { return value = 40.0; }
  else if (analogFC28 >= 2461.095 && analogFC28 < 2465.19) { return value = 39.9; }
  else if (analogFC28 >= 2465.19 && analogFC28 < 2469.285) { return value = 39.8; }
  else if (analogFC28 >= 2469.285 && analogFC28 < 2473.38) { return value = 39.7; }
  else if (analogFC28 >= 2473.38 && analogFC28 < 2477.475) { return value = 39.6; }
  else if (analogFC28 >= 2477.475 && analogFC28 < 2481.57) { return value = 39.5; }
  else if (analogFC28 >= 2481.57 && analogFC28 < 2485.665) { return value = 39.4; }
  else if (analogFC28 >= 2485.665 && analogFC28 < 2489.76) { return value = 39.3; }
  else if (analogFC28 >= 2489.76 && analogFC28 < 2493.855) { return value = 39.2; }
  else if (analogFC28 >= 2493.855 && analogFC28 < 2497.95) { return value = 39.1; }

  // Percentage Range: 38.1-39.0
  if (analogFC28 >= 2497.95 && analogFC28 < 2502.045) { return value = 39.0; }
  else if (analogFC28 >= 2502.045 && analogFC28 < 2506.14) { return value = 38.9; }
  else if (analogFC28 >= 2506.14 && analogFC28 < 2510.235) { return value = 38.8; }
  else if (analogFC28 >= 2510.235 && analogFC28 < 2514.33) { return value = 38.7; }
  else if (analogFC28 >= 2514.33 && analogFC28 < 2518.425) { return value = 38.6; }
  else if (analogFC28 >= 2518.425 && analogFC28 < 2522.52) { return value = 38.5; }
  else if (analogFC28 >= 2522.52 && analogFC28 < 2526.615) { return value = 38.4; }
  else if (analogFC28 >= 2526.615 && analogFC28 < 2530.71) { return value = 38.3; }
  else if (analogFC28 >= 2530.71 && analogFC28 < 2534.805) { return value = 38.2; }
  else if (analogFC28 >= 2534.805 && analogFC28 < 2538.9) { return value = 38.1; }

  // Percentage Range: 37.1-38.0
  if (analogFC28 >= 2538.9 && analogFC28 < 2542.995) { return value = 38.0; }
  else if (analogFC28 >= 2542.995 && analogFC28 < 2547.09) { return value = 37.9; }
  else if (analogFC28 >= 2547.09 && analogFC28 < 2551.185) { return value = 37.8; }
  else if (analogFC28 >= 2551.185 && analogFC28 < 2555.28) { return value = 37.7; }
  else if (analogFC28 >= 2555.28 && analogFC28 < 2559.375) { return value = 37.6; }
  else if (analogFC28 >= 2559.375 && analogFC28 < 2563.47) { return value = 37.5; }
  else if (analogFC28 >= 2563.47 && analogFC28 < 2567.565) { return value = 37.4; }
  else if (analogFC28 >= 2567.565 && analogFC28 < 2571.66) { return value = 37.3; }
  else if (analogFC28 >= 2571.66 && analogFC28 < 2575.755) { return value = 37.2; }
  else if (analogFC28 >= 2575.755 && analogFC28 < 2579.85) { return value = 37.1; }
  
  // Percentage Range: 36.1-37.0
  if (analogFC28 >= 2579.85 && analogFC28 < 2583.945) { return value = 37.0; } 
  else if (analogFC28 >= 2583.945 && analogFC28 < 2588.04) { return value = 36.9; }
  else if (analogFC28 >= 2588.04 && analogFC28 < 2592.135) { return value = 36.8; }
  else if (analogFC28 >= 2592.135 && analogFC28 < 2596.23) { return value = 36.7; }
  else if (analogFC28 >= 2596.23 && analogFC28 < 2600.325) { return value = 36.6; }
  else if (analogFC28 >= 2600.325 && analogFC28 < 2604.42) { return value = 36.5; }
  else if (analogFC28 >= 2604.42 && analogFC28 < 2608.515) { return value = 36.4; }
  else if (analogFC28 >= 2608.515 && analogFC28 < 2612.61) { return value = 36.3; }
  else if (analogFC28 >= 2612.61 && analogFC28 < 2616.705) { return value = 36.2; }
  else if (analogFC28 >= 2616.705 && analogFC28 < 2620.8) { return value = 36.1; }

  // Percentage Range: 35.1-36.0
  if (analogFC28 >= 2620.8 && analogFC28 < 2624.895) { return value = 36.0; }
  else if (analogFC28 >= 2624.895 && analogFC28 < 2628.99) { return value = 35.9; }
  else if (analogFC28 >= 2628.99 && analogFC28 < 2633.085) { return value = 35.8; }
  else if (analogFC28 >= 2633.085 && analogFC28 < 2637.18) { return value = 35.7; }
  else if (analogFC28 >= 2637.18 && analogFC28 < 2641.275) { return value = 35.6; }
  else if (analogFC28 >= 2641.275 && analogFC28 < 2645.37) { return value = 35.5; }
  else if (analogFC28 >= 2645.37 && analogFC28 < 2649.465) { return value = 35.4; }
  else if (analogFC28 >= 2649.465 && analogFC28 < 2653.56) { return value = 35.3; }
  else if (analogFC28 >= 2653.56 && analogFC28 < 2657.655) { return value = 35.2; }
  else if (analogFC28 >= 2657.655 && analogFC28 < 2661.75) { return value = 35.1; }

  // Percentage Range: 34.1-35.0
  if (analogFC28 >= 2661.75 && analogFC28 < 2665.845) { return value = 35.0; }
  else if (analogFC28 >= 2665.845 && analogFC28 < 2669.94) { return value = 34.9; }
  else if (analogFC28 >= 2669.94 && analogFC28 < 2674.035) { return value = 34.8; }
  else if (analogFC28 >= 2674.035 && analogFC28 < 2678.13) { return value = 34.7; }
  else if (analogFC28 >= 2678.13 && analogFC28 < 2682.225) { return value = 34.6; }
  else if (analogFC28 >= 2682.225 && analogFC28 < 2686.32) { return value = 34.5; }
  else if (analogFC28 >= 2686.32 && analogFC28 < 2690.415) { return value = 34.4; }
  else if (analogFC28 >= 2690.415 && analogFC28 < 2694.51) { return value = 34.3; }
  else if (analogFC28 >= 2694.51 && analogFC28 < 2698.605) { return value = 34.2; }
  else if (analogFC28 >= 2698.605 && analogFC28 < 2702.7) { return value = 34.1; }

  // Percentage Range: 33.1-34.0
  if (analogFC28 >= 2702.7 && analogFC28 < 2706.795) { return value = 34.0; }
  else if (analogFC28 >= 2706.795 && analogFC28 < 2710.89) { return value = 33.9; }
  else if (analogFC28 >= 2710.89 && analogFC28 < 2714.985) { return value = 33.8; }
  else if (analogFC28 >= 2714.985 && analogFC28 < 2719.08) { return value = 33.7; }
  else if (analogFC28 >= 2719.08 && analogFC28 < 2723.175) { return value = 33.6; }
  else if (analogFC28 >= 2723.175 && analogFC28 < 2727.27) { return value = 33.5; }
  else if (analogFC28 >= 2727.27 && analogFC28 < 2731.365) { return value = 33.4; }
  else if (analogFC28 >= 2731.365 && analogFC28 < 2735.46) { return value = 33.3; }
  else if (analogFC28 >= 2735.46 && analogFC28 < 2739.555) { return value = 33.2; }
  else if (analogFC28 >= 2739.555 && analogFC28 < 2743.65) { return value = 33.1; }

  // Percentage Range: 32.1-33.0
  if (analogFC28 >= 2743.65 && analogFC28 < 2747.745) { return value = 33.0; }
  else if (analogFC28 >= 2747.745 && analogFC28 < 2751.84) { return value = 32.9; }
  else if (analogFC28 >= 2751.84 && analogFC28 < 2755.935) { return value = 32.8; }
  else if (analogFC28 >= 2755.935 && analogFC28 < 2760.03) { return value = 32.7; }
  else if (analogFC28 >= 2760.03 && analogFC28 < 2764.125) { return value = 32.6; }
  else if (analogFC28 >= 2764.125 && analogFC28 < 2768.22) { return value = 32.5; }
  else if (analogFC28 >= 2768.22 && analogFC28 < 2772.315) { return value = 32.4; }
  else if (analogFC28 >= 2772.315 && analogFC28 < 2776.41) { return value = 32.3; }
  else if (analogFC28 >= 2776.41 && analogFC28 < 2780.505) { return value = 32.2; }
  else if (analogFC28 >= 2780.505 && analogFC28 < 2784.6) { return value = 32.1; }

  // Percentage Range: 31.1-32.0
  if (analogFC28 >= 2784.6 && analogFC28 < 2788.695) { return value = 32.0; }
  else if (analogFC28 >= 2788.695 && analogFC28 < 2792.79) { return value = 31.9; }
  else if (analogFC28 >= 2792.79 && analogFC28 < 2796.885) { return value = 31.8; }
  else if (analogFC28 >= 2796.885 && analogFC28 < 2800.98) { return value = 31.7; }
  else if (analogFC28 >= 2800.98 && analogFC28 < 2805.075) { return value = 31.6; }
  else if (analogFC28 >= 2805.075 && analogFC28 < 2809.17) { return value = 31.5; }
  else if (analogFC28 >= 2809.17 && analogFC28 < 2813.265) { return value = 31.4; }
  else if (analogFC28 >= 2813.265 && analogFC28 < 2817.36) { return value = 31.3; }
  else if (analogFC28 >= 2817.36 && analogFC28 < 2821.455) { return value = 31.2; }
  else if (analogFC28 >= 2821.455 && analogFC28 < 2825.55) { return value = 31.1; }

  // Percentage Range: 30.1-31.0
  if (analogFC28 >= 2825.55 && analogFC28 < 2829.645) { return value = 31.0; }
  else if (analogFC28 >= 2829.645 && analogFC28 < 2833.74) { return value = 30.9; }
  else if (analogFC28 >= 2833.74 && analogFC28 < 2837.835) { return value = 30.8; }
  else if (analogFC28 >= 2837.835 && analogFC28 < 2841.93) { return value = 30.7; }
  else if (analogFC28 >= 2841.93 && analogFC28 < 2846.025) { return value = 30.6; }
  else if (analogFC28 >= 2846.025 && analogFC28 < 2850.12) { return value = 30.5; }
  else if (analogFC28 >= 2850.12 && analogFC28 < 2854.215) { return value = 30.4; }
  else if (analogFC28 >= 2854.215 && analogFC28 < 2858.31) { return value = 30.3; }
  else if (analogFC28 >= 2858.31 && analogFC28 < 2862.405) { return value = 30.2; }
  else if (analogFC28 >= 2862.405 && analogFC28 < 2866.5) { return value = 30.1; }

  // Percentage Range: 29.1-30.0
  if (analogFC28 >= 2866.5 && analogFC28 < 2870.595) { return value = 30.0; }
  else if (analogFC28 >= 2870.595 && analogFC28 < 2874.69) { return value = 29.9; }
  else if (analogFC28 >= 2874.69 && analogFC28 < 2878.785) { return value = 29.8; }
  else if (analogFC28 >= 2878.785 && analogFC28 < 2882.88) { return value = 29.7; }
  else if (analogFC28 >= 2882.88 && analogFC28 < 2886.975) { return value = 29.6; }
  else if (analogFC28 >= 2886.975 && analogFC28 < 2891.07) { return value = 29.5; }
  else if (analogFC28 >= 2891.07 && analogFC28 < 2895.165) { return value = 29.4; }
  else if (analogFC28 >= 2895.165 && analogFC28 < 2899.26) { return value = 29.3; }
  else if (analogFC28 >= 2899.26 && analogFC28 < 2903.355) { return value = 29.2; }
  else if (analogFC28 >= 2903.355 && analogFC28 < 2907.45) { return value = 29.1; }

  // Percentage Range: 28.1-29.0
  if (analogFC28 >= 2907.45 && analogFC28 < 2911.545) { return value = 29.0; }
  else if (analogFC28 >= 2911.545 && analogFC28 < 2915.64) { return value = 28.9; }
  else if (analogFC28 >= 2915.64 && analogFC28 < 2919.735) { return value = 28.8; }
  else if (analogFC28 >= 2919.735 && analogFC28 < 2923.83) { return value = 28.7; }
  else if (analogFC28 >= 2923.83 && analogFC28 < 2927.925) { return value = 28.6; }
  else if (analogFC28 >= 2927.925 && analogFC28 < 2932.02) { return value = 28.5; }
  else if (analogFC28 >= 2932.02 && analogFC28 < 2936.115) { return value = 28.4; }
  else if (analogFC28 >= 2936.115 && analogFC28 < 2940.21) { return value = 28.3; }
  else if (analogFC28 >= 2940.21 && analogFC28 < 2944.305) { return value = 28.2; }
  else if (analogFC28 >= 2944.305 && analogFC28 < 2948.4) { return value = 28.1; }

  // Percentage Range: 27.1-28.0
  if (analogFC28 >= 2948.4 && analogFC28 < 2952.495) { return value = 28.0; }
  else if (analogFC28 >= 2952.495 && analogFC28 < 2956.59) { return value = 27.9; }
  else if (analogFC28 >= 2956.59 && analogFC28 < 2960.685) { return value = 27.8; }
  else if (analogFC28 >= 2960.685 && analogFC28 < 2964.78) { return value = 27.7; }
  else if (analogFC28 >= 2964.78 && analogFC28 < 2968.875) { return value = 27.6; }
  else if (analogFC28 >= 2968.875 && analogFC28 < 2972.97) { return value = 27.5; }
  else if (analogFC28 >= 2972.97 && analogFC28 < 2977.065) { return value = 27.4; }
  else if (analogFC28 >= 2977.065 && analogFC28 < 2981.16) { return value = 27.3; }
  else if (analogFC28 >= 2981.16 && analogFC28 < 2985.255) { return value = 27.2; }
  else if (analogFC28 >= 2985.255 && analogFC28 < 2989.35) { return value = 27.1; }

  // Percentage Range: 26.1-27.0
  if (analogFC28 >= 2989.35 && analogFC28 < 2993.445) { return value = 27.0; }
  else if (analogFC28 >= 2993.445 && analogFC28 < 2997.54) { return value = 26.9; }
  else if (analogFC28 >= 2997.54 && analogFC28 < 3001.635) { return value = 26.8; }
  else if (analogFC28 >= 3001.635 && analogFC28 < 3005.73) { return value = 26.7; }
  else if (analogFC28 >= 3005.73 && analogFC28 < 3009.825) { return value = 26.6; }
  else if (analogFC28 >= 3009.825 && analogFC28 < 3013.92) { return value = 26.5; }
  else if (analogFC28 >= 3013.92 && analogFC28 < 3018.015) { return value = 26.4; }
  else if (analogFC28 >= 3018.015 && analogFC28 < 3022.11) { return value = 26.3; }
  else if (analogFC28 >= 3022.11 && analogFC28 < 3026.205) { return value = 26.2; }
  else if (analogFC28 >= 3026.205 && analogFC28 < 3030.3) { return value = 26.1; }
  
  // Percentage Range: 25.1-26.0
  if (analogFC28 >= 3030.3 && analogFC28 < 3034.395) { return value = 26.0; }
  else if (analogFC28 >= 3034.395 && analogFC28 < 3038.49) { return value = 25.9; }
  else if (analogFC28 >= 3038.49 && analogFC28 < 3042.585) { return value = 25.8; }
  else if (analogFC28 >= 3042.585 && analogFC28 < 3046.68) { return value = 25.7; }
  else if (analogFC28 >= 3046.68 && analogFC28 < 3050.775) { return value = 25.6; }
  else if (analogFC28 >= 3050.775 && analogFC28 < 3054.87) { return value = 25.5; }
  else if (analogFC28 >= 3054.87 && analogFC28 < 3058.965) { return value = 25.4; }
  else if (analogFC28 >= 3058.965 && analogFC28 < 3063.06) { return value = 25.3; }
  else if (analogFC28 >= 3063.06 && analogFC28 < 3067.155) { return value = 25.2; }
  else if (analogFC28 >= 3067.155 && analogFC28 < 3071.25) { return value = 25.1; }

  // Percentage Range: 24.1-25.0
  if (analogFC28 >= 3071.25 && analogFC28 < 3075.345) { return value = 25.0; }
  else if (analogFC28 >= 3075.345 && analogFC28 < 3079.44) { return value = 24.9; }
  else if (analogFC28 >= 3079.44 && analogFC28 < 3083.535) { return value = 24.8; }
  else if (analogFC28 >= 3083.535 && analogFC28 < 3087.63) { return value = 24.7; }
  else if (analogFC28 >= 3087.63 && analogFC28 < 3091.725) { return value = 24.6; }
  else if (analogFC28 >= 3091.725 && analogFC28 < 3095.82) { return value = 24.5; }
  else if (analogFC28 >= 3095.82 && analogFC28 < 3099.915) { return value = 24.4; }
  else if (analogFC28 >= 3099.915 && analogFC28 < 3104.01) { return value = 24.3; }
  else if (analogFC28 >= 3104.01 && analogFC28 < 3108.105) { return value = 24.2; }
  else if (analogFC28 >= 3108.105 && analogFC28 < 3112.2) { return value = 24.1; }

  // Percentage Range: 23.1-24.0
  if (analogFC28 >= 3112.2 && analogFC28 < 3116.295) { return value = 24.0; }
  else if (analogFC28 >= 3116.295 && analogFC28 < 3120.39) { return value = 23.9; }
  else if (analogFC28 >= 3120.39 && analogFC28 < 3124.485) { return value = 23.8; }
  else if (analogFC28 >= 3124.485 && analogFC28 < 3128.58) { return value = 23.7; }
  else if (analogFC28 >= 3128.58 && analogFC28 < 3132.675) { return value = 23.6; }
  else if (analogFC28 >= 3132.675 && analogFC28 < 3136.77) { return value = 23.5; }
  else if (analogFC28 >= 3136.77 && analogFC28 < 3140.865) { return value = 23.4; }
  else if (analogFC28 >= 3140.865 && analogFC28 < 3144.96) { return value = 23.3; }
  else if (analogFC28 >= 3144.96 && analogFC28 < 3149.055) { return value = 23.2; }
  else if (analogFC28 >= 3149.055 && analogFC28 < 3153.15) { return value = 23.1; }

  // Percentage Range: 22.1-23.0
  if (analogFC28 >= 3153.15 && analogFC28 < 3157.245) { return value = 23.0; }
  else if (analogFC28 >= 3157.245 && analogFC28 < 3161.34) { return value = 22.9; }
  else if (analogFC28 >= 3161.34 && analogFC28 < 3165.435) { return value = 22.8; }
  else if (analogFC28 >= 3165.435 && analogFC28 < 3169.53) { return value = 22.7; }
  else if (analogFC28 >= 3169.53 && analogFC28 < 3173.625) { return value = 22.6; }
  else if (analogFC28 >= 3173.625 && analogFC28 < 3177.72) { return value = 22.5; }
  else if (analogFC28 >= 3177.72 && analogFC28 < 3181.815) { return value = 22.4; }
  else if (analogFC28 >= 3181.815 && analogFC28 < 3185.91) { return value = 22.3; }
  else if (analogFC28 >= 3185.91 && analogFC28 < 3190.005) { return value = 22.2; }
  else if (analogFC28 >= 3190.005 && analogFC28 < 3194.1) { return value = 22.1; }

  // Percentage Range: 21.1-22.0
  if (analogFC28 >= 3194.1 && analogFC28 < 3198.195) { return value = 22.0; }
  else if (analogFC28 >= 3198.195 && analogFC28 < 3202.29) { return value = 21.9; }
  else if (analogFC28 >= 3202.29 && analogFC28 < 3206.385) { return value = 21.8; }
  else if (analogFC28 >= 3206.385 && analogFC28 < 3210.48) { return value = 21.7; }
  else if (analogFC28 >= 3210.48 && analogFC28 < 3214.575) { return value = 21.6; }
  else if (analogFC28 >= 3214.575 && analogFC28 < 3218.67) { return value = 21.5; }
  else if (analogFC28 >= 3218.67 && analogFC28 < 3222.765) { return value = 21.4; }
  else if (analogFC28 >= 3222.765 && analogFC28 < 3226.86) { return value = 21.3; }
  else if (analogFC28 >= 3226.86 && analogFC28 < 3230.955) { return value = 21.2; }
  else if (analogFC28 >= 3230.955 && analogFC28 < 3235.05) { return value = 21.1; }
  
  // Percentage Range: 20.1-21.0
  if (analogFC28 >= 3235.05 && analogFC28 < 3239.145) { return value = 21.0; }
  else if (analogFC28 >= 3239.145 && analogFC28 < 3243.24) { return value = 20.9; }
  else if (analogFC28 >= 3243.24 && analogFC28 < 3247.335) { return value = 20.8; }
  else if (analogFC28 >= 3247.335 && analogFC28 < 3251.43) { return value = 20.7; }
  else if (analogFC28 >= 3251.43 && analogFC28 < 3255.525) { return value = 20.6; }
  else if (analogFC28 >= 3255.525 && analogFC28 < 3259.62) { return value = 20.5; }
  else if (analogFC28 >= 3259.62 && analogFC28 < 3263.715) { return value = 20.4; }
  else if (analogFC28 >= 3263.715 && analogFC28 < 3267.81) { return value = 20.3; }
  else if (analogFC28 >= 3267.81 && analogFC28 < 3271.905) { return value = 20.2; }
  else if (analogFC28 >= 3271.905 && analogFC28 < 3276) { return value = 20.1; }

  // Percentage Range: 19.1-20.0
  if (analogFC28 >= 3276 && analogFC28 < 3280.095) { return value = 20.0; }
  else if (analogFC28 >= 3280.095 && analogFC28 < 3284.19) { return value = 19.9; }
  else if (analogFC28 >= 3284.19 && analogFC28 < 3288.285) { return value = 19.8; }
  else if (analogFC28 >= 3288.285 && analogFC28 < 3292.38) { return value = 19.7; }
  else if (analogFC28 >= 3292.38 && analogFC28 < 3296.475) { return value = 19.6; }
  else if (analogFC28 >= 3296.475 && analogFC28 < 3300.57) { return value = 19.5; }
  else if (analogFC28 >= 3300.57 && analogFC28 < 3304.665) { return value = 19.4; }
  else if (analogFC28 >= 3304.665 && analogFC28 < 3308.76) { return value = 19.3; }
  else if (analogFC28 >= 3308.76 && analogFC28 < 3312.855) { return value = 19.2; }
  else if (analogFC28 >= 3312.855 && analogFC28 < 3316.95) { return value = 19.1; }

  // Percentage Range: 18.1-19.0
  if (analogFC28 >= 3316.95 && analogFC28 < 3321.045) { return value = 19.0; }
  else if (analogFC28 >= 3321.045 && analogFC28 < 3325.14) { return value = 18.9; }
  else if (analogFC28 >= 3325.14 && analogFC28 < 3329.235) { return value = 18.8; }
  else if (analogFC28 >= 3329.235 && analogFC28 < 3333.33) { return value = 18.7; }
  else if (analogFC28 >= 3333.33 && analogFC28 < 3337.425) { return value = 18.6; }
  else if (analogFC28 >= 3337.425 && analogFC28 < 3341.52) { return value = 18.5; }
  else if (analogFC28 >= 3341.52 && analogFC28 < 3345.615) { return value = 18.4; }
  else if (analogFC28 >= 3345.615 && analogFC28 < 3349.71) { return value = 18.3; }
  else if (analogFC28 >= 3349.71 && analogFC28 < 3353.805) { return value = 18.2; }
  else if (analogFC28 >= 3353.805 && analogFC28 < 3357.9) { return value = 18.1; }

  // Percentage Range: 17.1-18.0
  if (analogFC28 >= 3357.9 && analogFC28 < 3361.995) { return value = 18.0; }
  else if (analogFC28 >= 3361.995 && analogFC28 < 3366.09) { return value = 17.9; }
  else if (analogFC28 >= 3366.09 && analogFC28 < 3370.185) { return value = 17.8; }
  else if (analogFC28 >= 3370.185 && analogFC28 < 3374.28) { return value = 17.7; }
  else if (analogFC28 >= 3374.28 && analogFC28 < 3378.375) { return value = 17.6; }
  else if (analogFC28 >= 3378.375 && analogFC28 < 3382.47) { return value = 17.5; }
  else if (analogFC28 >= 3382.47 && analogFC28 < 3386.565) { return value = 17.4; }
  else if (analogFC28 >= 3386.565 && analogFC28 < 3390.66) { return value = 17.3; }
  else if (analogFC28 >= 3390.66 && analogFC28 < 3394.755) { return value = 17.2; }
  else if (analogFC28 >= 3394.755 && analogFC28 < 3398.85) { return value = 17.1; }

  // Percentage Range: 16.1-17.0
  if (analogFC28 >= 3398.85 && analogFC28 < 3402.945) { return value = 17.0; }
  else if (analogFC28 >= 3402.945 && analogFC28 < 3407.04) { return value = 16.9; }
  else if (analogFC28 >= 3407.04 && analogFC28 < 3411.135) { return value = 16.8; }
  else if (analogFC28 >= 3411.135 && analogFC28 < 3415.23) { return value = 16.7; }
  else if (analogFC28 >= 3415.23 && analogFC28 < 3419.325) { return value = 16.6; }
  else if (analogFC28 >= 3419.325 && analogFC28 < 3423.42) { return value = 16.5; }
  else if (analogFC28 >= 3423.42 && analogFC28 < 3427.515) { return value = 16.4; }
  else if (analogFC28 >= 3427.515 && analogFC28 < 3431.61) { return value = 16.3; }
  else if (analogFC28 >= 3431.61 && analogFC28 < 3435.705) { return value = 16.2; }
  else if (analogFC28 >= 3435.705 && analogFC28 < 3439.8) { return value = 16.1; }

  // Percentage Range: 15.1-16.0
  if (analogFC28 >= 3439.8 && analogFC28 < 3443.895) { return value = 16.0; }
  else if (analogFC28 >= 3443.895 && analogFC28 < 3447.99) { return value = 15.9; }
  else if (analogFC28 >= 3447.99 && analogFC28 < 3452.085) { return value = 15.8; }
  else if (analogFC28 >= 3452.085 && analogFC28 < 3456.18) { return value = 15.7; }
  else if (analogFC28 >= 3456.18 && analogFC28 < 3460.275) { return value = 15.6; }
  else if (analogFC28 >= 3460.275 && analogFC28 < 3464.37) { return value = 15.5; }
  else if (analogFC28 >= 3464.37 && analogFC28 < 3468.465) { return value = 15.4; }
  else if (analogFC28 >= 3468.465 && analogFC28 < 3472.56) { return value = 15.3; }
  else if (analogFC28 >= 3472.56 && analogFC28 < 3476.655) { return value = 15.2; }
  else if (analogFC28 >= 3476.655 && analogFC28 < 3480.75) { return value = 15.1; }

  // Percentage Range: 14.1-15.0
  if (analogFC28 >= 3480.75 && analogFC28 < 3484.845) { return value = 15.0; }
  else if (analogFC28 >= 3484.845 && analogFC28 < 3488.94) { return value = 14.9; }
  else if (analogFC28 >= 3488.94 && analogFC28 < 3493.035) { return value = 14.8; }
  else if (analogFC28 >= 3493.035 && analogFC28 < 3497.13) { return value = 14.7; }
  else if (analogFC28 >= 3497.13 && analogFC28 < 3501.225) { return value = 14.6; }
  else if (analogFC28 >= 3501.225 && analogFC28 < 3505.32) { return value = 14.5; }
  else if (analogFC28 >= 3505.32 && analogFC28 < 3509.415) { return value = 14.4; }
  else if (analogFC28 >= 3509.415 && analogFC28 < 3513.51) { return value = 14.3; }
  else if (analogFC28 >= 3513.51 && analogFC28 < 3517.605) { return value = 14.2; }
  else if (analogFC28 >= 3517.605 && analogFC28 < 3521.7) { return value = 14.1; }

  // Percentage Range: 13.1-14.0
  if (analogFC28 >= 3521.7 && analogFC28 < 3525.795) { return value = 14.0; }
  else if (analogFC28 >= 3525.795 && analogFC28 < 3529.89) { return value = 13.9; }
  else if (analogFC28 >= 3529.89 && analogFC28 < 3533.985) { return value = 13.8; }
  else if (analogFC28 >= 3533.985 && analogFC28 < 3538.08) { return value = 13.7; }
  else if (analogFC28 >= 3538.08 && analogFC28 < 3542.175) { return value = 13.6; }
  else if (analogFC28 >= 3542.175 && analogFC28 < 3546.27) { return value = 13.5; }
  else if (analogFC28 >= 3546.27 && analogFC28 < 3550.365) { return value = 13.4; }
  else if (analogFC28 >= 3550.365 && analogFC28 < 3554.46) { return value = 13.3; }
  else if (analogFC28 >= 3554.46 && analogFC28 < 3558.555) { return value = 13.2; }
  else if (analogFC28 >= 3558.555 && analogFC28 < 3562.65) { return value = 13.1; }

  // Percentage Range: 12.1-13.0
  if (analogFC28 >= 3562.65 && analogFC28 < 3566.745) { return value = 13.0; }
  else if (analogFC28 >= 3566.745 && analogFC28 < 3570.84) { return value = 12.9; }
  else if (analogFC28 >= 3570.84 && analogFC28 < 3574.935) { return value = 12.8; }
  else if (analogFC28 >= 3574.935 && analogFC28 < 3579.03) { return value = 12.7; }
  else if (analogFC28 >= 3579.03 && analogFC28 < 3583.125) { return value = 12.6; }
  else if (analogFC28 >= 3583.125 && analogFC28 < 3587.22) { return value = 12.5; }
  else if (analogFC28 >= 3587.22 && analogFC28 < 3591.315) { return value = 12.4; }
  else if (analogFC28 >= 3591.315 && analogFC28 < 3595.41) { return value = 12.3; }
  else if (analogFC28 >= 3595.41 && analogFC28 < 3599.505) { return value = 12.2; }
  else if (analogFC28 >= 3599.505 && analogFC28 < 3603.6) { return value = 12.1; }  

  // Percentage Range: 11.1-12.0
  if (analogFC28 >= 3603.6 && analogFC28 < 3607.695) { return value = 12.0; }
  else if (analogFC28 >= 3607.695 && analogFC28 < 3611.79) { return value = 11.9; }
  else if (analogFC28 >= 3611.79 && analogFC28 < 3615.885) { return value = 11.8; }
  else if (analogFC28 >= 3615.885 && analogFC28 < 3619.98) { return value = 11.7; }
  else if (analogFC28 >= 3619.98 && analogFC28 < 3624.075) { return value = 11.6; }
  else if (analogFC28 >= 3624.075 && analogFC28 < 3628.17) { return value = 11.5; }
  else if (analogFC28 >= 3628.17 && analogFC28 < 3632.265) { return value = 11.4; }
  else if (analogFC28 >= 3632.265 && analogFC28 < 3636.36) { return value = 11.3; }
  else if (analogFC28 >= 3636.36 && analogFC28 < 3640.455) { return value = 11.2; }
  else if (analogFC28 >= 3640.455 && analogFC28 < 3644.55) { return value = 11.1; }

  // Percentage Range: 10.1-11.0
  if (analogFC28 >= 3644.55 && analogFC28 < 3648.645) { return value = 11.0; }
  else if (analogFC28 >= 3648.645 && analogFC28 < 3652.74) { return value = 10.9; }
  else if (analogFC28 >= 3652.74 && analogFC28 < 3656.835) { return value = 10.8; }
  else if (analogFC28 >= 3656.835 && analogFC28 < 3660.93) { return value = 10.7; }
  else if (analogFC28 >= 3660.93 && analogFC28 < 3665.025) { return value = 10.6; }
  else if (analogFC28 >= 3665.025 && analogFC28 < 3669.12) { return value = 10.5; }
  else if (analogFC28 >= 3669.12 && analogFC28 < 3673.215) { return value = 10.4; }
  else if (analogFC28 >= 3673.215 && analogFC28 < 3677.31) { return value = 10.3; }
  else if (analogFC28 >= 3677.31 && analogFC28 < 3681.405) { return value = 10.2; }
  else if (analogFC28 >= 3681.405 && analogFC28 < 3685.5) { return value = 10.1; }

  // Percentage Range: 9.1-10.0
  if (analogFC28 >= 3685.5 && analogFC28 < 3689.595) { return value = 10.0; } 
  else if (analogFC28 >= 3689.595 && analogFC28 < 3693.69) { return value = 9.9; }
  else if (analogFC28 >= 3693.69 && analogFC28 < 3697.785) { return value = 9.8; }
  else if (analogFC28 >= 3697.785 && analogFC28 < 3701.88) { return value = 9.7; }
  else if (analogFC28 >= 3701.88 && analogFC28 < 3705.975) { return value = 9.6; }
  else if (analogFC28 >= 3705.975 && analogFC28 < 3710.07) { return value = 9.5; }
  else if (analogFC28 >= 3710.07 && analogFC28 < 3714.165) { return value = 9.4; }
  else if (analogFC28 >= 3714.165 && analogFC28 < 3718.26) { return value = 9.3; }
  else if (analogFC28 >= 3718.26 && analogFC28 < 3722.355) { return value = 9.2; }
  else if (analogFC28 >= 3722.355 && analogFC28 < 3726.45) { return value = 9.1; }

  // Percentage Range: 8.1-9.0
  if (analogFC28 >= 3726.45 && analogFC28 < 3730.545) { return value = 9.0; }
  else if (analogFC28 >= 3730.545 && analogFC28 < 3734.64) { return value = 8.9; }
  else if (analogFC28 >= 3734.64 && analogFC28 < 3788.735) { return value = 8.8; }
  else if (analogFC28 >= 3788.735 && analogFC28 < 3742.83) { return value = 8.7; }
  else if (analogFC28 >= 3742.83 && analogFC28 < 3746.925) { return value = 8.6; }
  else if (analogFC28 >= 3746.925 && analogFC28 < 3751.02) { return value = 8.5; }
  else if (analogFC28 >= 3751.02 && analogFC28 < 3755.115) { return value = 8.4; }
  else if (analogFC28 >= 3755.115 && analogFC28 < 3759.21) { return value = 8.3; }
  else if (analogFC28 >= 3759.21 && analogFC28 < 3763.305) { return value = 8.2; }
  else if (analogFC28 >= 3763.305 && analogFC28 < 3767.4) { return value = 8.1; }

  // Percentage Range: 7.1-8.0
  if (analogFC28 >= 3767.4 && analogFC28 < 3771.495) { return value = 8.0; }
  else if (analogFC28 >= 3771.495 && analogFC28 < 3775.59) { return value = 7.9; }
  else if (analogFC28 >= 3775.59 && analogFC28 < 3779.685) { return value = 7.8; }
  else if (analogFC28 >= 3779.685 && analogFC28 < 3783.78) { return value = 7.7; }
  else if (analogFC28 >= 3783.78 && analogFC28 < 3787.875) { return value = 7.6; }
  else if (analogFC28 >= 3787.875 && analogFC28 < 3791.97) { return value = 7.5; }
  else if (analogFC28 >= 3791.97 && analogFC28 < 3796.065) { return value = 7.4; }
  else if (analogFC28 >= 3796.065 && analogFC28 < 3800.16) { return value = 7.3; }
  else if (analogFC28 >= 3800.16 && analogFC28 < 3804.255) { return value = 7.2; }
  else if (analogFC28 >= 3804.255 && analogFC28 < 3808.35) { return value = 7.1; }

  // Percentage Range: 6.1-7.0
  if (analogFC28 >= 3808.35 && analogFC28 < 3812.445) { return value = 7.0; }
  else if (analogFC28 >= 3812.445 && analogFC28 < 3816.54) { return value = 6.9; }
  else if (analogFC28 >= 3816.54 && analogFC28 < 3820.635) { return value = 6.8; }
  else if (analogFC28 >= 3820.635 && analogFC28 < 3824.73) { return value = 6.7; }
  else if (analogFC28 >= 3824.73 && analogFC28 < 3828.825) { return value = 6.6; }
  else if (analogFC28 >= 3828.825 && analogFC28 < 3832.92) { return value = 6.5; }
  else if (analogFC28 >= 3832.92 && analogFC28 < 3837.015) { return value = 6.4; }
  else if (analogFC28 >= 3837.015 && analogFC28 < 3841.11) { return value = 6.3; }
  else if (analogFC28 >= 3841.11 && analogFC28 < 3845.205) { return value = 6.2; }
  else if (analogFC28 >= 3845.205 && analogFC28 < 3849.3) { return value = 6.1; }

  // Percentage Range: 5.1-6.0
  if (analogFC28 >= 3849.3 && analogFC28 < 3853.395) { return value = 6.0; }
  else if (analogFC28 >= 3853.395 && analogFC28 < 3857.49) { return value = 5.9; }
  else if (analogFC28 >= 3857.49 && analogFC28 < 3861.585) { return value = 5.8; }
  else if (analogFC28 >= 3861.585 && analogFC28 < 3865.68) { return value = 5.7; }
  else if (analogFC28 >= 3865.68 && analogFC28 < 3869.775) { return value = 5.6; }
  else if (analogFC28 >= 3869.775 && analogFC28 < 3873.87) { return value = 5.5; }
  else if (analogFC28 >= 3873.87 && analogFC28 < 3877.965) { return value = 5.4; }
  else if (analogFC28 >= 3877.965 && analogFC28 < 3882.06) { return value = 5.3; }
  else if (analogFC28 >= 3882.06 && analogFC28 < 3886.155) { return value = 5.2; }
  else if (analogFC28 >= 3886.155 && analogFC28 < 3890.25) { return value = 5.1; }

  // Percentage Range: 4.1-5.0
  if (analogFC28 >= 3890.25 && analogFC28 < 3894.345) { return value = 5.0; }
  else if (analogFC28 >= 3894.345 && analogFC28 < 3898.44) { return value = 4.9; }
  else if (analogFC28 >= 3898.44 && analogFC28 < 3902.535) { return value = 4.8; }
  else if (analogFC28 >= 3902.535 && analogFC28 < 3906.63) { return value = 4.7; }
  else if (analogFC28 >= 3906.63 && analogFC28 < 3910.725) { return value = 4.6; }
  else if (analogFC28 >= 3910.725 && analogFC28 < 3914.82) { return value = 4.5; }
  else if (analogFC28 >= 3914.82 && analogFC28 < 3918.915) { return value = 4.4; }
  else if (analogFC28 >= 3918.915 && analogFC28 < 3923.01) { return value = 4.3; }
  else if (analogFC28 >= 3923.01 && analogFC28 < 3927.105) { return value = 4.2; }
  else if (analogFC28 >= 3927.105 && analogFC28 < 3931.2) { return value = 4.1; }

  // Percentage Range: 3.1-4.0
  if (analogFC28 >= 3931.2 && analogFC28 < 3935.295) { return value = 4.0; }
  else if (analogFC28 >= 3935.295 && analogFC28 < 3939.39) { return value = 3.9; }
  else if (analogFC28 >= 3939.39 && analogFC28 < 3943.485) { return value = 3.8; }
  else if (analogFC28 >= 3943.485 && analogFC28 < 3947.58) { return value = 3.7; }
  else if (analogFC28 >= 3947.58 && analogFC28 < 3951.675) { return value = 3.6; }
  else if (analogFC28 >= 3951.675 && analogFC28 < 3955.77) { return value = 3.5; }
  else if (analogFC28 >= 3955.77 && analogFC28 < 3959.865) { return value = 3.4; }
  else if (analogFC28 >= 3959.865 && analogFC28 < 3963.96) { return value = 3.3; }
  else if (analogFC28 >= 3963.96 && analogFC28 < 3968.055) { return value = 3.2; }
  else if (analogFC28 >= 3968.055 && analogFC28 < 3972.15) { return value = 3.1; }

  // Percentage Range: 2.1-3.0
  if (analogFC28 >= 3972.15 && analogFC28 < 3976.245) { return value = 3.0; }
  else if (analogFC28 >= 3976.245 && analogFC28 < 3980.34) { return value = 3.9; }
  else if (analogFC28 >= 3980.34 && analogFC28 < 3984.435) { return value = 3.8; }
  else if (analogFC28 >= 3984.435 && analogFC28 < 3988.53) { return value = 3.7; }
  else if (analogFC28 >= 3988.53 && analogFC28 < 3992.625) { return value = 3.6; }
  else if (analogFC28 >= 3992.625 && analogFC28 < 3996.72) { return value = 3.5; }
  else if (analogFC28 >= 3996.72 && analogFC28 < 4000.815) { return value = 3.4; }
  else if (analogFC28 >= 4000.815 && analogFC28 < 4004.91) { return value = 3.3; }
  else if (analogFC28 >= 4004.91 && analogFC28 < 4009.005) { return value = 3.2; }
  else if (analogFC28 >= 4009.005 && analogFC28 < 4013.1) { return value = 3.1; }

  // Percentage Range: 1.1-2.0
  if (analogFC28 >= 4013.1 && analogFC28 < 4017.195) { return value = 2.0; }
  else if (analogFC28 >= 4017.195 && analogFC28 < 4021.29) { return value = 1.9; }
  else if (analogFC28 >= 4021.29 && analogFC28 < 4025.385) { return value = 1.8; }
  else if (analogFC28 >= 4025.385 && analogFC28 < 4029.48) { return value = 1.7; }
  else if (analogFC28 >= 4029.48 && analogFC28 < 4033.575) { return value = 1.6; }
  else if (analogFC28 >= 4033.575 && analogFC28 < 4037.67) { return value = 1.5; }
  else if (analogFC28 >= 4037.67 && analogFC28 < 4041.765) { return value = 1.4; }
  else if (analogFC28 >= 4041.765 && analogFC28 < 4045.86) { return value = 1.3; }
  else if (analogFC28 >= 4045.86 && analogFC28 < 4049.955) { return value = 1.2; }
  else if (analogFC28 >= 4049.955 && analogFC28 < 4054.05) { return value = 1.1; }

  // Percentage Range: 0.0-1.0
  if (analogFC28 >= 4054.05 && analogFC28 < 4058.145) { return value = 1.0; }
  else if (analogFC28 >= 4058.145 && analogFC28 < 4062.24) { return value = 0.9; }
  else if (analogFC28 >= 4062.24 && analogFC28 < 4066.335) { return value = 0.8; }
  else if (analogFC28 >= 4066.335 && analogFC28 < 4070.43) { return value = 0.7; }
  else if (analogFC28 >= 4070.43 && analogFC28 < 4074.525) { return value = 0.6; }
  else if (analogFC28 >= 4074.525 && analogFC28 < 4078.62) { return value = 0.5; }
  else if (analogFC28 >= 4078.62 && analogFC28 < 4082.715) { return value = 0.4; }
  else if (analogFC28 >= 4082.715 && analogFC28 < 4086.81) { return value = 0.3; }
  else if (analogFC28 >= 4086.81 && analogFC28 < 4090.905) { return value = 0.2; }
  else if (analogFC28 >= 4090.905 && analogFC28 < 4095) { return value = 0.1; }
  else if (analogFC28 == 4095) { return value = 0.0; } 
}

void FC28Sensor::threshold(int min_wet, int max_dry) {
  wetSoil = min_wet;
  drySoil = max_dry;
}

void FC28Sensor::measurementView() {
  Serial.println("Value: "+String(value,2)+"%"); // print to serial monitor: soil moisture value
  if(value >= wetSoil) { // if the sensor value is greater than equal to 30% then :
    Serial.println("Status: wet"); // print to serial monitor: wet soil conditions
  }
  else if(value > drySoil && value < wetSoil) { // if the sensor value is within the range of 21% - 29% then :
    Serial.println("Status: moist"); // print to serial monitor: moist soil conditions
  }
  else{ // if the sensor value is not in wet and moist conditions then :
    Serial.println("Status: dry"); // print to serial monitor: dry soil conditions
  }
}