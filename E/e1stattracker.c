void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 0;
    l_U121 = 0;
    l_U133 = 0;
    l_U134 = 0;
    l_U135 = 0;
    l_U136 = 0;
    l_U137 = 0;
    l_U138 = 0;
    l_U139 = 0;
    l_U140 = 0;
    l_U141 = 0;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    while (true)
    {
        sub_106();
        sub_1946();
        sub_2786();
        sub_17310();
        SETTIMERA( 0 );
        while (TIMERA() < 5000)
        {
            WAIT( 0 );
            if (ALLOW_ONE_TIME_ONLY_COMMANDS_TO_RUN())
            {
                sub_106();
                sub_1946();
                sub_2786();
                sub_17310();
            }
        }
    }
    return;
}

void sub_106()
{
    SET_STAT_FRONTEND_DISPLAY_TYPE( 121, 2 );
    SET_STAT_FRONTEND_VISIBLE_AFTER_INCREMENTED( 121 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 122, 2 );
    SET_STAT_FRONTEND_VISIBLE_AFTER_INCREMENTED( 122 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 123, 2 );
    SET_STAT_FRONTEND_VISIBLE_AFTER_INCREMENTED( 123 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 124, 2 );
    SET_STAT_FRONTEND_VISIBLE_AFTER_INCREMENTED( 124 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 125, 2 );
    SET_STAT_FRONTEND_VISIBLE_AFTER_INCREMENTED( 125 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 126, 2 );
    SET_STAT_FRONTEND_VISIBLE_AFTER_INCREMENTED( 126 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 127, 2 );
    SET_STAT_FRONTEND_VISIBLE_AFTER_INCREMENTED( 127 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 128, 2 );
    SET_STAT_FRONTEND_VISIBLE_AFTER_INCREMENTED( 128 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 129, 2 );
    SET_STAT_FRONTEND_VISIBLE_AFTER_INCREMENTED( 129 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 130, 2 );
    SET_STAT_FRONTEND_VISIBLE_AFTER_INCREMENTED( 130 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 131, 2 );
    SET_STAT_FRONTEND_VISIBLE_AFTER_INCREMENTED( 131 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 132, 2 );
    SET_STAT_FRONTEND_VISIBLE_AFTER_INCREMENTED( 132 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 167, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 167, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 168, 2 );
    SET_STAT_FRONTEND_VISIBLE_AFTER_INCREMENTED( 168 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 169, 2 );
    SET_STAT_FRONTEND_VISIBLE_AFTER_INCREMENTED( 169 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 395, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 395, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 396, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 396, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 398, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 398, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 400, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 400, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 401, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 401, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 402, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 402, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 177, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 177, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 144, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 144, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 145, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 145, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 178, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 178, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 179, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 179, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 180, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 180, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 181, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 181, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 136, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 136, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 137, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 137, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 138, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 138, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 142, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 142, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 671, 11 );
    SET_STAT_FRONTEND_VISIBLE_AFTER_INCREMENTED( 671 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 672, 11 );
    SET_STAT_FRONTEND_VISIBLE_AFTER_INCREMENTED( 672 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 673, 11 );
    SET_STAT_FRONTEND_VISIBLE_AFTER_INCREMENTED( 673 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 143, 0 );
    SET_STAT_FRONTEND_VISIBILITY( 143, 1 );
    SET_STAT_FRONTEND_DISPLAY_TYPE( 133, 2 );
    SET_STAT_FRONTEND_VISIBILITY( 133, 1 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 0 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 1 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 2 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 3 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 4 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 5 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 6 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 7 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 8 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 9 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 10 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 11 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 12 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 13 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 14 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 15 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 16 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 17 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 18 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 19 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 20 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 21 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 22 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 23 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 24 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 25 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 26 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 27 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 28 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 29 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 270 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 269 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 397 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 399 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 273 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 91 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 107 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 92 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 30 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 31 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 32 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 33 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 34 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 35 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 36 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 37 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 38 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 39 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 50 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 668 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 258 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 280 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 281 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 327 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 326 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 325 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 333 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 334 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 56 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 335 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 336 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 57 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 337 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 338 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 58 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 339 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 340 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 59 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 341 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 342 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 60 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 343 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 344 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 61 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 345 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 346 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 62 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 347 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 348 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 63 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 349 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 350 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 64 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 352 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 66 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 353 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 67 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 354 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 355 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 356 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 357 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 358 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 663 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 664 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 665 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 666 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 667 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 363 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 359 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 360 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 284 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 469 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 285 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 361 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 364 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 365 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 366 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 315 );
    SET_STAT_FRONTEND_NEVER_VISIBLE( 367 );
    return;
}

void sub_1946()
{
    int iVar2;

    iVar2 = GET_INT_STAT( 44 );
    if (iVar2 < 1200000)
    {
        if (CAN_THE_STAT_HAVE_STRING( 649 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 649, "E1Addict_0" );
        }
    }
    else if ((iVar2 >= 1200000) AND (iVar2 < 3600000))
    {
        if (CAN_THE_STAT_HAVE_STRING( 649 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 649, "E1Addict_1" );
        }
    }
    else if ((iVar2 >= 3600000) AND (iVar2 < 10800000))
    {
        if (CAN_THE_STAT_HAVE_STRING( 649 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 649, "E1Addict_2" );
        }
    }
    else if ((iVar2 >= 10800000) AND (iVar2 < 18000000))
    {
        if (CAN_THE_STAT_HAVE_STRING( 649 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 649, "E1Addict_3" );
        }
    }
    else if ((iVar2 >= 18000000) AND (iVar2 < 25200000))
    {
        if (CAN_THE_STAT_HAVE_STRING( 649 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 649, "E1Addict_4" );
        }
    }
    else if ((iVar2 >= 25200000) AND (iVar2 < 36000000))
    {
        if (CAN_THE_STAT_HAVE_STRING( 649 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 649, "E1Addict_5" );
        }
    }
    else if ((iVar2 >= 36000000) AND (iVar2 < 46800000))
    {
        if (CAN_THE_STAT_HAVE_STRING( 649 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 649, "E1Addict_6" );
        }
    }
    else if ((iVar2 >= 46800000) AND (iVar2 < 61200000))
    {
        if (CAN_THE_STAT_HAVE_STRING( 649 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 649, "E1Addict_7" );
        }
    }
    else if ((iVar2 >= 61200000) AND (iVar2 < 75600000))
    {
        if (CAN_THE_STAT_HAVE_STRING( 649 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 649, "E1Addict_8" );
        }
    }
    else if ((iVar2 >= 75600000) AND (iVar2 < 86400000))
    {
        if (CAN_THE_STAT_HAVE_STRING( 649 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 649, "E1Addict_9" );
        }
    }
    else if ((iVar2 >= 86400000) AND (iVar2 < 108000000))
    {
        if (CAN_THE_STAT_HAVE_STRING( 649 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 649, "E1Addict_10" );
        }
    }
    else if ((iVar2 >= 108000000) AND (iVar2 < 122400000))
    {
        if (CAN_THE_STAT_HAVE_STRING( 649 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 649, "E1Addict_11" );
        }
    }
    else if (CAN_THE_STAT_HAVE_STRING( 649 ))
    {
        REGISTER_STRING_FOR_FRONTEND_STAT( 649, "E1Addict_0" );
    };;;;;;;;;;;;;
    return;
}

void sub_2786()
{
    unknown uVar2;

    if (NOT (IS_CHAR_DEAD( sub_2795() )))
    {
        if ((((IS_CHAR_IN_ANY_CAR( sub_2795() )) AND (NOT (IS_CHAR_ON_ANY_BIKE( sub_2795() )))) AND (NOT (IS_CHAR_IN_ANY_BOAT( sub_2795() )))) AND (NOT (IS_CHAR_IN_ANY_HELI( sub_2795() ))))
        {
            GET_CAR_CHAR_IS_USING( sub_2795(), ref uVar2 );
            sub_2923( uVar2 );
            sub_11024( uVar2 );
            sub_13793( uVar2 );
        }
        else if (IS_CHAR_ON_ANY_BIKE( sub_2795() ))
        {
            GET_CAR_CHAR_IS_USING( sub_2795(), ref uVar2 );
            sub_2923( uVar2 );
            sub_14987( uVar2 );
        }
        else if (IS_CHAR_IN_ANY_BOAT( sub_2795() ))
        {
            GET_CAR_CHAR_IS_USING( sub_2795(), ref uVar2 );
            sub_2923( uVar2 );
            sub_15570( uVar2 );
        }
        else if (IS_CHAR_IN_ANY_HELI( sub_2795() ))
        {
            GET_CAR_CHAR_IS_USING( sub_2795(), ref uVar2 );
            sub_2923( uVar2 );
            sub_15977( uVar2 );
        };;;;
        sub_16252();
        sub_16974();
    }
    return;
}

