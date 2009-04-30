/**********************************************************************************************/
/*  This program is part of the Barcelona OpenMP Tasks Suite                                  */
/*  Copyright (C) 2009 Barcelona Supercomputing Center - Centro Nacional de Supercomputacion  */
/*  Copyright (C) 2009 Universitat Politecnica de Catalunya                                   */
/*                                                                                            */
/*  This program is free software; you can redistribute it and/or modify                      */
/*  it under the terms of the GNU General Public License as published by                      */
/*  the Free Software Foundation; either version 2 of the License, or                         */
/*  (at your option) any later version.                                                       */
/*                                                                                            */
/*  This program is distributed in the hope that it will be useful,                           */
/*  but WITHOUT ANY WARRANTY; without even the implied warranty of                            */
/*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the                             */
/*  GNU General Public License for more details.                                              */
/*                                                                                            */
/*  You should have received a copy of the GNU General Public License                         */
/*  along with this program; if not, write to the Free Software                               */
/*  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA            */
/**********************************************************************************************/

/* common flags */
extern int bots_sequential_flag;
extern int bots_benchmark_flag;
extern int bots_check_flag;
extern int bots_result;
extern int bots_output_format;
extern int bots_print_header;
/* common variables */
extern char bots_name[];
extern char bots_parameters[];
extern char bots_model[];
extern char bots_resources[];
/* compile and execution information */
extern char bots_exec_date[];
extern char bots_exec_message[];
extern char bots_comp_date[];
extern char bots_comp_message[];
extern char bots_cc[];
extern char bots_cflags[];
extern char bots_ld[];
extern char bots_ldflags[];
/* time variables */
extern double bots_time_program;
extern double bots_time_sequential;
extern int    bots_number_of_tasks;

extern char bots_cutoff[];
extern int  bots_cutoff_value;
extern int  bots_app_cutoff_value;
extern int  bots_verbose_mode;

extern int bots_arg_size;
extern int bots_arg_size_1;
extern int bots_arg_size_2;

/* function could be used in app. code but are implemented in bots_common.c */
long bots_usecs();
void bots_error(int error, char *message);
void bots_warning(int warning, char *message);

#define BOTS_RESULT_NA 0
#define BOTS_RESULT_SUCCESSFUL 1
#define BOTS_RESULT_UNSUCCESSFUL 2

#define BOTS_VERBOSE_NONE 0
#define BOTS_VERBOSE_DEFAULT 1
#define BOTS_VERBOSE_DEBUG 2

#define FALSE 0
#define TRUE 1

