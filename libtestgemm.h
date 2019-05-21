//
// libtestgemm.h
//
//    Time-stamp: <2019-05-06 14:41:09 makino>

typedef struct testgemmparmstruct{
    int bfsize;
    int bflimit;
    double bfscale;
} TGPARMS, *PTGPARMS;

#ifdef LIBTESTGEMMMAIN
TGPARMS libtestg_parms;
#else
extern TGPARMS libtestg_parms;
#endif


