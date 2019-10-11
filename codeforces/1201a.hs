import Control.Monad
import Data.String

readListRec :: Int -> IO [String]
readListRec lineNo =
  if (== 0) lineNo 
     then return []
   else getLine >>= \newLine -> (newLine :) <$> readListRec(lineNo - 1)


countLetters :: String -> Char -> Int
countLetters array_ char_ = length (filter (==char_) array_)

scoreCount :: [String] -> Int -> [Int]
scoreCount answList questionNo =
  if (== 0) . length .  head $ answList 
     then []
   else do
     let currentAnswer = head <$> answList
     let restAnser = (drop 1) <$> answList
     let answers = ['A'..'E']
     let maxScore = maximum ((countLetters currentAnswer) <$> answers)
     maxScore : scoreCount restAnser (succ questionNo)


main :: IO()
main = do
  dataInts <- getLine
  let nm_ = (read ::String -> Int) <$> words dataInts
  let n = nm_ !! 0
  let m = nm_ !! 1

  y <- readListRec n
  let maxVal = scoreCount y 0
  scoreStr <- getLine
  let scores = (read :: String -> Int) <$> words scoreStr
  print . sum $ zipWith (*) scores maxVal
