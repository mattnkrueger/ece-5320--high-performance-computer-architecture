/*
 * Copyright (c) 2006 The Regents of The University of Michigan
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met: redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer;
 * redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution;
 * neither the name of the copyright holders nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <stdio.h>
 int main(int argc, char* argv[])
 {
 printf("Hello world! Welcome to HPCA 2025\n");
 return 0;
 }
 
/*#include <stdio.h>
 int main(){
   int a = 5, b = 2, c;
   c = a % b; 
   
   if (c != 1) {
     printf("n[[FAILED]]\n");
     return -1;
   }
   
   printf("\n[[PASSED]]\n");
   return 0;
}*/

/*#include <cstdio>
#include <random>

int main()
{
  const int N = 1000;
  double X[N}, Y[N], alpha = 0.5;
  std::random_device rd; std::mt19937 gen(rd());
  std::uniform_real_distribution<> dis(1,2);

  for (int i = 0; i < N; ++i)
  {
    X[i] = dis(gen);
    Y[i] = dis(gen);
  }
   //Start of daxpy loop
  for (int i = 0; i < N; ++i)
  {
    Y[i] = alpha * X[i] + Y[i];
  }
   
  double sum = 0:
  for (int i = 0; i < N; ++i)
  {
    sum += Y[i];
  }
  printf("%1f\n", sum);
  return 0;
 }*/
 
 
 
 
 
 
 
