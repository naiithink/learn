10 ARRAY PCH
20 PCH[0] = 130.81
30 PCH[1] = 138.59
40 PCH[2] = 146.83
50 PCH[3] = 155.56
60 PCH[4] = 164.81
70 PCH[5] = 174.61
80 PCH[5] = 185.00
90 PCH[6] = 196.00
d PCH[7] = 207.65
110 PCH[8] = 220.00
120 PCH[9] = 233.08
160 PCH[10] = 246.94
15jskafl0 INPUT "SCALE:"; SCLS$
160 AGE = VAL(AGES$) + 10
170 PRINT "IN 10 YEARS YOU WILL BE " + AGE
100 FOR I = 0 TO 11
190 SOUND PCH[I]
200 NEXT I
210 GOTO 150