void sub_2795()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2923(unknown uParam0)
{
    unknown uVar3;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_MODEL( uParam0, ref uVar3 );
        sub_2958( uVar3 );
    }
    return;
}

void sub_2958(int iParam0)
{
    if (iParam0 == 1264341792)
    {
        ProtectedSet(l_U103[8], ProtectedGet(l_U103[8]) + 1);
        ProtectedSet(l_U142[1], ProtectedGet(l_U142[1]) + 5000);
    }
    else if (iParam0 == 1560980623)
    {
        ProtectedSet(l_U103[3], ProtectedGet(l_U103[3]) + 1);
        ProtectedSet(l_U142[2], ProtectedGet(l_U142[2]) + 5000);
    }
    else if (iParam0 == 1171614426)
    {
        ProtectedSet(l_U103[3], ProtectedGet(l_U103[3]) + 1);
        ProtectedSet(l_U142[3], ProtectedGet(l_U142[3]) + 5000);
    }
    else if (iParam0 == -1041692462)
    {
        ProtectedSet(l_U103[7], ProtectedGet(l_U103[7]) + 1);
        ProtectedSet(l_U142[4], ProtectedGet(l_U142[4]) + 5000);
    }
    else if (iParam0 == -682211828)
    {
        ProtectedSet(l_U103[10], ProtectedGet(l_U103[10]) + 1);
        ProtectedSet(l_U142[5], ProtectedGet(l_U142[5]) + 5000);
    }
    else if (iParam0 == 2053223216)
    {
        ProtectedSet(l_U103[1], ProtectedGet(l_U103[1]) + 1);
        ProtectedSet(l_U142[6], ProtectedGet(l_U142[6]) + 5000);
    }
    else if (iParam0 == 850991848)
    {
        ProtectedSet(l_U103[1], ProtectedGet(l_U103[1]) + 1);
        ProtectedSet(l_U142[7], ProtectedGet(l_U142[7]) + 5000);
    }
    else if (iParam0 == -344943009)
    {
        ProtectedSet(l_U103[11], ProtectedGet(l_U103[11]) + 1);
        ProtectedSet(l_U142[8], ProtectedGet(l_U142[8]) + 5000);
    }
    else if (iParam0 == -1830458836)
    {
        ProtectedSet(l_U103[6], ProtectedGet(l_U103[6]) + 1);
        ProtectedSet(l_U257[3], ProtectedGet(l_U257[3]) + 5000);
    }
    else if (iParam0 == 1075851868)
    {
        ProtectedSet(l_U103[0], ProtectedGet(l_U103[0]) + 1);
        ProtectedSet(l_U142[9], ProtectedGet(l_U142[9]) + 5000);
    }
    else if (iParam0 == -1987130134)
    {
        ProtectedSet(l_U103[2], ProtectedGet(l_U103[2]) + 1);
        ProtectedSet(l_U142[10], ProtectedGet(l_U142[10]) + 5000);
    }
    else if (iParam0 == -1346687836)
    {
        ProtectedSet(l_U103[2], ProtectedGet(l_U103[2]) + 1);
        ProtectedSet(l_U142[11], ProtectedGet(l_U142[11]) + 5000);
    }
    else if (iParam0 == -907477130)
    {
        ProtectedSet(l_U103[2], ProtectedGet(l_U103[2]) + 1);
        ProtectedSet(l_U142[12], ProtectedGet(l_U142[12]) + 5000);
    }
    else if (iParam0 == -713569950)
    {
        ProtectedSet(l_U103[4], ProtectedGet(l_U103[4]) + 1);
        ProtectedSet(l_U142[13], ProtectedGet(l_U142[13]) + 5000);
    }
    else if (iParam0 == 1884962369)
    {
        ProtectedSet(l_U103[4], ProtectedGet(l_U103[4]) + 1);
        ProtectedSet(l_U142[14], ProtectedGet(l_U142[14]) + 5000);
    }
    else if (iParam0 == -960289747)
    {
        ProtectedSet(l_U103[4], ProtectedGet(l_U103[4]) + 1);
        ProtectedSet(l_U142[15], ProtectedGet(l_U142[15]) + 5000);
    }
    else if (iParam0 == 2006918058)
    {
        ProtectedSet(l_U103[0], ProtectedGet(l_U103[0]) + 1);
        ProtectedSet(l_U142[16], ProtectedGet(l_U142[16]) + 5000);
    }
    else if (iParam0 == -67282078)
    {
        ProtectedSet(l_U103[8], ProtectedGet(l_U103[8]) + 1);
        ProtectedSet(l_U142[17], ProtectedGet(l_U142[17]) + 5000);
    }
    else if (iParam0 == -2030171296)
    {
        ProtectedSet(l_U103[8], ProtectedGet(l_U103[8]) + 1);
        ProtectedSet(l_U142[18], ProtectedGet(l_U142[18]) + 5000);
    }
    else if (iParam0 == 1063483177)
    {
        ProtectedSet(l_U103[7], ProtectedGet(l_U103[7]) + 1);
        ProtectedSet(l_U142[19], ProtectedGet(l_U142[19]) + 5000);
    }
    else if (iParam0 == 108773431)
    {
        ProtectedSet(l_U103[7], ProtectedGet(l_U103[7]) + 1);
        ProtectedSet(l_U142[20], ProtectedGet(l_U142[20]) + 5000);
    }
    else if (iParam0 == 162883121)
    {
        ProtectedSet(l_U103[8], ProtectedGet(l_U103[8]) + 1);
        ProtectedSet(l_U142[21], ProtectedGet(l_U142[21]) + 5000);
    }
    else if (iParam0 == 723973206)
    {
        ProtectedSet(l_U103[10], ProtectedGet(l_U103[10]) + 1);
        ProtectedSet(l_U142[22], ProtectedGet(l_U142[22]) + 5000);
    }
    else if (iParam0 == -1130810103)
    {
        ProtectedSet(l_U103[13], ProtectedGet(l_U103[13]) + 1);
        ProtectedSet(l_U142[23], ProtectedGet(l_U142[23]) + 5000);
    }
    else if (iParam0 == 1033245328)
    {
        ProtectedSet(l_U103[5], ProtectedGet(l_U103[5]) + 1);
        ProtectedSet(l_U275[1], ProtectedGet(l_U275[1]) + 5000);
    }
    else if (iParam0 == -1971955454)
    {
        ProtectedSet(l_U103[0], ProtectedGet(l_U103[0]) + 1);
        ProtectedSet(l_U142[24], ProtectedGet(l_U142[24]) + 5000);
    }
    else if (iParam0 == -685276541)
    {
        ProtectedSet(l_U103[14], ProtectedGet(l_U103[14]) + 1);
        ProtectedSet(l_U142[25], ProtectedGet(l_U142[25]) + 5000);
    }
    else if (iParam0 == -1883002148)
    {
        ProtectedSet(l_U103[14], ProtectedGet(l_U103[14]) + 1);
        ProtectedSet(l_U142[26], ProtectedGet(l_U142[26]) + 5000);
    }
    else if (iParam0 == -276900515)
    {
        ProtectedSet(l_U103[15], ProtectedGet(l_U103[15]) + 1);
        ProtectedSet(l_U142[27], ProtectedGet(l_U142[27]) + 5000);
    }
    else if (iParam0 == 675415136)
    {
        ProtectedSet(l_U103[0], ProtectedGet(l_U103[0]) + 1);
        ProtectedSet(l_U142[28], ProtectedGet(l_U142[28]) + 5000);
    }
    else if (iParam0 == -2119578145)
    {
        ProtectedSet(l_U103[15], ProtectedGet(l_U103[15]) + 1);
        ProtectedSet(l_U142[29], ProtectedGet(l_U142[29]) + 5000);
    }
    else if (iParam0 == -1842748181)
    {
        ProtectedSet(l_U103[12], ProtectedGet(l_U103[12]) + 1);
        ProtectedSet(l_U257[1], ProtectedGet(l_U257[1]) + 5000);
    }
    else if (iParam0 == 1127131465)
    {
        ProtectedSet(l_U103[3], ProtectedGet(l_U103[3]) + 1);
        ProtectedSet(l_U142[30], ProtectedGet(l_U142[30]) + 5000);
    }
    else if (iParam0 == -1097828879)
    {
        ProtectedSet(l_U103[7], ProtectedGet(l_U103[7]) + 1);
        ProtectedSet(l_U142[31], ProtectedGet(l_U142[31]) + 5000);
    }
    else if (iParam0 == 974744810)
    {
        ProtectedSet(l_U103[8], ProtectedGet(l_U103[8]) + 1);
        ProtectedSet(l_U142[32], ProtectedGet(l_U142[32]) + 5000);
    }
    else if (iParam0 == 1026055242)
    {
        ProtectedSet(l_U103[3], ProtectedGet(l_U103[3]) + 1);
        ProtectedSet(l_U142[33], ProtectedGet(l_U142[33]) + 5000);
    }
    else if (iParam0 == 1938952078)
    {
        ProtectedSet(l_U103[3], ProtectedGet(l_U103[3]) + 1);
        ProtectedSet(l_U142[34], ProtectedGet(l_U142[34]) + 5000);
    }
    else if (iParam0 == 1353720154)
    {
        ProtectedSet(l_U103[1], ProtectedGet(l_U103[1]) + 1);
        ProtectedSet(l_U142[35], ProtectedGet(l_U142[35]) + 5000);
    }
    else if (iParam0 == 627033353)
    {
        ProtectedSet(l_U103[16], ProtectedGet(l_U103[16]) + 1);
        ProtectedSet(l_U142[36], ProtectedGet(l_U142[36]) + 5000);
    }
    else if (iParam0 == 1491375716)
    {
        ProtectedSet(l_U103[2], ProtectedGet(l_U103[2]) + 1);
        ProtectedSet(l_U142[37], ProtectedGet(l_U142[37]) + 5000);
    }
    else if (iParam0 == 2016857647)
    {
        ProtectedSet(l_U103[15], ProtectedGet(l_U103[15]) + 1);
        ProtectedSet(l_U142[38], ProtectedGet(l_U142[38]) + 5000);
    }
    else if (iParam0 == 884422927)
    {
        ProtectedSet(l_U103[0], ProtectedGet(l_U103[0]) + 1);
        ProtectedSet(l_U142[39], ProtectedGet(l_U142[39]) + 5000);
    }
    else if (iParam0 == -341892653)
    {
        ProtectedSet(l_U103[13], ProtectedGet(l_U103[13]) + 1);
        ProtectedSet(l_U142[40], ProtectedGet(l_U142[40]) + 5000);
    }
    else if (iParam0 == 584879743)
    {
        ProtectedSet(l_U103[6], ProtectedGet(l_U103[6]) + 1);
        ProtectedSet(l_U257[2], ProtectedGet(l_U257[2]) + 5000);
    }
    else if (iParam0 == 486987393)
    {
        ProtectedSet(l_U103[0], ProtectedGet(l_U103[0]) + 1);
        ProtectedSet(l_U142[41], ProtectedGet(l_U142[41]) + 5000);
    }
    else if (iParam0 == -1289722222)
    {
        ProtectedSet(l_U103[13], ProtectedGet(l_U103[13]) + 1);
        ProtectedSet(l_U142[42], ProtectedGet(l_U142[42]) + 5000);
    }
    else if (iParam0 == 886934177)
    {
        ProtectedSet(l_U103[13], ProtectedGet(l_U103[13]) + 1);
        ProtectedSet(l_U142[43], ProtectedGet(l_U142[43]) + 5000);
    }
    else if (iParam0 == 418536135)
    {
        ProtectedSet(l_U103[7], ProtectedGet(l_U103[7]) + 1);
        ProtectedSet(l_U142[44], ProtectedGet(l_U142[44]) + 5000);
    }
    else if (iParam0 == 1269098716)
    {
        ProtectedSet(l_U103[0], ProtectedGet(l_U103[0]) + 1);
        ProtectedSet(l_U142[45], ProtectedGet(l_U142[45]) + 5000);
    }
    else if (iParam0 == -37030056)
    {
        ProtectedSet(l_U103[8], ProtectedGet(l_U103[8]) + 1);
        ProtectedSet(l_U142[46], ProtectedGet(l_U142[46]) + 5000);
    }
    else if (iParam0 == 861409633)
    {
        ProtectedSet(l_U103[7], ProtectedGet(l_U103[7]) + 1);
        ProtectedSet(l_U275[2], ProtectedGet(l_U275[2]) + 5000);
    }
    else if (iParam0 == -2124201592)
    {
        ProtectedSet(l_U103[14], ProtectedGet(l_U103[14]) + 1);
        ProtectedSet(l_U142[47], ProtectedGet(l_U142[47]) + 5000);
    }
    else if (iParam0 == 1304597482)
    {
        ProtectedSet(l_U103[10], ProtectedGet(l_U103[10]) + 1);
        ProtectedSet(l_U142[48], ProtectedGet(l_U142[48]) + 5000);
    }
    else if (iParam0 == -1043459709)
    {
        ProtectedSet(l_U103[5], ProtectedGet(l_U103[5]) + 1);
        ProtectedSet(l_U275[3], ProtectedGet(l_U275[3]) + 5000);
    }
    else if (iParam0 == -1260881538)
    {
        ProtectedSet(l_U103[13], ProtectedGet(l_U103[13]) + 1);
        ProtectedSet(l_U142[49], ProtectedGet(l_U142[49]) + 5000);
    }
    else if (iParam0 == -310465116)
    {
        ProtectedSet(l_U103[13], ProtectedGet(l_U103[13]) + 1);
        ProtectedSet(l_U142[50], ProtectedGet(l_U142[50]) + 5000);
    }
    else if (iParam0 == 583100975)
    {
        ProtectedSet(l_U103[3], ProtectedGet(l_U103[3]) + 1);
        ProtectedSet(l_U142[51], ProtectedGet(l_U142[51]) + 5000);
    }
    else if (iParam0 == 525509695)
    {
        ProtectedSet(l_U103[11], ProtectedGet(l_U103[11]) + 1);
        ProtectedSet(l_U142[52], ProtectedGet(l_U142[52]) + 5000);
    }
    else if (iParam0 == 904750859)
    {
        ProtectedSet(l_U103[1], ProtectedGet(l_U103[1]) + 1);
        ProtectedSet(l_U142[53], ProtectedGet(l_U142[53]) + 5000);
    }
    else if (iParam0 == 1203311498)
    {
        ProtectedSet(l_U103[7], ProtectedGet(l_U103[7]) + 1);
        ProtectedSet(l_U257[4], ProtectedGet(l_U257[4]) + 5000);
    }
    else if (iParam0 == 148777611)
    {
        ProtectedSet(l_U103[3], ProtectedGet(l_U103[3]) + 1);
        ProtectedSet(l_U142[54], ProtectedGet(l_U142[54]) + 5000);
    }
    else if (iParam0 == 1911513875)
    {
        ProtectedSet(l_U103[3], ProtectedGet(l_U103[3]) + 1);
        ProtectedSet(l_U142[55], ProtectedGet(l_U142[55]) + 5000);
    }
    else if (iParam0 == 1348744438)
    {
        ProtectedSet(l_U103[8], ProtectedGet(l_U103[8]) + 1);
        ProtectedSet(l_U142[56], ProtectedGet(l_U142[56]) + 5000);
    }
    else if (iParam0 == 569305213)
    {
        ProtectedSet(l_U103[1], ProtectedGet(l_U103[1]) + 1);
        ProtectedSet(l_U142[57], ProtectedGet(l_U142[57]) + 5000);
    }
    else if (iParam0 == -808457413)
    {
        ProtectedSet(l_U103[0], ProtectedGet(l_U103[0]) + 1);
        ProtectedSet(l_U142[58], ProtectedGet(l_U142[58]) + 5000);
    }
    else if (iParam0 == -909201658)
    {
        ProtectedSet(l_U103[7], ProtectedGet(l_U103[7]) + 1);
        ProtectedSet(l_U257[5], ProtectedGet(l_U257[5]) + 5000);
    }
    else if (iParam0 == -2137348917)
    {
        ProtectedSet(l_U103[1], ProtectedGet(l_U103[1]) + 1);
        ProtectedSet(l_U142[59], ProtectedGet(l_U142[59]) + 5000);
    }
    else if (iParam0 == -2077743597)
    {
        ProtectedSet(l_U103[0], ProtectedGet(l_U103[0]) + 1);
        ProtectedSet(l_U142[60], ProtectedGet(l_U142[60]) + 5000);
    }
    else if (iParam0 == -1590284256)
    {
        ProtectedSet(l_U103[3], ProtectedGet(l_U103[3]) + 1);
        ProtectedSet(l_U142[61], ProtectedGet(l_U142[61]) + 5000);
    }
    else if (iParam0 == 1830407356)
    {
        ProtectedSet(l_U103[12], ProtectedGet(l_U103[12]) + 1);
        ProtectedSet(l_U142[62], ProtectedGet(l_U142[62]) + 5000);
    }
    else if (iParam0 == 131140572)
    {
        ProtectedSet(l_U103[13], ProtectedGet(l_U103[13]) + 1);
        ProtectedSet(l_U142[63], ProtectedGet(l_U142[63]) + 5000);
    }
    else if (iParam0 == 1376298265)
    {
        ProtectedSet(l_U103[0], ProtectedGet(l_U103[0]) + 1);
        ProtectedSet(l_U142[64], ProtectedGet(l_U142[64]) + 5000);
    }
    else if (iParam0 == 2046537925)
    {
        ProtectedSet(l_U103[3], ProtectedGet(l_U103[3]) + 1);
        ProtectedSet(l_U142[65], ProtectedGet(l_U142[65]) + 5000);
    }
    else if (iParam0 == -1627000575)
    {
        ProtectedSet(l_U103[3], ProtectedGet(l_U103[3]) + 1);
        ProtectedSet(l_U142[66], ProtectedGet(l_U142[66]) + 5000);
    }
    else if (iParam0 == -350085182)
    {
        ProtectedSet(l_U103[3], ProtectedGet(l_U103[3]) + 1);
        ProtectedSet(l_U142[67], ProtectedGet(l_U142[67]) + 5000);
    }
    else if (iParam0 == -119658072)
    {
        ProtectedSet(l_U103[2], ProtectedGet(l_U103[2]) + 1);
        ProtectedSet(l_U142[68], ProtectedGet(l_U142[68]) + 5000);
    }
    else if (iParam0 == -488123221)
    {
        ProtectedSet(l_U103[3], ProtectedGet(l_U103[3]) + 1);
        ProtectedSet(l_U275[4], ProtectedGet(l_U275[4]) + 5000);
    }
    else if (iParam0 == -1883869285)
    {
        ProtectedSet(l_U103[13], ProtectedGet(l_U103[13]) + 1);
        ProtectedSet(l_U142[69], ProtectedGet(l_U142[69]) + 5000);
    }
    else if (iParam0 == -1962071130)
    {
        ProtectedSet(l_U103[0], ProtectedGet(l_U103[0]) + 1);
        ProtectedSet(l_U142[70], ProtectedGet(l_U142[70]) + 5000);
    }
    else if (iParam0 == -1150599089)
    {
        ProtectedSet(l_U103[15], ProtectedGet(l_U103[15]) + 1);
        ProtectedSet(l_U142[71], ProtectedGet(l_U142[71]) + 5000);
    }
    else if (iParam0 == -1900572838)
    {
        ProtectedSet(l_U103[3], ProtectedGet(l_U103[3]) + 1);
        ProtectedSet(l_U142[72], ProtectedGet(l_U142[72]) + 5000);
    }
    else if (iParam0 == 1390084576)
    {
        ProtectedSet(l_U103[0], ProtectedGet(l_U103[0]) + 1);
        ProtectedSet(l_U142[73], ProtectedGet(l_U142[73]) + 5000);
    }
    else if (iParam0 == 1759673526)
    {
        ProtectedSet(l_U103[5], ProtectedGet(l_U103[5]) + 1);
        ProtectedSet(l_U275[5], ProtectedGet(l_U275[5]) + 5000);
    }
    else if (iParam0 == 83136452)
    {
        ProtectedSet(l_U103[0], ProtectedGet(l_U103[0]) + 1);
        ProtectedSet(l_U142[74], ProtectedGet(l_U142[74]) + 5000);
    }
    else if (iParam0 == -845979911)
    {
        ProtectedSet(l_U103[3], ProtectedGet(l_U103[3]) + 1);
        ProtectedSet(l_U142[75], ProtectedGet(l_U142[75]) + 5000);
    }
    else if (iParam0 == 627094268)
    {
        ProtectedSet(l_U103[14], ProtectedGet(l_U103[14]) + 1);
        ProtectedSet(l_U142[76], ProtectedGet(l_U142[76]) + 5000);
    }
    else if (iParam0 == -1932515764)
    {
        ProtectedSet(l_U103[15], ProtectedGet(l_U103[15]) + 1);
        ProtectedSet(l_U142[77], ProtectedGet(l_U142[77]) + 5000);
    }
    else if (iParam0 == -227741703)
    {
        ProtectedSet(l_U103[10], ProtectedGet(l_U103[10]) + 1);
        ProtectedSet(l_U142[78], ProtectedGet(l_U142[78]) + 5000);
    }
    else if (iParam0 == -449022887)
    {
        ProtectedSet(l_U103[10], ProtectedGet(l_U103[10]) + 1);
        ProtectedSet(l_U142[79], ProtectedGet(l_U142[79]) + 5000);
    }
    else if (iParam0 == 1264386590)
    {
        ProtectedSet(l_U103[10], ProtectedGet(l_U103[10]) + 1);
        ProtectedSet(l_U142[80], ProtectedGet(l_U142[80]) + 5000);
    }
    else if (iParam0 == -1685021548)
    {
        ProtectedSet(l_U103[10], ProtectedGet(l_U103[10]) + 1);
        ProtectedSet(l_U142[81], ProtectedGet(l_U142[81]) + 5000);
    }
    else if (iParam0 == 788045382)
    {
        ProtectedSet(l_U103[9], ProtectedGet(l_U103[9]) + 1);
        ProtectedSet(l_U257[6], ProtectedGet(l_U257[6]) + 5000);
    }
    else if (iParam0 == -322343873)
    {
        ProtectedSet(l_U103[8], ProtectedGet(l_U103[8]) + 1);
        ProtectedSet(l_U142[82], ProtectedGet(l_U142[82]) + 5000);
    }
    else if (iParam0 == 1349725314)
    {
        ProtectedSet(l_U103[8], ProtectedGet(l_U103[8]) + 1);
        ProtectedSet(l_U142[83], ProtectedGet(l_U142[83]) + 5000);
    }
    else if (iParam0 == 1923400478)
    {
        ProtectedSet(l_U103[10], ProtectedGet(l_U103[10]) + 1);
        ProtectedSet(l_U142[84], ProtectedGet(l_U142[84]) + 5000);
    }
    else if (iParam0 == 1677715180)
    {
        ProtectedSet(l_U103[1], ProtectedGet(l_U103[1]) + 1);
        ProtectedSet(l_U142[85], ProtectedGet(l_U142[85]) + 5000);
    }
    else if (iParam0 == 1747439474)
    {
        ProtectedSet(l_U103[2], ProtectedGet(l_U103[2]) + 1);
        ProtectedSet(l_U142[86], ProtectedGet(l_U142[86]) + 5000);
    }
    else if (iParam0 == 1344573448)
    {
        ProtectedSet(l_U103[13], ProtectedGet(l_U103[13]) + 1);
        ProtectedSet(l_U142[87], ProtectedGet(l_U142[87]) + 5000);
    }
    else if (iParam0 == 1723137093)
    {
        ProtectedSet(l_U103[13], ProtectedGet(l_U103[13]) + 1);
        ProtectedSet(l_U142[88], ProtectedGet(l_U142[88]) + 5000);
    }
    else if (iParam0 == -1961627517)
    {
        ProtectedSet(l_U103[8], ProtectedGet(l_U103[8]) + 1);
        ProtectedSet(l_U142[89], ProtectedGet(l_U142[89]) + 5000);
    }
    else if (iParam0 == 800869680)
    {
        ProtectedSet(l_U103[4], ProtectedGet(l_U103[4]) + 1);
        ProtectedSet(l_U142[90], ProtectedGet(l_U142[90]) + 5000);
    }
    else if (iParam0 == 1821991593)
    {
        ProtectedSet(l_U103[7], ProtectedGet(l_U103[7]) + 1);
        ProtectedSet(l_U142[91], ProtectedGet(l_U142[91]) + 5000);
    }
    else if (iParam0 == 400514754)
    {
        ProtectedSet(l_U103[5], ProtectedGet(l_U103[5]) + 1);
        ProtectedSet(l_U275[6], ProtectedGet(l_U275[6]) + 5000);
    }
    else if (iParam0 == 970598228)
    {
        ProtectedSet(l_U103[9], ProtectedGet(l_U103[9]) + 1);
        ProtectedSet(l_U142[92], ProtectedGet(l_U142[92]) + 5000);
    }
    else if (iParam0 == -295689028)
    {
        ProtectedSet(l_U103[9], ProtectedGet(l_U103[9]) + 1);
        ProtectedSet(l_U142[93], ProtectedGet(l_U142[93]) + 5000);
    }
    else if (iParam0 == -956048545)
    {
        ProtectedSet(l_U103[4], ProtectedGet(l_U103[4]) + 1);
        ProtectedSet(l_U142[94], ProtectedGet(l_U142[94]) + 5000);
    }
    else if (iParam0 == 1208856469)
    {
        ProtectedSet(l_U103[4], ProtectedGet(l_U103[4]) + 1);
        ProtectedSet(l_U142[95], ProtectedGet(l_U142[95]) + 5000);
    }
    else if (iParam0 == 1917016601)
    {
        ProtectedSet(l_U103[3], ProtectedGet(l_U103[3]) + 1);
        ProtectedSet(l_U142[96], ProtectedGet(l_U142[96]) + 5000);
    }
    else if (iParam0 == 290013743)
    {
        ProtectedSet(l_U103[5], ProtectedGet(l_U103[5]) + 1);
        ProtectedSet(l_U275[7], ProtectedGet(l_U275[7]) + 5000);
    }
    else if (iParam0 == 1064455782)
    {
        ProtectedSet(l_U103[5], ProtectedGet(l_U103[5]) + 1);
        ProtectedSet(l_U275[8], ProtectedGet(l_U275[8]) + 5000);
    }
    else if (iParam0 == -1896659641)
    {
        ProtectedSet(l_U103[7], ProtectedGet(l_U103[7]) + 1);
        ProtectedSet(l_U142[97], ProtectedGet(l_U142[97]) + 5000);
    }
    else if (iParam0 == 2027357303)
    {
        ProtectedSet(l_U103[4], ProtectedGet(l_U103[4]) + 1);
        ProtectedSet(l_U285[3], ProtectedGet(l_U285[3]) + 5000);
    }
    else if (iParam0 == 1534326199)
    {
        ProtectedSet(l_U103[15], ProtectedGet(l_U103[15]) + 1);
        ProtectedSet(l_U142[98], ProtectedGet(l_U142[98]) + 5000);
    }
    else if (iParam0 == -825837129)
    {
        ProtectedSet(l_U103[10], ProtectedGet(l_U103[10]) + 1);
        ProtectedSet(l_U142[99], ProtectedGet(l_U142[99]) + 5000);
    }
    else if (iParam0 == -1758379524)
    {
        ProtectedSet(l_U103[15], ProtectedGet(l_U103[15]) + 1);
        ProtectedSet(l_U142[100], ProtectedGet(l_U142[100]) + 5000);
    }
    else if (iParam0 == -583281407)
    {
        ProtectedSet(l_U103[16], ProtectedGet(l_U103[16]) + 1);
        ProtectedSet(l_U142[101], ProtectedGet(l_U142[101]) + 5000);
    }
    else if (iParam0 == -498054846)
    {
        ProtectedSet(l_U103[14], ProtectedGet(l_U103[14]) + 1);
        ProtectedSet(l_U142[102], ProtectedGet(l_U142[102]) + 5000);
    }
    else if (iParam0 == 2006667053)
    {
        ProtectedSet(l_U103[12], ProtectedGet(l_U103[12]) + 1);
        ProtectedSet(l_U142[103], ProtectedGet(l_U142[103]) + 5000);
    }
    else if (iParam0 == 1937616578)
    {
        ProtectedSet(l_U103[15], ProtectedGet(l_U103[15]) + 1);
        ProtectedSet(l_U142[104], ProtectedGet(l_U142[104]) + 5000);
    }
    else if (iParam0 == 1777363799)
    {
        ProtectedSet(l_U103[8], ProtectedGet(l_U103[8]) + 1);
        ProtectedSet(l_U142[105], ProtectedGet(l_U142[105]) + 5000);
    }
    else if (iParam0 == -1099960214)
    {
        ProtectedSet(l_U103[1], ProtectedGet(l_U103[1]) + 1);
        ProtectedSet(l_U142[106], ProtectedGet(l_U142[106]) + 5000);
    }
    else if (iParam0 == -570033273)
    {
        ProtectedSet(l_U103[6], ProtectedGet(l_U103[6]) + 1);
        ProtectedSet(l_U257[7], ProtectedGet(l_U257[7]) + 5000);
    }
    else if (iParam0 == -810318068)
    {
        ProtectedSet(l_U103[2], ProtectedGet(l_U103[2]) + 1);
        ProtectedSet(l_U142[107], ProtectedGet(l_U142[107]) + 5000);
    }
    else if (iParam0 == -1660661558)
    {
        ProtectedSet(l_U103[0], ProtectedGet(l_U103[0]) + 1);
        ProtectedSet(l_U285[1], ProtectedGet(l_U285[1]) + 5000);
    }
    else if (iParam0 == 353883353)
    {
        ProtectedSet(l_U103[3], ProtectedGet(l_U103[3]) + 1);
        ProtectedSet(l_U285[2], ProtectedGet(l_U285[2]) + 5000);
    }
    else if (iParam0 == 837858166)
    {
        ProtectedSet(l_U103[3], ProtectedGet(l_U103[3]) + 1);
        ProtectedSet(l_U285[4], ProtectedGet(l_U285[4]) + 5000);
    }
    else if (iParam0 == -1745203402)
    {
        ProtectedSet(l_U103[2], ProtectedGet(l_U103[2]) + 1);
        ProtectedSet(l_U142[109], ProtectedGet(l_U142[109]) + 5000);
    }
    else if (iParam0 == 729783779)
    {
        ProtectedSet(l_U103[12], ProtectedGet(l_U103[12]) + 1);
        ProtectedSet(l_U142[111], ProtectedGet(l_U142[111]) + 5000);
    }
    else if (iParam0 == -1323100960)
    {
        ProtectedSet(l_U103[1], ProtectedGet(l_U103[1]) + 1);
        ProtectedSet(l_U142[112], ProtectedGet(l_U142[112]) + 5000);
    }
    else if (iParam0 == -408052231)
    {
        ProtectedSet(l_U103[6], ProtectedGet(l_U103[6]) + 1);
        ProtectedSet(l_U257[8], ProtectedGet(l_U257[8]) + 5000);
    }
    else if (iParam0 == -1606187161)
    {
        ProtectedSet(l_U103[6], ProtectedGet(l_U103[6]) + 1);
        ProtectedSet(l_U257[9], ProtectedGet(l_U257[9]) + 5000);
    }
    else if (iParam0 == -359167535)
    {
        ProtectedSet(l_U103[6], ProtectedGet(l_U103[6]) + 1);
        ProtectedSet(l_U257[10], ProtectedGet(l_U257[10]) + 5000);
    }
    else if (iParam0 == -618617997)
    {
        ProtectedSet(l_U103[6], ProtectedGet(l_U103[6]) + 1);
        ProtectedSet(l_U257[11], ProtectedGet(l_U257[11]) + 5000);
    }
    else if (iParam0 == 802082487)
    {
        ProtectedSet(l_U103[6], ProtectedGet(l_U103[6]) + 1);
        ProtectedSet(l_U257[12], ProtectedGet(l_U257[12]) + 5000);
    }
    else if (iParam0 == 301427732)
    {
        ProtectedSet(l_U103[6], ProtectedGet(l_U103[6]) + 1);
        ProtectedSet(l_U257[13], ProtectedGet(l_U257[13]) + 5000);
    }
    else if (iParam0 == -571009320)
    {
        ProtectedSet(l_U103[6], ProtectedGet(l_U103[6]) + 1);
        ProtectedSet(l_U257[14], ProtectedGet(l_U257[14]) + 5000);
    }
    else if (iParam0 == 2006142190)
    {
        ProtectedSet(l_U103[6], ProtectedGet(l_U103[6]) + 1);
        ProtectedSet(l_U257[15], ProtectedGet(l_U257[15]) + 5000);
    }
    else if (iParam0 == -159126838)
    {
        ProtectedSet(l_U103[6], ProtectedGet(l_U103[6]) + 1);
        ProtectedSet(l_U257[16], ProtectedGet(l_U257[16]) + 5000);
    };;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
    return;
}

