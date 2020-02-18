for file in *.s
do
  ../../sasm "$file"
  hexdump -C "$file" > "$file.res"
done
