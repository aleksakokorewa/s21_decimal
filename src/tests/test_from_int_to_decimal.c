#include "test_me.h"

START_TEST(s21_from_int_to_decimal_1) {
  int inp = -1113505110;
  s21_decimal out;
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x425EBD56, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_2) {
  int inp = 1985697117;
  s21_decimal *out = NULL;
  int error = s21_from_int_to_decimal(inp, out);
  ck_assert_int_eq(error, 1);
}
END_TEST

START_TEST(s21_from_int_to_decimal_3) {
  int inp = INT_MAX;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x7FFFFFFF, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_4) {
  int inp = INT_MIN;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x80000000, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_5) {
  int inp = -516363763;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x1EC715F3, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_6) {
  int inp = -1738750530;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x67A33A42, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_7) {
  int inp = 1808559587;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x6BCC6DE3, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_8) {
  int inp = -569703402;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x21F4FBEA, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_9) {
  int inp = 642518603;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x264C0E4B, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_10) {
  int inp = 879304798;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x3469205E, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_11) {
  int inp = 875434235;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x342E10FB, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_12) {
  int inp = -1061716943;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x3F4883CF, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_13) {
  int inp = 356646416;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x1541FE10, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_14) {
  int inp = 1027557455;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x3D3F484F, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_15) {
  int inp = -1056545713;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x3EF99BB1, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_16) {
  int inp = -1633771678;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x6161609E, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_17) {
  int inp = -1116871923;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x42921CF3, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_18) {
  int inp = -651659745;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x26D789E1, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_19) {
  int inp = -1424961110;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x54EF2E56, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_20) {
  int inp = -1384633449;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x5287D469, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_21) {
  int inp = 1962032;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x001DF030, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_22) {
  int inp = 779730825;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x2E79BF89, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_23) {
  int inp = -1695210893;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x650ADD8D, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_24) {
  int inp = -1514115420;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x5A3F915C, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_25) {
  int inp = 914032557;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x367B07AD, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_26) {
  int inp = 1643185881;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x61F106D9, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_27) {
  int inp = 1591769227;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x5EE0788B, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_28) {
  int inp = -1485924260;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x589167A4, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_29) {
  int inp = 118521076;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x07107CF4, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_30) {
  int inp = 1262597923;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x4B41B723, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_31) {
  int inp = 2067106433;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x7B358A81, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_32) {
  int inp = 2111548637;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x7DDBACDD, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_33) {
  int inp = -1963415980;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x750759AC, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_34) {
  int inp = -917670331;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x36B289BB, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_35) {
  int inp = -470838427;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x1C106C9B, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_36) {
  int inp = 932885834;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x379AB54A, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_37) {
  int inp = -1247665772;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x4A5DDE6C, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_38) {
  int inp = 1132344195;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x437E3383, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_39) {
  int inp = 505924361;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x1E27CB09, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_40) {
  int inp = 1726055363;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x66E183C3, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_41) {
  int inp = -1377794944;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x521F7B80, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_42) {
  int inp = -1773449314;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x69B4B062, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_43) {
  int inp = -1490873628;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x58DCED1C, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_44) {
  int inp = -1936898208;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x7372B8A0, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_45) {
  int inp = 904510856;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x35E9BD88, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_46) {
  int inp = -2084013079;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x7C378417, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_47) {
  int inp = 1863390386;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x6F1114B2, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_48) {
  int inp = 1693049306;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x64E9E1DA, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_49) {
  int inp = -2073659101;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x7B9986DD, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_50) {
  int inp = 1859358776;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x6ED39038, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_51) {
  int inp = -513280270;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x1E98090E, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_52) {
  int inp = 2142241435;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x7FB0029B, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_53) {
  int inp = 1047309831;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x3E6CAE07, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_54) {
  int inp = 1344536442;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x5023FF7A, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_55) {
  int inp = -1501430694;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x597E03A6, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_56) {
  int inp = 1389882638;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x52D7ED0E, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_57) {
  int inp = 228797281;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x0DA32B61, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_58) {
  int inp = 159037694;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x097AB8FE, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_59) {
  int inp = 283734774;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x10E972F6, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_60) {
  int inp = 553762156;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x2101BD6C, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_61) {
  int inp = 543276658;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x2061BE72, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_62) {
  int inp = 1485462133;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x588A5A75, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_63) {
  int inp = -1083601073;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x409670B1, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_64) {
  int inp = 484978113;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x1CE82DC1, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_65) {
  int inp = -10497497;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x00A02DD9, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_66) {
  int inp = -1383763498;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x527A8E2A, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_67) {
  int inp = 2014819692;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x7817B56C, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_68) {
  int inp = -1994090011;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x76DB661B, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_69) {
  int inp = 1777315764;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x69EFAFB4, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_70) {
  int inp = 1016222454;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x3C9252F6, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_71) {
  int inp = 414482138;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x18B47EDA, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_72) {
  int inp = 485209814;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x1CEBB6D6, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_73) {
  int inp = 89182456;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x0550D0F8, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_74) {
  int inp = 954791714;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x38E8F722, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_75) {
  int inp = -324913895;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x135DCAE7, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_76) {
  int inp = 939506339;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x37FFBAA3, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_77) {
  int inp = 357773772;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x155331CC, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_78) {
  int inp = -844866002;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x325BA1D2, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_79) {
  int inp = -1094583248;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x413E03D0, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_80) {
  int inp = 870280485;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x33DF6D25, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_81) {
  int inp = -653289822;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x26F0695E, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_82) {
  int inp = 188150369;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x0B36F261, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_83) {
  int inp = -1208140917;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x4802C475, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_84) {
  int inp = -1207074334;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x47F27E1E, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_85) {
  int inp = 1200655461;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x47908C65, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_86) {
  int inp = 665200765;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x27A6287D, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_87) {
  int inp = -699770647;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x29B5A717, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_88) {
  int inp = -110384859;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x069456DB, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_89) {
  int inp = -386659266;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x170BF3C2, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_90) {
  int inp = -2039085979;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x7989FB9B, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_91) {
  int inp = -1205494877;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x47DA645D, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_92) {
  int inp = -488440221;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x1D1D019D, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_93) {
  int inp = -1030403260;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x3D6AB4BC, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_94) {
  int inp = -1300256252;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x4D8055FC, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_95) {
  int inp = -1154021131;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x44C8F70B, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_96) {
  int inp = -674090583;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x282DCE57, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_97) {
  int inp = 1864558084;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x6F22E604, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_98) {
  int inp = -132401188;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x07E44824, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_99) {
  int inp = -2034265995;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x79406F8B, 0x00000000, 0x00000000, 0x80000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimal_100) {
  int inp = 141153435;
  s21_decimal out = {{0x00011B7E, 0x00014CC3, 0x0000BDF8, 0x00009B31}};
  int error = s21_from_int_to_decimal(inp, &out);
  s21_decimal res = {{0x0869D49B, 0x00000000, 0x00000000, 0x00000000}};
  for (int i = 0; i < 4; i++) ck_assert_int_eq(out.bits[i], res.bits[i]);
  ck_assert_int_eq(error, 0);
}
END_TEST