void sub_11024(unknown uParam0)
{
    int I;
    unknown uVar4;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_MODEL( uParam0, ref uVar4 );
        if (IS_THIS_MODEL_A_CAR( uVar4 ))
        {
            for ( I = 0; I <= (114 - 1); I++ )
            {
                if (ProtectedGet(l_U142[I]) > ProtectedGet(l_U142[l_U134]))
                {
                    l_U134 = I;
                    l_U138 = I;
                }
            }
            uVar4 = sub_11144( l_U138 );
            if (l_U138 != 0)
            {
                if (CAN_THE_STAT_HAVE_STRING( 653 ))
                {
                    REGISTER_STRING_FOR_FRONTEND_STAT( 653, GET_DISPLAY_NAME_FROM_VEHICLE_MODEL( uVar4 ) );
                }
            }
        }
    }
    return;
}

int sub_11144(int iParam0)
{
    if (iParam0 == 1)
    {
        return 1264341792;
    }
    else if (iParam0 == 2)
    {
        return 1560980623;
    }
    else if (iParam0 == 3)
    {
        return 1171614426;
    }
    else if (iParam0 == 4)
    {
        return -1041692462;
    }
    else if (iParam0 == 5)
    {
        return -682211828;
    }
    else if (iParam0 == 6)
    {
        return 2053223216;
    }
    else if (iParam0 == 7)
    {
        return 850991848;
    }
    else if (iParam0 == 8)
    {
        return -344943009;
    }
    else if (iParam0 == 9)
    {
        return 1075851868;
    }
    else if (iParam0 == 10)
    {
        return -1987130134;
    }
    else if (iParam0 == 11)
    {
        return -1346687836;
    }
    else if (iParam0 == 12)
    {
        return -907477130;
    }
    else if (iParam0 == 13)
    {
        return -713569950;
    }
    else if (iParam0 == 14)
    {
        return 1884962369;
    }
    else if (iParam0 == 15)
    {
        return -960289747;
    }
    else if (iParam0 == 16)
    {
        return 2006918058;
    }
    else if (iParam0 == 17)
    {
        return -67282078;
    }
    else if (iParam0 == 18)
    {
        return -2030171296;
    }
    else if (iParam0 == 19)
    {
        return 1063483177;
    }
    else if (iParam0 == 20)
    {
        return 108773431;
    }
    else if (iParam0 == 21)
    {
        return 162883121;
    }
    else if (iParam0 == 22)
    {
        return 723973206;
    }
    else if (iParam0 == 23)
    {
        return -1130810103;
    }
    else if (iParam0 == 24)
    {
        return -1971955454;
    }
    else if (iParam0 == 25)
    {
        return -685276541;
    }
    else if (iParam0 == 26)
    {
        return -1883002148;
    }
    else if (iParam0 == 27)
    {
        return -276900515;
    }
    else if (iParam0 == 28)
    {
        return 675415136;
    }
    else if (iParam0 == 29)
    {
        return -2119578145;
    }
    else if (iParam0 == 30)
    {
        return 1127131465;
    }
    else if (iParam0 == 31)
    {
        return -1097828879;
    }
    else if (iParam0 == 32)
    {
        return 974744810;
    }
    else if (iParam0 == 33)
    {
        return 1026055242;
    }
    else if (iParam0 == 34)
    {
        return 1938952078;
    }
    else if (iParam0 == 35)
    {
        return 1353720154;
    }
    else if (iParam0 == 36)
    {
        return 627033353;
    }
    else if (iParam0 == 37)
    {
        return 1491375716;
    }
    else if (iParam0 == 38)
    {
        return 2016857647;
    }
    else if (iParam0 == 39)
    {
        return 884422927;
    }
    else if (iParam0 == 40)
    {
        return -341892653;
    }
    else if (iParam0 == 41)
    {
        return 486987393;
    }
    else if (iParam0 == 42)
    {
        return -1289722222;
    }
    else if (iParam0 == 43)
    {
        return 886934177;
    }
    else if (iParam0 == 44)
    {
        return 418536135;
    }
    else if (iParam0 == 45)
    {
        return 1269098716;
    }
    else if (iParam0 == 46)
    {
        return -37030056;
    }
    else if (iParam0 == 47)
    {
        return -2124201592;
    }
    else if (iParam0 == 48)
    {
        return 1304597482;
    }
    else if (iParam0 == 49)
    {
        return -1260881538;
    }
    else if (iParam0 == 50)
    {
        return -310465116;
    }
    else if (iParam0 == 51)
    {
        return 583100975;
    }
    else if (iParam0 == 52)
    {
        return 525509695;
    }
    else if (iParam0 == 53)
    {
        return 904750859;
    }
    else if (iParam0 == 54)
    {
        return 148777611;
    }
    else if (iParam0 == 55)
    {
        return 1911513875;
    }
    else if (iParam0 == 56)
    {
        return 1348744438;
    }
    else if (iParam0 == 57)
    {
        return 569305213;
    }
    else if (iParam0 == 58)
    {
        return -808457413;
    }
    else if (iParam0 == 59)
    {
        return -2137348917;
    }
    else if (iParam0 == 60)
    {
        return -2077743597;
    }
    else if (iParam0 == 61)
    {
        return -1590284256;
    }
    else if (iParam0 == 62)
    {
        return 1830407356;
    }
    else if (iParam0 == 63)
    {
        return 131140572;
    }
    else if (iParam0 == 64)
    {
        return 1376298265;
    }
    else if (iParam0 == 65)
    {
        return 2046537925;
    }
    else if (iParam0 == 66)
    {
        return -1627000575;
    }
    else if (iParam0 == 67)
    {
        return -350085182;
    }
    else if (iParam0 == 68)
    {
        return -119658072;
    }
    else if (iParam0 == 69)
    {
        return -1883869285;
    }
    else if (iParam0 == 70)
    {
        return -1962071130;
    }
    else if (iParam0 == 71)
    {
        return -1150599089;
    }
    else if (iParam0 == 72)
    {
        return -1900572838;
    }
    else if (iParam0 == 73)
    {
        return 1390084576;
    }
    else if (iParam0 == 74)
    {
        return 83136452;
    }
    else if (iParam0 == 75)
    {
        return -845979911;
    }
    else if (iParam0 == 76)
    {
        return 627094268;
    }
    else if (iParam0 == 77)
    {
        return -1932515764;
    }
    else if (iParam0 == 78)
    {
        return -227741703;
    }
    else if (iParam0 == 79)
    {
        return -449022887;
    }
    else if (iParam0 == 80)
    {
        return 1264386590;
    }
    else if (iParam0 == 81)
    {
        return -1685021548;
    }
    else if (iParam0 == 82)
    {
        return -322343873;
    }
    else if (iParam0 == 83)
    {
        return 1349725314;
    }
    else if (iParam0 == 84)
    {
        return 1923400478;
    }
    else if (iParam0 == 85)
    {
        return 1677715180;
    }
    else if (iParam0 == 86)
    {
        return 1747439474;
    }
    else if (iParam0 == 87)
    {
        return 1344573448;
    }
    else if (iParam0 == 88)
    {
        return 1723137093;
    }
    else if (iParam0 == 89)
    {
        return -1961627517;
    }
    else if (iParam0 == 90)
    {
        return 800869680;
    }
    else if (iParam0 == 91)
    {
        return 1821991593;
    }
    else if (iParam0 == 92)
    {
        return 970598228;
    }
    else if (iParam0 == 93)
    {
        return -295689028;
    }
    else if (iParam0 == 94)
    {
        return -956048545;
    }
    else if (iParam0 == 95)
    {
        return 1208856469;
    }
    else if (iParam0 == 96)
    {
        return 1917016601;
    }
    else if (iParam0 == 97)
    {
        return -1896659641;
    }
    else if (iParam0 == 98)
    {
        return 1534326199;
    }
    else if (iParam0 == 99)
    {
        return -825837129;
    }
    else if (iParam0 == 100)
    {
        return -1758379524;
    }
    else if (iParam0 == 101)
    {
        return -583281407;
    }
    else if (iParam0 == 102)
    {
        return -498054846;
    }
    else if (iParam0 == 103)
    {
        return 2006667053;
    }
    else if (iParam0 == 104)
    {
        return 1937616578;
    }
    else if (iParam0 == 105)
    {
        return 1777363799;
    }
    else if (iParam0 == 106)
    {
        return -1099960214;
    }
    else if (iParam0 == 107)
    {
        return -810318068;
    }
    else if (iParam0 == 109)
    {
        return -1745203402;
    }
    else if (iParam0 == 111)
    {
        return 729783779;
    }
    else if (iParam0 == 112)
    {
        return -1323100960;
    };;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
    return 0;
}

