% Test file for function cot()
% Matlab version: 7.9.0.529 (R2009b)

% TEST 1
res1 = cot([]);
% TEST 2
res2 = cot(m2sciUnknownType([]));
% TEST 3
res3 = cot(m2sciUnknownDims([]));
% TEST 4
res4 = cot([1]);
% TEST 5
res5 = cot([1,2,3]);
% TEST 6
res6 = cot([1;2;3]);
% TEST 7
res7 = cot([1,2,3;4,5,6]);
% TEST 8
res8 = cot(m2sciUnknownType([1]));
% TEST 9
res9 = cot(m2sciUnknownType([1,2,3]));
% TEST 10
res10 = cot(m2sciUnknownType([1;2;3]));
% TEST 11
res11 = cot(m2sciUnknownType([1,2,3;4,5,6]));
% TEST 12
res12 = cot(m2sciUnknownDims([1]));
% TEST 13
res13 = cot(m2sciUnknownDims([1,2,3]));
% TEST 14
res14 = cot(m2sciUnknownDims([1;2;3]));
% TEST 15
res15 = cot(m2sciUnknownDims([1,2,3;4,5,6]));
% TEST 16
res16 = cot([i]);
% TEST 17
res17 = cot([i,2i,3i]);
% TEST 18
res18 = cot([i;2i;3i]);
% TEST 19
res19 = cot([i,2i,3i;4i,5i,6i]);
% TEST 20
res20 = cot(m2sciUnknownType([i]));
% TEST 21
res21 = cot(m2sciUnknownType([i,2i,3i]));
% TEST 22
res22 = cot(m2sciUnknownType([i;2i;3i]));
% TEST 23
res23 = cot(m2sciUnknownType([i,2i,3i;4i,5i,6i]));
% TEST 24
res24 = cot(m2sciUnknownDims([i]));
% TEST 25
res25 = cot(m2sciUnknownDims([i,2i,3i]));
% TEST 26
res26 = cot(m2sciUnknownDims([i;2i;3i]));
% TEST 27
res27 = cot(m2sciUnknownDims([i,2i,3i;4i,5i,6i]));