Suite *test_from_int_to_decimal(void) {
  Suite *s = suite_create("\033[45m-=s21_FROM_INT_TO_DECIMAL=-\033[0m");
  TCase *tc = tcase_create("s21_from_int_to_decimal_tc");

  tcase_add_test(tc, s21_from_int_to_decimal_1);
  tcase_add_test(tc, s21_from_int_to_decimal_2);
  tcase_add_test(tc, s21_from_int_to_decimal_3);
  tcase_add_test(tc, s21_from_int_to_decimal_4);
  tcase_add_test(tc, s21_from_int_to_decimal_5);
  tcase_add_test(tc, s21_from_int_to_decimal_6);
  tcase_add_test(tc, s21_from_int_to_decimal_7);
  tcase_add_test(tc, s21_from_int_to_decimal_8);
  tcase_add_test(tc, s21_from_int_to_decimal_9);
  tcase_add_test(tc, s21_from_int_to_decimal_10);
  tcase_add_test(tc, s21_from_int_to_decimal_11);
  tcase_add_test(tc, s21_from_int_to_decimal_12);
  tcase_add_test(tc, s21_from_int_to_decimal_13);
  tcase_add_test(tc, s21_from_int_to_decimal_14);
  tcase_add_test(tc, s21_from_int_to_decimal_15);
  tcase_add_test(tc, s21_from_int_to_decimal_16);
  tcase_add_test(tc, s21_from_int_to_decimal_17);
  tcase_add_test(tc, s21_from_int_to_decimal_18);
  tcase_add_test(tc, s21_from_int_to_decimal_19);
  tcase_add_test(tc, s21_from_int_to_decimal_20);
  tcase_add_test(tc, s21_from_int_to_decimal_21);
  tcase_add_test(tc, s21_from_int_to_decimal_22);
  tcase_add_test(tc, s21_from_int_to_decimal_23);
  tcase_add_test(tc, s21_from_int_to_decimal_24);
  tcase_add_test(tc, s21_from_int_to_decimal_25);
  tcase_add_test(tc, s21_from_int_to_decimal_26);
  tcase_add_test(tc, s21_from_int_to_decimal_27);
  tcase_add_test(tc, s21_from_int_to_decimal_28);
  tcase_add_test(tc, s21_from_int_to_decimal_29);
  tcase_add_test(tc, s21_from_int_to_decimal_30);
  tcase_add_test(tc, s21_from_int_to_decimal_31);
  tcase_add_test(tc, s21_from_int_to_decimal_32);
  tcase_add_test(tc, s21_from_int_to_decimal_33);
  tcase_add_test(tc, s21_from_int_to_decimal_34);
  tcase_add_test(tc, s21_from_int_to_decimal_35);
  tcase_add_test(tc, s21_from_int_to_decimal_36);
  tcase_add_test(tc, s21_from_int_to_decimal_37);
  tcase_add_test(tc, s21_from_int_to_decimal_38);
  tcase_add_test(tc, s21_from_int_to_decimal_39);
  tcase_add_test(tc, s21_from_int_to_decimal_40);
  tcase_add_test(tc, s21_from_int_to_decimal_41);
  tcase_add_test(tc, s21_from_int_to_decimal_42);
  tcase_add_test(tc, s21_from_int_to_decimal_43);
  tcase_add_test(tc, s21_from_int_to_decimal_44);
  tcase_add_test(tc, s21_from_int_to_decimal_45);
  tcase_add_test(tc, s21_from_int_to_decimal_46);
  tcase_add_test(tc, s21_from_int_to_decimal_47);
  tcase_add_test(tc, s21_from_int_to_decimal_48);
  tcase_add_test(tc, s21_from_int_to_decimal_49);
  tcase_add_test(tc, s21_from_int_to_decimal_50);
  tcase_add_test(tc, s21_from_int_to_decimal_51);
  tcase_add_test(tc, s21_from_int_to_decimal_52);
  tcase_add_test(tc, s21_from_int_to_decimal_53);
  tcase_add_test(tc, s21_from_int_to_decimal_54);
  tcase_add_test(tc, s21_from_int_to_decimal_55);
  tcase_add_test(tc, s21_from_int_to_decimal_56);
  tcase_add_test(tc, s21_from_int_to_decimal_57);
  tcase_add_test(tc, s21_from_int_to_decimal_58);
  tcase_add_test(tc, s21_from_int_to_decimal_59);
  tcase_add_test(tc, s21_from_int_to_decimal_60);
  tcase_add_test(tc, s21_from_int_to_decimal_61);
  tcase_add_test(tc, s21_from_int_to_decimal_62);
  tcase_add_test(tc, s21_from_int_to_decimal_63);
  tcase_add_test(tc, s21_from_int_to_decimal_64);
  tcase_add_test(tc, s21_from_int_to_decimal_65);
  tcase_add_test(tc, s21_from_int_to_decimal_66);
  tcase_add_test(tc, s21_from_int_to_decimal_67);
  tcase_add_test(tc, s21_from_int_to_decimal_68);
  tcase_add_test(tc, s21_from_int_to_decimal_69);
  tcase_add_test(tc, s21_from_int_to_decimal_70);
  tcase_add_test(tc, s21_from_int_to_decimal_71);
  tcase_add_test(tc, s21_from_int_to_decimal_72);
  tcase_add_test(tc, s21_from_int_to_decimal_73);
  tcase_add_test(tc, s21_from_int_to_decimal_74);
  tcase_add_test(tc, s21_from_int_to_decimal_75);
  tcase_add_test(tc, s21_from_int_to_decimal_76);
  tcase_add_test(tc, s21_from_int_to_decimal_77);
  tcase_add_test(tc, s21_from_int_to_decimal_78);
  tcase_add_test(tc, s21_from_int_to_decimal_79);
  tcase_add_test(tc, s21_from_int_to_decimal_80);
  tcase_add_test(tc, s21_from_int_to_decimal_81);
  tcase_add_test(tc, s21_from_int_to_decimal_82);
  tcase_add_test(tc, s21_from_int_to_decimal_83);
  tcase_add_test(tc, s21_from_int_to_decimal_84);
  tcase_add_test(tc, s21_from_int_to_decimal_85);
  tcase_add_test(tc, s21_from_int_to_decimal_86);
  tcase_add_test(tc, s21_from_int_to_decimal_87);
  tcase_add_test(tc, s21_from_int_to_decimal_88);
  tcase_add_test(tc, s21_from_int_to_decimal_89);
  tcase_add_test(tc, s21_from_int_to_decimal_90);
  tcase_add_test(tc, s21_from_int_to_decimal_91);
  tcase_add_test(tc, s21_from_int_to_decimal_92);
  tcase_add_test(tc, s21_from_int_to_decimal_93);
  tcase_add_test(tc, s21_from_int_to_decimal_94);
  tcase_add_test(tc, s21_from_int_to_decimal_95);
  tcase_add_test(tc, s21_from_int_to_decimal_96);
  tcase_add_test(tc, s21_from_int_to_decimal_97);
  tcase_add_test(tc, s21_from_int_to_decimal_98);
  tcase_add_test(tc, s21_from_int_to_decimal_99);
  tcase_add_test(tc, s21_from_int_to_decimal_100);

  suite_add_tcase(s, tc);
  return s;
}
