PalletTown_ProfessorOaksLab_MapScripts::
	.byte 0

PalletTown_ProfessorOaksLab_EventScript_Aide1::
	lock
	faceplayer
	msgbox PalletTown_ProfessorOaksLab_Text_StudyAsOaksAide
	release
	end

PalletTown_ProfessorOaksLab_EventScript_Aide2::
	lock
	faceplayer
	msgbox PalletTown_ProfessorOaksLab_Text_StudyAsOaksAide
	release
	end

PalletTown_ProfessorOaksLab_EventScript_Aide3::
	lock
	faceplayer
	@famechecker FAMECHECKER_OAK, 2
	msgbox PalletTown_ProfessorOaksLab_Text_OakIsAuthorityOnMons
	release
	end

PalletTown_ProfessorOaksLab_EventScript_Computer::
	msgbox PalletTown_ProfessorOaksLab_Text_EmailMessage, MSGBOX_SIGN
	end

PalletTown_ProfessorOaksLab_EventScript_LeftSign::
	msgbox PalletTown_ProfessorOaksLab_Text_PressStartToOpenMenu, MSGBOX_SIGN
	end

PalletTown_ProfessorOaksLab_EventScript_RightSign::
	lockall
	msgbox PalletTown_ProfessorOaksLab_Text_SaveOptionInMenu
	releaseall
	end

PalletTown_ProfessorOaksLab_Text_PressStartToOpenMenu::
    .string "Press START to open the MENU!$"

PalletTown_ProfessorOaksLab_Text_SaveOptionInMenu::
    .string "The SAVE option is on the MENU.\n"
    .string "Use it regularly.$"

PalletTown_ProfessorOaksLab_Text_EmailMessage::
    .string "There's an e-mail message here.\p"
    .string "…\p"
    .string "Finally!\n"
    .string "The ultimate TRAINERS of the\l"
    .string "POKéMON LEAGUE are ready to\l"
    .string "take on all comers!\p"
    .string "Bring your best POKéMON and see\n"
    .string "how you rate as a TRAINER!\p"
    .string "POKéMON LEAGUE HQ\n"
    .string "INDIGO PLATEAU\p"
    .string "PROF. OAK, please visit us!\n"
    .string "…$"

PalletTown_ProfessorOaksLab_Text_StudyAsOaksAide::
    .string "I study POKéMON as PROF. OAK's\n"
    .string "AIDE.$"

PalletTown_ProfessorOaksLab_Text_OakIsAuthorityOnMons::
    .string "PROF. OAK may not look like much,\n"
    .string "but he's the authority on POKéMON.\p"
    .string "Many POKéMON TRAINERS hold him in\n"
    .string "high regard.$"
