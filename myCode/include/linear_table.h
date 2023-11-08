#ifndef __LINEAR_TABLE_H_
#define __LINERA_TABLE_H_

#include "data_define.h"

#define SIZE 10

void InitTable(sequence_table_t *sequence_table);
void DisplayTable(sequence_table_t *sequence_table);
int InsertTable(sequence_table_t *sequence_table, int index, int value);
int DeleteTable(sequence_table_t *sequence_table, int index);

#endif // LINERA_TABLE_H_
