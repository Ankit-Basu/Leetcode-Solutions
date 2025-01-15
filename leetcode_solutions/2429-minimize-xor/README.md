### <h2><a href="https://leetcode.com/problems/minimize-xor/">2429. Minimize XOR</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>Given two positive integers <code>num1</code> and <code>num2</code>, find the positive integer <code>x</code> such that:</p>  

<ul>  
<li><code>x</code> has the same number of set bits as <code>num2</code>, and</li>  
<li>The value <code>x XOR num1</code> is minimal.</li>  
</ul>  

<p>Note that <code>XOR</code> is the bitwise XOR operation.</p>  

<p>Return the integer <code>x</code>. The test cases are generated such that <code>x</code> is uniquely determined.</p>  

<p>The number of set bits of an integer is the number of <code>1</code>'s in its binary representation.</p>  

<p><strong>Example 1:</strong></p>  
<pre><strong>Input:</strong> num1 = 3, num2 = 5  
<strong>Output:</strong> 3  
<strong>Explanation:</strong>  
The binary representations of <code>num1</code> and <code>num2</code> are <code>0011</code> and <code>0101</code>, respectively.  
The integer <code>3</code> has the same number of set bits as <code>num2</code>, and the value <code>3 XOR 3 = 0</code> is minimal.  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre><strong>Input:</strong> num1 = 1, num2 = 12  
<strong>Output:</strong> 3  
<strong>Explanation:</strong>  
The binary representations of <code>num1</code> and <code>num2</code> are <code>0001</code> and <code>1100</code>, respectively.  
The integer <code>3</code> has the same number of set bits as <code>num2</code>, and the value <code>3 XOR 1 = 2</code> is minimal.  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>1 <= num1, num2 <= 10<sup>9</sup></code></li>  
</ul>  
</div>  
