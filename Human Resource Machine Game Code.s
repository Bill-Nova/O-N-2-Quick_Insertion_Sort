//Sourec of inspiration
//Game not ">>" "<<"

01 bump+ 24
02 bump+ 24
03 bump+ 24
04 add 24
05 add 24
06 copyto 23 //=9
07 jump 11
//<-97
08 copyfrom 23
09 outbox
10 copyfrom [24]
//<-07
11 copyto 24
12 copyto 22
13 bump+ 24
14 bump- 22
15 jump 22
//<-56
16 copyfrom [24]
17 outbox
//<-36
18 copyfrom [23]
19 outbox
//if zero<-25
20 copyfrom [22]
21 outbox
//<-15
22 inbox
23 copyto [22]
24 inbox
25 jump 20 if zero
26 copyto [24]
27 sub [22]
28 jump 35 if neg
29 copyfrom [22]
30 copyto [23]
31 copyfrom [24]
32 copyto [22]
33 copyfrom [23]
34 copyto [24]
//<-28
35 inbox
36 jump 18 if zero
37 copyto 20
38 sub [22]
39 jump 45 if neg
40 copyfrom [22]
41 copyto [23]
42 copyfrom 20 
43 copyto [22]
44 jump 55
//<-39
45 copyfrom 20
46 sub [24]
47 jump 51 if neg
48 copyfrom 20
49 copyto [23]
50 jump 55
//<-47
51 copyfrom [24]
52 copyto [23]
53 copyfrom 20
54 copyto [24]
//<- 44,55
55 inbox
56 jump 16 if zore
57 jump 62
//<-71,77,85,91
58 copyfrom 20
59 copyto [19]
60 inbox
61 jump 93 if zero
//<-57
62 copyto 20
63 sub [23]
64 jump 79 if neg
65 bump- 22
66 copyto 19
67 copyto 21
68 bump+ 21
//<-78
69 copyfrom [21]
70 sub 20
71 jump 58 if neg
72 copyfrom [21]
73 copyto [19]
74 bump+ 19
75 bump+ 21
76 sub 23 //<---Delete
77 jump 58 if zero //<---Delete
78 jump 69
79 bump+ 24
80 copyto 19
81 copyto 21
82 bump- 21
//<-92
83 copyfrom 20
84 sub [21]
85 jump 58 if neg
86 copyfrom [21]
87 copyto [19]
88 bump- 19
89 bump- 21
90 sub 23 //<---Delete
91 jump 58 if zero //<---Delete
92 jump 83
//<-61,98
93 copyfrom [24]
94 outbox
95 bump- 24
96 sub 22
97 jump 08 if zoro
98 jump 93
