### <h2><a href="https://leetcode.com/problems/number-of-equivalent-domino-pairs/">1128. Number of Equivalent Domino Pairs</a></h2>  
<h3>Easy</h3>  
<hr>  
<div>  
<p>Given a list of dominoes, <code>dominoes[i] = [a, b]</code> is equivalent to <code>dominoes[j] = [c, d]</code> if and only if either <code>(a == c and b == d)</code>, or <code>(a == d and b == c)</code> — that is, one domino can be rotated to be equal to another domino.</p>

<p>Return the number of pairs <code>(i, j)</code> for which <code>0 <= i < j < dominoes.length</code>, and <code>dominoes[i]</code> is equivalent to <code>dominoes[j]</code>.</p>

<p><strong>Example 1:</strong></p>
<pre>
<strong>Input:</strong> dominoes = [[1,2],[2,1],[3,4],[5,6]]
<strong>Output:</strong> 1
</pre>

<p><strong>Example 2:</strong></p>
<pre>
<strong>Input:</strong> dominoes = [[1,2],[1,2],[1,1],[1,2],[2,2]]
<strong>Output:</strong> 3
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>1 <= dominoes.length <= 4 * 10<sup>4</sup></code></li>
  <li><code>dominoes[i].length == 2</code></li>
  <li><code>1 <= dominoes[i][j] <= 9</code></li>
</ul>
</div>