void sub_13793(unknown uParam0)
{
    int iVar3;
    unknown uVar4;
    int I;
    string sVar6;

    sVar6 = "colour_0";
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_COLOURS( uParam0, ref iVar3, ref uVar4 );
        if ((iVar3 == 0) || (iVar3 == 1))
        {
            l_U122[0]++;
        }
        else if ((iVar3 > 1) AND (iVar3 < 27))
        {
            l_U122[1]++;
        }
        else if ((iVar3 >= 27) AND (iVar3 < 50))
        {
            l_U122[2]++;
        }
        else if ((iVar3 >= 50) AND (iVar3 < 62))
        {
            l_U122[3]++;
        }
        else if ((iVar3 >= 62) AND (iVar3 < 89))
        {
            l_U122[4]++;
        }
        else if ((iVar3 >= 89) AND (iVar3 < 99))
        {
            l_U122[5]++;
        }
        else if ((iVar3 >= 99) AND (iVar3 < 102))
        {
            l_U122[6]++;
        }
        else if ((iVar3 >= 102) AND (iVar3 < 112))
        {
            l_U122[7]++;
        }
        else if ((iVar3 >= 112) AND (iVar3 < 124))
        {
            l_U122[8]++;
        }
        else if (iVar3 == 124)
        {
            l_U122[6]++;
        }
        else if (iVar3 == 125)
        {
            l_U122[2]++;
        }
        else if (iVar3 == 126)
        {
            l_U122[3]++;
        }
        else if (iVar3 == 127)
        {
            l_U122[5]++;
        }
        else if (iVar3 == 128)
        {
            l_U122[4]++;
        }
        else if (iVar3 == 129)
        {
            l_U122[2]++;
        }
        else if (iVar3 == 130)
        {
            l_U122[7]++;
        }
        else if (iVar3 == 131)
        {
            l_U122[9]++;
        }
        else if (iVar3 == 132)
        {
            l_U122[5]++;
        };;;;;;;;;;;;;;;;;;
        for ( I = 0; I <= 9; I++ )
        {
            if (l_U122[I] > l_U122[l_U133])
            {
                l_U133 = I;
            }
        }
        if (l_U122[l_U133] > 0)
        {
            if (l_U133 == 0)
            {
                sVar6 = "colour_1";
            }
            else if (l_U133 == 1)
            {
                sVar6 = "colour_2";
            }
            else if (l_U133 == 2)
            {
                sVar6 = "colour_3";
            }
            else if (l_U133 == 3)
            {
                sVar6 = "colour_4";
            }
            else if (l_U133 == 4)
            {
                sVar6 = "colour_5";
            }
            else if (l_U133 == 5)
            {
                sVar6 = "colour_6";
            }
            else if (l_U133 == 6)
            {
                sVar6 = "colour_7";
            }
            else if (l_U133 == 7)
            {
                sVar6 = "colour_8";
            }
            else if (l_U133 == 8)
            {
                sVar6 = "colour_9";
            }
            else if (l_U133 == 9)
            {
                sVar6 = "colour_10";
            }
            else
            {
                sVar6 = "colour_0";
            };;;;;;;;;;
        }
        else
        {
            sVar6 = "colour_0";
        }
        if (CAN_THE_STAT_HAVE_STRING( 659 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 659, sVar6 );
        }
    }
    return;
}

