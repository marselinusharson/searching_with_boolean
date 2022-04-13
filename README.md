# searching_with_boolean
latihan konsep array searching with boolean

# alur program 1:
function greatherThan(input array[1...size], size : integer) → boolean
{mengecek bahwa semua nilai dalam array lebih besar dari bilangan pembanding yang akan diinput user}
kamus:
i : integer
comparisonNumber : integer
found : booleaan

Proses:
i ← 1
found ←  true

read(comparisonNumber)
while i <= size and found == true do
  if array[i] >= comparison number then
    found ← false
  else
    i = i + 1
  endif
endwhile

Output (found)
