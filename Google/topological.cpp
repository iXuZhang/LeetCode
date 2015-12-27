/*
two kinds of facts:

1. person a's birth is behind person b's death. 
2. person a and person b's lifetime have overlap

please find if there is inconsistency given the facts..

*/

statement 1
b->a  build a direct garph, check if there is a cycle

statement 2
for each person(node), store the logic set(char), who is before them.
