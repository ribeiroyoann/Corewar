for file in *.s
do
  ../../asm "$file"
  hexdump -C "$file" > "$file.res"
done
