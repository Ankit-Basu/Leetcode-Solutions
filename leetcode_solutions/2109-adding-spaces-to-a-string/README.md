<h2><a href="https://leetcode.com/problems/adding-spaces-to-a-string/">2109. Adding Spaces to a String</a></h2>  
<h3>Medium</h3>  
<hr>  
<div>  
<p>You are given a 0-indexed string <code>s</code> and a 0-indexed integer array <code>spaces</code> that describes the indices in the original string where spaces will be added. Each space should be inserted before the character at the given index.</p>  

<p>For example, given <code>s = "EnjoyYourCoffee"</code> and <code>spaces = [5, 9]</code>, we place spaces before 'Y' and 'C', which are at indices 5 and 9 respectively. Thus, we obtain <code>"Enjoy Your Coffee"</code>.</p>  

<p>Return the modified string after the spaces have been added.</p>  

<p><strong>Example 1:</strong></p>  
<pre><strong>Input:</strong> s = "LeetcodeHelpsMeLearn", spaces = [8,13,15]  
<strong>Output:</strong> "Leetcode Helps Me Learn"  
<strong>Explanation:</strong>  
The indices 8, 13, and 15 correspond to the underlined characters in <code>"LeetcodeHelpsMeLearn"</code>.  
We then place spaces before those characters.  
</pre>  

<p><strong>Example 2:</strong></p>  
<pre><strong>Input:</strong> s = "icodeinpython", spaces = [1,5,7,9]  
<strong>Output:</strong> "i code in py thon"  
<strong>Explanation:</strong>  
The indices 1, 5, 7, and 9 correspond to the underlined characters in <code>"icodeinpython"</code>.  
We then place spaces before those characters.  
</pre>  

<p><strong>Example 3:</strong></p>  
<pre><strong>Input:</strong> s = "spacing", spaces = [0,1,2,3,4,5,6]  
<strong>Output:</strong> " s p a c i n g"  
<strong>Explanation:</strong>  
We are also able to place spaces before the first character of the string.  
</pre>  

<p><strong>Constraints:</strong></p>  
<ul>  
<li><code>1 <= s.length <= 3 * 10<sup>5</sup></code></li>  
<li><code>s</code> consists only of lowercase and uppercase English letters.</li>  
<li><code>1 <= spaces.length <= 3 * 10<sup>5</sup></code></li>  
<li><code>0 <= spaces[i] <= s.length - 1</code></li>  
<li>All the values of <code>spaces</code> are strictly increasing.</li>  
</ul>  
</div>  