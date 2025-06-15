### <h2><a href="https://leetcode.com/problems/max-difference-you-can-get-from-changing-an-integer/">1432. Max Difference You Can Get From Changing an Integer</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>You are given an integer <code>num</code>. You will apply the following operation to <code>num</code> two separate times:</p>

<ul>
  <li>Pick a digit <code>x</code> (<code>0 <= x <= 9</code>).</li>
  <li>Pick another digit <code>y</code> (<code>0 <= y <= 9</code>). <code>y</code> can be equal to <code>x</code>.</li>
  <li>Replace all occurrences of <code>x</code> in the decimal representation of <code>num</code> by <code>y</code>.</li>
</ul>

<p>Let <code>a</code> and <code>b</code> be the two results from applying the operation to <code>num</code> independently.</p>  

<p>Return the <strong>maximum difference</strong> between <code>a</code> and <code>b</code>.</p>  

<p><strong>Note:</strong> Neither <code>a</code> nor <code>b</code> may have any leading zeros, and neither may be 0.</p>

<h4>Example 1:</h4>
<pre>
<strong>Input:</strong> num = 555  
<strong>Output:</strong> 888  
<strong>Explanation:</strong>  
First, choose <code>x = 5</code>, <code>y = 9</code> → <code>a = 999</code>  
Then choose <code>x = 5</code>, <code>y = 1</code> → <code>b = 111</code>  
Max difference = <code>999 - 111 = 888</code>
</pre>

<h4>Example 2:</h4>
<pre>
<strong>Input:</strong> num = 9  
<strong>Output:</strong> 8  
<strong>Explanation:</strong>  
Choose <code>x = 9</code>, <code>y = 9</code> → <code>a = 9</code>  
Then choose <code>x = 9</code>, <code>y = 1</code> → <code>b = 1</code>  
Max difference = <code>9 - 1 = 8</code>
</pre>

<h4>Constraints:</h4>
<ul>
  <li><code>1 <= num <= 10⁸</code></li>
</ul>
</div>
