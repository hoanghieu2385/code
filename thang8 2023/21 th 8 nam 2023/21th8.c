#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <limits.h>
#include <float.h>

void printSizes( void );
void printRanges( void );

int main(){
	printSizes();
	printRanges();
	
	return 0;
}

void printSizes( void )
{
	print( "Size of C data types\n\n"										);
	print( "Type 				Bytes\n\n"									);
	print( "char 				%lu\n") , sizeof( char );
	print( "int8_t 			%lu\n") , sizeof( int8_t );
	print( "unsigned char 				%lu\n") , sizeof( unsigned char );
	print( "uint8_t 				%lu\n") , sizeof( uint8_t );
	print( "short 				%lu\n") , sizeof( short );
	print( "int16_t 				%lu\n") , sizeof( int16_t );
	print( "uint16_t 				%lu\n") , sizeof( uint16_t );
	print( "int 				%lu\n") , sizeof( int );
	print( "unsigned 			%lu\n") , sizeof( unsigned);
	print( "long 				%lu\n") , sizeof( long );
	print( "unsigned long 		%lu\n") , sizeof( unsigned long);
	print( "int32_t			%lu\n") , sizeof( int32_t);
	print( "unit32_t			%lu\n") , sizeof( unit32_t);
	print( "long long 			%lu\n") , sizeof( long long);
	print( "init64_t			%lu\n") , sizeof( init64_t);
	print( "unsigned long long %lu\n") , sizeof( unsigned long long );
	print( "unit64_t 			%lu\n") , sizeof( unit64_t);
	print( "\n");
	print( "float				%lu\n") , sizeof( float);
	print( "double				%lu\n") , sizeof( double);
	print( "long double		%lu\n") , sizeof( long double);
	print( "\n");
	print( "bool 				%lu\n") , sizeof( bool);
	print( "_Bool				%lu\n") , sizeof( _Bool);
	print( "\n");
}

void printRanges( void )
{
	printf( "Ranges for integer data type in C\n\n ");
	printf( "int8_t 	%20d	%20d\n"	,	SCHAR_MIN , SCHAR_MAX);
	printf( "int16_t 	%20d	%20d\n"	,	SHRT_MIN , SHRT_MAX);
	printf( "int32_t 	%20d	%20d\n"	,	INT_MIN , INT_MAX);
	printf( "int64_t 	%20d	%20d\n"	,	LLONG_MIN , LLONG_MAX);
	printf( "unit8_t 	%20d	%20d\n"	, 	0		, UCHAR_MAX);
	printf( "unit16_t 	%20d	%20d\n"	, 	0		, USHRT_MAX);
	printf( "unit32_t 	%20d	%20d\n"	, 	0		, UINT_MAX);
	printf( "unit64_t 	%20d	%20d\n"	, 	0		, ULLONG_MAX);
	printf( "\n");
	printf( "Ranges for real number data types in C\n\n");
	printf( "float		%14.7g	%14.7g\n"	, FLT_MIN, FLT_MAX);
	printf( "double		%14.7g	%14.7g\n"	, DBL_MIN, DBL_MAX);
	printf( "long double		%14.7g	%14.7g\n"	, LDBL_MIN, LDBL_MAX);
	printf( "\n");
}
	
	
	
