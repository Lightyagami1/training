import Data.List
import Control.Monad

parseArray :: Read a => String -> [a]
parseArray = map (read) . words

readArray :: Read a => IO [a]
readArray = getLine >>= return . parseArray

main :: IO ()
main = do
    [n, d] <- readArray :: IO [Int]
    nums <- readArray :: IO [Integer]

