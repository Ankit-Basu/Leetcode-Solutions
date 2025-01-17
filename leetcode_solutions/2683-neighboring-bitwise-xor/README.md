### <h2><a href="https://leetcode.com/problems/neighboring-bitwise-xor/">2683. Neighboring Bitwise XOR</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>A 0-indexed array <code>derived</code> with length <code>n</code> is derived by computing the bitwise XOR (⊕) of adjacent values in a binary array <code>original</code> of length <code>n</code>.</p>  

<p>Specifically, for each index <code>i</code> in the range <code>[0, n - 1]</code>:</p>  
<ul>  
<li>If <code>i = n - 1</code>, then <code>derived[i] = original[i] ⊕ original[0]</code>.</li>  
<li>Otherwise, <code>derived[i] = original[i] ⊕ original[i + 1]</code>.</li>  
</ul>  

<p>Given an array <code>derived</code>, your task is to determine whether there exists a valid binary array <code>original</code> that could have formed <code>derived</code>.</p>  

<p>Return <code>true</code> if such an array exists or <code>false</code> otherwise.</p>  

<p><strong>A binary array</strong> is an array containing only 0's and 1's.</p>  

<p><strong>Example 1:</strong></p>  
<pre><strong>Input:</strong> derived = [1,1,0]  
<strong>Output:</strong> true  
<strong>Explanation:</strong> A valid <code>original</code> array that gives <code>derived</code> is <code>[0,1,0]</code>.  
<code>derived[0] = original[0] ⊕ original[1] = 0 ⊕ 1 = 1</code>  
<code>derived[1] = original[1] ⊕ original[2] = 1 ⊕ 0 = 1</code>  
<code>derived[2] = original[2] ⊕ original[0] = 0 ⊕ 0 = 0</code>  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre><strong>Input:</strong> derived = [1,1]  
<strong>Output:</strong> true  
<strong>Explanation:</strong> A valid <code>original</code> array that gives <code>derived</code> is <code>[0,1]</code>.  
<code>derived[0] = original[0] ⊕ original[1] = 1</code>  
<code>derived[1] = original[1] ⊕ original[0] = 1</code>  
</pre>  

<p><strong>Example 3:</strong></p>  
<pre><strong>Input:</strong> derived = [1,0]  
<strong>Output:</strong> false  
<strong>Explanation:</strong> There is no valid <code>original</code> array that gives <code>derived</code>.  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>n == derived.length</code></li>  
<li><code>1 <= n <= 10<sup>5</sup></code></li>  
<li>The values in <code>derived</code> are either 0's or 1's.</li>  
</ul>  
</div>  
