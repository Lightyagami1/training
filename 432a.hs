main = getContents >>= print . solve . (map read) . words

solve :: [Int] -> Int
solve (_:k:xs) = flip div 3 $ length $ filter (5-k >= ) xs 
