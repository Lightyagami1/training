main :: IO ()
main = do
  _ <- getLine 
  num <- getLine
  let nums = (read :: String -> Integer) <$> words num
  let sum_ = sum nums
  let max_ = maximum nums
  if (mod sum_ 2 == 0) && ((2 * max_) <= sum_)
     then putStrLn "YES"
  else putStrLn "NO"

