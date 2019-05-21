lu2, an experimental program for HPL benchmark

Copyright 2009- Jun Makino

INSTALL memo: INSTALL

INSTALL memo for MPI version: INSTALL_mpi

INSTALL memo in Japanese: INSTALL.j


Update notes

June 29  2010

 RHEL6, MKL, gcc 4.4.4, Sandy Bridge CPU support
 Performance suboptimal on Sandy Bridge.

Oct 24  2010

 Many, many minor improvements

May 30  2010

  Japanese document added, a number of improvement over
  previous version.

Nov 9  2009

  MPI version added 

Sept 14 2009

   Lots of minor tunings

Sept 12 2009

  Bug in mmap, which prevented the use of N>= 24K, fixed
  Lots of minor tunings

Memo

You need to increase the stacksize, to some reasonable number
    (large enough to store NB x NB matrices).
