void main()
{
    l_U0 = 0;
    l_U1 = 0;
    l_U2 = 0;
    l_U3 = 0;
    l_U4 = 0;
    l_U5 = 0;
    l_U6 = 0;
    l_U32 = 0;
    l_U33 = 0;
    l_U38 = 0;
    l_U39 = 0;
    l_U60 = 1;
    l_U61 = {2312, 753, 5.84000000};
    l_U68 = 0.15500000;
    l_U69 = 0.14800000;
    l_U70 = 0.19000000;
    l_U71 = 0.10000000;
    l_U77 = 0;
    l_U78 = 7000;
    l_U87 = 500;
    l_U88 = 1300;
    l_U89 = -1;
    l_U90 = -1;
    l_U91 = 0;
    l_U92 = 0;
    l_U93 = 0;
    l_U94 = 0;
    l_U95 = 0;
    l_U96 = 0;
    l_U97 = 0;
    l_U98 = 0;
    l_U99 = 0;
    l_U100 = 0;
    l_U101 = 0;
    l_U102 = 0;
    l_U103 = 0;
    l_U104 = 0;
    l_U105 = 0;
    l_U107 = 0.15000000;
    l_U108 = 0.13000000;
    l_U109 = 0.21000000;
    l_U110 = 0.17000000;
    l_U114 = 167;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_319( 0 );
    }
    SET_MISSION_FLAG( 1 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    if (NOT (IS_CHAR_DEAD( sub_420() )))
    {
        SET_PLAYER_CONTROL( sub_382(), 0 );
    }
    sub_1695();
    while (true)
    {
        WAIT( 0 );
        if (l_U106)
        {
            DRAW_RECT( l_U107, l_U108, l_U109, l_U110, l_U111, l_U112, l_U113, l_U114 );
        }
        if (l_U116)
        {
            SET_HELP_MESSAGE_BOX_SIZE( l_U115 );
        }
        SET_WANTED_MULTIPLIER( 0.00000000 );
        ALTER_WANTED_LEVEL( sub_382(), 0 );
        APPLY_WANTED_LEVEL_CHANGE_NOW( sub_382() );
        SWITCH_CAR_GENERATOR( g_U9029[2], 0 );
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 31 ))
        {
            sub_5157();
        }
        else if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
        {
            sub_5295();
        }
        else if (IS_KEYBOARD_KEY_JUST_PRESSED( 25 ))
        {
            GET_CHAR_HEADING( sub_420(), ref l_U67 );
            PRINTNL();
            PRINTSTRING( "PLAYER HEADING- " );
            PRINTFLOAT( l_U67 );
            PRINTNL();
        };;;
        g_U8707 = 1;
        switch (l_U0)
        {
            case 1:
            sub_5987();
            break;
            case 2:
            sub_6401();
            break;
            case 3:
            sub_8076();
            break;
            case 4:
            sub_12286();
            break;
            case 5:
            sub_14861();
            break;
            case 6:
            sub_17648();
            break;
            case 7:
            sub_8117();
            break;
        }
        sub_17914();
        sub_18196();
    }
    return;
}

void sub_319(boolean bParam0)
{
    SET_SPRITES_DRAW_BEFORE_FADE( 0 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    g_U8707 = 0;
    SWITCH_AMBIENT_PLANES( 1 );
    # -NULL-0xc23897( 0 );
    if ((IS_PLAYER_PLAYING( sub_382() )) AND (NOT (IS_CHAR_DEAD( sub_420() ))))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_420() ))
        {
            WARP_CHAR_FROM_CAR_TO_COORD( sub_420(), 2312, 753, 5.84000000 );
        }
    }
    if (DOES_VEHICLE_EXIST( l_U20 ))
    {
        DELETE_CAR( ref l_U20 );
    }
    if (DOES_VEHICLE_EXIST( l_U21 ))
    {
        DELETE_CAR( ref l_U21 );
    }
    if (DOES_VEHICLE_EXIST( l_U22 ))
    {
        DELETE_CAR( ref l_U22 );
    }
    if (g_U9050)
    {
        sub_600( 2 );
    }
    if (bParam0)
    {
        SET_PLAYER_CONTROL( sub_382(), 0 );
    }
    else
    {
        while ((IS_CHAR_DEAD( sub_420() )) || (NOT (IS_PLAYER_PLAYING( sub_382() ))))
        {
            WAIT( 0 );
        }
    }
    if (l_U0 == 2)
    {
        REMOVE_WEAPON_FROM_CHAR( sub_420(), 7 );
    }
    if (l_U33)
    {
        sub_761();
    }
    DISPLAY_RADAR( 1 );
    RELEASE_TEXTURE( l_U8 );
    RELEASE_TEXTURE( l_U9 );
    RELEASE_TEXTURE( l_U10 );
    RELEASE_TEXTURE( l_U11 );
    RELEASE_TEXTURE( l_U12 );
    RELEASE_TEXTURE( l_U13 );
    RELEASE_TEXTURE( l_U14 );
    RELEASE_TEXTURE( l_U15 );
    RELEASE_TEXTURE( l_U18 );
    RELEASE_TEXTURE( l_U16 );
    RELEASE_TEXTURE( l_U17 );
    REMOVE_TXD( l_U7 );
    g_U10981[7]._fU144._fU32 = l_U34;
    ALLOW_EMERGENCY_SERVICES( 1 );
    SET_CREATE_RANDOM_COPS( 1 );
    g_U819 = 0;
    g_U820 = 0;
    g_U824 = 0;
    if (bParam0)
    {
        LOAD_SCENE( 2363.83000000, 376.89000000, 7 );
        if (NOT (IS_CHAR_DEAD( sub_420() )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_420() );
            SET_CHAR_COORDINATES( sub_420(), 2363.83000000, 376.89000000, 5.09000000 );
            SET_CHAR_HEADING( sub_420(), 90 );
            WAIT( 0 );
        }
        DO_SCREEN_FADE_IN( 500 );
    }
    SET_CAM_BEHIND_PED( sub_420() );
    SET_PLAYER_CONTROL( sub_382(), 1 );
    sub_1572();
    g_U10978 = 0;
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_382()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_420()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_600(int iParam0)
{
    if (iParam0 < 20)
    {
        SWITCH_CAR_GENERATOR( g_U9029[iParam0], 101 );
        g_U8708[iParam0]._fU60 = 0;
    }
    return;
}

void sub_761()
{
    if (l_U91)
    {
        GIVE_WEAPON_TO_CHAR( sub_420(), 3, 0, 0 );
    }
    if (l_U92)
    {
        GIVE_WEAPON_TO_CHAR( sub_420(), 1, 0, 0 );
    }
    if (l_U93 > 0)
    {
        GIVE_WEAPON_TO_CHAR( sub_420(), 7, l_U93, 0 );
    }
    if (l_U94 > 0)
    {
        GIVE_WEAPON_TO_CHAR( sub_420(), 9, l_U94, 0 );
    }
    if (l_U97 > 0)
    {
        GIVE_WEAPON_TO_CHAR( sub_420(), 10, l_U97, 0 );
    }
    if (l_U98 > 0)
    {
        GIVE_WEAPON_TO_CHAR( sub_420(), 11, l_U98, 0 );
    }
    if (l_U95 > 0)
    {
        GIVE_WEAPON_TO_CHAR( sub_420(), 12, l_U95, 0 );
    }
    if (l_U96 > 0)
    {
        GIVE_WEAPON_TO_CHAR( sub_420(), 13, l_U96, 0 );
    }
    if (l_U99 > 0)
    {
        GIVE_WEAPON_TO_CHAR( sub_420(), 14, l_U99, 0 );
    }
    if (l_U100 > 0)
    {
        GIVE_WEAPON_TO_CHAR( sub_420(), 15, l_U100, 0 );
    }
    if (l_U101 > 0)
    {
        GIVE_WEAPON_TO_CHAR( sub_420(), 16, l_U101, 0 );
    }
    if (l_U102 > 0)
    {
        GIVE_WEAPON_TO_CHAR( sub_420(), 17, l_U102, 0 );
    }
    if (l_U104 > 0)
    {
        GIVE_WEAPON_TO_CHAR( sub_420(), 5, l_U104, 0 );
    }
    if (l_U103 > 0)
    {
        GIVE_WEAPON_TO_CHAR( sub_420(), 4, l_U103, 0 );
    }
    if (l_U105 > 0)
    {
        GIVE_WEAPON_TO_CHAR( sub_420(), 18, l_U105, 0 );
    }
    SET_CURRENT_CHAR_WEAPON( sub_420(), 0, 1 );
    return;
}

