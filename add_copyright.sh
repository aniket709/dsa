#!/bin/zsh

for file in **/*.{cpp,h}; do
  if ! grep -q "Copyright 2025 Aniket Ranjan" "$file"; then
    sed -i '' '1i\
// Copyright 2025 Aniket Ranjan
' "$file"
  fi
done
