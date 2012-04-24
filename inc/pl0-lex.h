/*
 * PL/0 Compiler
 * Written by Adam Dunson
 * Last updated on 2012-04-23
 * Filename: pl0-lex.h
 *
 * Not very interesting...
 */

#ifndef PL0_LEX_H
#define PL0_LEX_H

#include <stdio.h>

int pl0_lex(FILE *input_file, FILE *output_file, int l_flag);

#endif