void sub_14987(unknown uParam0)
{
    int I;
    unknown uVar4;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_MODEL( uParam0, ref uVar4 );
        if (IS_THIS_MODEL_A_BIKE( uVar4 ))
        {
            for ( I = 0; I <= (17 - 1); I++ )
            {
                if (ProtectedGet(l_U257[I]) > ProtectedGet(l_U257[l_U135]))
                {
                    l_U135 = I;
                    l_U139 = I;
                }
            }
            uVar4 = sub_15105( l_U139 );
            if (l_U139 != 0)
            {
                if (CAN_THE_STAT_HAVE_STRING( 654 ))
                {
                    REGISTER_STRING_FOR_FRONTEND_STAT( 654, GET_DISPLAY_NAME_FROM_VEHICLE_MODEL( uVar4 ) );
                }
            }
        }
    }
    return;
}

int sub_15105(int iParam0)
{
    if (iParam0 == 1)
    {
        return -1842748181;
    }
    else if (iParam0 == 2)
    {
        return 584879743;
    }
    else if (iParam0 == 4)
    {
        return 1203311498;
    }
    else if (iParam0 == 5)
    {
        return -909201658;
    }
    else if (iParam0 == 6)
    {
        return 788045382;
    }
    else if (iParam0 == 7)
    {
        return -570033273;
    }
    else if (iParam0 == 3)
    {
        return -1830458836;
    }
    else if (iParam0 == 8)
    {
        return -408052231;
    }
    else if (iParam0 == 9)
    {
        return -1606187161;
    }
    else if (iParam0 == 10)
    {
        return -359167535;
    }
    else if (iParam0 == 11)
    {
        return -618617997;
    }
    else if (iParam0 == 12)
    {
        return 802082487;
    }
    else if (iParam0 == 13)
    {
        return 301427732;
    }
    else if (iParam0 == 14)
    {
        return -571009320;
    }
    else if (iParam0 == 15)
    {
        return 2006142190;
    }
    else if (iParam0 == 16)
    {
        return -159126838;
    };;;;;;;;;;;;;;;;
    return 0;
}

