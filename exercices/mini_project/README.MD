# Project Contact App

Créer une tâche systemd "contacts.service"

## Quand on start le service (sudo systemctl start contacts.service) alors :
ExecStart=/usr/contacts_app start
- On peut lancer l'application avec la commande `contacts start`
- On peut lancer les fonctions via
  - `contacts create`
  - `contacts retrieve`
  - `contacts update`
  - `contacts delete`
  - `contacts list`

## Quand on stop le service (sudo systemctl stop contacts.service) :
ExecStop=/usr/contact_app stop
- On ne peut plus lancer l'application
- On ne peut plus lancer les fonctions
  - unset les variables d'environnement liées au service
  - unset les alias liés au service
