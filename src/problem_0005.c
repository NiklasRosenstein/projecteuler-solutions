/* Copyright (c) 2017  Niklas Rosenstein
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

/* I wasn't able to completely come up with this solution myself. See this
 * answer on StackOverflow for reference.
 *
 * http://stackoverflow.com/a/20766088/791713
 */

// https://projecteuler.net/problem=5

#include <stdio.h>

/* We can skip all the other factors in [1,20] because they are contained
 * in the factors below. The last element is a sentinel. */
int factors[] = {11, 13, 14, 15, 16, 17, 18, 19, 20, 0};

int main() {
  int prod = 1;
  for (int* factor = factors; *factor; ++factor) {
    int prevprod = prod;
    while (prod % *factor != 0) {
      prod += prevprod;
    }
  }
  printf("%d\n", prod);
}
