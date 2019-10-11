pairs :: String -> [(Char, Char)]
pairs s = zip s (tail s ++ [head s])
