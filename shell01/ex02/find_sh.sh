find . -type f \( -name '*.sh' \) | xargs -n 1 basename | cut -f 1 -d '.'