void sub_1572()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_1695()
{
    CLEAR_PRINTS();
    CLEAR_HELP();
    CLEAR_WANTED_LEVEL( sub_382() );
    # -NULL-0xc23897( 1 );
    sub_1738();
    REMOVE_ALL_CHAR_WEAPONS( sub_420() );
    CREATE_CAM( 14, ref l_U30 );
    SWITCH_AMBIENT_PLANES( 0 );
    sub_2060();
    l_U34 = g_U10981[7]._fU144._fU32;
    g_U10981[7]._fU144._fU32 = 1;
    SWITCH_CAR_GENERATOR( g_U9029[2], 0 );
    sub_2200();
    sub_2280();
    sub_2362();
    sub_2441();
    if (HAS_CHAR_GOT_WEAPON( sub_420(), 46 ))
    {
        REMOVE_WEAPON_FROM_CHAR( sub_420(), 46 );
    }
    l_U7 = LOAD_TXD( "axisTut" );
    l_U8 = GET_TEXTURE( l_U7, "ps3_controllerTutorial_DRIVE1" );
    l_U9 = GET_TEXTURE( l_U7, "ps3_controllerTutorial_DRIVE2" );
    l_U10 = GET_TEXTURE( l_U7, "ps3_controllerTutorial_DRIVE3" );
    l_U11 = GET_TEXTURE( l_U7, "ps3_controllerTutorial_PITCH1" );
    l_U12 = GET_TEXTURE( l_U7, "ps3_controllerTutorial_PITCH2" );
    l_U13 = GET_TEXTURE( l_U7, "ps3_controllerTutorial_PITCH3" );
    l_U14 = GET_TEXTURE( l_U7, "ps3_controllerTutorial_RELOAD1" );
    l_U15 = GET_TEXTURE( l_U7, "ps3_controllerTutorial_RELOAD2" );
    l_U16 = GET_TEXTURE( l_U7, "ps3_controllerTutorial_ROLL1" );
    l_U17 = GET_TEXTURE( l_U7, "ps3_controllerTutorial_ROLL2" );
    l_U18 = GET_TEXTURE( l_U7, "ps3_controllerTutorial_ROLL3" );
    sub_3067( "axisTut", "ps3_controllerTutorial_DRIVE1" );
    sub_3067( "axisTut", "ps3_controllerTutorial_DRIVE2" );
    sub_3067( "axisTut", "ps3_controllerTutorial_DRIVE3" );
    sub_3067( "axisTut", "ps3_controllerTutorial_PITCH1" );
    sub_3067( "axisTut", "ps3_controllerTutorial_PITCH2" );
    sub_3067( "axisTut", "ps3_controllerTutorial_PITCH3" );
    sub_3067( "axisTut", "ps3_controllerTutorial_RELOAD1" );
    sub_3067( "axisTut", "ps3_controllerTutorial_RELOAD2" );
    sub_3067( "axisTut", "ps3_controllerTutorial_ROLL1" );
    sub_3067( "axisTut", "ps3_controllerTutorial_ROLL2" );
    sub_3067( "axisTut", "ps3_controllerTutorial_ROLL3" );
    CREATE_WIDGET_GROUP( "sixAxisTut" );
    CREATE_WIDGET_GROUP( "Pad Sprite" );
    ADD_WIDGET_FLOAT_SLIDER( "padSpriteX", ref l_U68, 0.00000000, 1.00000000, 0.01000000 );
    ADD_WIDGET_FLOAT_SLIDER( "padSpriteY", ref l_U69, 0.00000000, 1.00000000, 0.01000000 );
    ADD_WIDGET_FLOAT_SLIDER( "padSpriteScale", ref l_U71, 0.00000000, 0.50000000, 0.01000000 );
    ADD_WIDGET_SLIDER( "drawPadPhase", ref l_U87, 0, 2000, 50 );
    END_WIDGET_GROUP();
    CREATE_WIDGET_GROUP( "Help box offsets" );
    ADD_WIDGET_FLOAT_SLIDER( "heightOffset", ref l_U74, 0.00000000, 1.00000000, 0.00500000 );
    ADD_WIDGET_FLOAT_SLIDER( "widthOffset", ref l_U75, 0.00000000, 1.00000000, 0.00500000 );
    END_WIDGET_GROUP();
    CREATE_WIDGET_GROUP( "Background graphic" );
    ADD_WIDGET_TOGGLE( "drawBackground", ref l_U106 );
    ADD_WIDGET_FLOAT_SLIDER( "backgroundX", ref l_U107, 0.00000000, 1.00000000, 0.01000000 );
    ADD_WIDGET_FLOAT_SLIDER( "backgroundY", ref l_U108, 0.00000000, 1.00000000, 0.01000000 );
    ADD_WIDGET_FLOAT_SLIDER( "backgroundWidth", ref l_U109, 0.00000000, 0.50000000, 0.01000000 );
    ADD_WIDGET_FLOAT_SLIDER( "backgroundHeight", ref l_U110, 0.00000000, 0.50000000, 0.01000000 );
    ADD_WIDGET_SLIDER( "backgroundR", ref l_U111, 0, 255, 1 );
    ADD_WIDGET_SLIDER( "backgroundG", ref l_U112, 0, 255, 1 );
    ADD_WIDGET_SLIDER( "backgroundB", ref l_U113, 0, 255, 1 );
    ADD_WIDGET_SLIDER( "backgroundA", ref l_U114, 0, 255, 1 );
    END_WIDGET_GROUP();
    CREATE_WIDGET_GROUP( "Background help box" );
    ADD_WIDGET_TOGGLE( "drawBackgroundHelpBox", ref l_U116 );
    ADD_WIDGET_SLIDER( "helpMessageBoxSize", ref l_U115, 0, 1000, 1 );
    END_WIDGET_GROUP();
    CREATE_WIDGET_GROUP( "Misc" );
    ADD_WIDGET_SLIDER( "wheelieDuration", ref l_U88, 0, 5000, 100 );
    END_WIDGET_GROUP();
    END_WIDGET_GROUP();
    CLEAR_AREA( l_U61._fU0, l_U61._fU4, l_U61._fU8, 800, 1 );
    CLEAR_AREA_OF_COPS( l_U61._fU0, l_U61._fU4, l_U61._fU8, 800 );
    if (IS_CHAR_IN_ANY_CAR( sub_420() ))
    {
        WARP_CHAR_FROM_CAR_TO_COORD( sub_420(), l_U61._fU0, l_U61._fU4, l_U61._fU8 );
    }
    SET_CHAR_COORDINATES_NO_OFFSET( sub_420(), l_U61._fU0, l_U61._fU4, l_U61._fU8 );
    CLEAR_CHAR_TASKS( sub_420() );
    LOAD_SCENE( l_U61._fU0, l_U61._fU4, l_U61._fU8 );
    SET_CHAR_HEADING( sub_420(), 45 );
    SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
    SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
    ADD_SCENARIO_BLOCKING_AREA( 2130, 65036, -10, 3000, 1400, 100 );
    SET_WANTED_MULTIPLIER( 0.00000000 );
    ALLOW_EMERGENCY_SERVICES( 0 );
    SET_CREATE_RANDOM_COPS( 0 );
    GIVE_WEAPON_TO_CHAR( sub_420(), 7, 200, 1 );
    GET_MAX_AMMO_IN_CLIP( sub_420(), 7, ref l_U81 );
    WAIT( 1000 );
    SET_AMMO_IN_CLIP( sub_420(), 7, 16 );
    SET_WANTED_MULTIPLIER( 0.00000000 );
    SET_GAME_CAM_HEADING( 0.00000000 );
    sub_4795( "AXISTUT", 0 );
    l_U0 = 1;
    DO_SCREEN_FADE_IN( 500 );
    while (NOT IS_SCREEN_FADED_IN())
    {
        WAIT( 0 );
    }
    SETTIMERA( 100000 );
    return;
}

