toInt :: Char -> Int
toInt c = read [c] + 0

shiftLeft :: [a] -> [a]
shiftLeft [] = []
shiftLeft (x:xs) = xs ++ [x]

let input = "1122"
let intlist = [toInt c | c <-input]
let shiftedlist = shiftLeft intlist
let result = sum [x | (x,y) <- zip intlist shiftedlist, x == y]

