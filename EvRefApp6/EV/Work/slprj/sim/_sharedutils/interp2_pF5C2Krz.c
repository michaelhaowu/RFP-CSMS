#include "rtwtypes.h"
#include "multiword_types.h"
#include "interp2_pF5C2Krz.h"

real_T interp2_pF5C2Krz(const real_T varargin_1[3], const real_T varargin_2[3],
  const real_T varargin_3[9], real_T varargin_4, real_T varargin_5)
{
  real_T Vq;
  int32_T low_i;
  int32_T low_ip1;
  int32_T high_i;
  int32_T b_high_i;
  real_T qx1;
  real_T rx;
  if ((varargin_4 >= varargin_1[0]) && (varargin_4 <= varargin_1[2]) &&
      (varargin_5 >= varargin_2[0]) && (varargin_5 <= varargin_2[2])) {
    low_i = 0;
    low_ip1 = 2;
    high_i = 3;
    while (high_i > low_ip1) {
      if (varargin_4 >= varargin_1[1]) {
        low_i = 1;
        low_ip1 = 3;
      } else {
        high_i = 2;
      }
    }

    low_ip1 = 0;
    high_i = 2;
    b_high_i = 3;
    while (b_high_i > high_i) {
      if (varargin_5 >= varargin_2[1]) {
        low_ip1 = 1;
        high_i = 3;
      } else {
        b_high_i = 2;
      }
    }

    if (varargin_4 == varargin_1[low_i]) {
      qx1 = varargin_3[3 * low_i + low_ip1];
      Vq = varargin_3[(3 * low_i + low_ip1) + 1];
    } else if (varargin_1[low_i + 1] == varargin_4) {
      qx1 = varargin_3[(low_i + 1) * 3 + low_ip1];
      Vq = varargin_3[((low_i + 1) * 3 + low_ip1) + 1];
    } else {
      rx = (varargin_4 - varargin_1[low_i]) / (varargin_1[low_i + 1] -
        varargin_1[low_i]);
      high_i = (low_i + 1) * 3 + low_ip1;
      b_high_i = 3 * low_i + low_ip1;
      if (varargin_3[high_i] == varargin_3[b_high_i]) {
        qx1 = varargin_3[3 * low_i + low_ip1];
      } else {
        qx1 = varargin_3[(low_i + 1) * 3 + low_ip1] * rx + varargin_3[3 * low_i
          + low_ip1] * (1.0 - rx);
      }

      if (varargin_3[high_i + 1] == varargin_3[b_high_i + 1]) {
        Vq = varargin_3[(3 * low_i + low_ip1) + 1];
      } else {
        Vq = varargin_3[((low_i + 1) * 3 + low_ip1) + 1] * rx + varargin_3[(3 *
          low_i + low_ip1) + 1] * (1.0 - rx);
      }
    }

    if ((varargin_5 == varargin_2[low_ip1]) || (qx1 == Vq)) {
      Vq = qx1;
    } else {
      if (!(varargin_2[low_ip1 + 1] == varargin_5)) {
        rx = (varargin_5 - varargin_2[low_ip1]) / (varargin_2[low_ip1 + 1] -
          varargin_2[low_ip1]);
        Vq = (1.0 - rx) * qx1 + rx * Vq;
      }
    }
  } else {
    Vq = 0.0;
  }

  return Vq;
}
