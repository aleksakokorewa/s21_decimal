#include "test_me.h"
START_TEST(s21_truncate_1) {
  int true_res = 0;
  s21_decimal val1 = {{0x6DB68C9A, 0x3B16ECA7, 0xD2B06542, 0x80050000}};
  s21_decimal result = {{0x787100B6, 0xC19529EB, 0x00008A13, 0x80000000}};
  s21_decimal output;
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_2) {
  int true_res = 0;
  s21_decimal val1 = {{0x7528E6E2, 0x4FC46D55, 0x8C766F5C, 0x00000000}};
  s21_decimal result = {{0x7528E6E2, 0x4FC46D55, 0x8C766F5C, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_3) {
  int true_res = 0;
  s21_decimal val1 = {{0xFCAFDF4E, 0xF83D08B2, 0x0F5FD3D9, 0x00030000}};
  s21_decimal result = {{0xD1A922C8, 0x64DB3270, 0x0003EF92, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_4) {
  int true_res = 0;
  s21_decimal val1 = {{0x4AA8B746, 0x16B2CE20, 0x3279AAD9, 0x00020000}};
  s21_decimal result = {{0x901B4983, 0xEE4E968A, 0x00813777, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_5) {
  int true_res = 0;
  s21_decimal val1 = {{0xEF08BE16, 0xAA6A51F3, 0xA16998A0, 0x00000000}};
  s21_decimal result = {{0xEF08BE16, 0xAA6A51F3, 0xA16998A0, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_6) {
  int true_res = 0;
  s21_decimal val1 = {{0xFB1A0842, 0xAF1ABA89, 0x1DED808A, 0x000E0000}};
  s21_decimal result = {{0x36179169, 0x0000543D, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_7) {
  int true_res = 0;
  s21_decimal val1 = {{0xC1695042, 0x01D7BD8F, 0xBAF7DDE9, 0x80180000}};
  s21_decimal result = {{0x0000E207, 0x00000000, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_8) {
  int true_res = 0;
  s21_decimal val1 = {{0xC1C882AC, 0x629AE407, 0x098E4EB5, 0x00130000}};
  s21_decimal result = {{0x11A0A408, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_9) {
  int true_res = 0;
  s21_decimal val1 = {{0x411612DE, 0x196E3A3D, 0x27ACEA87, 0x00060000}};
  s21_decimal result = {{0x8FA77A3F, 0xA4C694A1, 0x00000299, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_10) {
  int true_res = 0;
  s21_decimal val1 = {{0x4CBA0E3F, 0x84F7B15F, 0x52847547, 0x800B0000}};
  s21_decimal result = {{0x94A8A83E, 0x038B49DF, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_11) {
  int true_res = 0;
  s21_decimal val1 = {{0xD8678BCF, 0x92404BBC, 0x2E86DAFB, 0x00000000}};
  s21_decimal result = {{0xD8678BCF, 0x92404BBC, 0x2E86DAFB, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_12) {
  int true_res = 0;
  s21_decimal val1 = {{0x42B31019, 0xE85AA32E, 0xA534A3BA, 0x000F0000}};
  s21_decimal result = {{0x51DA5CEB, 0x00002E80, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_13) {
  int true_res = 0;
  s21_decimal val1 = {{0x74C7070A, 0xA0A2EE1B, 0xC42E984F, 0x00030000}};
  s21_decimal result = {{0x50C1BC2A, 0xFBCF02CC, 0x003238FB, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_14) {
  int true_res = 0;
  s21_decimal val1 = {{0xB1884960, 0xCEC5094D, 0x25D8379A, 0x000C0000}};
  s21_decimal result = {{0xB6604325, 0x00299C4E, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_15) {
  int true_res = 0;
  s21_decimal val1 = {{0x1FCCDAE2, 0x588B6F12, 0xF14948B0, 0x80040000}};
  s21_decimal result = {{0xBCE1465E, 0x2DE25164, 0x00062D4B, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_16) {
  int true_res = 0;
  s21_decimal val1 = {{0x8E293F49, 0x5F88A190, 0x9DD50157, 0x00050000}};
  s21_decimal result = {{0x47A3F54A, 0xD300FB5A, 0x0000676F, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_17) {
  int true_res = 0;
  s21_decimal val1 = {{0xB28AC08E, 0xD063AE2C, 0x8F6906B7, 0x80060000}};
  s21_decimal result = {{0x4A0499B7, 0x065F0C3B, 0x00000966, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_18) {
  int true_res = 0;
  s21_decimal val1 = {{0x14D33409, 0x70E24762, 0x199FAE5B, 0x80120000}};
  s21_decimal result = {{0xD8ACC215, 0x00000001, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_19) {
  int true_res = 0;
  s21_decimal val1 = {{0x04C00DA4, 0x6B219A3E, 0xF91F30F9, 0x80010000}};
  s21_decimal result = {{0xCD4667C3, 0xBDE9C29F, 0x18E984E5, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_20) {
  int true_res = 0;
  s21_decimal val1 = {{0x140CF8D5, 0x7E4959E6, 0xE7918B54, 0x000B0000}};
  s21_decimal result = {{0xE4DAFCCD, 0x09F21F78, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_21) {
  int true_res = 0;
  s21_decimal val1 = {{0xDD4BB231, 0x3FD06014, 0x81F94A34, 0x80150000}};
  s21_decimal result = {{0x0265C8AB, 0x00000000, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_22) {
  int true_res = 0;
  s21_decimal val1 = {{0x5CB1B2E2, 0x7ACE8EDB, 0xA2213F72, 0x00020000}};
  s21_decimal result = {{0x837CA830, 0x398C4E3A, 0x019F0D6F, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_23) {
  int true_res = 0;
  s21_decimal val1 = {{0xD6D4C79E, 0xF499E7B9, 0x7876C156, 0x80080000}};
  s21_decimal result = {{0x2ECF3F91, 0x35E273A6, 0x00000014, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_24) {
  int true_res = 0;
  s21_decimal val1 = {{0xC7201267, 0xE427103F, 0x7BF25586, 0x00000000}};
  s21_decimal result = {{0xC7201267, 0xE427103F, 0x7BF25586, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_25) {
  int true_res = 0;
  s21_decimal val1 = {{0x99A1F59C, 0x2443C2C7, 0x51262759, 0x80110000}};
  s21_decimal result = {{0x795AF79D, 0x0000003A, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_26) {
  int true_res = 0;
  s21_decimal val1 = {{0x344A8E34, 0x52F3F18A, 0x1BA1AAF8, 0x800A0000}};
  s21_decimal result = {{0x612599F1, 0x0BDE1E01, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_27) {
  int true_res = 0;
  s21_decimal val1 = {{0xF8DFE60B, 0x18246B90, 0x87257AAF, 0x80150000}};
  s21_decimal result = {{0x027E35F9, 0x00000000, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_28) {
  int true_res = 0;
  s21_decimal val1 = {{0xD1C55DE1, 0x3150E7A7, 0x3D37CE2E, 0x000B0000}};
  s21_decimal result = {{0x9407777F, 0x02A11952, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_29) {
  int true_res = 0;
  s21_decimal val1 = {{0x2D823C93, 0x10A0B312, 0xF0703B9B, 0x80130000}};
  s21_decimal result = {{0xBB87D420, 0x00000001, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_30) {
  int true_res = 0;
  s21_decimal val1 = {{0x00D5BC55, 0x12EC5DCD, 0x2D121DD9, 0x80100000}};
  s21_decimal result = {{0xC4E463AC, 0x00000144, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_31) {
  int true_res = 0;
  s21_decimal val1 = {{0xBEFDED35, 0x4E978DC6, 0xA1BFADAB, 0x00000000}};
  s21_decimal result = {{0xBEFDED35, 0x4E978DC6, 0xA1BFADAB, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_32) {
  int true_res = 0;
  s21_decimal val1 = {{0x3D792D22, 0x6424B55E, 0xD49EBBCB, 0x00020000}};
  s21_decimal result = {{0x0FF98821, 0x8DCD2AC6, 0x02204EAD, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_33) {
  int true_res = 0;
  s21_decimal val1 = {{0x9BF198D8, 0x045EE43C, 0x9B63CF61, 0x00130000}};
  s21_decimal result = {{0x1EA4CC2D, 0x00000001, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_34) {
  int true_res = 0;
  s21_decimal val1 = {{0xF50A1189, 0x77894527, 0x53416094, 0x80000000}};
  s21_decimal result = {{0xF50A1189, 0x77894527, 0x53416094, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_35) {
  int true_res = 0;
  s21_decimal val1 = {{0x133CFD97, 0x645B2F07, 0x8C448588, 0x00040000}};
  s21_decimal result = {{0xF3E4A3C3, 0x16554EED, 0x00039742, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_36) {
  int true_res = 0;
  s21_decimal val1 = {{0xCFCC664B, 0xD1B5B8B8, 0x9502E43A, 0x001A0000}};
  s21_decimal result = {{0x000001CD, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_37) {
  int true_res = 0;
  s21_decimal val1 = {{0x5B0F577A, 0x96F4B9B6, 0xCBB0382B, 0x801A0000}};
  s21_decimal result = {{0x00000276, 0x00000000, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_38) {
  int true_res = 0;
  s21_decimal val1 = {{0xE5E556F5, 0xE5D1A1F1, 0xA9D38CF1, 0x800B0000}};
  s21_decimal result = {{0xD4A675B6, 0x074B42BB, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_39) {
  int true_res = 0;
  s21_decimal val1 = {{0xA6CA9B07, 0x2A335068, 0xE6A8823F, 0x00150000}};
  s21_decimal result = {{0x044140B2, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_40) {
  int true_res = 0;
  s21_decimal val1 = {{0xDF186BE8, 0x8A1A8771, 0xEEBDA22D, 0x80180000}};
  s21_decimal result = {{0x0001209E, 0x00000000, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_41) {
  int true_res = 0;
  s21_decimal val1 = {{0x6AF8DF03, 0x1ADD6AB2, 0x9B9E202F, 0x80090000}};
  s21_decimal result = {{0xE2A8843C, 0x9C5F7274, 0x00000002, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_42) {
  int true_res = 0;
  s21_decimal val1 = {{0xC67D9722, 0x5284616D, 0xD8F18083, 0x00050000}};
  s21_decimal result = {{0xCECD24F0, 0x0EAC1453, 0x00008E2D, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_43) {
  int true_res = 0;
  s21_decimal val1 = {{0x3CF9A531, 0x62A78099, 0x2468F219, 0x000B0000}};
  s21_decimal result = {{0xBCE4C301, 0x019054E1, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_44) {
  int true_res = 0;
  s21_decimal val1 = {{0xDC53ED8A, 0x9DD35A0D, 0x3C776694, 0x80190000}};
  s21_decimal result = {{0x0000074F, 0x00000000, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_45) {
  int true_res = 0;
  s21_decimal val1 = {{0x0429D91D, 0xFF878743, 0x81242A10, 0x80020000}};
  s21_decimal result = {{0x8CD7755F, 0x4A3C3C3B, 0x014A9A05, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_46) {
  int true_res = 0;
  s21_decimal val1 = {{0x3C686A97, 0xD7EBCCF3, 0x0B3B4739, 0x800B0000}};
  s21_decimal result = {{0xB7D1BB17, 0x007B7E04, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_47) {
  int true_res = 0;
  s21_decimal val1 = {{0x85E79C38, 0x613DAE58, 0x72CF229D, 0x001C0000}};
  s21_decimal result = {{0x00000003, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_48) {
  int true_res = 0;
  s21_decimal val1 = {{0xD28DB149, 0xDD6F9021, 0x157464EF, 0x000E0000}};
  s21_decimal result = {{0xB72D4835, 0x00003C63, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_49) {
  int true_res = 0;
  s21_decimal val1 = {{0x4603AC96, 0x293B6B15, 0x9705FE70, 0x00040000}};
  s21_decimal result = {{0x606418AB, 0x3E436926, 0x0003DDBF, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_50) {
  int true_res = 0;
  s21_decimal val1 = {{0x6787326F, 0xF62C05BC, 0x65F13756, 0x00120000}};
  s21_decimal result = {{0x5880AAF0, 0x00000007, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_51) {
  int true_res = 0;
  s21_decimal val1 = {{0xC5894D73, 0x5D8F2230, 0x6042BEB0, 0x00190000}};
  s21_decimal result = {{0x00000BA3, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_52) {
  int true_res = 0;
  s21_decimal val1 = {{0xCD5EF5FB, 0x258EA18F, 0x38FFC8D8, 0x800E0000}};
  s21_decimal result = {{0x38DF61C6, 0x0000A070, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_53) {
  int true_res = 0;
  s21_decimal val1 = {{0x9D5497DA, 0x2AD438F0, 0x96894614, 0x80180000}};
  s21_decimal result = {{0x0000B5FC, 0x00000000, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_54) {
  int true_res = 0;
  s21_decimal val1 = {{0xB3A90E6F, 0xA0670A42, 0x31F4F225, 0x00130000}};
  s21_decimal result = {{0x5C2770F0, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_55) {
  int true_res = 0;
  s21_decimal val1 = {{0x4B795442, 0x0C4E8F69, 0x050028B3, 0x00140000}};
  s21_decimal result = {{0x00EC25CC, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_56) {
  int true_res = 0;
  s21_decimal val1 = {{0xE4761C8D, 0xDC2EB79D, 0x44A6E921, 0x00120000}};
  s21_decimal result = {{0xF267E119, 0x00000004, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_57) {
  int true_res = 0;
  s21_decimal val1 = {{0xA1162D72, 0xC98C1968, 0x337D6A57, 0x801B0000}};
  s21_decimal result = {{0x0000000F, 0x00000000, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_58) {
  int true_res = 0;
  s21_decimal val1 = {{0xA3C38C14, 0x127EA23C, 0x5777A92C, 0x00100000}};
  s21_decimal result = {{0x44EBAB57, 0x00000276, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_59) {
  int true_res = 0;
  s21_decimal val1 = {{0x2B410926, 0x181D19F0, 0x8121C6C7, 0x80120000}};
  s21_decimal result = {{0x4E1057A0, 0x00000009, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_60) {
  int true_res = 0;
  s21_decimal val1 = {{0x3E34376E, 0xC4AF7CFD, 0x9E8090A8, 0x00190000}};
  s21_decimal result = {{0x00001329, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_61) {
  int true_res = 0;
  s21_decimal val1 = {{0x4D28DEC2, 0x6294509C, 0x51981242, 0x00170000}};
  s21_decimal result = {{0x0003DA69, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_62) {
  int true_res = 0;
  s21_decimal val1 = {{0x2ADA5D74, 0x1C686502, 0x378D5613, 0x00070000}};
  s21_decimal result = {{0x522CF720, 0x337166A4, 0x0000005D, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_63) {
  int true_res = 0;
  s21_decimal val1 = {{0xA31E9AC5, 0x995948C0, 0x36F31F54, 0x001B0000}};
  s21_decimal result = {{0x00000011, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_64) {
  int true_res = 0;
  s21_decimal val1 = {{0x3779EF08, 0x64CE5D0E, 0x643F5113, 0x80090000}};
  s21_decimal result = {{0x1023570C, 0xAE8F1B1F, 0x00000001, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_65) {
  int true_res = 0;
  s21_decimal val1 = {{0x6AD1E841, 0xD8667DCC, 0x1760C275, 0x80160000}};
  s21_decimal result = {{0x000B0A39, 0x00000000, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_66) {
  int true_res = 0;
  s21_decimal val1 = {{0x7093EFE3, 0x5D4517A4, 0xF17A2102, 0x00080000}};
  s21_decimal result = {{0x60BFF9E8, 0x835C6BCB, 0x00000028, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_67) {
  int true_res = 0;
  s21_decimal val1 = {{0xF601EFCE, 0xA6382173, 0x43914D1C, 0x80030000}};
  s21_decimal result = {{0x4ED687A9, 0xEEC21AA8, 0x00114C1B, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_68) {
  int true_res = 0;
  s21_decimal val1 = {{0x7D5B188C, 0xFE281D13, 0xBF59B1D6, 0x80060000}};
  s21_decimal result = {{0xA4C332C3, 0x5394A6CC, 0x00000C8A, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_69) {
  int true_res = 0;
  s21_decimal val1 = {{0xE51B15B6, 0x58512FC9, 0x96C4910E, 0x80120000}};
  s21_decimal result = {{0xDD2CFC95, 0x0000000A, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_70) {
  int true_res = 0;
  s21_decimal val1 = {{0xE951353F, 0x22C065B0, 0x1825F6A1, 0x000A0000}};
  s21_decimal result = {{0x4C554E31, 0x0A5F2210, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_71) {
  int true_res = 0;
  s21_decimal val1 = {{0x5A883068, 0x50CC3ABF, 0xA677189F, 0x00100000}};
  s21_decimal result = {{0x82214AEC, 0x000004AF, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_72) {
  int true_res = 0;
  s21_decimal val1 = {{0x7040173B, 0x03CC629C, 0x8649C5E4, 0x000E0000}};
  s21_decimal result = {{0xD41D7BED, 0x000179FC, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_73) {
  int true_res = 0;
  s21_decimal val1 = {{0x67475EA2, 0xFA9226D4, 0xB964AF2B, 0x00090000}};
  s21_decimal result = {{0x1C2D944A, 0x1C421636, 0x00000003, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_74) {
  int true_res = 0;
  s21_decimal val1 = {{0x070E2C7C, 0x7B3B6E1B, 0x10F66D23, 0x80030000}};
  s21_decimal result = {{0xACCE9B2E, 0x4061155B, 0x000457A9, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_75) {
  int true_res = 0;
  s21_decimal val1 = {{0x4DA722C5, 0x80CC67FB, 0x99243E5D, 0x80160000}};
  s21_decimal result = {{0x004851AE, 0x00000000, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_76) {
  int true_res = 0;
  s21_decimal val1 = {{0xD247C5B1, 0x196771C5, 0x61B97235, 0x00070000}};
  s21_decimal result = {{0x8D6A5592, 0xF44F4AEB, 0x000000A3, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_77) {
  int true_res = 0;
  s21_decimal val1 = {{0x4A810615, 0xCA192CF2, 0x9EB5B217, 0x80140000}};
  s21_decimal result = {{0x1D46DB21, 0x00000000, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_78) {
  int true_res = 0;
  s21_decimal val1 = {{0x8D809CF5, 0x0302B114, 0xEC91630F, 0x800A0000}};
  s21_decimal result = {{0x11ECDD9C, 0x659AEAEA, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_79) {
  int true_res = 0;
  s21_decimal val1 = {{0x3110D373, 0xFA58F680, 0xD481B7AF, 0x00030000}};
  s21_decimal result = {{0x22DD74F2, 0xF5C11CEB, 0x003666D6, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_80) {
  int true_res = 0;
  s21_decimal val1 = {{0x3765E981, 0xD9A2EC85, 0x88AC4EAE, 0x80190000}};
  s21_decimal result = {{0x00001085, 0x00000000, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_81) {
  int true_res = 0;
  s21_decimal val1 = {{0xBF2877BE, 0x76CFF887, 0x422BFD4F, 0x80030000}};
  s21_decimal result = {{0xC27EC2AE, 0x26C65A1A, 0x0010F0A3, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_82) {
  int true_res = 0;
  s21_decimal val1 = {{0x7C04AC18, 0x8C13E067, 0x8137A677, 0x000B0000}};
  s21_decimal result = {{0xDEB3E0B7, 0x058CC299, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_83) {
  int true_res = 0;
  s21_decimal val1 = {{0x0B117211, 0x550B104C, 0x20C7373E, 0x000F0000}};
  s21_decimal result = {{0xEAD23C31, 0x00000939, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_84) {
  int true_res = 0;
  s21_decimal val1 = {{0xCE9DB680, 0x71A618DD, 0x1C2BE7AD, 0x80130000}};
  s21_decimal result = {{0x33F79DD7, 0x00000000, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_85) {
  int true_res = 0;
  s21_decimal val1 = {{0xB18D76FC, 0x7FC3373A, 0x5B26B1F5, 0x80070000}};
  s21_decimal result = {{0x814EABB1, 0xED1F410D, 0x00000098, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_86) {
  int true_res = 0;
  s21_decimal val1 = {{0xAA5B9572, 0x21E10CCB, 0xC216EAA6, 0x00020000}};
  s21_decimal result = {{0x658B27E4, 0xA94C7D91, 0x01F0DE81, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_87) {
  int true_res = 0;
  s21_decimal val1 = {{0xEC8700CC, 0x9D1D22BD, 0x3D1DA379, 0x00080000}};
  s21_decimal result = {{0x9AEB9E1A, 0x40E70F5D, 0x0000000A, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_88) {
  int true_res = 0;
  s21_decimal val1 = {{0x47B6FA9F, 0xA63BC7B8, 0xB4E5BE9F, 0x80170000}};
  s21_decimal result = {{0x00088AEA, 0x00000000, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_89) {
  int true_res = 0;
  s21_decimal val1 = {{0x788FD6C2, 0x0746A79E, 0xA905248D, 0x80070000}};
  int s21_res = s21_truncate(val1, NULL);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_90) {
  int true_res = 0;
  s21_decimal val1 = {{0x939D9522, 0xA7A4B9C7, 0xE89C2C38, 0x00140000}};
  s21_decimal result = {{0x2AE8B2F3, 0x00000000, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_91) {
  int true_res = 0;
  s21_decimal val1 = {{0x9536C53C, 0x34EACF01, 0x2713A95B, 0x80060000}};
  s21_decimal result = {{0x9D1B48E8, 0x9997304F, 0x0000028F, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_92) {
  int true_res = 0;
  s21_decimal val1 = {{0x4BEDEAD8, 0xBDA20FE9, 0x0B0F6258, 0x80160000}};
  s21_decimal result = {{0x00053915, 0x00000000, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_93) {
  int true_res = 0;
  s21_decimal val1 = {{0x66D4410B, 0xA399E8E4, 0x1D647230, 0x000C0000}};
  s21_decimal result = {{0x472AFDC6, 0x00205137, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_94) {
  int true_res = 0;
  s21_decimal val1 = {{0x14276811, 0x3FA234C0, 0x251D9FC5, 0x000D0000}};
  s21_decimal result = {{0xF13C3AF3, 0x000414B6, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_95) {
  int true_res = 0;
  s21_decimal val1 = {{0x403A6D1D, 0xC5E91236, 0x1F00EEB9, 0x80170000}};
  s21_decimal result = {{0x000176CF, 0x00000000, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_96) {
  int true_res = 0;
  s21_decimal val1 = {{0xC281B180, 0x2E350946, 0xDDC1C709, 0x000F0000}};
  s21_decimal result = {{0x45945D9F, 0x00003E6B, 0x00000000, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_97) {
  int true_res = 0;
  s21_decimal val1 = {{0xC4E6D6FE, 0x17724E44, 0xEFBDB559, 0x80080000}};
  s21_decimal result = {{0x21BA1A8E, 0x38CCB427, 0x00000028, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_98) {
  int true_res = 0;
  s21_decimal val1 = {{0xDD7021F8, 0x3EB2AE4B, 0x3CE622A1, 0x80100000}};
  s21_decimal result = {{0xD2C38B9D, 0x000001B6, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_99) {
  int true_res = 0;
  s21_decimal val1 = {{0xFF08E5FF, 0x90728758, 0xE0C605FF, 0x80150000}};
  s21_decimal result = {{0x04257685, 0x00000000, 0x00000000, 0x80000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

START_TEST(s21_truncate_100) {
  int true_res = 0;
  s21_decimal val1 = {{0xE94CF625, 0x7ED941EE, 0xA97D6338, 0x00060000}};
  s21_decimal result = {{0x2394E88A, 0x9120A72C, 0x00000B1B, 0x00000000}};
  s21_decimal output = {{0x00000000, 0x00000000, 0x00000000, 0x00000000}};
  int s21_res = s21_truncate(val1, &output);
  for (int i = 0; i < 4; i++) ck_assert_int_eq(result.bits[i], output.bits[i]);
  ck_assert_int_eq(s21_res, true_res);
}
END_TEST

Suite *test_truncate(void) {
  Suite *s = suite_create("\033[45m-=S21_TRUNCATE=-\033[0m");
  TCase *tc = tcase_create("s21_truncate_tc");

  tcase_add_test(tc, s21_truncate_1);
  tcase_add_test(tc, s21_truncate_2);
  tcase_add_test(tc, s21_truncate_3);
  tcase_add_test(tc, s21_truncate_4);
  tcase_add_test(tc, s21_truncate_5);
  tcase_add_test(tc, s21_truncate_6);
  tcase_add_test(tc, s21_truncate_7);
  tcase_add_test(tc, s21_truncate_8);
  tcase_add_test(tc, s21_truncate_9);
  tcase_add_test(tc, s21_truncate_10);
  tcase_add_test(tc, s21_truncate_11);
  tcase_add_test(tc, s21_truncate_12);
  tcase_add_test(tc, s21_truncate_13);
  tcase_add_test(tc, s21_truncate_14);
  tcase_add_test(tc, s21_truncate_15);
  tcase_add_test(tc, s21_truncate_16);
  tcase_add_test(tc, s21_truncate_17);
  tcase_add_test(tc, s21_truncate_18);
  tcase_add_test(tc, s21_truncate_19);
  tcase_add_test(tc, s21_truncate_20);
  tcase_add_test(tc, s21_truncate_21);
  tcase_add_test(tc, s21_truncate_22);
  tcase_add_test(tc, s21_truncate_23);
  tcase_add_test(tc, s21_truncate_24);
  tcase_add_test(tc, s21_truncate_25);
  tcase_add_test(tc, s21_truncate_26);
  tcase_add_test(tc, s21_truncate_27);
  tcase_add_test(tc, s21_truncate_28);
  tcase_add_test(tc, s21_truncate_29);
  tcase_add_test(tc, s21_truncate_30);
  tcase_add_test(tc, s21_truncate_31);
  tcase_add_test(tc, s21_truncate_32);
  tcase_add_test(tc, s21_truncate_33);
  tcase_add_test(tc, s21_truncate_34);
  tcase_add_test(tc, s21_truncate_35);
  tcase_add_test(tc, s21_truncate_36);
  tcase_add_test(tc, s21_truncate_37);
  tcase_add_test(tc, s21_truncate_38);
  tcase_add_test(tc, s21_truncate_39);
  tcase_add_test(tc, s21_truncate_40);
  tcase_add_test(tc, s21_truncate_41);
  tcase_add_test(tc, s21_truncate_42);
  tcase_add_test(tc, s21_truncate_43);
  tcase_add_test(tc, s21_truncate_44);
  tcase_add_test(tc, s21_truncate_45);
  tcase_add_test(tc, s21_truncate_46);
  tcase_add_test(tc, s21_truncate_47);
  tcase_add_test(tc, s21_truncate_48);
  tcase_add_test(tc, s21_truncate_49);
  tcase_add_test(tc, s21_truncate_50);
  tcase_add_test(tc, s21_truncate_51);
  tcase_add_test(tc, s21_truncate_52);
  tcase_add_test(tc, s21_truncate_53);
  tcase_add_test(tc, s21_truncate_54);
  tcase_add_test(tc, s21_truncate_55);
  tcase_add_test(tc, s21_truncate_56);
  tcase_add_test(tc, s21_truncate_57);
  tcase_add_test(tc, s21_truncate_58);
  tcase_add_test(tc, s21_truncate_59);
  tcase_add_test(tc, s21_truncate_60);
  tcase_add_test(tc, s21_truncate_61);
  tcase_add_test(tc, s21_truncate_62);
  tcase_add_test(tc, s21_truncate_63);
  tcase_add_test(tc, s21_truncate_64);
  tcase_add_test(tc, s21_truncate_65);
  tcase_add_test(tc, s21_truncate_66);
  tcase_add_test(tc, s21_truncate_67);
  tcase_add_test(tc, s21_truncate_68);
  tcase_add_test(tc, s21_truncate_69);
  tcase_add_test(tc, s21_truncate_70);
  tcase_add_test(tc, s21_truncate_71);
  tcase_add_test(tc, s21_truncate_72);
  tcase_add_test(tc, s21_truncate_73);
  tcase_add_test(tc, s21_truncate_74);
  tcase_add_test(tc, s21_truncate_75);
  tcase_add_test(tc, s21_truncate_76);
  tcase_add_test(tc, s21_truncate_77);
  tcase_add_test(tc, s21_truncate_78);
  tcase_add_test(tc, s21_truncate_79);
  tcase_add_test(tc, s21_truncate_80);
  tcase_add_test(tc, s21_truncate_81);
  tcase_add_test(tc, s21_truncate_82);
  tcase_add_test(tc, s21_truncate_83);
  tcase_add_test(tc, s21_truncate_84);
  tcase_add_test(tc, s21_truncate_85);
  tcase_add_test(tc, s21_truncate_86);
  tcase_add_test(tc, s21_truncate_87);
  tcase_add_test(tc, s21_truncate_88);
  tcase_add_test(tc, s21_truncate_89);
  tcase_add_test(tc, s21_truncate_90);
  tcase_add_test(tc, s21_truncate_91);
  tcase_add_test(tc, s21_truncate_92);
  tcase_add_test(tc, s21_truncate_93);
  tcase_add_test(tc, s21_truncate_94);
  tcase_add_test(tc, s21_truncate_95);
  tcase_add_test(tc, s21_truncate_96);
  tcase_add_test(tc, s21_truncate_97);
  tcase_add_test(tc, s21_truncate_98);
  tcase_add_test(tc, s21_truncate_99);
  tcase_add_test(tc, s21_truncate_100);

  suite_add_tcase(s, tc);
  return s;
}
