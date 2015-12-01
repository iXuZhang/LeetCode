/*
Remove Subtree
给一颗树，每个Node都是只有它的Parent的pointer,而不是它的child的pointer
然后给你一个unsorted array里面存着所有的Node,和一个target node
要求你remove那个target node的subtree
*/

unordered_map<*Node, bool> table // node, toRemove

go through vector, if the node not in table, 
create an unordered_set<*Node>
if parent == target, hash all the nodes as true
if parent == NULL, hash all the nodes as false
if parent node in table, hash all the nodes as the map

or
table[target] = true;
table[NULL] = false;
