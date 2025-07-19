Here is the formatted description for **Leetcode 1233. Remove Sub-Folders from the Filesystem**:

---

### <h2><a href="https://leetcode.com/problems/remove-sub-folders-from-the-filesystem/">1233. Remove Sub-Folders from the Filesystem</a></h2>

<h3>Medium</h3>
<hr>

<p>Given a list of folders <code>folder</code>, return the folders after removing all sub-folders. You may return the answer in any order.</p>

<p>If <code>folder[i]</code> is located within <code>folder[j]</code>, it is called a <strong>sub-folder</strong> of it. A sub-folder of <code>folder[j]</code> must start with <code>folder[j]</code> followed by a <code>'/'</code>.</p>

<p>For example, <code>"/a/b"</code> is a sub-folder of <code>"/a"</code>, but <code>"/b"</code> is not a sub-folder of <code>"/a/b/c"</code>.</p>

<p>The format of a path is one or more concatenated strings of the form: <code>'/'</code> followed by one or more lowercase English letters.</p>

<p>For example, <code>"/leetcode"</code> and <code>"/leetcode/problems"</code> are valid paths, while an empty string and <code>"/"</code> are not.</p>

<h4>Example 1:</h4>
<pre>
<strong>Input:</strong> folder = ["/a","/a/b","/c/d","/c/d/e","/c/f"]
<strong>Output:</strong> ["/a","/c/d","/c/f"]

<strong>Explanation:</strong>
Folders "/a/b" is a sub-folder of "/a" and "/c/d/e" is a sub-folder of "/c/d". </pre>

<h4>Example 2:</h4>
<pre>
<strong>Input:</strong> folder = ["/a","/a/b/c","/a/b/d"]
<strong>Output:</strong> ["/a"]

<strong>Explanation:</strong>
"/a/b/c" and "/a/b/d" are sub-folders of "/a". </pre>

<h4>Example 3:</h4>
<pre>
<strong>Input:</strong> folder = ["/a/b/c","/a/b/ca","/a/b/d"]
<strong>Output:</strong> ["/a/b/c","/a/b/ca","/a/b/d"]

<strong>Explanation:</strong>
None of these folders is a sub-folder of another. </pre>

<h4>Constraints:</h4>
<ul>
  <li><code>1 <= folder.length <= 4 * 10<sup>4</sup></code></li>
  <li><code>2 <= folder[i].length <= 100</code></li>
  <li><code>folder[i]</code> contains only lowercase letters and '/'</li>
  <li>Each <code>folder[i]</code> always starts with the character <code>'/'</code></li>
  <li>Each folder name is unique</li>
</ul>
