# HandiMouse

 Une petite création permettant de déporter les boutons d'une souris. Elle permet à des personnes n'ayant pas la pleine mobilité de leurs membres supérieurs d'utiliser une souris ou une trackball avec une main, et d'appuyer sur les boutons avec une autre.
 
![image](https://user-images.githubusercontent.com/5184702/203552016-a535d62a-d691-4b16-a7ff-b21c542f0887.png)

![image](https://user-images.githubusercontent.com/5184702/203552066-35ec87d0-744b-4049-8471-bb4937c9e966.png)
 
# Attention ce projet est en bêta

Voir paragraphe un peu plus bas concernant les limitations.

# Principe

Ce périphérique s'articule autour d'une carte à base d'Atmega 32u4, programmée avec Arduino. On vient ensuite y relier des boutons, et quand on appuie sur l'un d'entre eux, celà fait un clic gauche, milieu ou droit. 

# Materiel

## Version 0

Cette liste décrit le matériel utilisé pour une première version d'essai (néanmoins parfaitement fonctionnel !), mais il est tout à fait possible d'avoir une approche complètement différente (par exemple tout imprimer en 3D). Cette version nécessite notamment d'avoir accès à une découpe laser et une imprimante 3D, outils numériques typiques que l'ont retrouve dans un fablab ;)

### Outils

- Découpeuse laser.
- Imprimante 3D.
- Fer à souder.
- PC avec Arduino installé.

### Electronique 

- Une **carte avec un Atmega32u4** : Arduino Leonardo, Arduino Pro Micro, Adafruit Feather 32u4 ... Du moment qu'il y a un 32u4 on est bon ;) On trouve des cartes aux alentours de 5€
- Des **micro interrupteurs** ([lien vers ceux utilisés](https://fr.aliexpress.com/item/32273125391.html?spm=a2g0o.order_list.0.0.4de75e5bzIW9RB&gatewayAdapt=glo2fra)) : attention le format est important, le support à imprimer est basé dessus (sinon il faudra en redessiner un autre)

![image](https://user-images.githubusercontent.com/5184702/203551587-fb4edd32-6eed-424e-becf-18e417990499.png)

### Boitier et boutons

Le materiau utilisé ici est du **MDF** (=medium) mais celà peut être du **PMMA** ou du **contreplaqué**.

### Divers

- 4 entretoises taille ??? (pas mesuré désolé :s) + écrou et vis.
- Vis M3 10 mm et boulons.
- Patins anti-derapants autocollants.

# Fabrication

(photos à venir)

Pas de grosses difficultés dans ce projet :
- **Découper et imprimer** les pièces
- **Souder des fils** pour relier les interrupteurs à la carte 32u4 (COM à relier au GND et pole NO à relier à une des entrées digitales de la carte).
- **Fixer les supports** d'interrupteur.
- **Glisser les interrupteurs dans les suports** (ils se clips dedans, pas besooin de vis).
- **Programmer la carte** : pensez à modifier les numéros des pins si jamais vous ne les avez pas branché au même endroit que moi.
- **Assembler le haut et le bas** via les entretoises.


# "As it" qu'est qui ne va pas ?

Le principal probleme vient des palettes : en effet les palettes découpées dans du medium qui viennent ensuite appuyer sur les boutons sont créées grâce à l'ajout d'un motif qui rend souple le MDF. Or le modif que vous trouverez dans les fichiers de CAO ne sont pas fonctionnels (trop raide). Sur le prototype produit, ces motifs ont étaient refait au dernier moment sur le logiciel de découpe. 

# Sources CAO

Les éléments ont été dessinés sous Onshape (utilisable gratuitement). Retrouvez les sources ici : https://cad.onshape.com/documents/ee8e110275b7d185bb8b569f/w/e783464529bb3047f53ea804/e/05ff1f85b02efed82969bc25?renderMode=0&uiState=637e1ac428d07c480a3f1043

