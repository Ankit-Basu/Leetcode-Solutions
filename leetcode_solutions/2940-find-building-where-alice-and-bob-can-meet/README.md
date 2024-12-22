### <h2><a href="https://leetcode.com/problems/find-building-where-alice-and-bob-can-meet/">2940. Find Building Where Alice and Bob Can Meet</a></h2><h3>Hard</h3><hr>

<p>You are given a 0-indexed array <code>heights</code> of positive integers, where <code>heights[i]</code> represents the height of the <code>i<sup>th</sup></code> building.</p>

<p>If a person is in building <code>i</code>, they can move to any other building <code>j</code> if and only if <code>i < j</code> and <code>heights[i] < heights[j]</code>.</p>

<p>You are also given another array <code>queries</code> where <code>queries[i] = [a<sub>i</sub>, b<sub>i</sub>]</code>. On the <code>i<sup>th</sup></code> query, Alice is in building <code>a<sub>i</sub></code> while Bob is in building <code>b<sub>i</sub></code>.</p>

<p>Return an array <code>ans</code> where <code>ans[i]</code> is the index of the leftmost building where Alice and Bob can meet on the <code>i<sup>th</sup></code> query. If Alice and Bob cannot move to a common building on query <code>i</code>, set <code>ans[i]</code> to <code>-1</code>.</p>

### <strong>Example 1:</strong>
<pre><strong>Input:</strong> heights = [6,4,8,5,2,7], queries = [[0,1],[0,3],[2,4],[3,4],[2,2]]
<strong>Output:</strong> [2,5,-1,5,2]
<strong>Explanation:</strong> 
- In the first query, Alice and Bob can move to building 2 since <code>heights[0] < heights[2]</code> and <code>heights[1] < heights[2]</code>. 
- In the second query, Alice and Bob can move to building 5 since <code>heights[0] < heights[5]</code> and <code>heights[3] < heights[5]</code>. 
- In the third query, Alice cannot meet Bob since Alice cannot move to any other building.
- In the fourth query, Alice and Bob can move to building 5 since <code>heights[3] < heights[5]</code> and <code>heights[4] < heights[5]</code>.
- In the fifth query, Alice and Bob are already in the same building.
</pre>

### <strong>Example 2:</strong>
<pre><strong>Input:</strong> heights = [5,3,8,2,6,1,4,6], queries = [[0,7],[3,5],[5,2],[3,0],[1,6]]
<strong>Output:</strong> [7,6,-1,4,6]
<strong>Explanation:</strong> 
- In the first query, Alice can directly move to Bob's building since <code>heights[0] < heights[7]</code>.
- In the second query, Alice and Bob can move to building 6 since <code>heights[3] < heights[6]</code> and <code>heights[5] < heights[6]</code>.
- In the third query, Alice cannot meet Bob since Bob cannot move to any other building.
- In the fourth query, Alice and Bob can move to building 4 since <code>heights[3] < heights[4]</code> and <code>heights[0] < heights[4]</code>.
- In the fifth query, Alice can directly move to Bob's building since <code>heights[1] < heights[6]</code>.
</pre>

### <strong>Constraints:</strong>
<ul>
    <li><code>1 ≤ heights.length ≤ 5 × 10<sup>4</sup></code></li>
    <li><code>1 ≤ heights[i] ≤ 10<sup>9</sup></code></li>
    <li><code>1 ≤ queries.length ≤ 5 × 10<sup>4</sup></code></li>
    <li><code>queries[i] = [a<sub>i</sub>, b<sub>i</sub>]</code></li>
    <li><code>0 ≤ a<sub>i</sub>, b<sub>i</sub> ≤ heights.length - 1</code></li>
</ul>