void sub_1738()
{
    if (HAS_CHAR_GOT_WEAPON( sub_420(), 3 ))
    {
        l_U91 = 1;
    }
    if (HAS_CHAR_GOT_WEAPON( sub_420(), 1 ))
    {
        l_U92 = 1;
    }
    GET_AMMO_IN_CHAR_WEAPON( sub_420(), 7, ref l_U93 );
    GET_AMMO_IN_CHAR_WEAPON( sub_420(), 9, ref l_U94 );
    GET_AMMO_IN_CHAR_WEAPON( sub_420(), 12, ref l_U95 );
    GET_AMMO_IN_CHAR_WEAPON( sub_420(), 13, ref l_U96 );
    GET_AMMO_IN_CHAR_WEAPON( sub_420(), 10, ref l_U97 );
    GET_AMMO_IN_CHAR_WEAPON( sub_420(), 11, ref l_U98 );
    GET_AMMO_IN_CHAR_WEAPON( sub_420(), 14, ref l_U99 );
    GET_AMMO_IN_CHAR_WEAPON( sub_420(), 15, ref l_U100 );
    GET_AMMO_IN_CHAR_WEAPON( sub_420(), 16, ref l_U101 );
    GET_AMMO_IN_CHAR_WEAPON( sub_420(), 17, ref l_U102 );
    GET_AMMO_IN_CHAR_WEAPON( sub_420(), 5, ref l_U104 );
    GET_AMMO_IN_CHAR_WEAPON( sub_420(), 4, ref l_U103 );
    GET_AMMO_IN_CHAR_WEAPON( sub_420(), 18, ref l_U105 );
    l_U33 = 1;
    return;
}

void sub_2060()
{
    if (sub_2069())
    {
        g_U64921 = 1;
    }
    return;
}

int sub_2069()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "dwayne_backup" )) >= 1)
    {
        return 1;
    }
    return 0;
}

void sub_2200()
{
    if (sub_2209())
    {
        g_U64924 = 1;
    }
    return;
}

int sub_2209()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "packie_bomb" )) >= 1)
    {
        return 1;
    }
    return 0;
}

void sub_2280()
{
    if (sub_2289())
    {
        g_U64925 = 1;
    }
    return;
}

int sub_2289()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "jacob_gun_car" )) >= 1)
    {
        return 1;
    }
    return 0;
}

void sub_2362()
{
    if (sub_2371())
    {
        g_U64926 = 1;
    }
    return;
}

int sub_2371()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "roman_taxi" )) >= 1)
    {
        return 1;
    }
    return 0;
}

void sub_2441()
{
    if (sub_2371())
    {
        g_U64927 = 1;
    }
    return;
}

void sub_3067(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4795(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_4831())
            {
                REQUEST_ADDITIONAL_TEXT( uParam0, uParam1 );
            }
            WAIT( 0 );
        }
        else
        {
            bVar4 = false;
        }
    }
    return;
}

