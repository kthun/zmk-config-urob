// The default layout has 34 keys. Additional keys can be added by pre-setting any of
// the macros defined in this file to one or more keys before sourcing this file.

/* left of left half */
#if !defined X_LT  // top row, left
    #define X_LT LT5
#endif
#if !defined X_LM  // middle row, left
    #define X_LM LM5
#endif
#if !defined X_LB  // bottom row, left
    #define X_LB LB5
#endif
#if !defined X_LH  // thumb row, left
    #define X_LH LH4 LH3 LH2
#endif

/* between left and right half */
#if !defined X_MT  // top row, middle
    #define X_MT
#endif
#if !defined X_MM  // middle row, middle
    #define X_MM
#endif
#if !defined X_MB  // bottom row, middle
    #define X_MB LF1 LF0 RF0 RF1
#endif
#if !defined X_MH  // thumb row, middle
    #define X_MH
#endif

/* right of right half */
#if !defined X_RT  // top row, right
    #define X_RT RT5
#endif
#if !defined X_RM  // middle row, right
    #define X_RM RM5
#endif
#if !defined X_RB  // bottom row, right
    #define X_RB RB5
#endif
#if !defined X_RH  // thumb row, right
    #define X_RH RH2 RH3 RH4
#endif