void sub_15570(unknown uParam0)
{
    int I;
    unknown uVar4;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_MODEL( uParam0, ref uVar4 );
        if (IS_THIS_MODEL_A_BOAT( uVar4 ))
        {
            for ( I = 0; I <= (9 - 1); I++ )
            {
                if (ProtectedGet(l_U275[I]) > ProtectedGet(l_U275[l_U136]))
                {
                    l_U136 = I;
                    l_U140 = I;
                }
            }
            uVar4 = sub_15688( l_U140 );
            if (l_U140 != 0)
            {
                if (CAN_THE_STAT_HAVE_STRING( 655 ))
                {
                    REGISTER_STRING_FOR_FRONTEND_STAT( 655, GET_DISPLAY_NAME_FROM_VEHICLE_MODEL( uVar4 ) );
                }
            }
        }
    }
    return;
}

int sub_15688(int iParam0)
{
    if (iParam0 == 1)
    {
        return 1033245328;
    }
    else if (iParam0 == 2)
    {
        return 861409633;
    }
    else if (iParam0 == 4)
    {
        return -488123221;
    }
    else if (iParam0 == 5)
    {
        return 1759673526;
    }
    else if (iParam0 == 3)
    {
        return -1043459709;
    }
    else if (iParam0 == 6)
    {
        return 400514754;
    }
    else if (iParam0 == 7)
    {
        return 290013743;
    }
    else if (iParam0 == 8)
    {
        return 1064455782;
    };;;;;;;;
    return 0;
}

