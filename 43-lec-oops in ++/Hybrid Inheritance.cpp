/*

             Human
            /     \
          Male   Female
            \     /
             \   /
             Child


This combines:
- Hierarchical inheritance
- Multiple inheritance
So it is called Hybrid Inheritance.

Type	         Structure	   Easy meaning
Single	       A → B	       One parent, one child

Multilevel	   A → B → C	   Chain
Multiple	     A + B → C	   Multiple parents
Hierarchical	 A → B, C	One parent, many children

1. SINGLE

   A
   ↓
   B


2. MULTILEVEL

   A
   ↓
   B
   ↓
   C


3. MULTIPLE

   A ──┐
       ↓
       C
       ↑
   B ──┘


4. HIERARCHICAL

       A
      / \
     ↓   ↓
     B   C


5. HYBRID

       A
      / \
     B   C
      \ /
       D

*/