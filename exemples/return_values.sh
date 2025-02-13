get_working_directory() {
        # On peut echo n'importe quoi
        echo "$(pwd)"
        # On return un code erreur (0 -> 255)
	# Par convention, 0 signifie "pas d'erreur"
        return 0
}

# Récupérer ce que la fonction affiche
working_dir=$(get_working_directory)
echo "$working_dir"

# Récupérer le code d'erreur de la dernière fonction appelée:
error_code=$?
echo "$error_code"

