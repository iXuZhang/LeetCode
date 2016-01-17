/*
Check if a binary tree is subtree of another binary tree 
*/


The idea is based on the fact that inorder and preorder/postorder uniquely identify a binary tree. 
1) Find inorder and preorder traversals of T, store them in two auxiliary arrays inT[] and preT[].
2) Find inorder and preorder traversals of S, store them in two auxiliary arrays inS[] and preS[].
3) If inS[] is a subarray of inT[] and preS[] is a subarray preT[], then S is a subtree of T. Else not.