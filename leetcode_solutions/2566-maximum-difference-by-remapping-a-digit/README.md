### <h2><a href="https://leetcode.com/problems/maximum-difference-by-remapping-a-digit/">2566. Maximum Difference by Remapping a Digit</a></h2>  
<h3>Easy</h3>  
<hr>  
<div>  
<p>You are given an integer <code>num</code>. You know that Bob will sneakily remap one of the 10 possible digits (0 to 9) to another digit.</p>  

<p>Return the difference between the <strong>maximum</strong> and <strong>minimum</strong> values Bob can make by remapping exactly one digit in <code>num</code>.</p>

<p><strong>Notes:</strong></p>
<ul>
  <li>When Bob remaps a digit <code>d1</code> to another digit <code>d2</code>, he replaces <em>all</em> occurrences of <code>d1</code> in <code>num</code> with <code>d2</code>.</li>
  <li>Bob can remap a digit to itself, in which case <code>num</code> does not change.</li>
  <li>Bob can remap <strong>different</strong> digits for obtaining minimum and maximum values respectively.</li>
  <li>The resulting number after remapping can contain leading zeroes.</li>
</ul>

<h4>Example 1:</h4>
<pre>
<strong>Input:</strong> num = 11891  
<strong>Output:</strong> 99009  
<strong>Explanation:</strong>  
To achieve the maximum value, Bob can remap the digit <code>1 → 9</code> yielding <code>99899</code>.  
To achieve the minimum value, Bob can remap the digit <code>1 → 0</code> yielding <code>890</code>.  
Difference = <code>99899 - 890 = 99009</code>.
</pre>

<h4>Example 2:</h4>
<pre>
<strong>Input:</strong> num = 90  
<strong>Output:</strong> 99  
<strong>Explanation:</strong>  
Maximum value: <code>0 → 9</code> → <code>99</code>.  
Minimum value: <code>9 → 0</code> → <code>00</code> = <code>0</code>.  
Difference = <code>99 - 0 = 99</code>.
</pre>

<h4>Constraints:</h4>
<ul>
  <li><code>1 <= num <= 10⁸</code></li>
</ul>
</div>
