sort -t'|' -k3,3 assets.txt -o asset_sorted.txt
sort -t'|' -k1,1 issuers.txt -o issuer_sorted.txt

join -t'|' -1 3 -2 1 asset_sorted.txt issuer_sorted.txt | awk -F'|' '{print $3" : "$4}' > output.txt

rm asset_sorted.txt
rm issuer_sorted.txt
