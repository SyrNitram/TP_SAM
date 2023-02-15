# Projet microProc
 L’objectif de ce TP en 4 séances est de concevoir, assembler et tester une carte électronique contenant un microcontrôleur STM32. 
 
 Cette carte sera constituée des composants suivants :
 — Microcontrôleur STM32L021K4T6,
 — DAC MCP4801
 -E/SN,
 — Régulateur linéaire BU33SD5WG-TR,
 — 2 LED au format 0603,
 — Connecteur de programmation FTSH-107-01-F-DV,
 — Plusieurs composants passifs (résistances, condensateurs...) en 0805.
 
 La carte est donc munie d’un ADC (intégré au MCU) et d’un DAC (composantexterne sur la carte). Pour démontrer le bon fonctionnement de la carte, vous programmerez un filtre numérique simple.
 
 L’ordre des séances est le suivant :
 1. Schéma, association empreintes
 2. Routage du circuit
 3. Soudure, test...
 4. Écriture du firmware

#Questions 
Q13 : PB9 est tirée à la masse par la resistance de 100k car ce pin coeespond à BOOT0.
Lorsque ce pin est à 0 le boot s'effectue depuis la memoire flash si le bit de config nBOOT_SEL est à 0.


Q14 : L1, C5, C7 forment un filtre passe-bas. ce filtre permet d'éliminer les parasite eventuels sur l'alimenttion avant que la tension de sortie serve de reference à l'ADC du microcontrôleur (VDDA).


Q3 : La première page indique que Cin et Cout doivent être superieurs à 0.47uF. La page 3 donne une valeur typique de 1uF.

Q5 : Page 25.

Q6 : CS est l'entrée chip select active à l'état bas. elle permet d'activer la communication spi avec ce composant.

Q7 : Cette entrée permet de déclencher le changement de la tension de sortie quand l'entrée est à 0.
