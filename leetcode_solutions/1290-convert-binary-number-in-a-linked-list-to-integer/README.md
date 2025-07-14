### <h2><a href="https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/">1290. Convert Binary Number in a Linked List to Integer</a></h2>

<h3>Easy</h3>
<hr>

<p>Given <code>head</code>, which is a reference to the head node of a singly-linked list where each node contains a value of either <code>0</code> or <code>1</code>, the linked list represents a binary number.</p>

<p>Return the <strong>decimal</strong> value of the number represented by the linked list.</p>

<p>The most significant bit is at the head of the linked list.</p>

<h4>Example 1:</h4>
<pre>
<strong>Input:</strong> head = [1,0,1]
<strong>Output:</strong> 5

<strong>Explanation:</strong>
The binary number is 101, which equals 5 in decimal. </pre>

<h4>Example 2:</h4>
<pre>
<strong>Input:</strong> head = [0]
<strong>Output:</strong> 0
</pre>

<h4>Constraints:</h4>
<ul>
  <li>The linked list is not empty.</li>
  <li>The number of nodes will not exceed <code>30</code>.</li>
  <li>Each node’s value is either <code>0</code> or <code>1</code>.</li>
</ul>