int sub_4831()
{
    int I;

    for ( I = 0; I <= (8 - 1); I++ )
    {
        if (IS_STREAMING_ADDITIONAL_TEXT( I ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_5157()
{
    CLEAR_HELP();
    CLEAR_PRINTS();
    REMOVE_BLIP( l_U24 );
    DO_SCREEN_FADE_OUT( 500 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    SET_PLAYER_CONTROL( sub_382(), 0 );
    PRINT_NOW( "ATUT_END", 7000, 1 );
    sub_319( 1 );
    return;
}

void sub_5295()
{
    switch (l_U0)
    {
        case 1:
        sub_5354();
        l_U0 = 2;
        break;
        case 2:
        sub_5483();
        l_U0 = 3;
        break;
        case 3:
        sub_5540();
        l_U0 = 4;
        break;
        case 4:
        sub_5663();
        l_U0 = 5;
        break;
        case 5:
        l_U5 = 4;
        SET_CHAR_COORDINATES( sub_420(), 2248.60000000, 756.30000000, 50 );
        break;
    }
    return;
}

void sub_5354()
{
    DELETE_CHECKPOINT( l_U117 );
    sub_5375();
    CLEAR_PRINTS();
    CLEAR_HELP();
    return;
}

void sub_5375()
{
    REMOVE_BLIP( l_U24 );
    REMOVE_BLIP( l_U25 );
    REMOVE_BLIP( l_U26 );
    REMOVE_BLIP( l_U27 );
    REMOVE_BLIP( l_U28 );
    REMOVE_BLIP( l_U29 );
    return;
}

void sub_5483()
{
    DELETE_CHECKPOINT( l_U117 );
    sub_5375();
    CLEAR_PRINTS();
    CLEAR_HELP();
    return;
}

void sub_5540()
{
    if (IS_CHAR_IN_ANY_CAR( sub_420() ))
    {
        WARP_CHAR_FROM_CAR_TO_COORD( sub_420(), 2312, 753, 5.84000000 );
    }
    if (DOES_VEHICLE_EXIST( l_U20 ))
    {
        DELETE_CAR( ref l_U20 );
    }
    DELETE_CHECKPOINT( l_U117 );
    sub_5375();
    CLEAR_PRINTS();
    CLEAR_HELP();
    return;
}

void sub_5663()
{
    if (IS_CHAR_IN_ANY_CAR( sub_420() ))
    {
        WARP_CHAR_FROM_CAR_TO_COORD( sub_420(), 2312, 753, 5.84000000 );
    }
    if (DOES_VEHICLE_EXIST( l_U21 ))
    {
        DELETE_CAR( ref l_U21 );
    }
    DELETE_CHECKPOINT( l_U117 );
    sub_5375();
    CLEAR_PRINTS();
    CLEAR_HELP();
    return;
}

void sub_5987()
{
    switch (l_U1)
    {
        case 0:
        if (TIMERA() >= l_U78)
        {
            switch (l_U90)
            {
                case -1:
                PRINT_HELP( "ATUT_WLCOM1" );
                l_U78 = 4000;
                break;
                case 0:
                CLEAR_HELP();
                PRINT_HELP( "ATUT_WLCOM2" );
                l_U78 = 7000;
                break;
                case 1:
                CLEAR_HELP();
                PRINT_HELP( "ATUT_WLCOM3" );
                l_U78 = 4000;
                break;
                case 2:
                CLEAR_HELP();
                PRINT_HELP( "ATUT_RELOAD1" );
                l_U78 = 4000;
                break;
                case 3:
                CLEAR_HELP();
                SET_PLAYER_CONTROL( sub_382(), 1 );
                l_U0 = 2;
                break;
            }
            if (NOT l_U40)
            {
                SETTIMERA( 0 );
            }
            else
            {
                l_U40 = 0;
            }
            l_U90++;
        }
        if (sub_6313())
        {
            SETTIMERA( 20000 );
        }
        break;
        default:
    }
    return;
}

int sub_6313()
{
    if ((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_6401()
{
    switch (l_U2)
    {
        case 0:
        PRINT_NOW( "ATUT_RELOAD3", 7500, 0 );
        SETTIMERB( 0 );
        l_U2 = 1;
        break;
        case 1:
        if (TIMERB() > 1500)
        {
            if (NOT l_U41)
            {
                ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                PRINT_HELP_FOREVER( "ATUT_RELOAD2" );
                l_U118 = GET_STRING_FROM_TEXT_FILE( "ATUT_RELOAD2_S" );
                ADD_TO_PREVIOUS_BRIEF( l_U118 );
                l_U41 = 1;
            }
            sub_6592( 2 );
        }
        GET_AMMO_IN_CHAR_WEAPON( sub_420(), 7, ref l_U80 );
        if (l_U80 < 5)
        {
            ADD_AMMO_TO_CHAR( sub_420(), 7, 200 );
        }
        if (HAS_RELOADED_WITH_MOTION_CONTROL( 0, ref l_U39 ))
        {
            if (l_U39)
            {
                GET_AMMO_IN_CLIP( sub_420(), 7, ref l_U80 );
                if (l_U80 < l_U81)
                {
                    l_U37 = 1;
                }
            }
        }
        GET_AMMO_IN_CLIP( sub_420(), 7, ref l_U80 );
        if ((l_U37) AND (l_U80 == l_U81))
        {
            CLEAR_HELP();
            PRINT_NOW( "ATUT_MARKER", 7500, 0 );
            ADD_BLIP_FOR_COORD( 2312, 764, 5.70000000, ref l_U24 );
            l_U2 = 2;
        }
        break;
        case 2:
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_420(), 2312, 764, 6.50000000, 2.50000000, 2.50000000, 2.50000000, 1 ))
        {
            REMOVE_BLIP( l_U24 );
            CLEAR_PRINTS();
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                g_U8707 = 1;
                SWITCH_CAR_GENERATOR( g_U9029[2], 0 );
                WAIT( 0 );
            }
            SET_PLAYER_CONTROL( sub_382(), 0 );
            REMOVE_WEAPON_FROM_CHAR( sub_420(), 7 );
            l_U0 = 3;
        }
        break;
    }
    return;
}

void sub_6592(int iParam0)
{
    GET_GAME_TIMER( ref l_U80 );
    switch (iParam0)
    {
        case 0:
        if ((l_U80 - l_U87) > l_U86)
        {
            if (l_U19 == l_U8)
            {
                l_U19 = l_U9;
            }
            else if (l_U19 == l_U9)
            {
                l_U19 = l_U10;
            }
            else
            {
                l_U19 = l_U8;
            }
            GET_GAME_TIMER( ref l_U86 );
        }
        break;
        case 1:
        if ((l_U80 - l_U87) > l_U86)
        {
            if (l_U19 == l_U11)
            {
                l_U19 = l_U12;
            }
            else if (l_U19 == l_U12)
            {
                l_U19 = l_U13;
            }
            else
            {
                l_U19 = l_U11;
            }
            GET_GAME_TIMER( ref l_U86 );
        }
        break;
        case 2:
        if ((l_U80 - l_U87) > l_U86)
        {
            if (l_U19 == l_U14)
            {
                l_U19 = l_U15;
            }
            else
            {
                l_U19 = l_U14;
            }
            GET_GAME_TIMER( ref l_U86 );
        }
        break;
        case 3:
        if ((l_U80 - l_U87) > l_U86)
        {
            if (l_U19 == l_U18)
            {
                l_U19 = l_U16;
            }
            else if (l_U19 == l_U16)
            {
                if (l_U53)
                {
                    l_U19 = l_U18;
                    l_U53 = 0;
                }
                else
                {
                    l_U19 = l_U17;
                    l_U53 = 1;
                }
            }
            else if (l_U19 == l_U17)
            {
                l_U19 = l_U16;
            }
            else
            {
                l_U19 = l_U18;
            };;;
            GET_GAME_TIMER( ref l_U86 );
        }
        break;
    }
    if (IS_HELP_MESSAGE_BEING_DISPLAYED())
    {
        GET_HELP_MESSAGE_BOX_SIZE( ref l_U73, ref l_U72 );
    }
    SET_SPRITES_DRAW_BEFORE_FADE( 1 );
    if (iParam0 == 1)
    {
        if (GET_IS_WIDESCREEN())
        {
            DRAW_SPRITE( l_U19, l_U68, l_U72 - 0.05300000, l_U71, l_U71, 0.00000000, 255, 255, 255, 255 );
        }
        else
        {
            DRAW_SPRITE( l_U19, l_U68 + 0.07500000, l_U72 - 0.05500000, l_U71, l_U71, 0.00000000, 255, 255, 255, 255 );
        }
    }
    else if (iParam0 == 3)
    {
        if (l_U0 == 5)
        {
            if (GET_IS_WIDESCREEN())
            {
                DRAW_SPRITE( l_U19, l_U68, l_U72 - 0.05400000, l_U71, l_U71, 0.00000000, 255, 255, 255, 255 );
            }
            else
            {
                DRAW_SPRITE( l_U19, l_U68 + 0.07500000, l_U72 - 0.06000000, l_U71 + 0.01000000, l_U71 + 0.01000000, 0.00000000, 255, 255, 255, 255 );
            }
        }
        else if (GET_IS_WIDESCREEN())
        {
            DRAW_SPRITE( l_U19, l_U68, l_U72 - 0.05300000, l_U71, l_U71, 0.00000000, 255, 255, 255, 255 );
        }
        else
        {
            DRAW_SPRITE( l_U19, l_U68 + 0.07500000, l_U72 - 0.05900000, l_U71 + 0.01000000, l_U71 + 0.01000000, 0.00000000, 255, 255, 255, 255 );
        }
    }
    else if (GET_IS_WIDESCREEN())
    {
        DRAW_SPRITE( l_U19, l_U68, l_U72 - 0.04700000, l_U71, l_U71, 0.00000000, 255, 255, 255, 255 );
    }
    else
    {
        DRAW_SPRITE( l_U19, l_U68 + 0.07500000, l_U72 - 0.05400000, l_U71 + 0.01000000, l_U71 + 0.01000000, 0.00000000, 255, 255, 255, 255 );
    };;;
    SET_SPRITES_DRAW_BEFORE_FADE( 0 );
    return;
}

void sub_8076()
{
    if (l_U3 != 0)
    {
        if (NOT (IS_VEH_DRIVEABLE( l_U20 )))
        {
            l_U123 = 0;
            sub_8117();
            return;
        }
        else if (sub_9198( l_U20, 0 ))
        {
            l_U123 = 3;
            sub_8117();
            return;
        }
        else if ((IS_PLAYER_PLAYING( sub_382() )) AND (l_U60))
        {
            if (NOT (IS_CHAR_IN_CAR( sub_420(), l_U20 )))
            {
                if (NOT (DOES_BLIP_EXIST( l_U27 )))
                {
                    ADD_BLIP_FOR_CAR( l_U20, ref l_U27 );
                    SET_BLIP_AS_FRIENDLY( l_U27, 1 );
                    DELETE_CHECKPOINT( l_U117 );
                    REMOVE_BLIP( l_U24 );
                    REMOVE_BLIP( l_U25 );
                    REMOVE_BLIP( l_U26 );
                    l_U43 = 0;
                    l_U42 = 0;
                    l_U57 = 0;
                }
                CLEAR_PRINTS();
                CLEAR_HELP();
                SETTIMERB( 0 );
                PRINT_NOW( "ATUT_OUTBIKE", 1, 0 );
                return;
            }
        };;;
    }
    REMOVE_BLIP( l_U27 );
    switch (l_U3)
    {
        case 0:
        if (NOT (HAS_MODEL_LOADED( 788045382 )))
        {
            REQUEST_MODEL( 788045382 );
        }
        else
        {
            CREATE_CAR( 788045382, 2331.45000000, 747.59000000, 5.77000000, ref l_U20, 1 );
            SET_CAR_HEADING( l_U20, 47 );
            SET_CAR_ON_GROUND_PROPERLY( l_U20 );
            WARP_CHAR_INTO_CAR( sub_420(), l_U20 );
            SET_CAM_BEHIND_PED( sub_420() );
            DO_SCREEN_FADE_IN( 500 );
            while (NOT IS_SCREEN_FADED_IN())
            {
                g_U8707 = 1;
                SWITCH_CAR_GENERATOR( g_U9029[2], 0 );
                WAIT( 0 );
            }
            l_U3 = 1;
            l_U90 = -1;
            l_U40 = 0;
        }
        break;
        case 1:
        if (TIMERA() >= l_U78)
        {
            switch (l_U90)
            {
                case -1:
                PRINT_HELP( "ATUT_BIKE6a" );
                l_U78 = 4000;
                break;
                case 0:
                PRINT_HELP( "ATUT_BIKE1a" );
                l_U78 = 6000;
                break;
                case 1:
                PRINT_HELP( "ATUT_BIKE2" );
                l_U78 = 4000;
                break;
                case 2:
                CLEAR_HELP();
                PRINT_NOW( "ATUT_BIKE1", 7500, 0 );
                SET_PLAYER_CONTROL( sub_382(), 1 );
                SETTIMERB( 0 );
                l_U3 = 2;
                break;
            }
            if (NOT l_U40)
            {
                SETTIMERA( 0 );
            }
            else
            {
                l_U40 = 0;
            }
            l_U90++;
        }
        if (sub_6313())
        {
            SETTIMERA( 20000 );
        }
        if (l_U3 == 2)
        {
            SET_PLAYER_CONTROL( sub_382(), 1 );
        }
        break;
        case 2:
        if (TIMERB() > 1500)
        {
            if (NOT l_U42)
            {
                ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                PRINT_HELP_FOREVER( "ATUT_BIKE2a" );
                l_U42 = 1;
            }
            sub_6592( 3 );
        }
        switch (l_U82)
        {
            case 0:
            if (LOCATE_CHAR_IN_CAR_3D( sub_420(), 2246.76000000, 823.51000000, 5.77000000, 10, 10, 10, 0 ))
            {
                PLAY_AUDIO_EVENT( "FRONTEND_GAME_PICKUP_CHECKPOINT" );
                l_U56 = 1;
                l_U82++;
            }
            else if (NOT (DOES_BLIP_EXIST( l_U25 )))
            {
                DELETE_CHECKPOINT( l_U117 );
                l_U117 = CREATE_CHECKPOINT( 2, 2246.76000000, 823.51000000, 5.77000000, 2251.67000000, 865.81000000, 5.77000000, 1 );
                REMOVE_BLIP( l_U24 );
                REMOVE_BLIP( l_U25 );
                ADD_BLIP_FOR_COORD( 2246.76000000, 823.51000000, 5.77000000, ref l_U25 );
                CHANGE_BLIP_DISPLAY( l_U25, 2 );
                REMOVE_BLIP( l_U26 );
                ADD_BLIP_FOR_COORD( 2251.67000000, 865.81000000, 5.77000000, ref l_U26 );
                CHANGE_BLIP_DISPLAY( l_U26, 2 );
                DIM_BLIP( l_U26, 1 );
                CHANGE_BLIP_SCALE( l_U26, 0.80000000 );
                l_U86 = 0;
                SETTIMERB( 0 );
                CLEAR_HELP();
                CLEAR_PRINTS();
                PRINT_NOW( "ATUT_BIKE1", 7500, 0 );
            }
            break;
            case 1:
            if (LOCATE_CHAR_IN_CAR_3D( sub_420(), 2251.67000000, 865.81000000, 5.77000000, 10, 10, 10, 0 ))
            {
                PLAY_AUDIO_EVENT( "FRONTEND_GAME_PICKUP_CHECKPOINT" );
                l_U56 = 1;
                l_U82++;
            }
            else if ((NOT (DOES_BLIP_EXIST( l_U25 ))) || (l_U56))
            {
                DELETE_CHECKPOINT( l_U117 );
                l_U117 = CREATE_CHECKPOINT( 2, 2251.67000000, 865.81000000, 5.77000000, 2348.05000000, 827.81000000, 5.77000000, 1 );
                REMOVE_BLIP( l_U25 );
                ADD_BLIP_FOR_COORD( 2251.67000000, 865.81000000, 5.77000000, ref l_U25 );
                CHANGE_BLIP_DISPLAY( l_U25, 2 );
                REMOVE_BLIP( l_U26 );
                ADD_BLIP_FOR_COORD( 2348.05000000, 827.81000000, 5.77000000, ref l_U26 );
                CHANGE_BLIP_DISPLAY( l_U26, 2 );
                DIM_BLIP( l_U26, 1 );
                CHANGE_BLIP_SCALE( l_U26, 0.80000000 );
                l_U56 = 0;
            }
            break;
            case 2:
            if (LOCATE_CHAR_IN_CAR_3D( sub_420(), 2348.05000000, 827.81000000, 5.77000000, 10, 10, 10, 0 ))
            {
                PLAY_AUDIO_EVENT( "FRONTEND_GAME_PICKUP_CHECKPOINT" );
                CLEAR_PRINTS();
                CLEAR_HELP();
                DELETE_CHECKPOINT( l_U117 );
                REMOVE_BLIP( l_U25 );
                SET_PLAYER_CONTROL( sub_382(), 0 );
                GET_CHAR_HEADING( sub_420(), ref l_U67 );
                if (NOT ((l_U67 > 180) AND (l_U67 < 270)))
                {
                    DO_SCREEN_FADE_OUT( 500 );
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    if (NOT (IS_CAR_DEAD( l_U20 )))
                    {
                        SET_CAR_COORDINATES( l_U20, 2386.60000000, 791.86000000, 5.77000000 );
                        SET_CAR_HEADING( l_U20, 228 );
                    }
                    WAIT( 0 );
                    SET_CAM_BEHIND_PED( sub_420() );
                    DO_SCREEN_FADE_IN( 500 );
                    while (NOT IS_SCREEN_FADED_IN())
                    {
                        WAIT( 0 );
                    }
                }
                SETTIMERA( 999999 );
                l_U60 = 0;
                l_U90 = -1;
                l_U3 = 3;
            }
            else if ((NOT (DOES_BLIP_EXIST( l_U25 ))) || (l_U56))
            {
                DELETE_CHECKPOINT( l_U117 );
                l_U117 = CREATE_CHECKPOINT( 3, 2348.05000000, 827.81000000, 5.77000000, 0, 0, 0, 1 );
                REMOVE_BLIP( l_U25 );
                ADD_BLIP_FOR_COORD( 2348.05000000, 827.81000000, 5.77000000, ref l_U25 );
                CHANGE_BLIP_DISPLAY( l_U25, 2 );
                CHANGE_BLIP_SPRITE( l_U25, 65 );
                REMOVE_BLIP( l_U26 );
                l_U56 = 0;
            }
            break;
        }
        break;
        case 3:
        switch (l_U85)
        {
            case 0:
            if (TIMERA() >= l_U78)
            {
                switch (l_U90)
                {
                    case -1:
                    PRINT_HELP( "ATUT_BIKE3" );
                    l_U78 = 7000;
                    break;
                    case 0:
                    CLEAR_HELP();
                    SET_PLAYER_CONTROL( sub_382(), 1 );
                    PRINT_NOW( "ATUT_BIKE4", 7500, 0 );
                    SETTIMERB( 0 );
                    l_U60 = 1;
                    l_U85++;
                    break;
                }
                if (NOT l_U40)
                {
                    SETTIMERA( 0 );
                }
                else
                {
                    l_U40 = 0;
                }
                l_U90++;
            }
            if (sub_6313())
            {
                SETTIMERA( 20000 );
            }
            break;
            case 1:
            if (NOT l_U57)
            {
                l_U86 = 0;
                SETTIMERB( 0 );
                CLEAR_HELP();
                CLEAR_PRINTS();
                PRINT_NOW( "ATUT_BIKE4", 7500, 0 );
            }
            if (TIMERB() > 1500)
            {
                if (NOT l_U43)
                {
                    CLEAR_HELP();
                    ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                    PRINT_HELP_FOREVER( "ATUT_BIKE5" );
                    l_U43 = 1;
                }
                sub_6592( 1 );
            }
            if (l_U54)
            {
                GET_GAME_TIMER( ref l_U80 );
                if ((l_U80 - 1000) > l_U89)
                {
                    l_U56 = 1;
                    l_U85++;
                }
            }
            else if (NOT (IS_CAR_DEAD( l_U20 )))
            {
                if (IS_CHAR_IN_CAR( sub_420(), l_U20 ))
                {
                    if (NOT (IS_VEHICLE_ON_ALL_WHEELS( l_U20 )))
                    {
                        if (NOT (IS_CAR_IN_AIR_PROPER( l_U20 )))
                        {
                            if (l_U89 == -1)
                            {
                                GET_GAME_TIMER( ref l_U89 );
                            }
                            else
                            {
                                GET_GAME_TIMER( ref l_U80 );
                                if ((l_U80 - l_U88) > l_U89)
                                {
                                    GET_GAME_TIMER( ref l_U89 );
                                    l_U54 = 1;
                                }
                            }
                        }
                        else
                        {
                            l_U89 = -1;
                        }
                    }
                    else
                    {
                        l_U89 = -1;
                    }
                }
                else
                {
                    l_U89 = -1;
                }
            }
            else
            {
                l_U89 = -1;
            }
            break;
            case 2:
            if (LOCATE_CHAR_IN_CAR_3D( sub_420(), 2585.20000000, 613.63000000, 16.70000000, 5, 5, 12.50000000, 1 ))
            {
                DELETE_CHECKPOINT( l_U117 );
                REMOVE_BLIP( l_U25 );
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
                SET_PLAYER_CONTROL( sub_382(), 0 );
                sub_5540();
                l_U0 = 4;
            }
            else if ((NOT l_U57) || (l_U56))
            {
                REMOVE_BLIP( l_U25 );
                REMOVE_BLIP( l_U26 );
                ADD_BLIP_FOR_COORD( 2585.20000000, 613.63000000, 6.00000000, ref l_U25 );
                CLEAR_HELP();
                PRINT_NOW( "ATUT_MARKER", 7500, 0 );
                l_U56 = 0;
            }
            break;
        }
        break;
    }
    l_U57 = 1;
    return;
}

void sub_8117()
{
    l_U0 = 7;
    CLEAR_HELP();
    REMOVE_BLIP( l_U24 );
    REMOVE_BLIP( l_U25 );
    REMOVE_BLIP( l_U26 );
    REMOVE_BLIP( l_U27 );
    REMOVE_BLIP( l_U28 );
    REMOVE_BLIP( l_U29 );
    switch (l_U123)
    {
        case 0:
        if (NOT l_U122)
        {
            CLEAR_PRINTS();
            PRINT_NOW( "ATUT_DEDBIKE", 7000, 1 );
            l_U122 = 1;
        }
        else if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "ATUT_DEDBIKE", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
        {
            if (NOT IS_SCREEN_FADING())
            {
                sub_8371();
            }
        }
        break;
        case 1:
        if (NOT l_U122)
        {
            CLEAR_PRINTS();
            PRINT_NOW( "ATUT_DEDBOAT", 7000, 1 );
            l_U122 = 1;
        }
        else if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "ATUT_DEDBOAT", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
        {
            if (NOT IS_SCREEN_FADING())
            {
                sub_8371();
            }
        }
        break;
        case 2:
        if (NOT l_U122)
        {
            CLEAR_PRINTS();
            PRINT_NOW( "ATUT_DEDHELI", 7000, 1 );
            l_U122 = 1;
        }
        else if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "ATUT_DEDHELI", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
        {
            if (NOT IS_SCREEN_FADING())
            {
                sub_8371();
            }
        }
        break;
        case 3:
        if (NOT l_U122)
        {
            CLEAR_PRINTS();
            PRINT_NOW( "ATUT_STUCKBIKE", 7000, 1 );
            l_U122 = 1;
        }
        else if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "ATUT_STUCKBIKE", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
        {
            if (NOT IS_SCREEN_FADING())
            {
                sub_8371();
            }
        }
        break;
        case 4:
        if (NOT l_U122)
        {
            CLEAR_PRINTS();
            PRINT_NOW( "ATUT_STUCKBOAT", 7000, 1 );
            l_U122 = 1;
        }
        else if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "ATUT_STUCKBOAT", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
        {
            if (NOT IS_SCREEN_FADING())
            {
                sub_8371();
            }
        }
        break;
        case 5:
        if (NOT l_U122)
        {
            CLEAR_PRINTS();
            PRINT_NOW( "ATUT_STUCKHELI", 7000, 1 );
            l_U122 = 1;
        }
        else if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "ATUT_STUCKHELI", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
        {
            if (NOT IS_SCREEN_FADING())
            {
                sub_8371();
            }
        }
        break;
        case 6:
        if (NOT l_U122)
        {
            CLEAR_PRINTS();
            PRINT_NOW( "ATUT_FAILEDLEFT", 7000, 1 );
            l_U122 = 1;
        }
        else if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "ATUT_FAILEDLEFT", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
        {
            if (NOT IS_SCREEN_FADING())
            {
                sub_8371();
            }
        }
        break;
    }
    return;
}

void sub_8371()
{
    DO_SCREEN_FADE_OUT( 500 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    PRINT_NOW( "ATUT_FAIL", 7000, 1 );
    l_U32 = 1;
    sub_319( 1 );
    return;
}

int sub_9198(unknown uParam0, boolean bParam1)
{
    if (CHECK_STUCK_TIMER( uParam0, 3, 60000 ))
    {
        return 1;
    }
    if (CHECK_STUCK_TIMER( uParam0, 2, 5000 ))
    {
        return 1;
    }
    if (bParam1)
    {
        if (CHECK_STUCK_TIMER( uParam0, 0, 5000 ))
        {
            return 1;
        }
    }
    if (bParam1)
    {
        if (CHECK_STUCK_TIMER( uParam0, 1, 40000 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_12286()
{
    if (l_U4 != 0)
    {
        if (NOT (IS_VEH_DRIVEABLE( l_U21 )))
        {
            l_U123 = 1;
            sub_8117();
            return;
        }
        else if ((sub_9198( l_U21, 1 )) || (sub_12352( l_U21 )))
        {
            l_U123 = 4;
            sub_8117();
            return;
        }
        else if (IS_PLAYER_PLAYING( sub_382() ))
        {
            if (NOT (IS_CHAR_IN_CAR( sub_420(), l_U21 )))
            {
                if (NOT (DOES_BLIP_EXIST( l_U28 )))
                {
                    ADD_BLIP_FOR_CAR( l_U21, ref l_U28 );
                    SET_BLIP_AS_FRIENDLY( l_U28, 1 );
                    DELETE_CHECKPOINT( l_U117 );
                    REMOVE_BLIP( l_U24 );
                    REMOVE_BLIP( l_U25 );
                    REMOVE_BLIP( l_U26 );
                    l_U44 = 0;
                    l_U45 = 0;
                    l_U46 = 0;
                    l_U47 = 0;
                    l_U58 = 0;
                }
                SETTIMERB( 0 );
                CLEAR_PRINTS();
                CLEAR_HELP();
                PRINT_NOW( "ATUT_OUTBOAT", 1, 0 );
                l_U44 = 0;
                return;
            }
        };;;
    }
    REMOVE_BLIP( l_U28 );
    switch (l_U4)
    {
        case 0:
        if (NOT (HAS_MODEL_LOADED( 290013743 )))
        {
            REQUEST_MODEL( 290013743 );
        }
        else
        {
            CREATE_CAR( 290013743, 2690, 664, -0.50000000, ref l_U21, 1 );
            SET_CAR_HEADING( l_U21, 297 );
            WARP_CHAR_INTO_CAR( sub_420(), l_U21 );
            CLEAR_HELP();
            CLEAR_PRINTS();
            SET_CAM_BEHIND_PED( sub_420() );
            DO_SCREEN_FADE_IN( 500 );
            while (NOT IS_SCREEN_FADED_IN())
            {
                WAIT( 0 );
            }
            l_U4 = 1;
            l_U90 = -1;
            l_U40 = 0;
        }
        break;
        case 1:
        if (TIMERA() >= l_U78)
        {
            switch (l_U90)
            {
                case -1:
                PRINT_HELP( "ATUT_BOAT6a" );
                l_U78 = 4000;
                break;
                case 0:
                PRINT_HELP( "ATUT_BOAT1a" );
                l_U78 = 6000;
                break;
                case 1:
                PRINT_HELP( "ATUT_BOAT2" );
                l_U78 = 4000;
                break;
                case 2:
                PRINT_HELP( "ATUT_BOAT3a" );
                l_U78 = 4000;
                break;
                case 3:
                SETTIMERB( 0 );
                l_U56 = 1;
                l_U4 = 2;
                break;
            }
            if (NOT l_U40)
            {
                SETTIMERA( 0 );
            }
            else
            {
                l_U40 = 0;
            }
            l_U90++;
        }
        if (sub_6313())
        {
            SETTIMERA( 20000 );
        }
        break;
        case 2:
        switch (l_U83)
        {
            case 0:
            if (TIMERB() > 1500)
            {
                if (NOT l_U44)
                {
                    ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                    PRINT_HELP_FOREVER( "ATUT_BOAT2a" );
                    l_U44 = 1;
                }
                sub_6592( 3 );
            }
            if (LOCATE_CHAR_IN_CAR_3D( sub_420(), 2801, 709, 0.00000000, 20, 20, 20, 0 ))
            {
                PLAY_AUDIO_EVENT( "FRONTEND_GAME_PICKUP_CHECKPOINT" );
                l_U56 = 1;
                l_U83++;
            }
            else if ((NOT (DOES_BLIP_EXIST( l_U25 ))) || (l_U56))
            {
                l_U56 = 0;
                l_U86 = 0;
                SET_PLAYER_CONTROL( sub_382(), 1 );
                l_U117 = CREATE_CHECKPOINT( 2, 2801, 709, 0.00000000, 2926, 678, 0, 1 );
                REMOVE_BLIP( l_U24 );
                ADD_BLIP_FOR_COORD( 2801, 709, 0, ref l_U25 );
                CHANGE_BLIP_DISPLAY( l_U25, 2 );
                REMOVE_BLIP( l_U26 );
                ADD_BLIP_FOR_COORD( 2926, 678, 0, ref l_U26 );
                CHANGE_BLIP_DISPLAY( l_U26, 2 );
                DIM_BLIP( l_U26, 1 );
                CHANGE_BLIP_SCALE( l_U26, 0.80000000 );
                CLEAR_HELP();
                PRINT_NOW( "ATUT_BOAT1", 7500, 0 );
                SETTIMERB( 0 );
            }
            break;
            case 1:
            if (TIMERB() > 1500)
            {
                if (NOT l_U46)
                {
                    ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                    PRINT_HELP_FOREVER( "ATUT_BOAT2a" );
                    l_U46 = 1;
                }
                sub_6592( 3 );
            }
            if (LOCATE_CHAR_IN_CAR_3D( sub_420(), 2926, 678, 0, 20, 20, 20, 0 ))
            {
                SETTIMERB( 0 );
                PLAY_AUDIO_EVENT( "FRONTEND_GAME_PICKUP_CHECKPOINT" );
                l_U56 = 1;
                l_U83++;
            }
            else if ((NOT (DOES_BLIP_EXIST( l_U25 ))) || (l_U56))
            {
                DELETE_CHECKPOINT( l_U117 );
                l_U117 = CREATE_CHECKPOINT( 2, 2926, 678, 0, 3000, 558, 0, 1 );
                REMOVE_BLIP( l_U25 );
                ADD_BLIP_FOR_COORD( 2926, 678, 0.00000000, ref l_U25 );
                CHANGE_BLIP_DISPLAY( l_U25, 2 );
                REMOVE_BLIP( l_U26 );
                ADD_BLIP_FOR_COORD( 3000, 558, 0.00000000, ref l_U26 );
                CHANGE_BLIP_DISPLAY( l_U26, 2 );
                DIM_BLIP( l_U26, 1 );
                CHANGE_BLIP_SCALE( l_U26, 0.80000000 );
                if (NOT l_U56)
                {
                    CLEAR_HELP();
                    SETTIMERB( 0 );
                }
                l_U56 = 0;
                l_U86 = 0;
            }
            break;
            case 2:
            if (TIMERB() > 1500)
            {
                if (NOT l_U45)
                {
                    ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                    PRINT_HELP_FOREVER( "ATUT_BOAT3" );
                    l_U45 = 1;
                }
                sub_6592( 1 );
            }
            if (LOCATE_CHAR_IN_CAR_3D( sub_420(), 3000, 558, 0, 20, 20, 20, 0 ))
            {
                PLAY_AUDIO_EVENT( "FRONTEND_GAME_PICKUP_CHECKPOINT" );
                l_U56 = 1;
                l_U83++;
            }
            else if ((NOT (DOES_BLIP_EXIST( l_U25 ))) || (l_U56))
            {
                DELETE_CHECKPOINT( l_U117 );
                l_U117 = CREATE_CHECKPOINT( 2, 3000, 558, 0, 3122, 477, 0, 1 );
                REMOVE_BLIP( l_U25 );
                ADD_BLIP_FOR_COORD( 3000, 558, 0, ref l_U25 );
                CHANGE_BLIP_DISPLAY( l_U25, 2 );
                REMOVE_BLIP( l_U26 );
                ADD_BLIP_FOR_COORD( 3122, 477, 0, ref l_U26 );
                CHANGE_BLIP_DISPLAY( l_U26, 2 );
                DIM_BLIP( l_U26, 1 );
                CHANGE_BLIP_SCALE( l_U26, 0.80000000 );
                l_U56 = 0;
                l_U86 = 0;
                CLEAR_HELP();
                SETTIMERB( 0 );
            }
            break;
            case 3:
            if (TIMERB() > 1500)
            {
                if (NOT l_U47)
                {
                    ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                    PRINT_HELP_FOREVER( "ATUT_BOAT3" );
                    l_U47 = 1;
                }
                sub_6592( 1 );
            }
            if (LOCATE_CHAR_IN_CAR_3D( sub_420(), 3122, 477, 0, 20, 20, 20, 0 ))
            {
                CLEAR_PRINTS();
                CLEAR_HELP();
                DELETE_CHECKPOINT( l_U117 );
                PLAY_AUDIO_EVENT( "FRONTEND_GAME_PICKUP_CHECKPOINT" );
                REMOVE_BLIP( l_U25 );
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
                SET_PLAYER_CONTROL( sub_382(), 0 );
                sub_5663();
                l_U0 = 5;
            }
            else if ((NOT (DOES_BLIP_EXIST( l_U25 ))) || (l_U56))
            {
                DELETE_CHECKPOINT( l_U117 );
                l_U117 = CREATE_CHECKPOINT( 3, 3122, 477, 0, 0, 0, 0, 1 );
                REMOVE_BLIP( l_U25 );
                REMOVE_BLIP( l_U26 );
                ADD_BLIP_FOR_COORD( 3122, 477, 0, ref l_U25 );
                CHANGE_BLIP_DISPLAY( l_U25, 2 );
                CHANGE_BLIP_SPRITE( l_U25, 65 );
                if (NOT l_U56)
                {
                    CLEAR_HELP();
                    SETTIMERB( 0 );
                }
                l_U56 = 0;
                l_U86 = 0;
            }
            break;
        }
        break;
    }
    l_U58 = 1;
    return;
}

int sub_12352(unknown uParam0)
{
    if (NOT (IS_CAR_IN_WATER( uParam0 )))
    {
        if (l_U119)
        {
            GET_GAME_TIMER( ref l_U121 );
            if ((l_U121 - 10000) > l_U120)
            {
                return 1;
            }
        }
        else
        {
            GET_GAME_TIMER( ref l_U120 );
            l_U119 = 1;
        }
    }
    else
    {
        l_U119 = 0;
    }
    return 0;
}

void sub_14861()
{
    if (l_U5 != 0)
    {
        if (NOT (IS_VEH_DRIVEABLE( l_U22 )))
        {
            l_U123 = 2;
            sub_8117();
            return;
        }
        else if (sub_9198( l_U22, 1 ))
        {
            l_U123 = 5;
            sub_8117();
            return;
        }
        else if (IS_PLAYER_PLAYING( sub_382() ))
        {
            if (NOT (IS_CHAR_IN_CAR( sub_420(), l_U22 )))
            {
                if (NOT (DOES_BLIP_EXIST( l_U29 )))
                {
                    ADD_BLIP_FOR_CAR( l_U22, ref l_U29 );
                    SET_BLIP_AS_FRIENDLY( l_U29, 1 );
                    DELETE_CHECKPOINT( l_U117 );
                    REMOVE_BLIP( l_U24 );
                    REMOVE_BLIP( l_U25 );
                    REMOVE_BLIP( l_U26 );
                    l_U48 = 0;
                    l_U49 = 0;
                    l_U50 = 0;
                    l_U52 = 0;
                    l_U59 = 0;
                }
                SETTIMERB( 0 );
                CLEAR_PRINTS();
                CLEAR_HELP();
                PRINT_NOW( "ATUT_OUTHELI", 1, 0 );
                return;
            }
        };;;
    }
    REMOVE_BLIP( l_U29 );
    switch (l_U5)
    {
        case 0:
        SET_PLAYER_CONTROL( sub_382(), 0 );
        if (NOT (HAS_MODEL_LOADED( -1660661558 )))
        {
            REQUEST_MODEL( -1660661558 );
        }
        else
        {
            CREATE_CAR( -1660661558, 2248.60000000, 756.30000000, 5.89000000, ref l_U22, 1 );
            SET_CAR_STRONG( l_U22, 1 );
            SET_CAR_HEADING( l_U22, 242 );
            SET_CAR_ON_GROUND_PROPERLY( l_U22 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_420() );
            WARP_CHAR_INTO_CAR( sub_420(), l_U22 );
            WAIT( 0 );
            SET_CAM_BEHIND_PED( sub_420() );
            DO_SCREEN_FADE_IN( 500 );
            while (NOT IS_SCREEN_FADED_IN())
            {
                WAIT( 0 );
            }
            l_U90 = -1;
            l_U40 = 0;
            l_U5 = 1;
        }
        break;
        case 1:
        if (TIMERA() >= l_U78)
        {
            switch (l_U90)
            {
                case -1:
                PRINT_HELP( "ATUT_HELI6a" );
                l_U78 = 4000;
                break;
                case 0:
                PRINT_HELP( "ATUT_HELI1a" );
                l_U78 = 8000;
                break;
                case 1:
                PRINT_HELP( "ATUT_HELI2a" );
                l_U78 = 6000;
                break;
                case 2:
                PRINT_HELP( "ATUT_HELI3a" );
                l_U78 = 6000;
                break;
                case 3:
                PRINT_HELP( "ATUT_HELI4a" );
                l_U78 = 6000;
                break;
                case 4:
                CLEAR_HELP();
                PRINT_NOW( "ATUT_HELI1", 7500, 0 );
                SET_PLAYER_CONTROL( sub_382(), 1 );
                SETTIMERB( 0 );
                l_U5 = 2;
                break;
            }
            if (NOT l_U40)
            {
                SETTIMERA( 0 );
            }
            else
            {
                l_U40 = 0;
            }
            l_U90++;
        }
        if (sub_6313())
        {
            SETTIMERA( 20000 );
        }
        break;
        case 2:
        if (TIMERB() > 1500)
        {
            if (NOT l_U48)
            {
                ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                PRINT_HELP_FOREVER( "ATUT_HELI2" );
                l_U48 = 1;
            }
        }
        GET_CHAR_COORDINATES( sub_420(), ref l_U64._fU0, ref l_U64._fU4, ref l_U64._fU8 );
        if (l_U64._fU8 > 20)
        {
            SETTIMERB( 0 );
            PLAY_AUDIO_EVENT( "FRONTEND_GAME_PICKUP_CHECKPOINT" );
            l_U56 = 1;
            l_U5 = 3;
        }
        else if (NOT l_U59)
        {
            PRINT_NOW( "ATUT_HELI1", 7500, 0 );
            l_U86 = 0;
        }
        break;
        case 3:
        switch (l_U84)
        {
            case 0:
            if (TIMERB() > 1500)
            {
                if (NOT l_U49)
                {
                    ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                    PRINT_HELP_FOREVER( "ATUT_HELI4" );
                    l_U49 = 1;
                }
                sub_6592( 1 );
            }
            if (LOCATE_CHAR_IN_CAR_3D( sub_420(), 2730, 520, 100, 40, 40, 40, 0 ))
            {
                SETTIMERB( 0 );
                PLAY_AUDIO_EVENT( "FRONTEND_GAME_PICKUP_CHECKPOINT" );
                l_U56 = 1;
                l_U84++;
            }
            else if ((l_U56) || (NOT (DOES_BLIP_EXIST( l_U25 ))))
            {
                DELETE_CHECKPOINT( l_U117 );
                l_U117 = CREATE_CHECKPOINT( 4, 2730, 520, 100, 2838, 147, 100, 1 );
                REMOVE_BLIP( l_U25 );
                ADD_BLIP_FOR_COORD( 2730, 520, 100, ref l_U25 );
                CHANGE_BLIP_DISPLAY( l_U25, 2 );
                REMOVE_BLIP( l_U26 );
                ADD_BLIP_FOR_COORD( 2838, 147, 100, ref l_U26 );
                CHANGE_BLIP_DISPLAY( l_U26, 2 );
                DIM_BLIP( l_U26, 1 );
                CHANGE_BLIP_SCALE( l_U26, 0.80000000 );
                l_U56 = 0;
                l_U86 = 0;
                SETTIMERB( 0 );
                CLEAR_HELP();
                CLEAR_PRINTS();
                PRINT_NOW( "ATUT_HELI5", 7500, 0 );
            }
            break;
            case 1:
            if (TIMERB() > 1500)
            {
                if (NOT l_U50)
                {
                    ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                    PRINT_HELP_FOREVER( "ATUT_HELI6" );
                    l_U50 = 1;
                }
                sub_6592( 3 );
            }
            if (LOCATE_CHAR_IN_CAR_3D( sub_420(), 2838, 147, 100, 40, 40, 40, 0 ))
            {
                PLAY_AUDIO_EVENT( "FRONTEND_GAME_PICKUP_CHECKPOINT" );
                l_U56 = 1;
                l_U84++;
            }
            else if ((l_U56) || (NOT (DOES_BLIP_EXIST( l_U25 ))))
            {
                DELETE_CHECKPOINT( l_U117 );
                l_U117 = CREATE_CHECKPOINT( 4, 2838, 147, 100, 2240, 65231, 100, 1 );
                REMOVE_BLIP( l_U25 );
                ADD_BLIP_FOR_COORD( 2838, 147, 100, ref l_U25 );
                CHANGE_BLIP_DISPLAY( l_U25, 2 );
                REMOVE_BLIP( l_U26 );
                ADD_BLIP_FOR_COORD( 2240, 65231, 100, ref l_U26 );
                CHANGE_BLIP_DISPLAY( l_U26, 2 );
                DIM_BLIP( l_U26, 1 );
                CHANGE_BLIP_SCALE( l_U26, 0.80000000 );
                SETTIMERB( 0 );
                CLEAR_HELP();
                l_U56 = 0;
                l_U86 = 0;
            }
            break;
            case 2:
            if (TIMERB() > 1500)
            {
                if (NOT l_U52)
                {
                    ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                    PRINT_HELP_FOREVER( "ATUT_HELI6" );
                    l_U52 = 1;
                }
                sub_6592( 3 );
            }
            if (LOCATE_CHAR_IN_CAR_3D( sub_420(), 2240, 65231, 100, 40, 40, 40, 0 ))
            {
                SETTIMERB( 0 );
                PLAY_AUDIO_EVENT( "FRONTEND_GAME_PICKUP_CHECKPOINT" );
                l_U56 = 1;
                l_U5 = 4;
            }
            else if ((l_U56) || (NOT (DOES_BLIP_EXIST( l_U25 ))))
            {
                DELETE_CHECKPOINT( l_U117 );
                l_U117 = CREATE_CHECKPOINT( 5, 2240, 65231, 100, 2240, 65231, 100, 1 );
                REMOVE_BLIP( l_U25 );
                REMOVE_BLIP( l_U26 );
                ADD_BLIP_FOR_COORD( 2240, 65231, 100, ref l_U25 );
                CHANGE_BLIP_DISPLAY( l_U25, 2 );
                CHANGE_BLIP_SPRITE( l_U25, 65 );
                if (NOT l_U56)
                {
                    CLEAR_HELP();
                    SETTIMERB( 0 );
                }
                l_U56 = 0;
            }
            break;
        }
        break;
        case 4:
        if (NOT l_U51)
        {
            if (LOCATE_CHAR_IN_CAR_3D( sub_420(), 2248.60000000, 756.30000000, 10, 100, 100, 500, 0 ))
            {
                PRINT_HELP( "ATUT_HELI7" );
                l_U51 = 1;
            }
        }
        if (NOT (IS_CAR_DEAD( l_U22 )))
        {
            if ((LOCATE_CHAR_IN_CAR_3D( sub_420(), 2248.60000000, 756.30000000, 5.10000000, 10, 10, 1, 1 )) AND (IS_CHAR_SITTING_IN_CAR( sub_420(), l_U22 )))
            {
                if (NOT l_U55)
                {
                    SETTIMERA( 0 );
                    l_U55 = 1;
                }
                if (TIMERA() > 1500)
                {
                    GET_CHAR_SPEED( sub_420(), ref l_U67 );
                    if (l_U67 < 0.50000000)
                    {
                        SET_PLAYER_CONTROL( sub_382(), 0 );
                        l_U0 = 6;
                        l_U6 = 2;
                    }
                }
            }
            else
            {
                l_U55 = 0;
            }
        }
        if (l_U0 != 6)
        {
            if ((l_U56) || (NOT (DOES_BLIP_EXIST( l_U25 ))))
            {
                DELETE_CHECKPOINT( l_U117 );
                REMOVE_BLIP( l_U25 );
                ADD_BLIP_FOR_COORD( 2248.60000000, 756.30000000, 5.30000000, ref l_U25 );
                CHANGE_BLIP_DISPLAY( l_U25, 2 );
                CLEAR_HELP();
                CLEAR_PRINTS();
                PRINT_NOW( "ATUT_MARKER2", 7500, 0 );
                SETTIMERB( 0 );
                l_U56 = 0;
                l_U86 = 0;
            }
        }
        break;
    }
    l_U59 = 1;
    return;
}

void sub_17648()
{
    switch (l_U6)
    {
        case 0:
        PRINT_HELP( "ATUT_LEAVE1" );
        g_U819 = 1;
        l_U6 = 1;
        SETTIMERA( 0 );
        break;
        case 1:
        if ((NOT l_U36) AND (TIMERA() >= l_U78))
        {
            PRINT_NOW( "ATUT_GODLEAVE", 7500, 1 );
            SETTIMERA( 0 );
            l_U36 = 1;
        }
        if ((TIMERA() >= 2000) AND (l_U36))
        {
            if (NOT (l_U77 == 1))
            {
                PRINT_HELP_FOREVER( "TUT_LEAVE2" );
                l_U77 = 1;
            }
        }
        if (g_U820)
        {
            l_U6 = 2;
        }
        break;
        case 2:
        sub_5157();
        break;
    }
    return;
}

void sub_17914()
{
    if (IS_CHAR_IN_AREA_3D( sub_420(), 2286, 397, 16, 2309, 512, 37, 0 ))
    {
        l_U123 = 6;
        sub_8117();
    }
    if (sub_17974())
    {
        if (l_U35)
        {
            l_U35 = 0;
        }
    }
    else if (sub_18061())
    {
        if (NOT l_U35)
        {
            PRINT_NOW( "ATUT_GODGOBACK", 7500, 1 );
            l_U35 = 1;
        }
    }
    else
    {
        l_U123 = 6;
        sub_8117();
    }
    return;
}

int sub_17974()
{
    if (IS_CHAR_IN_AREA_2D( sub_420(), 1800, 64936, 3600, 1500, 0 ))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_18061()
{
    if (IS_CHAR_IN_AREA_2D( sub_420(), 1600, 64736, 3800, 1700, 0 ))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_18196()
{
    if (g_U824)
    {
        CLEAR_HELP();
        CLEAR_PRINTS();
        sub_18229();
        DO_SCREEN_FADE_OUT( 500 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        sub_319( 1 );
    }
    return;
}

void sub_18229()
{
    return sub_18240( 0, 1 );
}

int sub_18240(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U91._fU104 = 1;
    }
    if ((uParam1) AND (g_U555 != 9))
    {
        g_U91._fU100 = 1;
    }
    return 1;
}