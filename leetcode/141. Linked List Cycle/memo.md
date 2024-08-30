# Plan

- How can we decide whether given linked list has a cycle?
  - To insert the nodes in the hashmap and whenever a node is encountered that is already present in the hashmap then return true. (This solution is O(N), because if we check all nodes, we absolutely can decide there is loop or not)

  - If we want to solve this problem with low space complexity.
    It uses two pointers one moving twice as fast as the other one. The faster one is called the faster pointer and the other one is called the slow pointer.
    
    If there is a loop, fast pointer can pass a slower one that is one lap behind


# Solve

First, I want to check the case when head is None, I think the key to this kind of competitive programming problems is to not to forget to check for corner cases.

If head is NULL, this list does not have any loops, so we can return false.

Next, we declare two variables that represent slow pointer and fast pointer.
We initialize them as head.

We use while-loop to check if loop exists or not, that is, fast pointer overtakes slow pointer.

When you repeat the same operation, you can put each operation in a while loop, this make it easy to understand what is going in lines of codes.

We are going to set the while-loop condition.

We have to make pointer step one or two further, so these pointers should not be None, then, fast pointer especially, fast pointer's next should not be none too.

If slow pointer and fast pointer is same, this means two pointers are pointing the same location even though fast pointer go twice as fast as slow one. This means in given linked list, there is a loop and fast pointer went through the loop and back to the position that is visited before.