#Coding on LeetCode Online Judge
[leetcode](https://leetcode.com)(leetcode website)
* Problems
  * [algorithms](https://github.com/ityoung/leetcode/tree/master/Algorithms)
    * [14. Longest Common Prefix](https://github.com/ityoung/leetcode#a14)
    * [13. Roman to Integer](https://github.com/ityoung/leetcode#a13)
    * [12. Integer to Roman](https://github.com/ityoung/leetcode#a12)
    * [11. Container With Most Water](https://github.com/ityoung/leetcode#a11)
    * [10. Regular Expression Matching](https://github.com/ityoung/leetcode#a10 "hard") Recursion 递归
    * [9. Palindrome Number](https://github.com/ityoung/leetcode#a9)
    * [8. String to Integer (atoi)](https://github.com/ityoung/leetcode#a8)
    * [7. Reverse Integer](https://github.com/ityoung/leetcode#a7)
    * [6. ZigZag Conversion](https://github.com/ityoung/leetcode#a6)
    * [5. Longest Palindromic Substring](https://github.com/ityoung/leetcode#a5 "hard") Manacher
    * [4. Median of Two Sorted Arrays](https://github.com/ityoung/leetcode#a4)
    * [3. Longest Substring Without Repeating Characters](https://github.com/ityoung/leetcode#a3)
    * [2. Add Two Numbers](https://github.com/ityoung/leetcode#a2)
    * [1. Two Sum](https://github.com/ityoung/leetcode#a1)
  * [database](https://leetcode.com/problemset/database/)(leetcode website)
* [About me](https://github.com/ityoung/leetcode#about-me)

###a14
question: Longest Common Prefix <br>[my answer](https://github.com/ityoung/leetcode//blob/master/Algorithms/LongestCommonPrefix.c "Time complexity: O(MN)")<br><br>
Write a function to find the longest common prefix string amongst an array of strings.

###a13
question: Roman to Integer <br>[my answer](https://github.com/ityoung/leetcode//blob/master/Algorithms/RomantoInteger.c "Time complexity: O(N)")<br><br>
Given a roman numeral, convert it to an integer.

Input is guaranteed to be within the range from 1 to 3999.

###a12
question: Integer to Roman <br>[my answer1](https://github.com/ityoung/leetcode//blob/master/Algorithms/IntegertoRoman1.c "Time complexity: O(N)")|[my answer2](https://github.com/ityoung/leetcode//blob/master/Algorithms/IntegertoRoman2.c "Time complexity: O(N)")|[my answer3](https://github.com/ityoung/leetcode//blob/master/Algorithms/IntegertoRoman3.c "Time complexity: O(N)")<br><br>
Given an integer, convert it to a roman numeral.

Input is guaranteed to be within the range from 1 to 3999.

###a11
question: Container With Most Water <br>[my answer](https://github.com/ityoung/leetcode//blob/master/Algorithms/ContainerWithMostWater.c "Time complexity: O(N)")<br><br>
Given n non-negative integers a1, a2, ..., an, where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i, 0). Find two lines, which together with x-axis forms a container, such that the container contains the most water.

###a10
question: Palindrome Number <br>[my answer](https://github.com/ityoung/leetcode//blob/master/Algorithms/RegularExpressionMatching.c "Time complexity: O(2N)")<br><br>
Implement regular expression matching with support for '.' and '*'.

'.' Matches any single character.<br>
'*' Matches zero or more of the preceding element.

The matching should cover the entire input string (not partial).

The function prototype should be:<br>
bool isMatch(const char *s, const char *p)

Some examples:<br>
isMatch("aa","a") → false<br>
isMatch("aa","aa") → true<br>
isMatch("aaa","aa") → false<br>
isMatch("aaaaa", "a*") → true<br>
isMatch("aa", ".*") → true<br>
isMatch("ab", ".*") → true<br>
isMatch("aab", "c*a*b") → true<br>

###a9
question: Palindrome Number <br>[my answer](https://github.com/ityoung/leetcode//blob/master/Algorithms/PalindromeNumber.c "Time complexity: O(N);Space complexity: O(1)")<br><br>
Determine whether an integer is a palindrome. Do this without extra space.

###a8
question: String to Integer (atoi) <br>[my answer](https://github.com/ityoung/leetcode//blob/master/Algorithms/StringtoInteger(atoi).c "Time complexity: O(N)")<br><br>
Implement atoi to convert a string to an integer.

Hint: Carefully consider all possible input cases. If you want a challenge, please do not see below and ask yourself what are the possible input cases.

###a7
question: Reverse Integer <br>[my answer](https://github.com/ityoung/leetcode//blob/master/Algorithms/ReverseInteger.c "Time complexity: O(N)")<br><br>
Reverse digits of an integer.

Example1: x = 123, return 321<br>
Example2: x = -123, return -321

###a6
question: ZigZag Conversion <br>[my answer](https://github.com/ityoung/leetcode//blob/master/Algorithms/ZigZagConversion.c "Time complexity: O(N)")<br><br>
The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)<br>

P　 　 A　 　 H　 　N<br>
A　P　L　S　I　 I　 G<br>
Y　　　I　 　 R<br>
And then read line by line: "PAHNAPLSIIGYIR"<br>
Write the code that will take a string and make this conversion given a number of rows:<br>

string convert(string text, int nRows);<br>
convert("PAYPALISHIRING", 3) should return "PAHNAPLSIIGYIR".

###a5
question: Longest Palindromic Substring <br>[my answer](https://github.com/ityoung/leetcode//blob/master/Algorithms/LongestPalindromicSubstring.c "Manacher algorithm, Time complexity: O(N)")<br><br>
Given a string S, find the longest palindromic substring in S. You may assume that the maximum length of S is 1000, and there exists one unique longest palindromic substring.

###a4
question: Median of Two Sorted Arrays <br>[my answer](https://github.com/ityoung/leetcode//blob/master/Algorithms/MedianofTwoSortedArrays.c "Time complexity: O(N)")<br><br>
There are two sorted arrays nums1 and nums2 of size m and n respectively. Find the median of the two sorted arrays. The overall run time complexity should be O(log (m+n)).

###a3
question: Longest Substring Without Repeating Characters  <br>
[`my answer`](https://github.com/ityoung/leetcode/blob/master/Algorithms/LongestSubstringWithoutRepeatingCharacters.c "Time complexity: O(N^2);Space complexity: O(1)") and [leetcode answer](https://github.com/ityoung/leetcode/blob/master/Algorithms/T3-2.c "Time complexity: O(N);Space complexity: O(N)")<br><br>
Given a string, find the length of the longest substring without repeating characters. For example, the longest substring without repeating letters for "abcabcbb" is "abc", which the length is 3. For "bbbbb" the longest substring is "b", with the length of 1.

###a2
question: Add Two Numbers  <br>[my answer](https://github.com/ityoung/leetcode/blob/master/Algorithms/AddTwoNumbers.c "Time complexity: O(max(m,n));Space complexity: O(max(m,n))")<br><br>
You are given two linked lists representing two non-negative numbers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8

###a1
question: Two Sum  <br>[my answer](https://github.com/ityoung/leetcode/blob/master/Algorithms/TwoSum.c "Time complexity: O(N)")<br><br>
Given an array of integers, return indices of the two numbers such that they add up to a specific target.<br>
You may assume that each input would have exactly one solution.<br>
Example:
Given nums = [2, 7, 11, 15], target = 9,<br>
Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].

##About Me
Email: ityoung@126.com