void sub_15977(unknown uParam0)
{
    int I;
    unknown uVar4;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_MODEL( uParam0, ref uVar4 );
        if (IS_THIS_MODEL_A_HELI( uVar4 ))
        {
            for ( I = 0; I <= (5 - 1); I++ )
            {
                if (ProtectedGet(l_U285[I]) > ProtectedGet(l_U285[l_U137]))
                {
                    l_U137 = I;
                    l_U141 = I;
                }
            }
            uVar4 = sub_16095( l_U141 );
            if (l_U141 != 0)
            {
                if (CAN_THE_STAT_HAVE_STRING( 656 ))
                {
                    REGISTER_STRING_FOR_FRONTEND_STAT( 656, GET_DISPLAY_NAME_FROM_VEHICLE_MODEL( uVar4 ) );
                }
            }
        }
    }
    return;
}

int sub_16095(int iParam0)
{
    if (iParam0 == 1)
    {
        return -1660661558;
    }
    else if (iParam0 == 2)
    {
        return 353883353;
    }
    else if (iParam0 == 4)
    {
        return 837858166;
    }
    else if (iParam0 == 3)
    {
        return 2027357303;
    };;;;
    return 0;
}

void sub_16252()
{
    string sVar2;
    int I;

    sVar2 = "plyimage_0";
    for ( I = 0; I <= 16; I++ )
    {
        if (ProtectedGet(l_U103[I]) > ProtectedGet(l_U103[l_U121]))
        {
            l_U121 = I;
        }
    }
    if (ProtectedGet(l_U103[l_U121]) > 0)
    {
        if (l_U121 == 0)
        {
            sVar2 = "plyimage_1";
        }
        else if (l_U121 == 1)
        {
            sVar2 = "plyimage_2";
        }
        else if (l_U121 == 2)
        {
            sVar2 = "plyimage_3";
        }
        else if (l_U121 == 3)
        {
            sVar2 = "plyimage_4";
        }
        else if (l_U121 == 4)
        {
            sVar2 = "plyimage_5";
        }
        else if (l_U121 == 5)
        {
            sVar2 = "plyimage_6";
        }
        else if (l_U121 == 6)
        {
            sVar2 = "plyimage_7";
        }
        else if (l_U121 == 7)
        {
            sVar2 = "plyimage_8";
        }
        else if (l_U121 == 8)
        {
            sVar2 = "plyimage_9";
        }
        else if (l_U121 == 9)
        {
            sVar2 = "plyimage_10";
        }
        else if (l_U121 == 10)
        {
            sVar2 = "plyimage_11";
        }
        else if (l_U121 == 11)
        {
            sVar2 = "plyimage_12";
        }
        else if (l_U121 == 12)
        {
            sVar2 = "plyimage_13";
        }
        else if (l_U121 == 13)
        {
            sVar2 = "plyimage_14";
        }
        else if (l_U121 == 14)
        {
            sVar2 = "plyimage_15";
        }
        else if (l_U121 == 15)
        {
            sVar2 = "plyimage_16";
        }
        else if (l_U121 == 16)
        {
            sVar2 = "plyimage_17";
        }
        else
        {
            sVar2 = "plyimage_0";
        };;;;;;;;;;;;;;;;;
    }
    else
    {
        sVar2 = "plyimage_0";
    }
    if (CAN_THE_STAT_HAVE_STRING( 658 ))
    {
        REGISTER_STRING_FOR_FRONTEND_STAT( 658, sVar2 );
    }
    return;
}

