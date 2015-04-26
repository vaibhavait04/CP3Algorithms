### Problem 

Partitioning a set 
In how many ways can a set of r objects be partitioned into subsets of k objects such that:

* all subsets are mutually exclusive 
* each of k-object subset appears in exactly one of the partitions [Partition wiki]

given that k divides r.

Possible Applications: Baranyai's Theorem

### Solution 

Let the indexed set {1,2,3....r} represent the r objects. Note that the size of each partition is r/k. By definition, a partition's subsets are mutually exclusive. So if we simply place all subsets made by keeping one element constant in the subset in separate partitions, we have the number of partitions possible. The problem then reduces to finding the number of subsets of size k made from r elements in which one element has been fixed. This can be done in (r-1)C(k-1) which is equivalent to the answer.

Illustration Let's try with r = 8 and k = 2. The number of partitions is:

    {1,2} {3.4} {5,6} {7,8}
    {1.3} {2,8} {4,6} {5,7}
    {1,4} {2,5} {3,8} {4,5}
    {1,5} {2,7} {3,6} {4,8}
    {1,6} {2,3} {4,7} {5,8}
    {1,7} {2,6} {3,8} {4,5}
    {1,8} {2,4} {3,5} {4,7}

As can be seen there are 7 partitions and no two partitions have the same subsets.

### References: 

* [http://en.wikipedia.org/wiki/Partition_of_a_set](Partition of a set) 
* [http://en.wikipedia.org/wiki/Baranyai%27s_theorem](Barayanis Theorem) 

