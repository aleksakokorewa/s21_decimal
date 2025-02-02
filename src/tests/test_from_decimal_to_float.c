#include "test_me.h"

START_TEST(s21_to_float_0) {
  s21_decimal inp = {{0x154338CA, 0x75E94EA2, 0xDD7ECF07, 0x00000000}};
  float *out = NULL;
  int error = s21_from_decimal_to_float(inp, out);
  ck_assert_ptr_eq(out, NULL);
  ck_assert_int_eq(error, 1);
}
END_TEST

START_TEST(s21_to_float_1) {
  s21_decimal inp = {{0x154338CA, 0x75E94EA2, 0xDD7ECF07, 0x00000000}};
  float out;
  float res;
  unsigned char b[] = {207, 126, 93, 111};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_2) {
  s21_decimal inp = {{0x1DA363EE, 0x7A4A49B5, 0x2A2C83FF, 0x000B0000}};
  float out;
  float res;
  unsigned char b[] = {121, 218, 231, 91};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_3) {
  s21_decimal inp = {{0x67615BA3, 0x942E9B7D, 0xBA45D1F3, 0x00000000}};
  float out;
  float res;
  unsigned char b[] = {210, 69, 58, 111};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_4) {
  s21_decimal inp = {{0x9987CE65, 0x14B2E8A1, 0x1B36CEE8, 0x00110000}};
  float out;
  float res;
  unsigned char b[] = {234, 224, 156, 81};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_5) {
  s21_decimal inp = {{0x62C9E79C, 0xE00EBE0C, 0x04F8C04C, 0x00140000}};
  float out;
  float res;
  unsigned char b[] = {250, 199, 106, 75};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_6) {
  s21_decimal inp = {{0xC167D281, 0x01D5E2EE, 0x6F82D26D, 0x00000000}};
  float out;
  float res;
  unsigned char b[] = {165, 5, 223, 110};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_7) {
  s21_decimal inp = {{0x09A79296, 0xB395EE0F, 0x8BE96429, 0x80180000}};
  float out;
  float res;
  unsigned char b[] = {146, 36, 41, 199};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_8) {
  s21_decimal inp = {{0xB64B6D36, 0xC4417425, 0xB16C969C, 0x000D0000}};
  float out;
  float res;
  unsigned char b[] = {95, 16, 156, 89};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_9) {
  s21_decimal inp = {{0x238C5D69, 0x30336A8C, 0xC038B4E5, 0x00090000}};
  float out;
  float res;
  unsigned char b[] = {114, 101, 78, 96};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_10) {
  s21_decimal inp = {{0x737EF23F, 0x799FA1A0, 0x97C2A84F, 0x00050000}};
  float out;
  float res;
  unsigned char b[] = {85, 234, 198, 102};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_11) {
  s21_decimal inp = {{0xC6DF8668, 0x3766B116, 0xF77B0405, 0x80130000}};
  float out;
  float res;
  unsigned char b[] = {176, 66, 228, 207};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_12) {
  s21_decimal inp = {{0xB71AC026, 0x4A13D3E3, 0x8BFD8104, 0x80150000}};
  float out;
  float res;
  unsigned char b[] = {117, 69, 37, 204};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_13) {
  s21_decimal inp = {{0xC9C43E26, 0xF2F7B2F9, 0xBD1A240F, 0x80130000}};
  float out;
  float res;
  unsigned char b[] = {121, 106, 174, 207};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_14) {
  s21_decimal inp = {{0x69A906B9, 0xC4A864D4, 0x4E050321, 0x001B0000}};
  float out;
  float res;
  unsigned char b[] = {200, 42, 193, 65};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_15) {
  s21_decimal inp = {{0xB232F23A, 0x84D26424, 0xDDBB5AC2, 0x00180000}};
  float out;
  float res;
  unsigned char b[] = {88, 7, 134, 71};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_16) {
  s21_decimal inp = {{0x79566370, 0x54EA07AB, 0xB8DCA7AA, 0x800C0000}};
  float out;
  float res;
  unsigned char b[] = {2, 66, 75, 219};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_17) {
  s21_decimal inp = {{0x8C923DBD, 0xDFFC1B6F, 0x87B9269C, 0x80100000}};
  float out;
  float res;
  unsigned char b[] = {77, 127, 116, 212};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_18) {
  s21_decimal inp = {{0x72FCCC98, 0x060FC735, 0xB73720BC, 0x801A0000}};
  float out;
  float res;
  unsigned char b[] = {138, 193, 13, 196};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_19) {
  s21_decimal inp = {{0x907C0B42, 0xE67916DA, 0x35F3FFD2, 0x800B0000}};
  float out;
  float res;
  unsigned char b[] = {34, 78, 20, 220};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_20) {
  s21_decimal inp = {{0x242C0340, 0xB250CA7F, 0x89FE8E95, 0x80180000}};
  float out;
  float res;
  unsigned char b[] = {48, 211, 38, 199};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_21) {
  s21_decimal inp = {{0x014EA220, 0xB7AD051C, 0x0D508701, 0x80080000}};
  float out;
  float res;
  unsigned char b[] = {201, 246, 14, 224};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_22) {
  s21_decimal inp = {{0x38E718A3, 0xCAB449D9, 0xD0F8A513, 0x00140000}};
  float out;
  float res;
  unsigned char b[] = {143, 49, 26, 78};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_23) {
  s21_decimal inp = {{0x37EDE7F8, 0xBB589922, 0xA2AFDA50, 0x00000000}};
  float out;
  float res;
  unsigned char b[] = {218, 175, 34, 111};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_24) {
  s21_decimal inp = {{0xFECF6F14, 0xD45333F9, 0xCC21CC8E, 0x000D0000}};
  float out;
  float res;
  unsigned char b[] = {114, 142, 179, 89};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_25) {
  s21_decimal inp = {{0xE2D52AAF, 0x59B8DA4F, 0xBE98F917, 0x800C0000}};
  float out;
  float res;
  unsigned char b[] = {113, 144, 81, 219};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_26) {
  s21_decimal inp = {{0x5A97D33F, 0x2B0F3404, 0x92B28346, 0x80160000}};
  float out;
  float res;
  unsigned char b[] = {60, 141, 138, 202};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_27) {
  s21_decimal inp = {{0x4AD52403, 0xF01E1465, 0xE9917609, 0x00020000}};
  float out;
  float res;
  unsigned char b[] = {209, 123, 21, 108};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_28) {
  s21_decimal inp = {{0xA92B4816, 0x81DBB914, 0x07159A08, 0x80060000}};
  float out;
  float res;
  unsigned char b[] = {96, 182, 237, 226};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_29) {
  s21_decimal inp = {{0x1EE3126A, 0xCA369605, 0xB6571714, 0x000D0000}};
  float out;
  float res;
  unsigned char b[] = {93, 99, 160, 89};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_30) {
  s21_decimal inp = {{0xBE9E5341, 0x6FCB9428, 0xFC1F64C8, 0x00090000}};
  float out;
  float res;
  unsigned char b[] = {120, 91, 135, 96};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_31) {
  s21_decimal inp = {{0xDB7D1CC6, 0x01992778, 0xC6F60AF5, 0x80110000}};
  float out;
  float res;
  unsigned char b[] = {217, 93, 15, 211};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_32) {
  s21_decimal inp = {{0xF7BF7668, 0xF21C0219, 0x6A995E7D, 0x001B0000}};
  float out;
  float res;
  unsigned char b[] = {154, 246, 3, 66};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_33) {
  s21_decimal inp = {{0x3B1A2D10, 0x9A35796B, 0x6748152A, 0x80160000}};
  float out;
  float res;
  unsigned char b[] = {231, 23, 67, 202};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_34) {
  s21_decimal inp = {{0x5AC8F91F, 0x4044515E, 0x33AB73CE, 0x800B0000}};
  float out;
  float res;
  unsigned char b[] = {88, 7, 14, 220};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_35) {
  s21_decimal inp = {{0xFC08A727, 0x449320AA, 0x65D9FA0E, 0x80190000}};
  float out;
  float res;
  unsigned char b[] = {104, 2, 69, 197};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_36) {
  s21_decimal inp = {{0xF8204509, 0xA3A97D04, 0x63126AD3, 0x80130000}};
  float out;
  float res;
  unsigned char b[] = {103, 193, 54, 207};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_37) {
  s21_decimal inp = {{0x2847B8AC, 0xC4DCF191, 0x2F768935, 0x001A0000}};
  float out;
  float res;
  unsigned char b[] = {22, 228, 18, 67};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_38) {
  s21_decimal inp = {{0x52722755, 0xB2186E2C, 0x2ED16B94, 0x000B0000}};
  float out;
  float res;
  unsigned char b[] = {70, 177, 0, 92};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_39) {
  s21_decimal inp = {{0x91982C70, 0x2A0EBD71, 0x67DA389A, 0x80020000}};
  float out;
  float res;
  unsigned char b[] = {93, 238, 132, 235};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_40) {
  s21_decimal inp = {{0x0E5F4C67, 0xADF0B1D0, 0xC2B0BC59, 0x800C0000}};
  float out;
  float res;
  unsigned char b[] = {120, 16, 86, 219};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_41) {
  s21_decimal inp = {{0xC3C5D215, 0xEB04617A, 0x78FC2B0A, 0x000C0000}};
  float out;
  float res;
  unsigned char b[] = {66, 6, 5, 91};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_42) {
  s21_decimal inp = {{0x5E824675, 0xF46C5096, 0x98A4B926, 0x00140000}};
  float out;
  float res;
  unsigned char b[] = {17, 67, 225, 77};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_43) {
  s21_decimal inp = {{0x6F25C463, 0x952619A9, 0x04514A19, 0x000F0000}};
  float out;
  float res;
  unsigned char b[] = {64, 142, 155, 83};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_44) {
  s21_decimal inp = {{0x1F5C2AC7, 0x4483DDA6, 0x587744AC, 0x80130000}};
  float out;
  float res;
  unsigned char b[] = {214, 48, 35, 207};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_45) {
  s21_decimal inp = {{0xB95E241F, 0x5E8AF4E0, 0x0630CBC2, 0x00110000}};
  float out;
  float res;
  unsigned char b[] = {232, 190, 142, 80};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_46) {
  s21_decimal inp = {{0x62940062, 0x478C22D7, 0x82B2DAB4, 0x00080000}};
  float out;
  float res;
  unsigned char b[] = {183, 107, 175, 97};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_47) {
  s21_decimal inp = {{0x596C3A0F, 0x7D49DD79, 0x81E09B04, 0x00060000}};
  float out;
  float res;
  unsigned char b[] = {177, 47, 8, 101};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_48) {
  s21_decimal inp = {{0x83BC95FF, 0x97A86697, 0x46999CD6, 0x80030000}};
  float out;
  float res;
  unsigned char b[] = {194, 150, 144, 233};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_49) {
  s21_decimal inp = {{0x4CFE1633, 0x9089658C, 0x2A01327D, 0x80130000}};
  float out;
  float res;
  unsigned char b[] = {76, 248, 154, 206};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_50) {
  s21_decimal inp = {{0xA8D8F475, 0xEDE1ADCD, 0xF344E5C5, 0x00000000}};
  float out;
  float res;
  unsigned char b[] = {230, 68, 115, 111};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_51) {
  s21_decimal inp = {{0xBCC79F3B, 0xEBA22B32, 0x1C4F2F63, 0x80030000}};
  float out;
  float res;
  unsigned char b[] = {241, 232, 231, 232};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_52) {
  s21_decimal inp = {{0x7D97D51D, 0x5D017E33, 0xCD05B6F3, 0x80110000}};
  float out;
  float res;
  unsigned char b[] = {241, 187, 19, 211};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_53) {
  s21_decimal inp = {{0x7744A0CA, 0x2B6BE524, 0x92D9C86F, 0x80160000}};
  float out;
  float res;
  unsigned char b[] = {83, 178, 138, 202};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_54) {
  s21_decimal inp = {{0x964B4DF9, 0x2014A4AC, 0x343CF044, 0x80080000}};
  float out;
  float res;
  unsigned char b[] = {181, 57, 12, 225};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_56) {
  s21_decimal inp = {{0x3F76064B, 0x955D6770, 0x433C577D, 0x80150000}};
  float out;
  float res;
  unsigned char b[] = {126, 193, 158, 203};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_57) {
  s21_decimal inp = {{0xCECA5299, 0x689E9C87, 0x0680E0E5, 0x80070000}};
  float out;
  float res;
  unsigned char b[] = {62, 147, 46, 225};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_58) {
  s21_decimal inp = {{0x82DEC611, 0x2B265CAF, 0x996FE93F, 0x80080000}};
  float out;
  float res;
  unsigned char b[] = {155, 240, 205, 225};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_59) {
  s21_decimal inp = {{0x5FE647B3, 0xB0EED63C, 0x14B94F90, 0x000B0000}};
  float out;
  float res;
  unsigned char b[] = {130, 220, 99, 91};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_60) {
  s21_decimal inp = {{0xBA08DF0A, 0x7A3BF67A, 0x9F65A899, 0x800E0000}};
  float out;
  float res;
  unsigned char b[] = {220, 84, 224, 215};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_61) {
  s21_decimal inp = {{0x156046BB, 0x346AE0B5, 0xDF95CDA1, 0x000D0000}};
  float out;
  float res;
  unsigned char b[] = {231, 170, 196, 89};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_62) {
  s21_decimal inp = {{0x62903570, 0xF50A1E28, 0xC09164A4, 0x80090000}};
  float out;
  float res;
  unsigned char b[] = {172, 196, 78, 224};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_63) {
  s21_decimal inp = {{0x964749B6, 0xF484BF63, 0x83767E24, 0x801B0000}};
  float out;
  float res;
  unsigned char b[] = {62, 190, 34, 194};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_64) {
  s21_decimal inp = {{0x6E0686D4, 0xD6991D7B, 0xEA87BF6B, 0x00150000}};
  float out;
  float res;
  unsigned char b[] = {54, 113, 138, 76};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_65) {
  s21_decimal inp = {{0xBC81B9F1, 0x941CB208, 0x51EAC39E, 0x801C0000}};
  float out;
  float res;
  unsigned char b[] = {225, 64, 34, 192};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_66) {
  s21_decimal inp = {{0xAFE2BF2F, 0xAEC617B7, 0x52EE12BA, 0x00090000}};
  float out;
  float res;
  unsigned char b[] = {60, 23, 178, 95};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_67) {
  s21_decimal inp = {{0xADE8BDD4, 0x13489F39, 0xF2E22C12, 0x80140000}};
  float out;
  float res;
  unsigned char b[] = {101, 55, 51, 206};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_68) {
  s21_decimal inp = {{0x9BF7EA68, 0xDFEE6505, 0x2E74C9B2, 0x80190000}};
  float out;
  float res;
  unsigned char b[] = {255, 183, 179, 196};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_69) {
  s21_decimal inp = {{0x37112A30, 0x9062AB08, 0x7B005F68, 0x80170000}};
  float out;
  float res;
  unsigned char b[] = {226, 223, 185, 200};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_70) {
  s21_decimal inp = {{0x1A2C5F27, 0x9827EA0F, 0x9D558B04, 0x00070000}};
  float out;
  float res;
  unsigned char b[] = {65, 251, 131, 99};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_71) {
  s21_decimal inp = {{0x2216423F, 0xB0A5C634, 0x9C46AC32, 0x00040000}};
  float out;
  float res;
  unsigned char b[] = {119, 5, 128, 104};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_72) {
  s21_decimal inp = {{0xEAD0E7A4, 0xA9CE5F14, 0x451F44E8, 0x80100000}};
  float out;
  float res;
  unsigned char b[] = {237, 9, 249, 211};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_73) {
  s21_decimal inp = {{0x3E31BE9B, 0xBDF81497, 0x9AFA6D94, 0x80050000}};
  float out;
  float res;
  unsigned char b[] = {17, 34, 203, 230};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_74) {
  s21_decimal inp = {{0x99E5F628, 0x253F4CF6, 0x95BF7993, 0x80060000}};
  float out;
  float res;
  unsigned char b[] = {169, 5, 29, 229};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_75) {
  s21_decimal inp = {{0x99B4B002, 0xD06DCE50, 0x2C1AA4D1, 0x80090000}};
  float out;
  float res;
  unsigned char b[] = {242, 108, 61, 223};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_76) {
  s21_decimal inp = {{0xD0FC9503, 0x1C8019E7, 0x0A74F675, 0x00040000}};
  float out;
  float res;
  unsigned char b[] = {124, 15, 137, 102};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_77) {
  s21_decimal inp = {{0x6D48C80A, 0x5AF854D2, 0x14B061FA, 0x80050000}};
  float out;
  float res;
  unsigned char b[] = {153, 240, 88, 229};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_78) {
  s21_decimal inp = {{0xEBC1E1B1, 0x7F8634C1, 0xA3F3ED82, 0x00130000}};
  float out;
  float res;
  unsigned char b[] = {69, 56, 151, 79};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_79) {
  s21_decimal inp = {{0x5EE8F510, 0x0A9D549C, 0x72DBBE73, 0x801B0000}};
  float out;
  float res;
  unsigned char b[] = {18, 48, 14, 194};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_80) {
  s21_decimal inp = {{0xB50AEFE2, 0x085F3A29, 0x972A5F5E, 0x00110000}};
  float out;
  float res;
  unsigned char b[] = {59, 218, 217, 82};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_81) {
  s21_decimal inp = {{0x75F4A491, 0xEBED052A, 0x0A4D1332, 0x801C0000}};
  float out;
  float res;
  unsigned char b[] = {31, 58, 163, 190};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_82) {
  s21_decimal inp = {{0xF595F62C, 0x2705981D, 0x53284C6F, 0x00120000}};
  float out;
  float res;
  unsigned char b[] = {121, 191, 191, 80};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_83) {
  s21_decimal inp = {{0x18ED77FF, 0x613F5C4E, 0x9846451D, 0x80160000}};
  float out;
  float res;
  unsigned char b[] = {183, 209, 143, 202};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_84) {
  s21_decimal inp = {{0x3DFDE68F, 0xFC856D6E, 0x422905A5, 0x00070000}};
  float out;
  float res;
  unsigned char b[] = {55, 255, 221, 98};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_85) {
  s21_decimal inp = {{0xB7CFEC15, 0x84430830, 0x5372DC29, 0x001A0000}};
  float out;
  float res;
  unsigned char b[] = {109, 33, 129, 67};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_86) {
  s21_decimal inp = {{0x4BDFD961, 0xB24457EE, 0x029684E5, 0x800E0000}};
  float out;
  float res;
  unsigned char b[] = {107, 26, 233, 212};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_87) {
  s21_decimal inp = {{0x863022AC, 0x6044A0DB, 0x0E83C082, 0x80030000}};
  float out;
  float res;
  unsigned char b[] = {225, 206, 109, 232};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_88) {
  s21_decimal inp = {{0x1A5566A2, 0x82BBFD1E, 0xADD94E3A, 0x80090000}};
  float out;
  float res;
  unsigned char b[] = {53, 171, 58, 224};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_89) {
  s21_decimal inp = {{0x7AC09BB9, 0xBD4A5AD1, 0xA83F88DF, 0x80000000}};
  float out;
  float res;
  unsigned char b[] = {137, 63, 40, 239};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_90) {
  s21_decimal inp = {{0x0BB62DDA, 0xCE1631D5, 0xC1FBB4D6, 0x80070000}};
  float out;
  float res;
  unsigned char b[] = {149, 185, 162, 227};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_91) {
  s21_decimal inp = {{0xC71A266B, 0x3E661A6E, 0xBE3846EC, 0x00050000}};
  float out;
  float res;
  unsigned char b[] = {47, 83, 249, 102};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_92) {
  s21_decimal inp = {{0x29C7C101, 0x2B420C4D, 0xB564FBEE, 0x800C0000}};
  float out;
  float res;
  unsigned char b[] = {1, 114, 71, 219};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_93) {
  s21_decimal inp = {{0xBE6D79D8, 0xB6191D64, 0x74A30D9D, 0x00000000}};
  float out;
  float res;
  unsigned char b[] = {27, 70, 233, 110};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_94) {
  s21_decimal inp = {{0x1898AEF4, 0xF47F973C, 0x172434C7, 0x00180000}};
  float out;
  float res;
  unsigned char b[] = {104, 207, 223, 69};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_95) {
  s21_decimal inp = {{0x772A3402, 0x63BDD560, 0x91A2BA53, 0x80030000}};
  float out;
  float res;
  unsigned char b[] = {131, 33, 21, 234};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_96) {
  s21_decimal inp = {{0x3D8BCEDE, 0xA0DCB31B, 0x591082F6, 0x80020000}};
  float out;
  float res;
  unsigned char b[] = {79, 1, 100, 235};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_97) {
  s21_decimal inp = {{0xB60437B9, 0x2E67E6DC, 0x6D143D6D, 0x80050000}};
  float out;
  float res;
  unsigned char b[] = {220, 248, 142, 230};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_98) {
  s21_decimal inp = {{0x93B438A5, 0xC2CDD036, 0xE28C0D48, 0x00110000}};
  float out;
  float res;
  unsigned char b[] = {143, 62, 35, 83};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_99) {
  s21_decimal inp = {{0x72D58D6C, 0x44084E04, 0xECA89B41, 0x80150000}};
  float out;
  float res;
  unsigned char b[] = {215, 178, 139, 204};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_100) {
  s21_decimal inp = {{0xC24A8212, 0x2A03E2C9, 0x9CD9C9C3, 0x80170000}};
  float out;
  float res;
  unsigned char b[] = {176, 6, 237, 200};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_101) {
  s21_decimal inp = {{0x54109EE4, 0x9BCA65E1, 0x437ECFBF, 0x80130000}};
  float out;
  float res;
  unsigned char b[] = {144, 3, 249, 206};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_102) {
  s21_decimal inp = {{0xDF3E0E7A, 0xA62806FA, 0x5ECF1B2D, 0x80100000}};
  float out;
  float res;
  unsigned char b[] = {240, 202, 42, 212};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_103) {
  s21_decimal inp = {{0x1F4384A7, 0x82DB8B0F, 0x4EEF077B, 0x00120000}};
  float out;
  float res;
  unsigned char b[] = {61, 2, 182, 80};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_104) {
  s21_decimal inp = {{0x980AE2E7, 0x1485E93A, 0xAF8291AE, 0x80160000}};
  float out;
  float res;
  unsigned char b[] = {185, 195, 165, 202};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_105) {
  s21_decimal inp = {{0x93BB7694, 0xDAAF861F, 0x9FE200E0, 0x80180000}};
  float out;
  float res;
  unsigned char b[] = {87, 73, 65, 199};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_106) {
  s21_decimal inp = {{0x9A06321B, 0x6F7B6E75, 0x26ACA492, 0x000B0000}};
  float out;
  float res;
  unsigned char b[] = {92, 157, 212, 91};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_107) {
  s21_decimal inp = {{0x813B3C46, 0x8AAAB39C, 0x37BC3268, 0x80090000}};
  float out;
  float res;
  unsigned char b[] = {112, 97, 111, 223};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_108) {
  s21_decimal inp = {{0x7A88B80D, 0x2CDA24AA, 0x14628E6F, 0x00060000}};
  float out;
  float res;
  unsigned char b[] = {109, 0, 171, 99};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_109) {
  s21_decimal inp = {{0x1DD04C0B, 0xD15EBCB8, 0x1F711C54, 0x801B0000}};
  float out;
  float res;
  unsigned char b[] = {68, 177, 27, 193};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_111) {
  s21_decimal inp = {{0x2395E520, 0xC974DAF6, 0x72D484A2, 0x00160000}};
  float out;
  float res;
  unsigned char b[] = {116, 232, 88, 74};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_113) {
  s21_decimal inp = {{0xA843609D, 0xD47E2361, 0x93BB5A47, 0x00040000}};
  float out;
  float res;
  unsigned char b[] = {58, 11, 114, 104};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_114) {
  s21_decimal inp = {{0x96271372, 0x1F44B2FF, 0xE8E63D9C, 0x80160000}};
  float out;
  float res;
  unsigned char b[] = {157, 247, 219, 202};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_115) {
  s21_decimal inp = {{0xE017F21B, 0x9E519237, 0x85EEDC30, 0x80190000}};
  float out;
  float res;
  unsigned char b[] = {55, 136, 129, 197};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_116) {
  s21_decimal inp = {{0x5BAB4309, 0x1B287FA3, 0xC8F93B6F, 0x800C0000}};
  float out;
  float res;
  unsigned char b[] = {7, 249, 92, 219};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_117) {
  s21_decimal inp = {{0x2363EDFB, 0x00471863, 0xF7DA8F28, 0x80080000}};
  float out;
  float res;
  unsigned char b[] = {243, 84, 38, 226};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_118) {
  s21_decimal inp = {{0x73A34652, 0x0137038E, 0x09670BBA, 0x80100000}};
  float out;
  float res;
  unsigned char b[] = {48, 129, 135, 210};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_119) {
  s21_decimal inp = {{0x891CEC19, 0x0D2F350F, 0xF4293117, 0x00040000}};
  float out;
  float res;
  unsigned char b[] = {65, 4, 200, 104};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_120) {
  s21_decimal inp = {{0x1ED2469E, 0xFDF5D5BB, 0x21364F38, 0x00180000}};
  float out;
  float res;
  unsigned char b[] = {165, 154, 32, 70};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_121) {
  s21_decimal inp = {{0x12EE60FE, 0xDB69CF1F, 0x8DE0C094, 0x00160000}};
  float out;
  float res;
  unsigned char b[] = {251, 255, 133, 74};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_122) {
  s21_decimal inp = {{0x7AB3E723, 0x74633E81, 0x558C134C, 0x00130000}};
  float out;
  float res;
  unsigned char b[] = {130, 206, 29, 79};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_123) {
  s21_decimal inp = {{0x9A7B2920, 0x230742ED, 0x87870AFF, 0x80190000}};
  float out;
  float res;
  unsigned char b[] = {253, 18, 131, 197};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_124) {
  s21_decimal inp = {{0x5B9A36A4, 0xE0A3B8C4, 0x8AEBF918, 0x801B0000}};
  float out;
  float res;
  unsigned char b[] = {17, 250, 43, 194};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_125) {
  s21_decimal inp = {{0x7F910B27, 0xFDF2AB8F, 0xC728BC89, 0x00170000}};
  float out;
  float res;
  unsigned char b[] = {250, 122, 22, 73};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_126) {
  s21_decimal inp = {{0xEA4DFF58, 0x5514E48E, 0xD920C3FD, 0x801A0000}};
  float out;
  float res;
  unsigned char b[] = {161, 254, 39, 196};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_127) {
  s21_decimal inp = {{0x039C1477, 0x47C65D09, 0xE98D5156, 0x801A0000}};
  float out;
  float res;
  unsigned char b[] = {190, 179, 52, 196};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_128) {
  s21_decimal inp = {{0x3F308E94, 0x5CFE318F, 0xFA16490C, 0x800E0000}};
  float out;
  float res;
  unsigned char b[] = {174, 251, 47, 216};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_129) {
  s21_decimal inp = {{0xD119B4E6, 0xD6577BB1, 0x5016997B, 0x80190000}};
  float out;
  float res;
  unsigned char b[] = {204, 233, 26, 197};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_130) {
  s21_decimal inp = {{0xC864A897, 0x4E07C663, 0x1A2766D5, 0x001C0000}};
  float out;
  float res;
  unsigned char b[] = {112, 54, 79, 63};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_131) {
  s21_decimal inp = {{0xC2D2982A, 0xF4E4E4A1, 0x652D8E6B, 0x80010000}};
  float out;
  float res;
  unsigned char b[] = {125, 226, 33, 237};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_132) {
  s21_decimal inp = {{0x75DC67C9, 0xAD1074E7, 0x1168113A, 0x800D0000}};
  float out;
  float res;
  unsigned char b[] = {146, 249, 244, 215};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_133) {
  s21_decimal inp = {{0xC9AEE799, 0x7BF5003D, 0xB8739C39, 0x00140000}};
  float out;
  float res;
  unsigned char b[] = {236, 25, 8, 78};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_134) {
  s21_decimal inp = {{0x42ED2385, 0xB5FB72CE, 0x4A17BE10, 0x000B0000}};
  float out;
  float res;
  unsigned char b[] = {34, 170, 75, 92};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_135) {
  s21_decimal inp = {{0xE8CABC25, 0x0C4759C9, 0xA8EF98A0, 0x800F0000}};
  float out;
  float res;
  unsigned char b[] = {119, 52, 62, 214};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_136) {
  s21_decimal inp = {{0x9FD32BBA, 0xEFE97B57, 0x526C0934, 0x800B0000}};
  float out;
  float res;
  unsigned char b[] = {86, 143, 98, 220};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_137) {
  s21_decimal inp = {{0xD057B769, 0x17DF119E, 0x24F1C447, 0x80000000}};
  float out;
  float res;
  unsigned char b[] = {17, 199, 19, 238};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_138) {
  s21_decimal inp = {{0xCF284F1A, 0x0321B737, 0x91A538D8, 0x00010000}};
  float out;
  float res;
  unsigned char b[] = {91, 8, 105, 109};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_140) {
  s21_decimal inp = {{0x3EC27B9E, 0x2BF90BD0, 0x9644D7FE, 0x00120000}};
  float out;
  float res;
  unsigned char b[] = {143, 63, 45, 81};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_141) {
  s21_decimal inp = {{0x2104A198, 0x84914148, 0x807CBD8C, 0x00130000}};
  float out;
  float res;
  unsigned char b[] = {101, 4, 109, 79};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_142) {
  s21_decimal inp = {{0x7BD39056, 0xFB1342C1, 0x8319983A, 0x800C0000}};
  float out;
  float res;
  unsigned char b[] = {93, 37, 16, 219};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_143) {
  s21_decimal inp = {{0x718C2C5A, 0x25201C58, 0x377D0530, 0x001B0000}};
  float out;
  float res;
  unsigned char b[] = {237, 97, 137, 65};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_144) {
  s21_decimal inp = {{0x6E045AD4, 0x44100256, 0x24F9E423, 0x80110000}};
  float out;
  float res;
  unsigned char b[] = {38, 39, 213, 209};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_145) {
  s21_decimal inp = {{0x4F11C11D, 0x08777620, 0x840726BE, 0x00130000}};
  float out;
  float res;
  unsigned char b[] = {110, 140, 115, 79};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_146) {
  s21_decimal inp = {{0x956EA50F, 0x05656E0E, 0xFEFDCC9F, 0x80080000}};
  float out;
  float res;
  unsigned char b[] = {49, 31, 43, 226};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_147) {
  s21_decimal inp = {{0xFAA82695, 0x48017AE0, 0x35BC4837, 0x00140000}};
  float out;
  float res;
  unsigned char b[] = {97, 153, 30, 77};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_148) {
  s21_decimal inp = {{0x7AF193AA, 0xEA851EEF, 0xC2A82E7A, 0x80190000}};
  float out;
  float res;
  unsigned char b[] = {187, 66, 188, 197};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_149) {
  s21_decimal inp = {{0x1943A81E, 0x6918893C, 0x269EDF69, 0x000C0000}};
  float out;
  float res;
  unsigned char b[] = {237, 218, 41, 90};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_150) {
  s21_decimal inp = {{0xC56507A7, 0xBE36B94C, 0x640E68A9, 0x001B0000}};
  float out;
  float res;
  unsigned char b[] = {52, 186, 247, 65};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_151) {
  s21_decimal inp = {{0x2411798C, 0x47CDA6B4, 0x02CC6063, 0x001A0000}};
  float out;
  float res;
  unsigned char b[] = {63, 145, 10, 65};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_152) {
  s21_decimal inp = {{0x1566B93F, 0x0DC541B0, 0x5A4B2FEF, 0x80040000}};
  float out;
  float res;
  unsigned char b[] = {236, 239, 19, 232};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_153) {
  s21_decimal inp = {{0xEE1E6881, 0x46298269, 0x824715E0, 0x00010000}};
  float out;
  float res;
  unsigned char b[] = {189, 113, 80, 109};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_154) {
  s21_decimal inp = {{0xB18AAB28, 0xBE76ED9D, 0xAFD7757F, 0x80180000}};
  float out;
  float res;
  unsigned char b[] = {90, 148, 84, 199};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_155) {
  s21_decimal inp = {{0xC701BDD5, 0x77FFCA87, 0xEF1491CA, 0x00080000}};
  float out;
  float res;
  unsigned char b[] = {177, 113, 32, 98};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_156) {
  s21_decimal inp = {{0x6837B5E4, 0x8D2D2958, 0x5157B95D, 0x80040000}};
  float out;
  float res;
  unsigned char b[] = {151, 69, 5, 232};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_157) {
  s21_decimal inp = {{0x43CCDE17, 0xF8624C1F, 0xF86622E1, 0x00180000}};
  float out;
  float res;
  unsigned char b[] = {225, 37, 150, 71};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_158) {
  s21_decimal inp = {{0x6B569594, 0xCEB0F0DD, 0x740C89F3, 0x001B0000}};
  float out;
  float res;
  unsigned char b[] = {100, 169, 15, 66};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_159) {
  s21_decimal inp = {{0x0D644908, 0x1EBACFA9, 0x28F2CC75, 0x00070000}};
  float out;
  float res;
  unsigned char b[] = {111, 102, 137, 98};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_160) {
  s21_decimal inp = {{0xB626644F, 0xFFFEBE83, 0xA098F3FB, 0x80100000}};
  float out;
  float res;
  unsigned char b[] = {66, 167, 144, 212};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_161) {
  s21_decimal inp = {{0x48D4EFD9, 0xA6CD0425, 0x0C3BFBA3, 0x80060000}};
  float out;
  float res;
  unsigned char b[] = {244, 65, 77, 227};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_162) {
  s21_decimal inp = {{0x7782BD5F, 0x12EDBCA5, 0x23F15B29, 0x00060000}};
  float out;
  float res;
  unsigned char b[] = {73, 193, 22, 100};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_163) {
  s21_decimal inp = {{0x46E8DA16, 0xC853EB20, 0xFEBC3FCB, 0x000C0000}};
  float out;
  float res;
  unsigned char b[] = {208, 10, 140, 91};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_164) {
  s21_decimal inp = {{0xA03271F4, 0xC9884B5D, 0x8F13A87D, 0x80000000}};
  float out;
  float res;
  unsigned char b[] = {168, 19, 15, 239};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_165) {
  s21_decimal inp = {{0x820F0903, 0xAEB1D324, 0xAD28BBF0, 0x000B0000}};
  float out;
  float res;
  unsigned char b[] = {243, 252, 237, 92};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_166) {
  s21_decimal inp = {{0x9D6787D2, 0x6AE80F59, 0x76237903, 0x00010000}};
  float out;
  float res;
  unsigned char b[] = {142, 5, 61, 109};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_167) {
  s21_decimal inp = {{0xFCB5AB42, 0xB34944DF, 0x4B012761, 0x00160000}};
  float out;
  float res;
  unsigned char b[] = {244, 173, 13, 74};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_168) {
  s21_decimal inp = {{0x8E84D8C0, 0xCFFAB6CE, 0xFA4B672C, 0x00120000}};
  float out;
  float res;
  unsigned char b[] = {244, 72, 144, 81};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_169) {
  s21_decimal inp = {{0x1C020613, 0xA0C30D9A, 0x9800BE8A, 0x80130000}};
  float out;
  float res;
  unsigned char b[] = {172, 50, 140, 207};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_171) {
  s21_decimal inp = {{0x355B6E56, 0xAC4725C3, 0x32E24201, 0x00070000}};
  float out;
  float res;
  unsigned char b[] = {222, 188, 170, 98};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_172) {
  s21_decimal inp = {{0x7545F943, 0x5B83343F, 0x11043D40, 0x80020000}};
  float out;
  float res;
  unsigned char b[] = {228, 63, 46, 234};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_173) {
  s21_decimal inp = {{0x2DEFCA7D, 0x9B3C5812, 0xBBE2B68F, 0x80090000}};
  float out;
  float res;
  unsigned char b[] = {154, 189, 73, 224};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_174) {
  s21_decimal inp = {{0x44A38ED5, 0xDC5BFA1A, 0xC7B22DE2, 0x00190000}};
  float out;
  float res;
  unsigned char b[] = {87, 34, 193, 69};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_175) {
  s21_decimal inp = {{0xA7792C4A, 0xC9FA5DA7, 0x0EB7D4B4, 0x00180000}};
  float out;
  float res;
  unsigned char b[] = {57, 88, 142, 69};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_176) {
  s21_decimal inp = {{0xADEBDDE1, 0x840E0CBB, 0x2D28655A, 0x800A0000}};
  float out;
  float res;
  unsigned char b[] = {56, 41, 155, 221};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_177) {
  s21_decimal inp = {{0x2F7E2550, 0x0A00FC79, 0xB904EDFA, 0x000A0000}};
  float out;
  float res;
  unsigned char b[] = {42, 238, 158, 94};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_178) {
  s21_decimal inp = {{0x72A164A7, 0x8EB350F3, 0x55223203, 0x00100000}};
  float out;
  float res;
  unsigned char b[] = {239, 92, 25, 84};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_179) {
  s21_decimal inp = {{0x72318691, 0x199E33EF, 0x4B3C4C32, 0x00010000}};
  float out;
  float res;
  unsigned char b[] = {244, 192, 240, 108};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_180) {
  s21_decimal inp = {{0x8B1BE45E, 0x0D4B618F, 0x2A28AE94, 0x001B0000}};
  float out;
  float res;
  unsigned char b[] = {198, 194, 80, 65};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_181) {
  s21_decimal inp = {{0xE879B612, 0x9CBFAD6F, 0x73659876, 0x00090000}};
  float out;
  float res;
  unsigned char b[] = {24, 208, 247, 95};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_183) {
  s21_decimal inp = {{0xD8D541B0, 0xCFEC73DA, 0xBC63A5B4, 0x00100000}};
  float out;
  float res;
  unsigned char b[] = {154, 175, 169, 84};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_184) {
  s21_decimal inp = {{0x0C739839, 0x10711440, 0x8C158E6A, 0x00000000}};
  float out;
  float res;
  unsigned char b[] = {142, 21, 12, 111};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_185) {
  s21_decimal inp = {{0xD15B67CB, 0x0D092D16, 0xB402DB81, 0x80080000}};
  float out;
  float res;
  unsigned char b[] = {93, 155, 241, 225};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_187) {
  s21_decimal inp = {{0x2B56D62A, 0x0A1A642B, 0xD568A5CE, 0x00170000}};
  float out;
  float res;
  unsigned char b[] = {67, 63, 33, 73};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_188) {
  s21_decimal inp = {{0x825515F7, 0xCB1A44C9, 0x17B330AC, 0x00130000}};
  float out;
  float res;
  unsigned char b[] = {246, 223, 46, 78};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_189) {
  s21_decimal inp = {{0x05D9A631, 0x051F58CF, 0x6BE8E43C, 0x00100000}};
  float out;
  float res;
  unsigned char b[] = {149, 100, 66, 84};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_190) {
  s21_decimal inp = {{0x07B4DC8C, 0x5BE7C6F8, 0x007D5213, 0x80120000}};
  float out;
  float res;
  unsigned char b[] = {29, 124, 16, 205};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_191) {
  s21_decimal inp = {{0xFFFC8235, 0xECF599B3, 0xBA9FED35, 0x801B0000}};
  float out;
  float res;
  unsigned char b[] = {188, 7, 103, 194};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_192) {
  s21_decimal inp = {{0x6DD38C46, 0x4912BA1B, 0x7D75AD36, 0x001B0000}};
  float out;
  float res;
  unsigned char b[] = {194, 79, 27, 66};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_193) {
  s21_decimal inp = {{0x798349B8, 0xF28CFB5F, 0x18169F3B, 0x00040000}};
  float out;
  float res;
  unsigned char b[] = {147, 221, 29, 103};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_194) {
  s21_decimal inp = {{0x16FB9330, 0x9645299E, 0xFF112189, 0x00130000}};
  float out;
  float res;
  unsigned char b[] = {249, 65, 235, 79};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_195) {
  s21_decimal inp = {{0x3D589BAC, 0xB1D315B6, 0x9BFC9B26, 0x00020000}};
  float out;
  float res;
  unsigned char b[] = {188, 169, 199, 107};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_196) {
  s21_decimal inp = {{0x6865999B, 0xE8EC5590, 0x70E71DC4, 0x000A0000}};
  float out;
  float res;
  unsigned char b[] = {45, 247, 65, 94};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_197) {
  s21_decimal inp = {{0x5385213D, 0x475A645D, 0x0C71AF09, 0x00020000}};
  float out;
  float res;
  unsigned char b[] = {206, 218, 254, 105};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_198) {
  s21_decimal inp = {{0x58065265, 0xB4F7EE9A, 0x08BCD4A6, 0x00180000}};
  float out;
  float res;
  unsigned char b[] = {153, 2, 41, 69};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_199) {
  s21_decimal inp = {{0xCD31FC17, 0x5A5A76D3, 0x10D71E39, 0x000F0000}};
  float out;
  float res;
  unsigned char b[] = {25, 175, 151, 84};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_200) {
  s21_decimal inp = {{0x3A5E8EDC, 0xB8C9DEB2, 0x91ED46EC, 0x80100000}};
  float out;
  float res;
  unsigned char b[] = {114, 112, 131, 212};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_201) {
  s21_decimal inp = {{0x57057202, 0x1C04525A, 0xAA05FD08, 0x001B0000}};
  float out;
  float res;
  unsigned char b[] = {144, 122, 82, 66};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_202) {
  s21_decimal inp = {{0xF4B5A3A7, 0xC1659D12, 0x01173D80, 0x000C0000}};
  float out;
  float res;
  unsigned char b[] = {146, 131, 153, 87};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_203) {
  s21_decimal inp = {{0x076B7BC5, 0xC9D7FC98, 0xB718F01B, 0x80080000}};
  float out;
  float res;
  unsigned char b[] = {203, 191, 245, 225};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_204) {
  s21_decimal inp = {{0xA9C6D22A, 0x36566129, 0x04FDD653, 0x00020000}};
  float out;
  float res;
  unsigned char b[] = {54, 116, 76, 105};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_205) {
  s21_decimal inp = {{0x8B22BAE1, 0xF9C566B7, 0x7C55DF3B, 0x00190000}};
  float out;
  float res;
  unsigned char b[] = {237, 127, 112, 69};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_206) {
  s21_decimal inp = {{0x6ED79205, 0xACE364F4, 0x4788846C, 0x00170000}};
  float out;
  float res;
  unsigned char b[] = {48, 50, 88, 72};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_207) {
  s21_decimal inp = {{0x5D9A802E, 0x81EE49EF, 0x555EF986, 0x00130000}};
  float out;
  float res;
  unsigned char b[] = {80, 123, 29, 79};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_208) {
  s21_decimal inp = {{0x5D06F69F, 0x10715061, 0x60A19E47, 0x80090000}};
  float out;
  float res;
  unsigned char b[] = {161, 131, 207, 223};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_209) {
  s21_decimal inp = {{0x697A9131, 0x854144DD, 0x1AD993C1, 0x800B0000}};
  float out;
  float res;
  unsigned char b[] = {228, 155, 147, 219};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_210) {
  s21_decimal inp = {{0xAA0BFCD7, 0x3C533D32, 0xC45334E9, 0x000B0000}};
  float out;
  float res;
  unsigned char b[] = {221, 233, 6, 93};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_211) {
  s21_decimal inp = {{0xF18966A4, 0x0321DB67, 0xCBDEF14F, 0x00000000}};
  float out;
  float res;
  unsigned char b[] = {241, 222, 75, 111};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_212) {
  s21_decimal inp = {{0x51008633, 0x3A7B5D04, 0xACA7EAD3, 0x00180000}};
  float out;
  float res;
  unsigned char b[] = {108, 186, 80, 71};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_213) {
  s21_decimal inp = {{0x80367FDB, 0x5AAC5D0A, 0xE56CE838, 0x00160000}};
  float out;
  float res;
  unsigned char b[] = {170, 175, 216, 74};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_214) {
  s21_decimal inp = {{0x7508EDE3, 0x7B681F64, 0x18F7D41C, 0x80010000}};
  float out;
  float res;
  unsigned char b[] = {180, 203, 31, 236};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_215) {
  s21_decimal inp = {{0xCE5ED74A, 0x14964FA3, 0x03068589, 0x00030000}};
  float out;
  float res;
  unsigned char b[] = {13, 71, 70, 103};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_216) {
  s21_decimal inp = {{0xB525DE0C, 0xF0A6F4F4, 0x6C1D229C, 0x80190000}};
  float out;
  float res;
  unsigned char b[] = {94, 31, 81, 197};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_217) {
  s21_decimal inp = {{0xDE05A190, 0x3C18E013, 0xE5603F1C, 0x800F0000}};
  float out;
  float res;
  unsigned char b[] = {143, 32, 129, 214};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_218) {
  s21_decimal inp = {{0x05B0CC23, 0xC73671C3, 0x4259632A, 0x80070000}};
  float out;
  float res;
  unsigned char b[] = {129, 161, 222, 226};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_219) {
  s21_decimal inp = {{0xE27AEB57, 0xDC89B554, 0xB7B727EC, 0x80030000}};
  float out;
  float res;
  unsigned char b[] = {231, 31, 60, 234};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_220) {
  s21_decimal inp = {{0x1AF18573, 0xE9CC6593, 0x600E7000, 0x000A0000}};
  float out;
  float res;
  unsigned char b[] = {13, 6, 37, 94};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_221) {
  s21_decimal inp = {{0xC9F1B3A1, 0xD3BB5805, 0x5606FC24, 0x80070000}};
  float out;
  float res;
  unsigned char b[] = {112, 84, 16, 227};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_222) {
  s21_decimal inp = {{0xA7ACEE6F, 0x3A5A055D, 0x671D3EE8, 0x00050000}};
  float out;
  float res;
  unsigned char b[] = {102, 39, 135, 102};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_223) {
  s21_decimal inp = {{0x3289C5D3, 0x146819D6, 0xEC4346D7, 0x800C0000}};
  float out;
  float res;
  unsigned char b[] = {8, 227, 129, 219};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_224) {
  s21_decimal inp = {{0x8DFB6090, 0xA366B2EA, 0x6A4FD21D, 0x00040000}};
  float out;
  float res;
  unsigned char b[] = {103, 46, 46, 104};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_225) {
  s21_decimal inp = {{0x113AFCE8, 0xAA513450, 0x4DF41124, 0x00060000}};
  float out;
  float res;
  unsigned char b[] = {232, 122, 163, 100};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_226) {
  s21_decimal inp = {{0xF5E6E72F, 0x23A25118, 0x3B338780, 0x800D0000}};
  float out;
  float res;
  unsigned char b[] = {199, 75, 208, 216};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_227) {
  s21_decimal inp = {{0x4593A2F0, 0x6379871A, 0xEF9AE19D, 0x801A0000}};
  float out;
  float res;
  unsigned char b[] = {169, 98, 57, 196};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_228) {
  s21_decimal inp = {{0x77A23CC0, 0xB758676F, 0xBFBCB7F3, 0x80160000}};
  float out;
  float res;
  unsigned char b[] = {53, 23, 181, 202};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_229) {
  s21_decimal inp = {{0x42FCBC43, 0x85ABADC7, 0xCC755AD6, 0x80020000}};
  float out;
  float res;
  unsigned char b[] = {120, 218, 2, 236};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_230) {
  s21_decimal inp = {{0xA8EC9D22, 0x58B538E0, 0x9EB8C51C, 0x00080000}};
  float out;
  float res;
  unsigned char b[] = {97, 8, 213, 97};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_231) {
  s21_decimal inp = {{0xFF70809D, 0xF0D94DC4, 0x302EE8D4, 0x80030000}};
  float out;
  float res;
  unsigned char b[] = {202, 91, 69, 233};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_232) {
  s21_decimal inp = {{0x4B01D52A, 0x2D0D8C4D, 0x2033A607, 0x00040000}};
  float out;
  float res;
  unsigned char b[] = {147, 9, 83, 103};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_233) {
  s21_decimal inp = {{0x4254483E, 0xF0F81DB5, 0x29165315, 0x80170000}};
  float out;
  float res;
  unsigned char b[] = {95, 91, 248, 199};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_234) {
  s21_decimal inp = {{0x00D38CF3, 0x855B87E4, 0xA3938500, 0x001A0000}};
  float out;
  float res;
  unsigned char b[] = {58, 31, 253, 67};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_235) {
  s21_decimal inp = {{0x5DFEB622, 0x8C606AA3, 0x0053DCE2, 0x800A0000}};
  float out;
  float res;
  unsigned char b[] = {67, 19, 16, 218};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_236) {
  s21_decimal inp = {{0x0699459D, 0x0120E9B3, 0x97A2561B, 0x00150000}};
  float out;
  float res;
  unsigned char b[] = {154, 4, 51, 76};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_237) {
  s21_decimal inp = {{0xB575D0D6, 0x37A7E8DD, 0xF11A65AE, 0x80050000}};
  float out;
  float res;
  unsigned char b[] = {100, 2, 30, 231};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_238) {
  s21_decimal inp = {{0x07862128, 0xF3265479, 0x7D21E4C4, 0x00130000}};
  float out;
  float res;
  unsigned char b[] = {27, 212, 102, 79};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_239) {
  s21_decimal inp = {{0x59DCBE94, 0x74B217AF, 0x80A857F2, 0x000D0000}};
  float out;
  float res;
  unsigned char b[] = {58, 86, 98, 89};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_240) {
  s21_decimal inp = {{0x6BC83CEC, 0x0BEE0D34, 0x8D81E7B5, 0x001B0000}};
  float out;
  float res;
  unsigned char b[] = {128, 45, 47, 66};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_241) {
  s21_decimal inp = {{0xEDB1BC68, 0x9514776A, 0xFE5490E6, 0x80190000}};
  float out;
  float res;
  unsigned char b[] = {36, 249, 245, 197};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_242) {
  s21_decimal inp = {{0x31FBFB1D, 0xB8FADA2D, 0x08D29796, 0x00110000}};
  float out;
  float res;
  unsigned char b[] = {151, 111, 203, 80};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_243) {
  s21_decimal inp = {{0xFF5AB4B9, 0xCFDE055E, 0x0E1F7E3C, 0x00150000}};
  float out;
  float res;
  unsigned char b[] = {94, 99, 133, 74};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_244) {
  s21_decimal inp = {{0x6F959CB0, 0x1352B598, 0x0ECF2D2A, 0x80040000}};
  float out;
  float res;
  unsigned char b[] = {181, 27, 194, 230};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_245) {
  s21_decimal inp = {{0x96B422D1, 0x5A015DAF, 0x32742F66, 0x00180000}};
  float out;
  float res;
  unsigned char b[] = {215, 250, 115, 70};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_246) {
  s21_decimal inp = {{0x03087F41, 0x1618A32F, 0x561EF302, 0x00030000}};
  float out;
  float res;
  unsigned char b[] = {39, 96, 176, 105};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_247) {
  s21_decimal inp = {{0xFD1B6345, 0xC9022F9A, 0x1E1CD223, 0x80070000}};
  float out;
  float res;
  unsigned char b[] = {5, 21, 74, 226};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_248) {
  s21_decimal inp = {{0xAE3C2ABD, 0xE0026BF8, 0xD6703031, 0x80100000}};
  float out;
  float res;
  unsigned char b[] = {23, 38, 193, 212};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_249) {
  s21_decimal inp = {{0x4846F3EF, 0xF9AA2CD3, 0x32211DE5, 0x00060000}};
  float out;
  float res;
  unsigned char b[] = {254, 65, 82, 100};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST

START_TEST(s21_to_float_250) {
  s21_decimal inp = {{0xD56AC3CF, 0xFD1C03E9, 0xCC9CD0D9, 0x801C0000}};
  float out;
  float res;
  unsigned char b[] = {115, 163, 202, 192};
  memcpy(&res, &b, 4);
  int error = s21_from_decimal_to_float(inp, &out);
  ck_assert_float_eq(out, res);
  ck_assert_int_eq(error, 0);
}
END_TEST
Suite *test_from_decimal_to_float(void) {
  Suite *s = suite_create("\033[45m-=S21_FROM_DECIMAL_TO_FLOAT=-\033[0m");
  TCase *tc = tcase_create("s21_to_float_tc");

  tcase_add_test(tc, s21_to_float_0);
  tcase_add_test(tc, s21_to_float_1);
  tcase_add_test(tc, s21_to_float_2);
  tcase_add_test(tc, s21_to_float_3);
  tcase_add_test(tc, s21_to_float_4);
  tcase_add_test(tc, s21_to_float_5);
  tcase_add_test(tc, s21_to_float_6);
  tcase_add_test(tc, s21_to_float_7);
  tcase_add_test(tc, s21_to_float_8);
  tcase_add_test(tc, s21_to_float_9);
  tcase_add_test(tc, s21_to_float_10);
  tcase_add_test(tc, s21_to_float_11);
  tcase_add_test(tc, s21_to_float_12);
  tcase_add_test(tc, s21_to_float_13);
  tcase_add_test(tc, s21_to_float_14);
  tcase_add_test(tc, s21_to_float_15);
  tcase_add_test(tc, s21_to_float_16);
  tcase_add_test(tc, s21_to_float_17);
  tcase_add_test(tc, s21_to_float_18);
  tcase_add_test(tc, s21_to_float_19);
  tcase_add_test(tc, s21_to_float_20);
  tcase_add_test(tc, s21_to_float_21);
  tcase_add_test(tc, s21_to_float_22);
  tcase_add_test(tc, s21_to_float_23);
  tcase_add_test(tc, s21_to_float_24);
  tcase_add_test(tc, s21_to_float_25);
  tcase_add_test(tc, s21_to_float_26);
  tcase_add_test(tc, s21_to_float_27);
  tcase_add_test(tc, s21_to_float_28);
  tcase_add_test(tc, s21_to_float_29);
  tcase_add_test(tc, s21_to_float_30);
  tcase_add_test(tc, s21_to_float_31);
  tcase_add_test(tc, s21_to_float_32);
  tcase_add_test(tc, s21_to_float_33);
  tcase_add_test(tc, s21_to_float_34);
  tcase_add_test(tc, s21_to_float_35);
  tcase_add_test(tc, s21_to_float_36);
  tcase_add_test(tc, s21_to_float_37);
  tcase_add_test(tc, s21_to_float_38);
  tcase_add_test(tc, s21_to_float_39);
  tcase_add_test(tc, s21_to_float_40);
  tcase_add_test(tc, s21_to_float_41);
  tcase_add_test(tc, s21_to_float_42);
  tcase_add_test(tc, s21_to_float_43);
  tcase_add_test(tc, s21_to_float_44);
  tcase_add_test(tc, s21_to_float_45);
  tcase_add_test(tc, s21_to_float_46);
  tcase_add_test(tc, s21_to_float_47);
  tcase_add_test(tc, s21_to_float_48);
  tcase_add_test(tc, s21_to_float_49);
  tcase_add_test(tc, s21_to_float_50);
  tcase_add_test(tc, s21_to_float_51);
  tcase_add_test(tc, s21_to_float_52);
  tcase_add_test(tc, s21_to_float_53);
  tcase_add_test(tc, s21_to_float_54);
  tcase_add_test(tc, s21_to_float_56);
  tcase_add_test(tc, s21_to_float_57);
  tcase_add_test(tc, s21_to_float_58);
  tcase_add_test(tc, s21_to_float_59);
  tcase_add_test(tc, s21_to_float_60);
  tcase_add_test(tc, s21_to_float_61);
  tcase_add_test(tc, s21_to_float_62);
  tcase_add_test(tc, s21_to_float_63);
  tcase_add_test(tc, s21_to_float_64);
  tcase_add_test(tc, s21_to_float_65);
  tcase_add_test(tc, s21_to_float_66);
  tcase_add_test(tc, s21_to_float_67);
  tcase_add_test(tc, s21_to_float_68);
  tcase_add_test(tc, s21_to_float_69);
  tcase_add_test(tc, s21_to_float_70);
  tcase_add_test(tc, s21_to_float_71);
  tcase_add_test(tc, s21_to_float_72);
  tcase_add_test(tc, s21_to_float_73);
  tcase_add_test(tc, s21_to_float_74);
  tcase_add_test(tc, s21_to_float_75);
  tcase_add_test(tc, s21_to_float_76);
  tcase_add_test(tc, s21_to_float_77);
  tcase_add_test(tc, s21_to_float_78);
  tcase_add_test(tc, s21_to_float_79);
  tcase_add_test(tc, s21_to_float_80);
  tcase_add_test(tc, s21_to_float_81);
  tcase_add_test(tc, s21_to_float_82);
  tcase_add_test(tc, s21_to_float_83);
  tcase_add_test(tc, s21_to_float_84);
  tcase_add_test(tc, s21_to_float_85);
  tcase_add_test(tc, s21_to_float_86);
  tcase_add_test(tc, s21_to_float_87);
  tcase_add_test(tc, s21_to_float_88);
  tcase_add_test(tc, s21_to_float_89);
  tcase_add_test(tc, s21_to_float_90);
  tcase_add_test(tc, s21_to_float_91);
  tcase_add_test(tc, s21_to_float_92);
  tcase_add_test(tc, s21_to_float_93);
  tcase_add_test(tc, s21_to_float_94);
  tcase_add_test(tc, s21_to_float_95);
  tcase_add_test(tc, s21_to_float_96);
  tcase_add_test(tc, s21_to_float_97);
  tcase_add_test(tc, s21_to_float_98);
  tcase_add_test(tc, s21_to_float_99);
  tcase_add_test(tc, s21_to_float_100);
  tcase_add_test(tc, s21_to_float_101);
  tcase_add_test(tc, s21_to_float_102);
  tcase_add_test(tc, s21_to_float_103);
  tcase_add_test(tc, s21_to_float_104);
  tcase_add_test(tc, s21_to_float_105);
  tcase_add_test(tc, s21_to_float_106);
  tcase_add_test(tc, s21_to_float_107);
  tcase_add_test(tc, s21_to_float_108);
  tcase_add_test(tc, s21_to_float_109);
  tcase_add_test(tc, s21_to_float_111);
  tcase_add_test(tc, s21_to_float_113);
  tcase_add_test(tc, s21_to_float_114);
  tcase_add_test(tc, s21_to_float_115);
  tcase_add_test(tc, s21_to_float_116);
  tcase_add_test(tc, s21_to_float_117);
  tcase_add_test(tc, s21_to_float_118);
  tcase_add_test(tc, s21_to_float_119);
  tcase_add_test(tc, s21_to_float_120);
  tcase_add_test(tc, s21_to_float_121);
  tcase_add_test(tc, s21_to_float_122);
  tcase_add_test(tc, s21_to_float_123);
  tcase_add_test(tc, s21_to_float_124);
  tcase_add_test(tc, s21_to_float_125);
  tcase_add_test(tc, s21_to_float_126);
  tcase_add_test(tc, s21_to_float_127);
  tcase_add_test(tc, s21_to_float_128);
  tcase_add_test(tc, s21_to_float_129);
  tcase_add_test(tc, s21_to_float_130);
  tcase_add_test(tc, s21_to_float_131);
  tcase_add_test(tc, s21_to_float_132);
  tcase_add_test(tc, s21_to_float_133);
  tcase_add_test(tc, s21_to_float_134);
  tcase_add_test(tc, s21_to_float_135);
  tcase_add_test(tc, s21_to_float_136);
  tcase_add_test(tc, s21_to_float_137);
  tcase_add_test(tc, s21_to_float_138);
  tcase_add_test(tc, s21_to_float_140);
  tcase_add_test(tc, s21_to_float_141);
  tcase_add_test(tc, s21_to_float_142);
  tcase_add_test(tc, s21_to_float_143);
  tcase_add_test(tc, s21_to_float_144);
  tcase_add_test(tc, s21_to_float_145);
  tcase_add_test(tc, s21_to_float_146);
  tcase_add_test(tc, s21_to_float_147);
  tcase_add_test(tc, s21_to_float_148);
  tcase_add_test(tc, s21_to_float_149);
  tcase_add_test(tc, s21_to_float_150);
  tcase_add_test(tc, s21_to_float_151);
  tcase_add_test(tc, s21_to_float_152);
  tcase_add_test(tc, s21_to_float_153);
  tcase_add_test(tc, s21_to_float_154);
  tcase_add_test(tc, s21_to_float_155);
  tcase_add_test(tc, s21_to_float_156);
  tcase_add_test(tc, s21_to_float_157);
  tcase_add_test(tc, s21_to_float_158);
  tcase_add_test(tc, s21_to_float_159);
  tcase_add_test(tc, s21_to_float_160);
  tcase_add_test(tc, s21_to_float_161);
  tcase_add_test(tc, s21_to_float_162);
  tcase_add_test(tc, s21_to_float_163);
  tcase_add_test(tc, s21_to_float_164);
  tcase_add_test(tc, s21_to_float_165);
  tcase_add_test(tc, s21_to_float_166);
  tcase_add_test(tc, s21_to_float_167);
  tcase_add_test(tc, s21_to_float_168);
  tcase_add_test(tc, s21_to_float_169);
  tcase_add_test(tc, s21_to_float_171);
  tcase_add_test(tc, s21_to_float_172);
  tcase_add_test(tc, s21_to_float_173);
  tcase_add_test(tc, s21_to_float_174);
  tcase_add_test(tc, s21_to_float_175);
  tcase_add_test(tc, s21_to_float_176);
  tcase_add_test(tc, s21_to_float_177);
  tcase_add_test(tc, s21_to_float_178);
  tcase_add_test(tc, s21_to_float_179);
  tcase_add_test(tc, s21_to_float_180);
  tcase_add_test(tc, s21_to_float_181);
  tcase_add_test(tc, s21_to_float_183);
  tcase_add_test(tc, s21_to_float_184);
  tcase_add_test(tc, s21_to_float_185);
  tcase_add_test(tc, s21_to_float_187);
  tcase_add_test(tc, s21_to_float_188);
  tcase_add_test(tc, s21_to_float_189);
  tcase_add_test(tc, s21_to_float_190);
  tcase_add_test(tc, s21_to_float_191);
  tcase_add_test(tc, s21_to_float_192);
  tcase_add_test(tc, s21_to_float_193);
  tcase_add_test(tc, s21_to_float_194);
  tcase_add_test(tc, s21_to_float_195);
  tcase_add_test(tc, s21_to_float_196);
  tcase_add_test(tc, s21_to_float_197);
  tcase_add_test(tc, s21_to_float_198);
  tcase_add_test(tc, s21_to_float_199);
  tcase_add_test(tc, s21_to_float_200);
  tcase_add_test(tc, s21_to_float_201);
  tcase_add_test(tc, s21_to_float_202);
  tcase_add_test(tc, s21_to_float_203);
  tcase_add_test(tc, s21_to_float_204);
  tcase_add_test(tc, s21_to_float_205);
  tcase_add_test(tc, s21_to_float_206);
  tcase_add_test(tc, s21_to_float_207);
  tcase_add_test(tc, s21_to_float_208);
  tcase_add_test(tc, s21_to_float_209);
  tcase_add_test(tc, s21_to_float_210);
  tcase_add_test(tc, s21_to_float_211);
  tcase_add_test(tc, s21_to_float_212);
  tcase_add_test(tc, s21_to_float_213);
  tcase_add_test(tc, s21_to_float_214);
  tcase_add_test(tc, s21_to_float_215);
  tcase_add_test(tc, s21_to_float_216);
  tcase_add_test(tc, s21_to_float_217);
  tcase_add_test(tc, s21_to_float_218);
  tcase_add_test(tc, s21_to_float_219);
  tcase_add_test(tc, s21_to_float_220);
  tcase_add_test(tc, s21_to_float_221);
  tcase_add_test(tc, s21_to_float_222);
  tcase_add_test(tc, s21_to_float_223);
  tcase_add_test(tc, s21_to_float_224);
  tcase_add_test(tc, s21_to_float_225);
  tcase_add_test(tc, s21_to_float_226);
  tcase_add_test(tc, s21_to_float_227);
  tcase_add_test(tc, s21_to_float_228);
  tcase_add_test(tc, s21_to_float_229);
  tcase_add_test(tc, s21_to_float_230);
  tcase_add_test(tc, s21_to_float_231);
  tcase_add_test(tc, s21_to_float_232);
  tcase_add_test(tc, s21_to_float_233);
  tcase_add_test(tc, s21_to_float_234);
  tcase_add_test(tc, s21_to_float_235);
  tcase_add_test(tc, s21_to_float_236);
  tcase_add_test(tc, s21_to_float_237);
  tcase_add_test(tc, s21_to_float_238);
  tcase_add_test(tc, s21_to_float_239);
  tcase_add_test(tc, s21_to_float_240);
  tcase_add_test(tc, s21_to_float_241);
  tcase_add_test(tc, s21_to_float_242);
  tcase_add_test(tc, s21_to_float_243);
  tcase_add_test(tc, s21_to_float_244);
  tcase_add_test(tc, s21_to_float_245);
  tcase_add_test(tc, s21_to_float_246);
  tcase_add_test(tc, s21_to_float_247);
  tcase_add_test(tc, s21_to_float_248);
  tcase_add_test(tc, s21_to_float_249);
  tcase_add_test(tc, s21_to_float_250);

  suite_add_tcase(s, tc);
  return s;
}