void sub_16974()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    string sVar5;
    int I;

    sVar5 = "vehtype_0";
    for ( I = 0; I <= (114 - 1); I++ )
    {
        if (ProtectedGet(l_U142[I]) > iVar2)
        {
            iVar2 = ProtectedGet(l_U142[I]);
            sVar5 = "vehtype_1";
        }
    }
    for ( I = 0; I <= (17 - 1); I++ )
    {
        if (ProtectedGet(l_U257[I]) > iVar2)
        {
            iVar2 = ProtectedGet(l_U257[I]);
            sVar5 = "vehtype_2";
        }
    }
    for ( I = 0; I <= (9 - 1); I++ )
    {
        if (ProtectedGet(l_U275[I]) > iVar2)
        {
            iVar2 = ProtectedGet(l_U275[I]);
            sVar5 = "vehtype_3";
        }
    }
    for ( I = 0; I <= (5 - 1); I++ )
    {
        if (ProtectedGet(l_U285[I]) > iVar2)
        {
            iVar2 = ProtectedGet(l_U285[I]);
            sVar5 = "vehtype_4";
        }
    }
    if (CAN_THE_STAT_HAVE_STRING( 652 ))
    {
        REGISTER_STRING_FOR_FRONTEND_STAT( 652, sVar5 );
    }
    return;
}

void sub_17310()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    unknown uVar8;
    int iVar9;
    int iVar10;
    float fVar11;
    string sVar12;

    sVar12 = "Not moved";
    iVar2 = GET_INT_STAT( 80 );
    iVar3 = GET_INT_STAT( 81 );
    iVar4 = GET_INT_STAT( 77 );
    iVar5 = GET_INT_STAT( 79 );
    iVar6 = GET_INT_STAT( 78 );
    iVar7 = GET_INT_STAT( 76 );
    iVar9 = GET_INT_STAT( 86 );
    iVar10 = GET_INT_STAT( 85 );
    fVar11 = TO_FLOAT( ((((((iVar2 + iVar3) + iVar4) + iVar5) + iVar6) + iVar7) + iVar9) + iVar10 );
    fVar11 *= 0.00100000;
    if (fVar11 == 0)
    {
        sVar12 = "plyimage_0";
    }
    else if ((fVar11 < 2) AND (fVar11 > 0))
    {
        sVar12 = "distan_0";
    }
    else if ((fVar11 >= 2) AND (fVar11 < 5))
    {
        sVar12 = "distan_1";
    }
    else if ((fVar11 >= 5) AND (fVar11 < 13.50000000))
    {
        sVar12 = "distan_2";
    }
    else if ((fVar11 >= 13.50000000) AND (fVar11 < 50))
    {
        sVar12 = "distan_3";
    }
    else if ((fVar11 >= 50) AND (fVar11 < 82))
    {
        sVar12 = "distan_4";
    }
    else if ((fVar11 >= 82) AND (fVar11 < 228))
    {
        sVar12 = "distan_5";
    }
    else if ((fVar11 >= 228) AND (fVar11 < 590))
    {
        sVar12 = "distan_6";
    }
    else if ((fVar11 >= 590) AND (fVar11 < 720))
    {
        sVar12 = "distan_7";
    }
    else if ((fVar11 >= 720) AND (fVar11 < 1092))
    {
        sVar12 = "distan_8";
    }
    else if ((fVar11 >= 1092) AND (fVar11 < 2239))
    {
        sVar12 = "distan_9";
    }
    else if ((fVar11 >= 2239) AND (fVar11 < 6744))
    {
        sVar12 = "distan_10";
    }
    else if ((fVar11 >= 6744) AND (fVar11 < 10357))
    {
        sVar12 = "distan_11";
    }
    else if ((fVar11 >= 10357) AND (fVar11 < 25000))
    {
        sVar12 = "distan_12";
    }
    else if ((fVar11 >= 25000) AND (fVar11 < 50000))
    {
        sVar12 = "distan_13";
    }
    else if ((fVar11 >= 50000) AND (fVar11 < 99786))
    {
        sVar12 = "distan_14";
    }
    else if ((fVar11 >= 99786) AND (fVar11 < 238900))
    {
        sVar12 = "distan_15";
    }
    else if (fVar11 >= 238900)
    {
        sVar12 = "distan_17";
    }
    else
    {
        sVar12 = "distan_0";
    };;;;;;;;;;;;;;;;;;
    if (CAN_THE_STAT_HAVE_STRING( 657 ))
    {
        REGISTER_STRING_FOR_FRONTEND_STAT( 657, sVar12 );
    }
    return;
}