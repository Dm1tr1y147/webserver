#ifndef _ARTICLE_H
#define _ARTICLE_H

#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#include "../../include/file_op/file.h"
#include "../../include/utils_op/utils.h"
#include "../../include/articles_op/process_md.h"

#define LINE_LENGTH 512

#ifndef _ARTICLE_INFO
#define _ARTICLE_INFO

typedef struct
{
    char *title;
    long time;
    char *content;
    unsigned long length;
} article_info;

#endif

#endif