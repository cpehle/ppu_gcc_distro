/* Generated automatically from machmode.def and config/rs6000/rs6000-modes.def
   by genmodes.  */

#ifndef GCC_INSN_MODES_H
#define GCC_INSN_MODES_H

enum machine_mode
{
  VOIDmode,                /* machmode.def:172 */
  BLKmode,                 /* machmode.def:176 */
  CCmode,                  /* machmode.def:207 */
  CCUNSmode,               /* config/rs6000/rs6000-modes.def:32 */
  CCFPmode,                /* config/rs6000/rs6000-modes.def:33 */
  CCEQmode,                /* config/rs6000/rs6000-modes.def:34 */
  BImode,                  /* machmode.def:179 */
  QImode,                  /* machmode.def:187 */
  HImode,                  /* machmode.def:188 */
  SImode,                  /* machmode.def:189 */
  DImode,                  /* machmode.def:190 */
  TImode,                  /* machmode.def:191 */
  PTImode,                 /* config/rs6000/rs6000-modes.def:49 */
  QQmode,                  /* machmode.def:210 */
  HQmode,                  /* machmode.def:211 */
  SQmode,                  /* machmode.def:212 */
  DQmode,                  /* machmode.def:213 */
  TQmode,                  /* machmode.def:214 */
  UQQmode,                 /* machmode.def:216 */
  UHQmode,                 /* machmode.def:217 */
  USQmode,                 /* machmode.def:218 */
  UDQmode,                 /* machmode.def:219 */
  UTQmode,                 /* machmode.def:220 */
  HAmode,                  /* machmode.def:222 */
  SAmode,                  /* machmode.def:223 */
  DAmode,                  /* machmode.def:224 */
  TAmode,                  /* machmode.def:225 */
  UHAmode,                 /* machmode.def:227 */
  USAmode,                 /* machmode.def:228 */
  UDAmode,                 /* machmode.def:229 */
  UTAmode,                 /* machmode.def:230 */
  SFmode,                  /* machmode.def:202 */
  DFmode,                  /* machmode.def:203 */
  TFmode,                  /* config/rs6000/rs6000-modes.def:23 */
  SDmode,                  /* machmode.def:242 */
  DDmode,                  /* machmode.def:243 */
  TDmode,                  /* machmode.def:244 */
  CQImode,                 /* machmode.def:238 */
  CHImode,                 /* machmode.def:238 */
  CSImode,                 /* machmode.def:238 */
  CDImode,                 /* machmode.def:238 */
  CTImode,                 /* machmode.def:238 */
  SCmode,                  /* machmode.def:239 */
  DCmode,                  /* machmode.def:239 */
  TCmode,                  /* machmode.def:239 */
  V8QImode,                /* config/rs6000/rs6000-modes.def:37 */
  V4HImode,                /* config/rs6000/rs6000-modes.def:37 */
  V2SImode,                /* config/rs6000/rs6000-modes.def:37 */
  V1DImode,                /* config/rs6000/rs6000-modes.def:40 */
  V16QImode,               /* config/rs6000/rs6000-modes.def:38 */
  V8HImode,                /* config/rs6000/rs6000-modes.def:38 */
  V4SImode,                /* config/rs6000/rs6000-modes.def:38 */
  V2DImode,                /* config/rs6000/rs6000-modes.def:38 */
  V1TImode,                /* config/rs6000/rs6000-modes.def:41 */
  V32QImode,               /* config/rs6000/rs6000-modes.def:39 */
  V16HImode,               /* config/rs6000/rs6000-modes.def:39 */
  V8SImode,                /* config/rs6000/rs6000-modes.def:39 */
  V4DImode,                /* config/rs6000/rs6000-modes.def:39 */
  V2TImode,                /* config/rs6000/rs6000-modes.def:39 */
  V2SFmode,                /* config/rs6000/rs6000-modes.def:42 */
  V4SFmode,                /* config/rs6000/rs6000-modes.def:43 */
  V2DFmode,                /* config/rs6000/rs6000-modes.def:43 */
  V8SFmode,                /* config/rs6000/rs6000-modes.def:44 */
  V4DFmode,                /* config/rs6000/rs6000-modes.def:44 */
  V2TFmode,                /* config/rs6000/rs6000-modes.def:44 */
  MAX_MACHINE_MODE,

  MIN_MODE_RANDOM = VOIDmode,
  MAX_MODE_RANDOM = BLKmode,

  MIN_MODE_CC = CCmode,
  MAX_MODE_CC = CCEQmode,

  MIN_MODE_INT = QImode,
  MAX_MODE_INT = TImode,

  MIN_MODE_PARTIAL_INT = PTImode,
  MAX_MODE_PARTIAL_INT = PTImode,

  MIN_MODE_FRACT = QQmode,
  MAX_MODE_FRACT = TQmode,

  MIN_MODE_UFRACT = UQQmode,
  MAX_MODE_UFRACT = UTQmode,

  MIN_MODE_ACCUM = HAmode,
  MAX_MODE_ACCUM = TAmode,

  MIN_MODE_UACCUM = UHAmode,
  MAX_MODE_UACCUM = UTAmode,

  MIN_MODE_FLOAT = SFmode,
  MAX_MODE_FLOAT = TFmode,

  MIN_MODE_DECIMAL_FLOAT = SDmode,
  MAX_MODE_DECIMAL_FLOAT = TDmode,

  MIN_MODE_COMPLEX_INT = CQImode,
  MAX_MODE_COMPLEX_INT = CTImode,

  MIN_MODE_COMPLEX_FLOAT = SCmode,
  MAX_MODE_COMPLEX_FLOAT = TCmode,

  MIN_MODE_VECTOR_INT = V8QImode,
  MAX_MODE_VECTOR_INT = V2TImode,

  MIN_MODE_VECTOR_FRACT = VOIDmode,
  MAX_MODE_VECTOR_FRACT = VOIDmode,

  MIN_MODE_VECTOR_UFRACT = VOIDmode,
  MAX_MODE_VECTOR_UFRACT = VOIDmode,

  MIN_MODE_VECTOR_ACCUM = VOIDmode,
  MAX_MODE_VECTOR_ACCUM = VOIDmode,

  MIN_MODE_VECTOR_UACCUM = VOIDmode,
  MAX_MODE_VECTOR_UACCUM = VOIDmode,

  MIN_MODE_VECTOR_FLOAT = V2SFmode,
  MAX_MODE_VECTOR_FLOAT = V2TFmode,

  NUM_MACHINE_MODES = MAX_MACHINE_MODE
};

#define CONST_MODE_SIZE const
#define CONST_MODE_BASE_ALIGN const
#define CONST_MODE_IBIT const
#define CONST_MODE_FBIT const

#define BITS_PER_UNIT (8)
#define MAX_BITSIZE_MODE_ANY_INT (16*BITS_PER_UNIT)
#define MAX_BITSIZE_MODE_ANY_MODE (32*BITS_PER_UNIT)

#endif /* insn-modes.h */
