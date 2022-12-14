/*
 * Standard_datatypes.h
 *
 *  Created on: Sep 6, 2022
 *      Author: moham
 */

#ifndef APPLICATION_STANDARD_DATATYPES_H_
#define APPLICATION_STANDARD_DATATYPES_H_

#define HIGH        (1u)
#define LOW         (0u)

typedef unsigned char         uint8_t;          /*           0 .. 255             */
typedef signed char           sint8_t;          /*        -128 .. +127            */
typedef unsigned short        uint16_t;         /*           0 .. 65535           */
typedef signed short          sint16_t;         /*      -32768 .. +32767          */
typedef unsigned long         uint32_t;         /*           0 .. 4294967295      */
typedef signed long           sint32_t;         /* -2147483648 .. +2147483647     */
typedef unsigned long long    uint64_t;         /*       0..18446744073709551615  */
typedef signed long long      sint64_t;
typedef float                 float32_t;
typedef double                float64_t;
#endif /* APPLICATION_STANDARD_DATATYPES_H_ */
