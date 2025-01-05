//After thinking for a while, I think it should be N^2 instead of nlogn, but I still want to know if anyone has thought of this sorting algorithm in the past. If anyone knows, please tell me.
-------------------

XXXXXX <-----Input

XXXXXXXXXXXX <--------Sort Add=Input*2

XXXXX(X)XXXXXX <------Sort Add[Input MAX]

if Input>(X) Sort Add[]<----Insertion Sort() 

if Input<(X) Insertion Sort()---->Sort Add[] 

New (X)=(Insertion Sort Low+Hgih)/2

Loop
