#include "homework301124.h"

float sum (float a, float b) {
return a + b;}

float diff (float a, float b){
return a - b;}

float div (float a, float b) {
return a/b;}

float mult (float a, float b){
return a*b;}

float pow (float a, int b){
if (b == 0) {
return 1;}
else if (b > 1) {
float result = a;
for (int i = 2; i <= b; i++) {
result *= a;}
return result;}
else if (b < 0) {
float result = 1/a;
for (int i = 2; i <= b; i++) {
result /= a;}
return result;
}
}