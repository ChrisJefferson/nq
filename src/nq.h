/*****************************************************************************
**
**    nq.h                            NQ                       Werner Nickel
**                                         nickel@mathematik.tu-darmstadt.de
*/

/*
**    This include file contains the declarations of data structures that
**    build a polycyclic presentation.
*/

#ifndef NQ_H
#define NQ_H

#include <stdio.h>
#include <string.h>

#include "config.h"
#include "system.h"

/*
**    This variable indicates whether GAP output should be produced.
*/
extern  int     Gap;

/*
**    This variable indicates whether the relation matrix for each factor
**    of the lower central series is to be written to file.
*/
extern  int     AbelianInv;

/*
**    This variable switches the verbose mode on.
*/
extern  int     Verbose;

/*
**    The input file name. Used in some routines to build a file name for
**    outpout.
*/
extern const char *InputFile;

#include "mem.h"
#include "genexp.h"
#include "pc.h"
#include "pcarith.h"
#include "collect.h"
#include "macro.h"

extern int      *Dimension;

extern word     *Generators;

/*
**    The data structures used for the integer triagonalization.
*/
extern  long     NrRows;
extern  long     NrCols;
extern  long    *Heads;

/*
**    Functions manipulating words.
**    Defined in word.c.
*/
extern  void    printWord(word w, char c);
extern  void    printGen(gen g, char c);

/*
**    Early stoppping criterion.
*/
extern int      EarlyStop;

/* TODO: Misc decls */
extern word    Epimorphism(gen g);
extern void InitTrMetAb(int t);
extern void EvalTrMetAb(void);
extern void PrintCollectionTimes(void);
extern void InitEpim(void);
extern expvec *MatrixToExpVecs(void);

#endif
