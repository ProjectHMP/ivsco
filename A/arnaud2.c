void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 1;
    l_U4 = 3;
    l_U105 = 0;
    l_U106 = 0;
    l_U107 = 0;
    l_U108 = 0;
    l_U109 = 0;
    l_U110 = 0;
    l_U138 = 10.00000000;
    l_U139 = 15.00000000;
    l_U154 = 0;
    l_U155 = 0;
    l_U156 = 0;
    l_U157 = 0;
    l_U158 = 0;
    l_U159 = 0;
    l_U160 = 0;
    l_U161 = 0;
    l_U162 = 0;
    l_U163 = 0;
    l_U164 = 0;
    l_U165 = 0;
    l_U166 = 0;
    l_U167 = 0;
    l_U168 = 0;
    l_U169 = 0;
    l_U170 = 0;
    l_U171 = 0;
    l_U172 = 0;
    l_U173 = 0;
    l_U174 = 0;
    l_U175 = 0;
    l_U176 = 0;
    l_U177 = 0;
    l_U178 = 0;
    l_U179 = 0;
    l_U180 = 0;
    l_U181 = 0;
    l_U183 = 0;
    l_U184 = 0;
    l_U186 = 0;
    l_U296 = 0.00000000;
    l_U297 = 0.00000000;
    l_U305 = 0.00000000;
    l_U308 = 45.00000000;
    l_U352 = 0;
    l_U353 = 0;
    l_U354 = 0;
    l_U355 = 0;
    l_U356 = 0;
    l_U357 = 0;
    l_U359 = 0;
    l_U360 = 0;
    l_U361 = 0;
    l_U362 = 0;
    l_U363 = 0;
    l_U364 = 0;
    l_U365 = 0;
    l_U366 = 0;
    l_U367 = 0;
    l_U368 = 0;
    l_U369 = 0;
    l_U370 = 0;
    l_U371 = 0;
    l_U372 = 0;
    l_U373 = 0;
    l_U374 = 0;
    l_U375 = 0;
    l_U376 = 0;
    l_U377 = 0;
    l_U378 = 0;
    l_U379 = 0;
    l_U380 = 0;
    l_U381 = 0;
    l_U382 = 0;
    l_U383 = 0;
    l_U384 = 0;
    l_U385 = 0;
    l_U386 = 0;
    l_U387 = 0;
    l_U388 = 0;
    l_U389 = 0;
    l_U390 = 0;
    l_U391 = 0;
    l_U392 = 0;
    l_U393 = 0;
    l_U394 = 0;
    l_U395 = 0;
    l_U396 = 0;
    l_U397 = 0;
    l_U398 = 0;
    l_U399 = 0;
    l_U400 = 0;
    l_U401 = 0;
    l_U407 = 0;
    l_U408 = 0;
    l_U409 = 0;
    l_U410 = 0;
    l_U411 = {595.69100000, 1645.17300000, 29.30500000};
    l_U423 = {1306.69300000, 1695.65100000, 15.72890000};
    l_U426 = 355.17920000;
    l_U427 = {1319.49500000, 1700.04800000, 15.62490000};
    l_U430 = {1319.49500000, 1700.04800000, 15.62490000};
    l_U451 = {440.16160000, 1710.61400000, 14.74410000};
    l_U471 = 2;
    l_U473 = 165.64900000;
    l_U474 = 0;
    l_U476 = 0;
    l_U477 = 80;
    l_U516 = 0;
    l_U517 = 0;
    l_U518 = 13;
    l_U519 = 1045806868;
    l_U525 = 0;
    l_U526 = 0;
    l_U527 = 0;
    l_U528 = 0;
    l_U529 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_861();
    }
    if (sub_2659( l_U518, l_U471 ))
    {
        if (IS_PLAYER_PLAYING( sub_2573() ))
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_2573(), 0 )))
            {
                while (true)
                {
                    WAIT( 0 );
                    if (NOT l_U368)
                    {
                        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
                        {
                            if (IS_SCORE_GREATER( sub_2573(), 1 ))
                            {
                                if (sub_3431( 15.00000000 ))
                                {
                                    WAIT( 0 );
                                }
                                else if (g_U12379)
                                {
                                    sub_861();
                                }
                                if (NOT sub_3579())
                                {
                                    sub_861();
                                }
                                switch (l_U526)
                                {
                                    case 0:
                                    sub_3664();
                                    break;
                                    case 1:
                                    sub_6126();
                                    break;
                                }
                            }
                            else
                            {
                                sub_861();
                            }
                        }
                        else
                        {
                            sub_861();
                        }
                        sub_11103();
                    }
                    if (l_U368)
                    {
                        switch (l_U527)
                        {
                            case 0:
                            sub_11224();
                            break;
                            default:
                        }
                    }
                }
            }
            else if (NOT (IS_CHAR_IN_ANY_CAR( sub_2519() )))
            {
                if (sub_6356() < 25)
                {
                    PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                }
            }
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U326, 0, 0, 0 );
            }
            sub_861();;
        }
        else
        {
            TERMINATE_THIS_SCRIPT();
        }
    }
    else
    {
        TERMINATE_THIS_SCRIPT();
    }
    return;
}

void sub_861()
{
    if (sub_880( l_U518, l_U471 ))
    {
        sub_970( l_U518, l_U471 );
        SET_CREATE_RANDOM_COPS( 1 );
        if (DOES_BLIP_EXIST( l_U479 ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U479 );
        }
        if (DOES_BLIP_EXIST( l_U480 ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U480 );
        }
        if (DOES_BLIP_EXIST( l_U481 ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U481 );
        }
        if (DOES_BLIP_EXIST( l_U482 ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U482 );
        }
        for ( l_U472 = 0; l_U472 <= 1; l_U472++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U468[l_U472] )))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U468[l_U472] );
            }
        }
        for ( l_U472 = 0; l_U472 <= 3; l_U472++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U328[l_U472] )))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U328[l_U472] );
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U327 )))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U327 );
        }
        if (NOT (IS_CHAR_INJURED( l_U326 )))
        {
            if (IS_PED_IN_GROUP( l_U326 ))
            {
                REMOVE_CHAR_FROM_GROUP( l_U326 );
            }
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U326 );
        }
        if (IS_VEH_DRIVEABLE( l_U338 ))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U338 );
        }
        if (IS_VEH_DRIVEABLE( l_U338 ))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U338 );
        }
        for ( l_U472 = 0; l_U472 <= 1; l_U472++ )
        {
            if (IS_VEH_DRIVEABLE( l_U454[l_U472] ))
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U454[l_U472] );
            }
        }
        if (DOES_PICKUP_EXIST( l_U333 ))
        {
            REMOVE_PICKUP( l_U333 );
        }
        if (IS_HINT_RUNNING())
        {
            HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
        }
        SWITCH_ROADS_BACK_TO_ORIGINAL( l_U427._fU0 - 30, l_U427._fU4 - 20, l_U427._fU8 - 20.00000000, l_U427._fU0 + 30, l_U427._fU4 + 20, l_U427._fU8 + 20.00000000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( l_U451._fU0 - 35.00000000, l_U451._fU4 - 22.00000000, l_U451._fU8 - 15.00000000, l_U451._fU0 + 25.00000000, l_U451._fU4 + 59.00000000, l_U451._fU8 + 15.00000000 );
        SET_WANTED_MULTIPLIER( 1.00000000 );
        if (sub_2178( l_U484 ))
        {
            sub_2362( ref l_U484, 0 );
        }
        REMOVE_ANIMS( "missarnaud2" );
        SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        if (NOT (IS_CHAR_INJURED( sub_2519() )))
        {
            SET_PLAYER_CONTROL( sub_2573(), 1 );
        }
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN( 500 );
        }
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_880(int iParam0, int iParam1)
{
    if (NOT g_U30318._fU4)
    {
        return 0;
    }
    if (NOT (g_U30318._fU8 == iParam0))
    {
        return 0;
    }
    if (NOT (g_U30318._fU12 == iParam1))
    {
        return 0;
    }
    return 1;
}

void sub_970(unknown uParam0, unknown uParam1)
{
    if (NOT (sub_880( uParam0, uParam1 )))
    {
        sub_1058( "Interactions_Ended: Interaction for this character not active" );
        return;
    }
    sub_1087();
    if (g_U819)
    {
        sub_1169();
    }
    else
    {
        sub_1298();
    }
    g_U12379 = 0;
    return;
}

void sub_1058(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1087()
{
    if (g_U0)
    {
        g_U30318._fU0 = 0;
    }
    else
    {
        g_U30318._fU0 = 1;
    }
    g_U30318._fU4 = 0;
    g_U30318._fU8 = 34;
    g_U30318._fU12 = 0;
    return;
}

void sub_1169()
{
    if (COMPARE_STRING( ref g_U10966, "RIPASS" ))
    {
        StrCopy( ref g_U10966, "", 16 );
        return;
    }
    sub_1215();
    return;
}

void sub_1215()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

void sub_1298()
{
    if (COMPARE_STRING( ref g_U10966, "RIPASS" ))
    {
        StrCopy( ref g_U10966, "", 16 );
        return;
    }
    sub_1344();
    return;
}

void sub_1344()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

int sub_2178(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8867 == 1)) || (g_U8867 == 2))
    {
        if (uParam0._fU4 == g_U8866)
        {
            return 1;
        }
        else
        {
            sub_2290( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_2290( "\n speech is not playing" );
    }
    return 0;
}

void sub_2290(unknown uParam0)
{
    return;
}

void sub_2362(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8866)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_2519()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2573()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_2659(unknown uParam0, unknown uParam1)
{
    if (sub_2668())
    {
        return 0;
    }
    return sub_2715( uParam0, uParam1 );
}

int sub_2668()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_2715(unknown uParam0, int iParam1)
{
    unknown uVar4;

    uVar4 = sub_2726( uParam0 );
    if (NOT g_U30318._fU0)
    {
        return 0;
    }
    if (g_U12379)
    {
        return 0;
    }
    if (g_U0)
    {
        return 1;
    }
    if (NOT g_U30257[uVar4]._fU0)
    {
        return 0;
    }
    if (NOT g_U30257[uVar4]._fU4)
    {
        return 0;
    }
    if (IS_BIT_SET( g_U10938._fU0, 2 ))
    {
        return 0;
    }
    if (NOT g_U30257[uVar4]._fU24)
    {
        if (sub_3007( g_U30257[uVar4]._fU8 ))
        {
            g_U30257[uVar4]._fU24 = 1;
        }
    }
    if (NOT g_U30257[uVar4]._fU24)
    {
        return 0;
    }
    if (g_U30257[uVar4]._fU28 == iParam1)
    {
        return 1;
    }
    return 0;
}

int sub_2726(unknown uParam0)
{
    int iVar3;

    if (NOT (sub_2737( uParam0 )))
    {
        sub_1058( "Not a genuine RI Character ID - Tell Keith" );
        return 0;
    }
    iVar3 = uParam0;
    return iVar3 - 13;
}

int sub_2737(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = uParam0;
    if (NOT (iVar3 >= 13))
    {
        return 0;
    }
    iVar4 = 16;
    if (NOT (iVar3 < iVar4))
    {
        return 0;
    }
    return 1;
}

int sub_3007(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;

    if (uParam0._fU8._fU4 == -1)
    {
        return 1;
    }
    iVar6 = 0;
    iVar7 = 0;
    GET_CURRENT_DATE( ref iVar6, ref iVar7 );
    iVar8 = 0;
    iVar9 = 0;
    GET_TIME_OF_DAY( ref iVar8, ref iVar9 );
    if ((iVar7 == uParam0._fU0._fU4) AND (iVar6 == uParam0._fU0._fU0))
    {
        if (iVar8 < uParam0._fU8._fU0)
        {
            return 0;
        }
        else if (iVar8 > uParam0._fU8._fU0)
        {
            return 1;
        }
        if (iVar9 > uParam0._fU8._fU4)
        {
            return 1;
        }
        return 0;
    }
    if (sub_3176( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_3176(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    int iVar7;

    iVar7 = COMPARE_TWO_DATES( uParam1, uParam0, uParam3, uParam2 );
    if (iVar7 >= 0)
    {
        if (iVar7 <= iParam4)
        {
            return 1;
        }
    }
    return 0;
}

int sub_3431(float fParam0)
{
    if (IS_CHAR_IN_ANY_CAR( sub_2519() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2519(), ref l_U334 );
        if (NOT (l_U334 == nil))
        {
            if (IS_VEH_DRIVEABLE( l_U334 ))
            {
                GET_CAR_SPEED( l_U334, ref l_U475 );
                if (l_U475 > fParam0)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_3579()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U22959)
    {
        return 0;
    }
    return 1;
}

void sub_3664()
{
    switch (l_U525)
    {
        case 0:
        REQUEST_MODEL( sub_3702( 13 ) );
        while (NOT (HAS_MODEL_LOADED( sub_3702( 13 ) )))
        {
            WAIT( 0 );
        }
        REQUEST_ANIMS( "MISSRAND_PEDSARNAUD" );
        while (NOT (HAVE_ANIMS_LOADED( "MISSRAND_PEDSARNAUD" )))
        {
            WAIT( 0 );
        }
        l_U525 = 1;
        break;
        case 1:
        if (NOT l_U359)
        {
            CLEAR_AREA( l_U411._fU0, l_U411._fU4, l_U411._fU8, 2.50000000, 1 );
            SWITCH_PED_PATHS_OFF( l_U411._fU0 - 5.00000000, l_U411._fU4 - 5.00000000, l_U411._fU8 - 5.00000000, l_U411._fU0 + 5.00000000, l_U411._fU4 + 5.00000000, l_U411._fU8 + 5.00000000 );
            sub_4424( 13, ref l_U326, l_U411._fU0, l_U411._fU4, l_U411._fU8, l_U473 );
            SET_CHAR_NEVER_TARGETTED( l_U326, 1 );
            SET_CHAR_CANT_BE_DRAGGED_OUT( l_U326, 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U326, 1 );
            SET_PED_DONT_DO_EVASIVE_DIVES( l_U326, 1 );
            SET_CHAR_COMPONENT_VARIATION( l_U326, 0, 0, 1 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( sub_3702( 13 ) );
            l_U359 = 1;
            l_U389 = 1;
            GET_GAME_TIMER( ref l_U351 );
        }
        if (NOT (DOES_BLIP_EXIST( l_U479 )))
        {
            ADD_BLIP_FOR_CHAR( l_U326, ref l_U479 );
            CHANGE_BLIP_SPRITE( l_U479, 63 );
            SET_BLIP_AS_FRIENDLY( l_U479, 1 );
            CHANGE_BLIP_SCALE( l_U479, 1.00000000 );
            CHANGE_BLIP_DISPLAY( l_U479, 2 );
        }
        if (NOT (IS_CHAR_INJURED( l_U326 )))
        {
            TASK_PLAY_ANIM( l_U326, "Injured_Idle", "MISSRAND_PEDSARNAUD", 8.00000000, 1, 0, 0, 0, 0 );
        }
        sub_5784( "ROM1AUD", 9 );
        sub_5784( "ARN02", 10 );
        sub_5957( 1, l_U326, "ARNAUD", 0 );
        l_U526 = 1;
        break;
    }
    return;
}

int sub_3702(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -274568867;
        case 1: return 1662225612;
        case 2: return -448171135;
        case 3: return 1370299619;
        case 4: return -773750838;
        case 5: return 243666427;
        case 6: return -913924918;
        case 7: return 1905515841;
        case 9:
        SCRIPT_ASSERT( "Attempt to Return the model for the Reserve Strand 1 Character" );
        return 0;
        case 30: return -1949352469;
        case 31: return -401698464;
        case 32: return -487173849;
        case 33: return -407067034;
        case 13: return 714517099;
        case 14: return 653404222;
        case 15: return 1798610950;
    }
    sub_1058( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_4424(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( sub_4435( uParam0 ), sub_3702( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    sub_4481( uParam0, (uParam1^) );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_4515( uParam0, (uParam1^) );
    return;
}

int sub_4435(unknown uParam0)
{
    return 25;
}

void sub_4481(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4515(unknown uParam0, unknown uParam1)
{
    sub_4527( ref uParam1, uParam0 );
    return;
}

void sub_4527(unknown uParam0, int iParam1)
{
    sub_4538( uParam0 );
    if (iParam1 == 37)
    {
        sub_4640( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_5224( (uParam0^), iParam1, g_U42825[iParam1] );
    }
    return;
}

void sub_4538(unknown uParam0)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    return;
}

void sub_4640(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
    int iVar12;
    int iVar13;

    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
    {
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 0 )) == iParam1)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 0 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 0, iParam1, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == iParam2)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 1, iParam2, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 2 )) == iParam3)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 2 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 2, iParam3, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 5 )) == iParam4)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 5 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 5, iParam4, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 4 )) == iParam5)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 4 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 4, iParam5, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 3 )) == iParam6)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 3 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 3, iParam6, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 7 )) == iParam7)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 7 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 7, iParam7, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 8 )) == 0)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 8 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 8, 0, 0 );
        }
        iVar12 = -1;
        GET_CHAR_PROP_INDEX( (uParam0^), 0, ref iVar12 );
        if (NOT (iVar12 == iParam8))
        {
            if (iParam8 == -1)
            {
                CLEAR_CHAR_PROP( (uParam0^), 0 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( (uParam0^), 0, iParam8 );
            }
        }
        iVar13 = -1;
        GET_CHAR_PROP_INDEX( (uParam0^), 1, ref iVar13 );
        if (NOT (iVar13 == iParam9))
        {
            if (iParam9 == -1)
            {
                CLEAR_CHAR_PROP( (uParam0^), 1 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( (uParam0^), 1, iParam9 );
            }
        }
    }
    return;
}

void sub_5224(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        sub_4640( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
        return;
        case 1:
        sub_4640( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, 0 );
        return;
        case 31:
        sub_4640( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
        return;
        case 7:
        sub_4640( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_4640( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_5784(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_5820())
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

int sub_5820()
{
    int I;

    for ( I = 0; I <= (14 - 1); I++ )
    {
        if (IS_STREAMING_ADDITIONAL_TEXT( I ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_5957(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U6._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U6._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_6037( "\n PED NUMBER ", uParam0 );
    sub_6077( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_6037(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_6077(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_6126()
{
    if ((IS_CHAR_INJURED( l_U326 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U326, sub_2519(), 0 )))
    {
        if (IS_HINT_RUNNING())
        {
            HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U326, 0, 0, 0 );
        }
        sub_861();
    }
    switch (l_U528)
    {
        case 0:
        if ((((IS_CHAR_INJURED( l_U326 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U326, sub_2519(), 0 ))) || (IS_CHAR_ON_FIRE( l_U326 ))) || (IS_WANTED_LEVEL_GREATER( sub_2573(), 0 )))
        {
            if (IS_WANTED_LEVEL_GREATER( sub_2573(), 0 ))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_2519() )))
                {
                    if (sub_6356() < 25)
                    {
                        PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                    }
                }
            }
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U326, 0, 0, 0 );
            }
            sub_861();
        }
        if (NOT (IS_CHAR_INJURED( l_U326 )))
        {
            if ((sub_6356() < 18) AND (IS_CHAR_ON_FOOT( sub_2519() )))
            {
                if ((NOT IS_HINT_RUNNING()) AND (NOT l_U367))
                {
                    HINT_CAM( l_U411._fU0, l_U411._fU4, l_U411._fU8 + 1.25000000, 0, 0, 0, 6000 );
                    l_U367 = 1;
                }
                l_U528 = 1;
            }
        }
        break;
        case 1:
        if ((((IS_CHAR_INJURED( l_U326 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U326, sub_2519(), 0 ))) || (IS_CHAR_ON_FIRE( l_U326 ))) || (IS_WANTED_LEVEL_GREATER( sub_2573(), 0 )))
        {
            if (IS_WANTED_LEVEL_GREATER( sub_2573(), 0 ))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_2519() )))
                {
                    if (sub_6356() < 25)
                    {
                        PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                    }
                }
            }
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U326, 0, 0, 0 );
            }
            sub_861();
        }
        if (sub_6356() < 5.50000000)
        {
            if (TIMERA() > 1750)
            {
                if (IS_CHAR_ON_FOOT( sub_2519() ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U326 )))
                    {
                        if (sub_6985( 1, 1 ))
                        {
                            if (NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U326, sub_2519(), 0 )))
                            {
                                if (NOT (IS_CHAR_ON_FIRE( l_U326 )))
                                {
                                    if (NOT (IS_WANTED_LEVEL_GREATER( sub_2573(), 0 )))
                                    {
                                        if (sub_3579())
                                        {
                                            SET_MISSION_FLAG( 1 );
                                            if (NOT (IS_CHAR_INJURED( sub_2519() )))
                                            {
                                                GET_CHAR_COORDINATES( sub_2519(), ref l_U417._fU0, ref l_U417._fU4, ref l_U417._fU8 );
                                            }
                                            DO_SCREEN_FADE_OUT( 100 );
                                            if (NOT (IS_CHAR_INJURED( l_U326 )))
                                            {
                                                SET_CHAR_PROOFS( l_U326, 1, 1, 1, 1, 1 );
                                                SET_CHAR_PROOFS( sub_2519(), 1, 1, 1, 1, 1 );
                                            }
                                            while (NOT IS_SCREEN_FADED_OUT())
                                            {
                                                WAIT( 0 );
                                            }
                                            if (NOT (IS_CHAR_INJURED( sub_2519() )))
                                            {
                                                SET_PLAYER_CONTROL( sub_2573(), 0 );
                                            }
                                            g_U2792 = 1;
                                            if (sub_2178( l_U484 ))
                                            {
                                                sub_2362( ref l_U484, 0 );
                                            }
                                            if (NOT (IS_CHAR_INJURED( l_U326 )))
                                            {
                                                SET_CHAR_PROOFS( l_U326, 0, 0, 0, 0, 0 );
                                                SET_CHAR_PROOFS( sub_2519(), 0, 0, 0, 0, 0 );
                                            }
                                            LOAD_SCENE( l_U411._fU0, l_U411._fU4, l_U411._fU8 );
                                            SWITCH_PED_PATHS_OFF( l_U411._fU0 - 10.00000000, l_U411._fU4 - 10.00000000, l_U411._fU8 - 10.00000000, l_U411._fU0 + 10.00000000, l_U411._fU4 + 10.00000000, l_U411._fU8 + 10.00000000 );
                                            l_U528 = 2;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        GET_GAME_TIMER( ref l_U349 );
        if (l_U389)
        {
            sub_7764( "ROM1_TRAK2", ref l_U484, 6, 1 );
            l_U389 = 0;
        }
        else if ((l_U349 - l_U351) > 10000)
        {
            GET_GAME_TIMER( ref l_U351 );
            l_U389 = 1;
        }
        if (sub_6356() > 18)
        {
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U326, 0, 0, 0 );
            }
            l_U528 = 0;
        }
        break;
        case 2:
        CLEAR_WANTED_LEVEL( sub_2573() );
        if (IS_HINT_RUNNING())
        {
            HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U326, 0, 0, 0 );
        }
        sub_8887();
        sub_9028( l_U518, l_U471 );
        l_U368 = 1;
        break;
    }
    return;
}

void sub_6356()
{
    if (NOT (IS_CHAR_DEAD( l_U326 )))
    {
        GET_CHAR_COORDINATES( sub_2519(), ref l_U417._fU0, ref l_U417._fU4, ref l_U417._fU8 );
        GET_CHAR_COORDINATES( l_U326, ref l_U420._fU0, ref l_U420._fU4, ref l_U420._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_3D( l_U417._fU0, l_U417._fU4, l_U417._fU8, l_U420._fU0, l_U420._fU4, l_U420._fU8, ref l_U474 );
        return l_U474;
    }
    return l_U474;
}

int sub_6985(boolean bParam0, boolean bParam1)
{
    unknown uVar4;
    int iVar5;
    float fVar6;

    if (IS_MINIGAME_IN_PROGRESS())
    {
        return 0;
    }
    if (bParam1)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_2519() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2519(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_CAR_UPRIGHT_VALUE( uVar4, ref fVar6 );
                if ((fVar6 < 0.95000000) || (fVar6 > 1.01100000))
                {
                    return 0;
                }
            }
        }
    }
    if (bParam0)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_2519() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2519(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_2519()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2519() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2519() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_2573() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_2573() )))
    {
        return 0;
    }
    return 1;
}

void sub_7764(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_7785( uParam0, ref l_U6._fU0, uParam1, uParam2, uParam3 );
}

void sub_7785(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;
    char[12] cVar11;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;

    StrCopy( ref cVar7, uParam1, 16 );
    array(ref cVar11, 2);
    StrCopy( ref cVar11[0], uParam0, 16 );
    StrCopy( ref cVar11[1], "END", 16 );
    return sub_7839( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_7839(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_7861( iParam1 )))
    {
        return 0;
    }
    l_U6._fU384 = 0;
    iParam1->_fU16 = 0;
    iParam1->_fU20 = uParam5;
    if (bParam3)
    {
        if (iParam1->_fU12)
        {
            iVar12 = iParam1->_fU8;
            iParam1->_fU12 = 0;
        }
    }
    else
    {
        iParam1->_fU12 = 0;
        if (bParam4)
        {
            iVar12 = uParam6;
            iParam1->_fU8 = uParam6;
            iParam1->_fU12 = 0;
        }
        else
        {
            iParam1->_fU8 = 0;
            iParam1->_fU12 = 0;
        }
    }
    iParam1->_fU16 = bParam4;
    for ( I = 0; I <= (g_U8972 - 1); I++ )
    {
        StrCopy( ref g_U8972[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U8972[I] = {(uParam0^)[I]};
    }
    g_U8966 = {(iParam1^)};
    sub_8537( ref g_U8868, ref l_U6 );
    StrCopy( ref g_U8868._fU0, uParam7, 16 );
    g_U8868._fU388 = uParam8;
    g_U8867 = 1;
    return 1;
}

int sub_7861(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_2290( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U561[1] ))
    {
        switch (g_U95._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_2290( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8867)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8865 > iParam0->_fU0)
        {
            sub_2290( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8865 = iParam0->_fU0;
    g_U8866++;
    if (g_U8866 > 100000)
    {
        g_U8866 = 1;
    }
    iParam0->_fU4 = g_U8866;
    return 1;
}

void sub_8537(int iParam0, int iParam1)
{
    int I;

    iParam0->_fU0 = {iParam1->_fU0};
    for ( I = 0; I <= 8; I++ )
    {
        iParam0->_fU16[I] = {iParam1->_fU16[I]};
        iParam0->_fU344[I] = iParam1->_fU344[I];
    }
    iParam0->_fU384 = iParam1->_fU384;
    iParam0->_fU388 = iParam1->_fU388;
    return;
}

void sub_8887()
{
    g_U42871._fU0 = 37;
    g_U42871._fU8 = 11;
    g_U42871._fU12 = 0;
    if (g_U42871._fU4 == nil)
    {
        return;
    }
    if (NOT (DOES_CHAR_EXIST( g_U42871._fU4 )))
    {
        g_U42871._fU4 = nil;
        return;
    }
    DELETE_CHAR( ref g_U42871._fU4 );
    g_U42871._fU4 = nil;
    return;
}

void sub_9028(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (g_U12379)
    {
        sub_1058( "Interactions_Started: Already on a mission" );
        return;
    }
    uVar4 = sub_2726( uParam0 );
    if (g_U30318._fU4)
    {
        sub_1058( "Interactions_Started: Another interaction is already taking place" );
        return;
    }
    if (g_U0)
    {
        g_U30257[uVar4]._fU0 = 1;
        g_U30257[uVar4]._fU4 = 1;
        g_U30257[uVar4]._fU28 = uParam1;
    }
    if (NOT g_U30257[uVar4]._fU0)
    {
        sub_1058( "Interactions_Started: This Random Character has been set to NOT allowToActivate" );
        return;
    }
    g_U30318._fU4 = 1;
    g_U30318._fU8 = uParam0;
    g_U30318._fU12 = uParam1;
    sub_9375();
    sub_10211( g_U30257[uVar4]._fU32 );
    g_U30257[uVar4]._fU32 = 0;
    sub_10334( uParam0, uParam1 );
    g_U12379 = 1;
    return;
}

void sub_9375()
{
    sub_9384();
    sub_9529( ref g_U10938._fU32 );
    g_U10938._fU48 = {0.00000000, 0.00000000, 0.00000000};
    sub_9603();
    return;
}

void sub_9384()
{
    CLEAR_BIT( ref g_U10938._fU0, 2 );
    CLEAR_BIT( ref g_U10938._fU0, 3 );
    CLEAR_BIT( ref g_U10938._fU0, 4 );
    CLEAR_BIT( ref g_U10938._fU0, 5 );
    CLEAR_BIT( ref g_U10938._fU0, 6 );
    CLEAR_BIT( ref g_U10938._fU0, 8 );
    CLEAR_BIT( ref g_U10938._fU0, 9 );
    CLEAR_BIT( ref g_U10938._fU0, 10 );
    g_U10938._fU12 = 0;
    return;
}

void sub_9529(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_9603()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_9641( 1, g_U575[I] )) == 0)
        {
            sub_9892( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_10070())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U95._fU404 = 1000;
    }
    g_U95._fU404 = 1000;
    return;
}

int sub_9641(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    switch (uParam0)
    {
        case 0:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 14, 23 );
        break;
        case 1:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 0, 13 );
        break;
        case 2:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 14, 27 );
        break;
        case 3:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 0, 13 );
        break;
        case 4:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 24, 27 );
        break;
        case 5:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 28, 31 );
        break;
        case 6:
        return uParam1._fU0[2];
        break;
    }
    return -1;
}

void sub_9892(int iParam0)
{
    int I;

    if (iParam0 < (g_U575 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U575 - 1); I++ )
        {
            g_U575[I - 1] = {g_U575[I]};
        }
    }
    sub_9977( g_U575 - 1 );
    return;
}

void sub_9977(unknown uParam0)
{
    g_U575[uParam0]._fU0[0] = -1;
    g_U575[uParam0]._fU0[1] = -1;
    g_U575[uParam0]._fU0[2] = -1;
    return;
}

int sub_10070()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_9641( 4, g_U575[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_10211(int iParam0)
{
    g_U30318._fU16._fU4 += iParam0;
    sub_10241();
    INCREMENT_INT_STAT( 286, iParam0 );
    return;
}

void sub_10241()
{
    if (g_U0)
    {
        return;
    }
    if (g_U30318._fU16._fU4 < g_U30318._fU16._fU0)
    {
        return;
    }
    return;
}

void sub_10334(unknown uParam0, int iParam1)
{
    char[16] cVar4;
    int iVar8;

    StrCopy( ref cVar4, "", 16 );
    iVar8 = -1;
    switch (uParam0)
    {
        case 13:
        StrCopy( ref cVar4, "ARNAUD", 16 );
        iVar8 = 2;
        break;
        case 14:
        StrCopy( ref cVar4, "DAISY", 16 );
        iVar8 = 1;
        break;
        case 15:
        StrCopy( ref cVar4, "MARGOT", 16 );
        iVar8 = 2;
        break;
        default:
        SCRIPT_ASSERT( "Flow_Player_Stats_Random_Character_Started: Unknown Random Character ID" );
        return;
    }
    ConcatString(ref cVar4, "_", 16);
    if (iParam1 <= 0)
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Random_Character_Started: sequence < 0" );
        return;
    }
    if (iParam1 > iVar8)
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Random_Character_Started: sequence > max sequence" );
        return;
    }
    switch (iParam1)
    {
        case 1:
        ConcatString(ref cVar4, "1", 16);
        break;
        case 2:
        ConcatString(ref cVar4, "2", 16);
        break;
        case 3:
        ConcatString(ref cVar4, "3", 16);
        break;
        default: SCRIPT_ASSERT( "Flow_Player_Stats_Random_Character_Started: unknown problem with paramSequence" );
    }
    sub_10868( cVar4 );
    return;
}

void sub_10868(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (g_U0)
    {
        return;
    }
    if (NOT (COMPARE_STRING( ref g_U10966, "" )))
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Started: g_labelPlayerStatMissionName is already set up (see console log)" );
    }
    g_U10966 = {uParam0};
    PLAYSTATS_MISSION_STARTED( ref g_U10966 );
    return;
}

int sub_11103()
{
    if (IS_HINT_RUNNING())
    {
        if ((sub_6356() > 30) || (sub_3431( 15.00000000 )))
        {
            HINT_CAM( l_U411._fU0, l_U411._fU4, l_U411._fU8, 0, 0, 0, 0 );
            return 1;
        }
    }
    return 0;
}

void sub_11224()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    switch (l_U529)
    {
        case 0:
        SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
        SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
        if (DOES_BLIP_EXIST( l_U479 ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U479 );
        }
        DELETE_CHAR( ref l_U326 );
        REMOVE_ANIMS( "MISSRAND_PEDSARNAUD" );
        sub_11433( 598.20650000, 1647.25400000, 30.04000000, 272.98550000, ref l_U335 );
        CLEAR_AREA( l_U411._fU0, l_U411._fU4, l_U411._fU8, 25, 1 );
        if (IS_CHAR_DUCKING( sub_2519() ))
        {
            SET_CHAR_DUCKING( sub_2519(), 0 );
        }
        sub_5784( "ROM1AUD", 6 );
        sub_5784( "ARN02", 0 );
        sub_11768( "ROM1AUD" );
        sub_5957( 0, sub_2519(), "LUIS", 0 );
        START_CUTSCENE_NOW( "RP2_ARN" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "RP2_ARN" );
        l_U529 = 1;
        break;
        case 1:
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2519() );
        SET_CAM_BEHIND_PED( sub_2519() );
        SET_CHAR_COORDINATES( sub_2519(), 597.33730000, 1644.00600000, -101.00000000 );
        SET_CHAR_HEADING( sub_2519(), 87.97580000 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        REQUEST_MODEL( sub_3702( 13 ) );
        while (NOT (HAS_MODEL_LOADED( sub_3702( 13 ) )))
        {
            WAIT( 0 );
        }
        if (NOT (IS_CHAR_INJURED( sub_2519() )))
        {
            SET_PLAYER_CONTROL_ADVANCED( sub_2573(), 1, 1, 1 );
        }
        SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
        SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        SWITCH_PED_PATHS_ON( l_U411._fU0 - 10.00000000, l_U411._fU4 - 10.00000000, l_U411._fU8 - 10.00000000, l_U411._fU0 + 10.00000000, l_U411._fU4 + 10.00000000, l_U411._fU8 + 10.00000000 );
        sub_4424( 13, ref l_U326, l_U411._fU0, l_U411._fU4, l_U411._fU8, 270.09550000 );
        SET_CHAR_NEVER_TARGETTED( l_U326, 1 );
        SET_CHAR_CANT_BE_DRAGGED_OUT( l_U326, 1 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U326, 1 );
        SET_CHAR_HEALTH( l_U326, 200 );
        SET_CHAR_MAX_HEALTH( l_U326, 200 );
        SET_CHAR_COMPONENT_VARIATION( l_U326, 0, 0, 1 );
        SET_CHAR_COMPONENT_VARIATION( l_U326, 1, 1, 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U326, 2, 0, 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U326, 5, 0, 0 );
        ENABLE_PED_HELMET( l_U326, 0 );
        SET_CHAR_CAN_BE_KNOCKED_OFF_BIKE( l_U326, 3 );
        if (NOT (IS_PED_IN_GROUP( l_U326 )))
        {
            SET_GROUP_MEMBER( sub_12466(), l_U326 );
        }
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_2519(), 0 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_3702( 13 ) );
        REQUEST_ANIMS( "missarnaud2" );
        while (NOT (HAVE_ANIMS_LOADED( "missarnaud2" )))
        {
            WAIT( 0 );
        }
        REQUEST_MODEL( l_U519 );
        while (NOT (HAS_MODEL_LOADED( l_U519 )))
        {
            WAIT( 0 );
        }
        sub_12649();
        LOAD_SCENE( l_U411._fU0, l_U411._fU4, l_U411._fU8 );
        CLEAR_AREA_OF_CARS( l_U411._fU0, l_U411._fU4, l_U411._fU8, 500 );
        CLEAR_AREA( l_U411._fU0, l_U411._fU4, l_U411._fU8, 25, 1 );
        SET_WANTED_MULTIPLIER( 0.10000000 );
        DO_SCREEN_FADE_IN( 500 );
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
        sub_5957( 0, sub_2519(), "LUIS", 0 );
        sub_5957( 1, l_U326, "ARNAUD", 0 );
        WAIT( 800 );
        if (NOT l_U401)
        {
            sub_7764( "ROM1_WHER2", ref l_U484, 6, 1 );
            l_U401 = 1;
        }
        SETTIMERA( 0 );
        l_U529 = 3;
        break;
        case 3:
        sub_13149();
        sub_13456( l_U326 );
        sub_13647();
        GET_GAME_TIMER( ref l_U349 );
        if ((((((IS_PED_JACKING( sub_2519() )) || (IS_CHAR_TRYING_TO_ENTER_A_LOCKED_CAR( sub_2519() ))) AND (NOT l_U376)) AND (NOT l_U375)) AND (NOT (IS_CHAR_INJURED( l_U326 )))) AND (NOT l_U393))
        {
            l_U376 = 1;
            l_U410 = 1;
            GET_GAME_TIMER( ref l_U350 );
        }
        if (((l_U376) AND (l_U410)) AND ((l_U349 - l_U350) > 2000))
        {
            sub_7764( "ROM1_STEAL", ref l_U484, 6, 1 );
            l_U410 = 0;
            GET_GAME_TIMER( ref l_U350 );
        }
        if ((IS_WANTED_LEVEL_GREATER( sub_2573(), 0 )) AND (NOT (IS_CHAR_INJURED( l_U326 ))))
        {
            if ((NOT l_U373) AND (NOT l_U393))
            {
                sub_7764( "ROM1_WANT2", ref l_U484, 6, 1 );
                l_U373 = 1;
                GET_GAME_TIMER( ref l_U350 );
            }
            if (((l_U373) AND (NOT l_U390)) AND (NOT (sub_2178( l_U484 ))))
            {
                CLEAR_PRINTS();
                PRINT( "ARN2_03", 7500, 0 );
                l_U390 = 1;
            }
        }
        else
        {
            l_U373 = 0;
            l_U390 = 0;
        }
        if ((NOT l_U375) AND (NOT (IS_CHAR_INJURED( l_U326 ))))
        {
            if ((((((TIMERA() > 20000) AND (NOT (sub_2178( l_U484 )))) AND ((l_U349 - l_U350) > 4000)) AND (IS_CHAR_IN_ANY_CAR( l_U326 ))) AND (NOT l_U393)) AND (NOT l_U410))
            {
                sub_14249( ref l_U490, "ROM1_B2AV1", "ROM1_B2BV1", "ROM1_B2CV1" );
                sub_14249( ref l_U503, "ROM1_B2AV2", "ROM1_B2BV2", "ROM1_B2CV2" );
                if (g_U43697 == 0)
                {
                    sub_14654( ref l_U490, ref l_U484, 6, 1 );
                    l_U375 = 1;
                    g_U43697++;
                }
                else if (g_U43697 == 1)
                {
                    sub_14654( ref l_U503, ref l_U484, 6, 1 );
                    l_U375 = 1;
                    g_U43697++;
                }
                else if (g_U43696 > 1)
                {
                    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar2 );
                    if (iVar2 == 0)
                    {
                        sub_14654( ref l_U490, ref l_U484, 6, 1 );
                        l_U375 = 1;
                    }
                    else if (iVar2 == 1)
                    {
                        sub_14654( ref l_U503, ref l_U484, 6, 1 );
                        l_U375 = 1;
                    }
                };;;
            }
        }
        if (NOT l_U360)
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_2519(), l_U427._fU0, l_U427._fU4, l_U427._fU8, 150, 150, 150, 0 ))
            {
                SWITCH_ROADS_OFF( l_U427._fU0 - 30, l_U427._fU4 - 20, l_U427._fU8 - 20.00000000, l_U427._fU0 + 30, l_U427._fU4 + 20, l_U427._fU8 + 20.00000000 );
                CLEAR_AREA( l_U427._fU0, l_U427._fU4, l_U427._fU8, 20, 1 );
                CLEAR_AREA_OF_COPS( l_U427._fU0, l_U427._fU4, l_U427._fU8, 20 );
                SET_CREATE_RANDOM_COPS( 0 );
                sub_15103();
            }
        }
        if (NOT l_U372)
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_2519(), l_U427._fU0, l_U427._fU4, l_U427._fU8, 80, 80, 80, 0 ))
            {
                sub_16791();
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U326 )))
        {
            if (((IS_PED_IN_GROUP( l_U326 )) AND (NOT l_U373)) AND (NOT l_U393))
            {
                if (IS_CHAR_IN_AREA_3D( sub_2519(), 1287.51700000, 1692.86800000, 5.00000000, 1345.68500000, 1717.09700000, 65.00000000, 0 ))
                {
                    l_U385 = 1;
                }
                if (IS_CHAR_IN_AREA_3D( sub_2519(), 1339.47500000, 1692.73400000, 5.00000000, 1365.70700000, 1722.85300000, 65.00000000, 0 ))
                {
                    l_U398 = 1;
                    l_U385 = 1;
                }
                if (IS_CHAR_IN_AREA_3D( sub_2519(), 1269.79200000, 1692.95800000, 5.00000000, 1286.89000000, 1721.13200000, 65.00000000, 0 ))
                {
                    l_U399 = 1;
                    l_U385 = 1;
                }
                if (NOT l_U407)
                {
                    if (((IS_CHAR_IN_AREA_3D( sub_2519(), 1267.48300000, 1669.80000000, 0.00000000, 1298.68300000, 1684.45300000, 17.00000000, 0 )) || (IS_CHAR_IN_AREA_3D( sub_2519(), 1230.72100000, 1727.57100000, 0.00000000, 1238.97300000, 1758.44100000, 11.00000000, 0 ))) || (IS_CHAR_IN_AREA_3D( sub_2519(), 1268.96500000, 1757.17100000, 0.00000000, 1296.01500000, 1795.16800000, 17.00000000, 0 )))
                    {
                        l_U407 = 1;
                        sub_17904();
                    }
                }
                if (l_U407)
                {
                    if ((IS_CHAR_IN_AREA_3D( sub_2519(), 1338.55000000, 1647.46900000, 0.00000000, 1362.48800000, 1670.12900000, 19.00000000, 0 )) || (IS_CHAR_IN_AREA_3D( sub_2519(), 1339.45900000, 1754.35000000, 0.00000000, 1363.84800000, 1766.69600000, 15.00000000, 0 )))
                    {
                        l_U407 = 0;
                        sub_17904();
                    }
                }
                if (l_U385)
                {
                    if (IS_CHAR_IN_ANY_HELI( sub_2519() ))
                    {
                        l_U385 = 0;
                    }
                    l_U529 = 4;
                }
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U326 )))
        {
            if ((NOT (IS_PED_IN_GROUP( l_U326 ))) AND (sub_18272()))
            {
                CLEAR_PRINTS();
                if (NOT (IS_CHAR_INJURED( l_U327 )))
                {
                    TASK_SMART_FLEE_CHAR( l_U327, sub_2519(), 300.00000000, -1 );
                    SET_CHAR_KEEP_TASK( l_U327, 1 );
                    PRINT( "ARN2_13", 7500, 0 );
                }
                else
                {
                    PRINT( "ARN2_14", 7500, 0 );
                }
                sub_13220();
            }
        }
        if (NOT (IS_CHAR_INJURED( sub_2519() )))
        {
            if ((IS_WANTED_LEVEL_GREATER( sub_2573(), 0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( sub_2519(), l_U427._fU0, l_U427._fU4, l_U427._fU8, 60.00000000, 60.00000000, 60.00000000, 0 )))
            {
                CLEAR_PRINTS();
                if (NOT (IS_CHAR_INJURED( l_U327 )))
                {
                    TASK_SMART_FLEE_CHAR( l_U327, sub_2519(), 300.00000000, -1 );
                    TASK_FLEE_CHAR_ANY_MEANS( l_U327, sub_2519(), 300.00000000, -1, 0, 0, 0, 100.00000000 );
                    SET_CHAR_KEEP_TASK( l_U327, 1 );
                }
                for ( l_U472 = 0; l_U472 <= 3; l_U472++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U328[l_U472] )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U328[l_U472] );
                        TASK_FLEE_CHAR_ANY_MEANS( l_U328[l_U472], sub_2519(), 300.00000000, -1, 0, 0, 0, 100.00000000 );
                        SET_CHAR_KEEP_TASK( l_U328[l_U472], 1 );
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U468[0] )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U468[0] );
                    TASK_FLEE_CHAR_ANY_MEANS( l_U468[0], sub_2519(), 300.00000000, -1, 0, 0, 0, 100.00000000 );
                    SET_CHAR_KEEP_TASK( l_U468[0], 1 );
                }
                if (NOT (IS_CHAR_INJURED( l_U468[1] )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U468[1] );
                    TASK_FLEE_CHAR_ANY_MEANS( l_U468[1], sub_2519(), 300.00000000, -1, 0, 0, 0, 100.00000000 );
                    SET_CHAR_KEEP_TASK( l_U468[1], 1 );
                }
                PRINT( "ARN2_17", 7500, 0 );
                sub_13220();
            }
        }
        if ((sub_19164( l_U427._fU0, l_U427._fU4, l_U427._fU8 + 5, 1.60000000, 1.60000000, 5, 1, l_U326, "ARN2_04", "ARN2_02", 1, 1, "ARN2_03" )) || (sub_32361()))
        {
            if ((NOT l_U373) AND (NOT l_U393))
            {
                if (DOES_BLIP_EXIST( l_U136 ))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U136 );
                }
                l_U385 = 0;
                l_U529 = 4;
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U327 )))
        {
            GET_CHAR_COORDINATES( l_U327, ref l_U430._fU0, ref l_U430._fU4, ref l_U430._fU8 );
        }
        break;
        case 4:
        if (NOT l_U409)
        {
            SET_CAR_DENSITY_MULTIPLIER( 0.50000000 );
            l_U409 = 1;
        }
        sub_13149();
        sub_13456( l_U326 );
        sub_13647();
        if (l_U385)
        {
            switch (l_U353)
            {
                case 0:
                if (DOES_BLIP_EXIST( l_U136 ))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U136 );
                }
                if ((IS_VEH_DRIVEABLE( l_U338 )) AND (NOT (IS_CHAR_INJURED( l_U327 ))))
                {
                    if (NOT (IS_CHAR_IN_CAR( l_U327, l_U338 )))
                    {
                        WARP_CHAR_INTO_CAR( l_U327, l_U338 );
                    }
                }
                sub_2362( ref l_U484, 0 );
                sub_33138( "ROM1_ARR2", 0, 1, ref l_U484, 6, 0 );
                GET_GAME_TIMER( ref l_U350 );
                l_U353++;
                break;
                case 1:
                GET_GAME_TIMER( ref l_U349 );
                if ((l_U349 - l_U350) > 500)
                {
                    BEGIN_CAM_COMMANDS( ref l_U358 );
                    SET_USE_HIGHDOF( 1 );
                    SET_WIDESCREEN_BORDERS( 1 );
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                    SET_PLAYER_CONTROL( sub_2573(), 0 );
                    if (l_U399)
                    {
                        SET_CAM_ACTIVE( l_U524, 1 );
                        SET_CAM_PROPAGATE( l_U524, 1 );
                    }
                    else
                    {
                        SET_CAM_ACTIVE( l_U523, 1 );
                        SET_CAM_PROPAGATE( l_U523, 1 );
                    }
                    if ((NOT (IS_CHAR_INJURED( l_U328[0] ))) AND (NOT (IS_CHAR_INJURED( l_U327 ))))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U346 );
                        TASK_PLAY_ANIM( 0, "street_argue_f_b", "amb@pimps_pros", 1000.00000000, 0, 0, 0, 0, 1900 );
                        TASK_LOOK_AT_CHAR( 0, l_U327, 1000, 16 );
                        TASK_PAUSE( 0, 800 );
                        TASK_GO_STRAIGHT_TO_COORD( 0, 1294.29700000, 1695.20400000, 16.01627000, 2, -2 );
                        CLOSE_SEQUENCE_TASK( l_U346 );
                        TASK_PERFORM_SEQUENCE( l_U328[0], l_U346 );
                        CLEAR_SEQUENCE_TASK( l_U346 );
                        SET_CHAR_KEEP_TASK( l_U328[0], 1 );
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U328[0] );
                    }
                    if ((NOT (IS_CHAR_INJURED( l_U328[1] ))) AND (NOT (IS_CHAR_INJURED( l_U327 ))))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U346 );
                        TASK_PLAY_ANIM( 0, "street_argue_f_a", "amb@pimps_pros", 1000.00000000, 0, 0, 0, 0, 1600 );
                        TASK_LOOK_AT_CHAR( 0, l_U327, 1000, 16 );
                        TASK_PAUSE( 0, 800 );
                        TASK_GO_STRAIGHT_TO_COORD( 0, 1294.29700000, 1695.20400000, 16.01627000, 2, -2 );
                        CLOSE_SEQUENCE_TASK( l_U346 );
                        TASK_PERFORM_SEQUENCE( l_U328[1], l_U346 );
                        CLEAR_SEQUENCE_TASK( l_U346 );
                        SET_CHAR_KEEP_TASK( l_U328[1], 1 );
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U328[1] );
                    }
                    l_U395 = 1;
                    GET_GAME_TIMER( ref l_U350 );
                    l_U353++;
                }
                break;
                case 2:
                if ((((IS_VEH_DRIVEABLE( l_U338 )) AND (NOT (IS_CHAR_INJURED( l_U327 )))) AND (l_U378)) AND (NOT l_U377))
                {
                    GET_CAR_SPEED( l_U338, ref l_U478 );
                    if (l_U478 > 2.00000000)
                    {
                        SET_CAR_FORWARD_SPEED( l_U338, 4.00000000 );
                        l_U377 = 1;
                    }
                }
                if (NOT l_U378)
                {
                    if (((NOT (IS_CHAR_INJURED( l_U327 ))) AND (NOT (IS_CHAR_INJURED( l_U326 )))) AND (IS_VEH_DRIVEABLE( l_U338 )))
                    {
                        CLEAR_CHAR_TASKS( l_U327 );
                        OPEN_SEQUENCE_TASK( ref l_U346 );
                        if (l_U407)
                        {
                            TASK_PAUSE( 0, 1000 );
                            TASK_CLEAR_LOOK_AT( 0 );
                            TASK_CAR_DRIVE_TO_COORD( 0, l_U338, 1335.64200000, 1704.58800000, 16.15846000, l_U477, 1, 0, 3, 5.00000000, -1 );
                            TASK_CAR_DRIVE_TO_COORD( 0, l_U338, 1348.41100000, 1718.10300000, 16.28997000, l_U477, 1, 0, 3, 5.00000000, -1 );
                            TASK_CAR_DRIVE_TO_COORD( 0, l_U338, 1353.39200000, 1742.95300000, 13.29492000, l_U477, 1, 0, 2, 5.00000000, -1 );
                            TASK_CAR_DRIVE_TO_COORD( 0, l_U338, 1355.25200000, 1772.95200000, 8.70643100, l_U477 / 2.00000000, 0, 0, 2, 5.00000000, -1 );
                            TASK_CAR_DRIVE_TO_COORD( 0, l_U338, 1361.11000000, 1779.81400000, 8.91083200, l_U477 / 4.00000000, 0, 0, 2, 5.00000000, -1 );
                        }
                        else
                        {
                            TASK_PAUSE( 0, 1200 );
                            TASK_CLEAR_LOOK_AT( 0 );
                            TASK_CAR_DRIVE_TO_COORD( 0, l_U338, 1287.02200000, 1711.15600000, 16.12908000, l_U477, 1, 0, 2, 5.00000000, -1 );
                            TASK_CAR_DRIVE_TO_COORD( 0, l_U338, 1283.99900000, 1763.85700000, 13.93973000, l_U477, 1, 0, 2, 5.00000000, -1 );
                            TASK_CAR_DRIVE_TO_COORD( 0, l_U338, 1310.17300000, 1804.60400000, 9.43420000, l_U477 / 2.00000000, 1, 0, 2, 15.00000000, -1 );
                        }
                        TASK_CAR_DRIVE_TO_COORD( 0, l_U338, 1409.93400000, 1736.85400000, 16.95450000, l_U477, 1, 0, 2, 10.00000000, -1 );
                        TASK_CAR_DRIVE_TO_COORD( 0, l_U338, 1346.52000000, 988.71220000, 13.02970000, l_U477, 1, 0, 2, 10.00000000, -1 );
                        TASK_FLEE_CHAR_ANY_MEANS( 0, sub_2519(), 500, -1, 1, 5000, 1000, -1 );
                        CLOSE_SEQUENCE_TASK( l_U346 );
                        TASK_PERFORM_SEQUENCE( l_U327, l_U346 );
                        CLEAR_SEQUENCE_TASK( l_U346 );
                    }
                    l_U378 = 1;
                }
                GET_GAME_TIMER( ref l_U349 );
                if ((l_U349 - l_U350) > 2500)
                {
                    GET_GAME_TIMER( ref l_U350 );
                    if (l_U399)
                    {
                        SET_CAM_PROPAGATE( l_U524, 0 );
                    }
                    else if (l_U399)
                    {
                        SET_CAM_PROPAGATE( l_U523, 0 );
                    }
                    SET_USE_HIGHDOF( 0 );
                    SET_WIDESCREEN_BORDERS( 0 );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    SET_GAME_CAM_HEADING( 0.00000000 );
                    SET_CAM_BEHIND_PED( sub_2519() );
                    SET_PLAYER_CONTROL( sub_2573(), 1 );
                    END_CAM_COMMANDS( ref l_U358 );
                    if ((NOT (IS_CHAR_INJURED( l_U327 ))) AND (NOT (DOES_BLIP_EXIST( l_U482 ))))
                    {
                        ADD_BLIP_FOR_CHAR( l_U327, ref l_U482 );
                    }
                    if (IS_VEH_DRIVEABLE( l_U338 ))
                    {
                        GET_CAR_SPEED( l_U338, ref l_U478 );
                        if (l_U478 < 6.00000000)
                        {
                            SET_CAR_FORWARD_SPEED( l_U338, 6.00000000 );
                        }
                    }
                    if (NOT l_U395)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U328[0] )))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U346 );
                            TASK_PAUSE( 0, 200 );
                            TASK_GO_STRAIGHT_TO_COORD( 0, 1294.29700000, 1695.20400000, 16.01627000, 2, -2 );
                            CLOSE_SEQUENCE_TASK( l_U346 );
                            TASK_PERFORM_SEQUENCE( l_U328[0], l_U346 );
                            CLEAR_SEQUENCE_TASK( l_U346 );
                            SET_CHAR_KEEP_TASK( l_U328[0], 1 );
                            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U328[0] );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U328[1] )))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U346 );
                            TASK_GO_STRAIGHT_TO_COORD( 0, 1294.29700000, 1695.20400000, 16.01627000, 2, -2 );
                            CLOSE_SEQUENCE_TASK( l_U346 );
                            TASK_PERFORM_SEQUENCE( l_U328[1], l_U346 );
                            CLEAR_SEQUENCE_TASK( l_U346 );
                            SET_CHAR_KEEP_TASK( l_U328[1], 1 );
                            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U328[1] );
                        }
                        l_U395 = 1;
                    }
                    l_U353++;
                }
                break;
                case 3:
                if (NOT (sub_2178( l_U484 )))
                {
                    sub_7764( "ROM1_PIMPR", ref l_U484, 6, 1 );
                    l_U353++;
                }
                break;
                case 4:
                if (NOT (sub_2178( l_U484 )))
                {
                    sub_7764( "ROM1_PIMPS", ref l_U484, 6, 1 );
                    l_U353++;
                }
                break;
                case 5:
                if (NOT (sub_2178( l_U484 )))
                {
                    CLEAR_PRINTS();
                    PRINT( "ARN2_08", 7500, 0 );
                    l_U353++;
                }
                break;
                case 6:
                l_U529 = 5;
                break;
            }
            if (l_U360)
            {
                if (IS_CHAR_INJURED( l_U327 ))
                {
                    l_U529 = 7;
                }
                else
                {
                    GET_CHAR_COORDINATES( l_U327, ref l_U430._fU0, ref l_U430._fU4, ref l_U430._fU8 );
                }
            }
        }
        else
        {
            switch (l_U353)
            {
                case 0:
                if (DOES_BLIP_EXIST( l_U136 ))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U136 );
                }
                sub_2362( ref l_U484, 0 );
                if ((NOT (IS_CHAR_INJURED( l_U327 ))) AND (NOT (DOES_BLIP_EXIST( l_U482 ))))
                {
                    ADD_BLIP_FOR_CHAR( l_U327, ref l_U482 );
                    sub_7764( "ROM1_PIMPS", ref l_U484, 6, 1 );
                }
                else if (IS_CHAR_INJURED( l_U327 ))
                {
                    sub_2362( ref l_U484, 1 );
                    sub_7764( "ROM1_FIGHT", ref l_U484, 6, 1 );
                }
                if ((NOT (IS_CHAR_INJURED( l_U327 ))) AND (IS_VEH_DRIVEABLE( l_U338 )))
                {
                    CLEAR_CHAR_TASKS( l_U327 );
                    TASK_CLEAR_LOOK_AT( l_U327 );
                    OPEN_SEQUENCE_TASK( ref l_U346 );
                    if (l_U407)
                    {
                        TASK_CAR_DRIVE_TO_COORD( 0, l_U338, 1335.64200000, 1704.58800000, 16.15846000, l_U477, 1, 0, 3, 5.00000000, -1 );
                        TASK_CAR_DRIVE_TO_COORD( 0, l_U338, 1348.41100000, 1718.10300000, 16.28997000, l_U477, 1, 0, 3, 5.00000000, -1 );
                        TASK_CAR_DRIVE_TO_COORD( 0, l_U338, 1353.39200000, 1742.95300000, 13.29492000, l_U477, 1, 0, 2, 5.00000000, -1 );
                        TASK_CAR_DRIVE_TO_COORD( 0, l_U338, 1355.25200000, 1772.95200000, 8.70643100, l_U477 / 2.00000000, 0, 0, 2, 5.00000000, -1 );
                        TASK_CAR_DRIVE_TO_COORD( 0, l_U338, 1361.11000000, 1779.81400000, 8.91083200, l_U477 / 4.00000000, 0, 0, 2, 5.00000000, -1 );
                    }
                    else
                    {
                        TASK_CAR_DRIVE_TO_COORD( 0, l_U338, 1287.02200000, 1711.15600000, 16.12908000, l_U477, 1, 0, 2, 5.00000000, -1 );
                        TASK_CAR_DRIVE_TO_COORD( 0, l_U338, 1283.99900000, 1763.85700000, 13.93973000, l_U477, 1, 0, 2, 5.00000000, -1 );
                        TASK_CAR_DRIVE_TO_COORD( 0, l_U338, 1310.17300000, 1804.60400000, 9.43420000, l_U477 / 2.00000000, 1, 0, 2, 15.00000000, -1 );
                    }
                    TASK_CAR_DRIVE_TO_COORD( 0, l_U338, 1409.93400000, 1736.85400000, 16.95450000, l_U477, 1, 0, 2, 10.00000000, -1 );
                    TASK_CAR_DRIVE_TO_COORD( 0, l_U338, 1346.52000000, 988.71220000, 13.02970000, l_U477, 1, 0, 2, 10.00000000, -1 );
                    TASK_FLEE_CHAR_ANY_MEANS( 0, sub_2519(), 500, -1, 1, 5000, 1000, -1 );
                    CLOSE_SEQUENCE_TASK( l_U346 );
                    TASK_PERFORM_SEQUENCE( l_U327, l_U346 );
                    CLEAR_SEQUENCE_TASK( l_U346 );
                }
                for ( l_U472 = 0; l_U472 <= 3; l_U472++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U328[l_U472] )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U328[l_U472] );
                        OPEN_SEQUENCE_TASK( ref l_U346 );
                        TASK_PAUSE( 0, sub_36383( 200, 500 ) );
                        TASK_SMART_FLEE_CHAR( 0, sub_2519(), 100.00000000, -1 );
                        CLOSE_SEQUENCE_TASK( l_U346 );
                        TASK_PERFORM_SEQUENCE( l_U328[l_U472], l_U346 );
                        CLEAR_SEQUENCE_TASK( l_U346 );
                    }
                }
                l_U353++;
                break;
                case 1:
                if (NOT (sub_2178( l_U484 )))
                {
                    sub_7764( "ROM1_PIMPR", ref l_U484, 6, 1 );
                    l_U353++;
                }
                break;
                case 2:
                if (NOT (sub_2178( l_U484 )))
                {
                    CLEAR_PRINTS();
                    PRINT( "ARN2_08", 7500, 0 );
                    l_U353++;
                }
                break;
                case 3:
                l_U529 = 5;
                break;
            }
            if (l_U360)
            {
                if (IS_CHAR_INJURED( l_U327 ))
                {
                    l_U529 = 7;
                }
                else
                {
                    GET_CHAR_COORDINATES( l_U327, ref l_U430._fU0, ref l_U430._fU4, ref l_U430._fU8 );
                }
            }
        }
        break;
        case 5:
        sub_13149();
        sub_36732();
        sub_13456( l_U326 );
        sub_13647();
        if (((IS_CHAR_IN_ANY_CAR( l_U327 )) AND (IS_VEH_DRIVEABLE( l_U338 ))) AND (NOT l_U388))
        {
            l_U388 = 1;
            ADD_STUCK_CAR_CHECK( l_U338, 5.00000000, 7000 );
        }
        if ((sub_13271( sub_2519(), l_U327, 1 )) > 300.00000000)
        {
            CLEAR_PRINTS();
            PRINT( "ARN2_07", 7500, 0 );
            sub_13220();
        }
        GET_GAME_TIMER( ref l_U349 );
        sub_37144( ref l_U338, ref l_U343, ref l_U344, ref l_U345 );
        if (l_U344 < 150.00000000)
        {
            l_U529 = 6;
        }
        if (DOES_VEHICLE_EXIST( l_U338 ))
        {
            if (IS_VEH_DRIVEABLE( l_U338 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U327 )))
                {
                    if (IS_CHAR_IN_CAR( l_U327, l_U338 ))
                    {
                        if (((IS_CAR_ON_FIRE( l_U338 )) || (sub_37346( sub_2519(), ref l_U338 ))) || (sub_37615( ref l_U338 )))
                        {
                            l_U529 = 6;
                        }
                    }
                }
            }
            else
            {
                l_U529 = 6;
            }
        }
        if (DOES_VEHICLE_EXIST( l_U338 ))
        {
            if (IS_VEH_DRIVEABLE( l_U338 ))
            {
                if (l_U388)
                {
                    if (IS_CAR_STUCK( l_U338 ))
                    {
                        l_U529 = 6;
                    }
                }
            }
            else
            {
                l_U529 = 6;
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U327 )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( l_U327 )))
            {
                l_U529 = 6;
            }
        }
        if (IS_CHAR_INJURED( l_U327 ))
        {
            l_U529 = 7;
        }
        else
        {
            GET_CHAR_COORDINATES( l_U327, ref l_U430._fU0, ref l_U430._fU4, ref l_U430._fU8 );
            sub_37940( ref l_U327 );
        }
        break;
        case 6:
        sub_13149();
        sub_36732();
        sub_13456( l_U326 );
        sub_13647();
        switch (l_U354)
        {
            case 0:
            if ((NOT (IS_CHAR_INJURED( l_U327 ))) AND (IS_CHAR_IN_ANY_CAR( l_U327 )))
            {
                sub_38695( ref l_U457, l_U327 );
                GET_CAR_SPEED( l_U457, ref l_U476 );
                if (l_U476 < 1.00000000)
                {
                    CLEAR_CHAR_TASKS( l_U327 );
                    OPEN_SEQUENCE_TASK( ref l_U346 );
                    TASK_LEAVE_CAR_IMMEDIATELY( 0, l_U338 );
                    CLOSE_SEQUENCE_TASK( l_U346 );
                    TASK_PERFORM_SEQUENCE( l_U327, l_U346 );
                    CLEAR_SEQUENCE_TASK( l_U346 );
                    l_U354++;
                }
            }
            else if ((NOT (IS_CHAR_INJURED( l_U327 ))) AND (NOT (IS_CHAR_IN_ANY_CAR( l_U327 ))))
            {
                l_U354++;
            }
            else if (IS_CHAR_INJURED( l_U327 ))
            {
                l_U529 = 7;
            };;;
            break;
            case 1:
            if (NOT (IS_CHAR_INJURED( l_U327 )))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( l_U327 )))
                {
                    CLEAR_CHAR_TASKS( l_U327 );
                    OPEN_SEQUENCE_TASK( ref l_U346 );
                    TASK_SMART_FLEE_CHAR( 0, sub_2519(), 1000.00000000, -1 );
                    CLOSE_SEQUENCE_TASK( l_U346 );
                    TASK_PERFORM_SEQUENCE( l_U327, l_U346 );
                    CLEAR_SEQUENCE_TASK( l_U346 );
                    CLEAR_PRINTS();
                    PRINT( "ARN2_09", 7500, 0 );
                    GET_GAME_TIMER( ref l_U350 );
                    l_U354++;
                }
                else if ((sub_13271( sub_2519(), l_U327, 1 )) > 300.00000000)
                {
                    CLEAR_PRINTS();
                    PRINT( "ARN2_07", 7500, 0 );
                    sub_13220();
                }
            }
            else
            {
                l_U529 = 7;
            }
            break;
            case 2:
            if (NOT (IS_CHAR_INJURED( l_U327 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U327, 29, ref l_U347 );
                if ((l_U347 == 7) || (l_U347 == 2))
                {
                    CLEAR_CHAR_TASKS( l_U327 );
                    OPEN_SEQUENCE_TASK( ref l_U346 );
                    TASK_SMART_FLEE_CHAR( 0, sub_2519(), 1000.00000000, -1 );
                    CLOSE_SEQUENCE_TASK( l_U346 );
                    TASK_PERFORM_SEQUENCE( l_U327, l_U346 );
                    CLEAR_SEQUENCE_TASK( l_U346 );
                }
                if ((sub_13271( sub_2519(), l_U327, 1 )) > 300.00000000)
                {
                    CLEAR_PRINTS();
                    PRINT( "ARN2_07", 7500, 0 );
                    sub_13220();
                }
                GET_GAME_TIMER( ref l_U349 );
                if (((l_U349 - l_U350) > 3000) AND (NOT l_U383))
                {
                    sub_7764( "ROM1_PRUN", ref l_U484, 6, 1 );
                    GET_GAME_TIMER( ref l_U350 );
                    l_U383 = 1;
                }
                if ((sub_13271( l_U327, sub_2519(), 1 )) > 7.00000000)
                {
                    if (((l_U349 - l_U350) > 8000) AND (NOT l_U384))
                    {
                        sub_7764( "ROM1_LRUN", ref l_U484, 6, 1 );
                        GET_GAME_TIMER( ref l_U350 );
                    }
                }
                else if (((l_U349 - l_U350) > 6000) AND (NOT (IS_CHAR_IN_ANY_CAR( sub_2519() ))))
                {
                    sub_7764( "ROM1_FIGHT", ref l_U484, 6, 1 );
                    GET_GAME_TIMER( ref l_U350 );
                }
            }
            else
            {
                l_U529 = 7;
            }
            break;
        }
        if (NOT (IS_CHAR_INJURED( l_U327 )))
        {
            GET_CHAR_COORDINATES( l_U327, ref l_U430._fU0, ref l_U430._fU4, ref l_U430._fU8 );
        }
        if (NOT (IS_CHAR_INJURED( l_U327 )))
        {
            sub_37940( ref l_U327 );
        }
        break;
        case 7:
        sub_13149();
        sub_36732();
        sub_13456( l_U326 );
        sub_13647();
        switch (l_U355)
        {
            case 0:
            if (DOES_CHAR_EXIST( l_U327 ))
            {
                if (NOT (IS_CHAR_DEAD( l_U327 )))
                {
                    SET_CHAR_HEALTH( l_U327, 0 );
                }
            }
            if (DOES_BLIP_EXIST( l_U482 ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U482 );
            }
            for ( l_U472 = 0; l_U472 <= 3; l_U472++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U328[l_U472] )))
                {
                    CLEAR_CHAR_TASKS( l_U328[l_U472] );
                    OPEN_SEQUENCE_TASK( ref l_U346 );
                    TASK_SMART_FLEE_CHAR( 0, sub_2519(), 100.00000000, -1 );
                    CLOSE_SEQUENCE_TASK( l_U346 );
                    TASK_PERFORM_SEQUENCE( l_U328[l_U472], l_U346 );
                    CLEAR_SEQUENCE_TASK( l_U346 );
                }
            }
            if (NOT (HAS_MODEL_LOADED( l_U519 )))
            {
                REQUEST_MODEL( l_U519 );
                while (NOT (HAS_MODEL_LOADED( l_U519 )))
                {
                    WAIT( 0 );
                }
            }
            GET_SAFE_PICKUP_COORDS( l_U430._fU0, l_U430._fU4, l_U430._fU8, ref l_U414._fU0, ref l_U414._fU4, ref l_U414._fU8 );
            CREATE_PICKUP( l_U519, 22, l_U414._fU0, l_U414._fU4, l_U414._fU8, ref l_U333, 1 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U519 );
            ADD_BLIP_FOR_PICKUP( l_U333, ref l_U481 );
            CHANGE_BLIP_COLOUR( l_U481, 2 );
            sub_40256( l_U481 );
            SET_MISSION_PICKUP_SOUND( l_U519, "FRONTEND_GAME_PICKUP_WEAPON" );
            if (GET_CLOSEST_CAR_NODE_WITH_HEADING( l_U414._fU0, l_U414._fU4, l_U414._fU8, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8, ref uVar6 ))
            {
                sub_40390( ref l_U481, uVar3, uVar6 );
            }
            l_U355++;
            break;
            case 1:
            if (NOT (sub_2178( l_U484 )))
            {
                CLEAR_PRINTS();
                PRINT( "ARN2_11", 7500, 0 );
                l_U355++;
            }
            break;
            case 2:
            if (DOES_PICKUP_EXIST( l_U333 ))
            {
                if ((sub_40551( sub_2519(), ref l_U414 )) < 25.00000000)
                {
                    l_U397 = 1;
                }
                if (((sub_40551( sub_2519(), ref l_U414 )) > 300.00000000) AND (l_U397))
                {
                    CLEAR_PRINTS();
                    PRINT( "ARN2_16", 7500, 0 );
                    sub_13220();
                }
            }
            else if (NOT (DOES_PICKUP_EXIST( l_U333 )))
            {
                CLEAR_PRINTS();
                if (DOES_BLIP_EXIST( l_U481 ))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U481 );
                }
                GET_GAME_TIMER( ref l_U350 );
                l_U355++;
            }
            break;
            case 3:
            GET_GAME_TIMER( ref l_U349 );
            if ((l_U349 - l_U350) > 1000)
            {
                l_U373 = 0;
                SWITCH_ROADS_OFF( l_U451._fU0 - 35.00000000, l_U451._fU4 - 22.00000000, l_U451._fU8 - 15.00000000, l_U451._fU0 + 25.00000000, l_U451._fU4 + 59.00000000, l_U451._fU8 + 15.00000000 );
                CLEAR_AREA( l_U451._fU0, l_U451._fU4, l_U451._fU8, 60.00000000, 1 );
                GET_GAME_TIMER( ref l_U350 );
                l_U529 = 8;
            }
            break;
        }
        break;
        case 8:
        sub_13149();
        if (l_U356 > 0)
        {
            if (IS_WANTED_LEVEL_GREATER( sub_2573(), 0 ))
            {
                if (NOT l_U373)
                {
                    l_U373 = 1;
                    CLEAR_PRINTS();
                    PRINT( "ARN2_03", 7500, 0 );
                    if (sub_2178( l_U484 ))
                    {
                        sub_2362( ref l_U484, 1 );
                    }
                }
            }
            else if (l_U373)
            {
                GET_GAME_TIMER( ref l_U350 );
                CLEAR_PRINTS();
                l_U373 = 0;
            }
        }
        switch (l_U356)
        {
            case 0:
            sub_13456( l_U326 );
            if (l_U393)
            {
                if ((NOT (DOES_BLIP_EXIST( l_U480 ))) AND (NOT (IS_CHAR_INJURED( l_U326 ))))
                {
                    ADD_BLIP_FOR_CHAR( l_U326, ref l_U480 );
                    SET_BLIP_AS_FRIENDLY( l_U480, 1 );
                    sub_40256( l_U480 );
                }
                if (NOT l_U394)
                {
                    CLEAR_PRINTS();
                    PRINT( "ARN2_15", 7500, 0 );
                    l_U394 = 1;
                }
            }
            else if (DOES_BLIP_EXIST( l_U480 ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U480 );
            }
            l_U356++;;
            break;
            case 1:
            GET_GAME_TIMER( ref l_U349 );
            if ((((NOT l_U373) AND ((l_U349 - l_U350) > 250)) AND (NOT (sub_2178( l_U484 )))) AND (NOT l_U402[0]))
            {
                sub_7764( "ROM1_TAKE", ref l_U484, 6, 1 );
                l_U402[0] = 1;
            }
            if (((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (NOT (sub_2178( l_U484 )))) AND (l_U402[0]))
            {
                CLEAR_PRINTS();
                PRINT( "ARN2_12", 7500, 0 );
                l_U356++;
            }
            break;
            case 2:
            if (sub_19164( l_U451._fU0, l_U451._fU4, l_U451._fU8 + 5, 1.60000000, 1.60000000, 5, 1, l_U326, "ARN2_04", "ARN2_02", 1, 1, "ARN2_03" ))
            {
                if (NOT (IS_CHAR_INJURED( l_U326 )))
                {
                    if ((IS_CHAR_IN_ANY_CAR( l_U326 )) || (IS_CHAR_ON_ANY_BIKE( l_U326 )))
                    {
                        l_U387 = 0;
                    }
                    else
                    {
                        l_U387 = 1;
                    }
                }
                l_U356++;
            }
            else if (((NOT (IS_CHAR_INJURED( l_U326 ))) AND (NOT l_U373)) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
            {
                if ((NOT l_U408) AND (IS_CHAR_IN_ANY_CAR( l_U326 )))
                {
                    l_U408 = 1;
                    GET_GAME_TIMER( ref l_U350 );
                }
                GET_GAME_TIMER( ref l_U349 );
                if (((((l_U349 - l_U350) > 8000) AND (NOT l_U402[1])) AND (IS_CHAR_IN_ANY_CAR( l_U326 ))) AND (l_U408))
                {
                    sub_33138( "ROM1_PASS", 0, 1, ref l_U484, 6, 0 );
                    l_U402[1] = 1;
                }
                if (((l_U402[1]) AND (NOT l_U402[2])) AND (NOT (sub_2178( l_U484 ))))
                {
                    sub_33138( "ROM1_PASS", 2, 1, ref l_U484, 6, 0 );
                    l_U402[2] = 1;
                }
                if (((l_U402[2]) AND (NOT l_U402[3])) AND (NOT (sub_2178( l_U484 ))))
                {
                    sub_7764( "ROM1_CHTS", ref l_U484, 6, 1 );
                    l_U402[3] = 1;
                }
            }
            break;
            case 3:
            if (NOT (IS_CHAR_INJURED( sub_2519() )))
            {
                SET_PLAYER_CONTROL( sub_2573(), 0 );
            }
            l_U529 = 9;
            break;
        }
        break;
        case 9:
        if (NOT l_U381)
        {
            sub_42106();
        }
        else
        {
            sub_43688();
        }
        break;
    }
    return;
}

void sub_11433(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;

    GET_PLAYERS_LAST_CAR_NO_SAVE( uParam4 );
    if ((IS_VEH_DRIVEABLE( (uParam4^) )) AND (NOT (IS_CHAR_INJURED( sub_2519() ))))
    {
        if (NOT (IS_CHAR_IN_CAR( sub_2519(), (uParam4^) )))
        {
            if (LOCATE_CAR_3D( (uParam4^), uParam0._fU0, uParam0._fU4, uParam0._fU8, 100, 100, 100, 0 ))
            {
                if (NOT (IS_CAR_A_MISSION_CAR( (uParam4^) )))
                {
                    SET_CAR_AS_MISSION_CAR( (uParam4^) );
                }
                SET_LOAD_COLLISION_FOR_CAR_FLAG( (uParam4^), 0 );
                GET_CAR_MODEL( (uParam4^), ref uVar7 );
                if (IS_THIS_MODEL_A_CAR( uVar7 ))
                {
                    CLOSE_ALL_CAR_DOORS( (uParam4^) );
                }
                SET_CAR_COORDINATES( (uParam4^), uParam0._fU0, uParam0._fU4, uParam0._fU8 );
                SET_CAR_HEADING( (uParam4^), uParam3 );
                SET_CAR_ON_GROUND_PROPERLY( (uParam4^) );
            }
        }
    }
    return;
}

void sub_11768(unknown uParam0)
{
    StrCopy( ref l_U6._fU0, uParam0, 16 );
    sub_11785();
    return;
}

void sub_11785()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U6._fU16[I]._fU0 = nil;
        StrCopy( ref l_U6._fU16[I]._fU4, "", 32 );
        l_U6._fU344[I] = 0;
    }
    return;
}

void sub_12466()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_12649()
{
    if (NOT (DOES_CAM_EXIST( l_U523 )))
    {
        CREATE_CAM( 14, ref l_U523 );
        SET_CAM_POS( l_U523, 1297.59400000, 1696.59200000, 17.58747000 );
        SET_CAM_ROT( l_U523, -2.59313600, -0.00000000, -72.75858000 );
        SET_CAM_FOV( l_U523, 21.60006000 );
        SET_CAM_ACTIVE( l_U523, 1 );
    }
    if (NOT (DOES_CAM_EXIST( l_U524 )))
    {
        CREATE_CAM( 14, ref l_U524 );
        SET_CAM_POS( l_U524, 1315.54400000, 1698.66600000, 17.09766000 );
        SET_CAM_ROT( l_U524, -1.72522400, -0.00000000, 77.27382000 );
        SET_CAM_FOV( l_U524, 21.60006000 );
        SET_CAM_ACTIVE( l_U524, 1 );
    }
    return;
}

void sub_13149()
{
    if (DOES_CHAR_EXIST( l_U326 ))
    {
        if (IS_CHAR_INJURED( l_U326 ))
        {
            CLEAR_PRINTS();
            PRINT( "ARN2_05", 7500, 0 );
            sub_13220();
        }
        if (NOT (IS_CHAR_DEAD( l_U326 )))
        {
            if ((sub_13271( sub_2519(), l_U326, 1 )) > 250)
            {
                CLEAR_PRINTS();
                PRINT( "ARN2_01", 7500, 0 );
                sub_13220();
            }
        }
    }
    return;
}

void sub_13220()
{
    sub_861();
    return;
}

void sub_13271(unknown uParam0, unknown uParam1, unknown uParam2)
{
    return VDIST( sub_13284( uParam0, uParam2 ), sub_13284( uParam1, uParam2 ) );
}

void sub_13284(unknown uParam0, boolean bParam1)
{
    unknown Result;
    unknown uVar5;
    unknown uVar6;

    if (IS_CHAR_DEAD( uParam0 ))
    {
        N_1363505769( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    else
    {
        GET_CHAR_COORDINATES( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    if (NOT bParam1)
    {
        Result._fU8 = 0.00000000;
    }
    return Result;
}

void sub_13456(unknown uParam0)
{
    float fVar3;
    float fVar4;
    unknown uVar5;

    fVar3 = 40.00000000;
    fVar4 = 15.00000000;
    if (DOES_CHAR_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_DEAD( uParam0 )))
        {
            GET_PLAYER_GROUP( sub_2573(), ref uVar5 );
            if (NOT (IS_GROUP_MEMBER( uParam0, uVar5 )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2519(), uParam0, fVar4, fVar4, fVar4, 0 ))
                {
                    SET_GROUP_MEMBER( uVar5, uParam0 );
                    l_U393 = 0;
                }
                else
                {
                    l_U393 = 1;
                }
            }
            else if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2519(), uParam0, fVar3, fVar3, fVar3, 0 )))
            {
                REMOVE_CHAR_FROM_GROUP( uParam0 );
                l_U393 = 1;
            }
        }
    }
    return;
}

void sub_13647()
{
    if ((l_U393) AND (sub_2178( l_U484 )))
    {
        sub_2362( ref l_U484, 1 );
    }
    if (NOT (IS_CHAR_INJURED( l_U326 )))
    {
        if (((sub_13271( l_U326, sub_2519(), 1 )) > 30.00000000) AND (sub_2178( l_U484 )))
        {
            sub_2362( ref l_U484, 1 );
        }
    }
    return;
}

void sub_14249(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_14296( uParam0, uParam1, uParam2, uParam3, "END", "END", "END", "END", "END" );
    return;
}

void sub_14296(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    char[16] cVar11;
    int I;

    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        switch (I)
        {
            case 0:
            StrCopy( ref cVar11, uParam1, 16 );
            break;
            case 1:
            StrCopy( ref cVar11, uParam2, 16 );
            break;
            case 2:
            StrCopy( ref cVar11, uParam3, 16 );
            break;
            case 3:
            StrCopy( ref cVar11, uParam4, 16 );
            break;
            case 4:
            StrCopy( ref cVar11, uParam5, 16 );
            break;
            case 5:
            StrCopy( ref cVar11, uParam6, 16 );
            break;
            case 6:
            StrCopy( ref cVar11, uParam7, 16 );
            break;
            case 7:
            StrCopy( ref cVar11, uParam8, 16 );
            break;
            case 8:
            StrCopy( ref cVar11, "END", 16 );
            break;
        }
        (uParam0^)[I] = {cVar11};
        if (COMPARE_STRING( ref (uParam0^)[I], "END" ))
        {
            I = (uParam0^);
        }
    }
    return;
}

void sub_14654(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_14675( uParam0, ref l_U6._fU0, uParam1, uParam2, uParam3 );
}

void sub_14675(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;

    StrCopy( ref cVar7, uParam1, 16 );
    return sub_7839( uParam0, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

void sub_15103()
{
    unknown uVar2;

    REQUEST_MODEL( -2124201592 );
    REQUEST_MODEL( 1609755055 );
    while ((NOT (HAS_MODEL_LOADED( -2124201592 ))) || (NOT (HAS_MODEL_LOADED( 1609755055 ))))
    {
        WAIT( 0 );
    }
    CREATE_CAR( -2124201592, 1307.60300000, 1699.99900000, 15.64700000, ref l_U338, 1 );
    SET_CAR_HEADING( l_U338, 86.50380000 );
    CHANGE_CAR_COLOUR( l_U338, 104, 36 );
    SET_EXTRA_CAR_COLOURS( l_U338, 1, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U338, 2, 0 );
    SET_CAR_HEALTH( l_U338, 1000 );
    SET_CAR_ON_GROUND_PROPERLY( l_U338 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -2124201592 );
    CREATE_CHAR_INSIDE_CAR( l_U338, 26, 1609755055, ref l_U327 );
    SET_CHAR_HEALTH( l_U327, 200 );
    SET_CHAR_MAX_HEALTH( l_U327, 200 );
    SET_CHAR_SHOOT_RATE( l_U327, 65 );
    SET_CHAR_ACCURACY( l_U327, 40 );
    SET_CHAR_CAN_BE_SHOT_IN_VEHICLE( l_U327, 1 );
    SET_CHAR_AS_ENEMY( l_U327, 1 );
    SET_CHAR_SUFFERS_CRITICAL_HITS( l_U327, 1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U327, 1 );
    GIVE_WEAPON_TO_CHAR( l_U327, 9, 30000, 0 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1609755055 );
    SET_CHAR_COMPONENT_VARIATION( l_U327, 0, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U327, 1, 1, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U327, 2, 0, 2 );
    SET_CHAR_COMPONENT_VARIATION( l_U327, 7, 1, 2 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref uVar2 );
    SET_COMBAT_DECISION_MAKER( l_U327, uVar2 );
    sub_5957( 2, l_U327, "PIMP", 0 );
    REQUEST_MODEL( 996267216 );
    while (NOT (HAS_MODEL_LOADED( 996267216 )))
    {
        WAIT( 0 );
    }
    l_U433[0] = {1308.34600000, 1697.67000000, 15.72890000};
    l_U433[1] = {1307.84000000, 1698.35300000, 15.72890000};
    l_U433[2] = {1327.78300000, 1697.83500000, 15.71370000};
    l_U433[3] = {1315.68500000, 1698.08300000, 15.72890000};
    l_U446[0] = 347.04050000;
    l_U446[1] = 15.08530000;
    l_U446[2] = 18.89970000;
    l_U446[3] = 4.93490000;
    for ( l_U472 = 0; l_U472 <= 3; l_U472++ )
    {
        CREATE_CHAR( 26, 996267216, l_U433[l_U472]._fU0, l_U433[l_U472]._fU4, l_U433[l_U472]._fU8, ref l_U328[l_U472], 1 );
    }
    SET_CHAR_COMPONENT_VARIATION( l_U328[0], 0, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U328[0], 1, 0, 2 );
    SET_CHAR_COMPONENT_VARIATION( l_U328[0], 2, 1, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U328[0], 7, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U328[1], 0, 0, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U328[1], 1, 0, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U328[1], 2, 0, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U328[1], 7, 1, 2 );
    SET_CHAR_COMPONENT_VARIATION( l_U328[2], 0, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U328[2], 1, 1, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U328[2], 2, 1, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U328[2], 7, 2, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U328[3], 0, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U328[3], 1, 1, 2 );
    SET_CHAR_COMPONENT_VARIATION( l_U328[3], 2, 0, 2 );
    SET_CHAR_COMPONENT_VARIATION( l_U328[3], 7, 0, 1 );
    for ( l_U472 = 0; l_U472 <= 3; l_U472++ )
    {
        SET_CHAR_HEADING( l_U328[l_U472], l_U446[l_U472] );
        SET_CHAR_HEALTH( l_U328[l_U472], 200 );
        SET_CHAR_MAX_HEALTH( l_U328[l_U472], 200 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U328[l_U472], 1 );
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( 996267216 );
    REQUEST_MODEL( -1883869285 );
    while (NOT (HAS_MODEL_LOADED( -1883869285 )))
    {
        WAIT( 0 );
    }
    l_U458[0] = {1315.96900000, 1700.33700000, 15.63490000};
    l_U465[0] = 271.48670000;
    l_U458[1] = {1327.34700000, 1700.08400000, 15.60330000};
    l_U465[1] = 269;
    for ( l_U472 = 0; l_U472 <= 1; l_U472++ )
    {
        CREATE_CAR( -1883869285, l_U458[l_U472]._fU0, l_U458[l_U472]._fU4, l_U458[l_U472]._fU8, ref l_U454[l_U472], 1 );
        SET_CAR_HEADING( l_U454[l_U472], l_U465[l_U472] );
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( 996267216 );
    REQUEST_MODEL( 523785438 );
    while (NOT (HAS_MODEL_LOADED( 523785438 )))
    {
        WAIT( 0 );
    }
    for ( l_U472 = 0; l_U472 <= 1; l_U472++ )
    {
        if (NOT (IS_CAR_DEAD( l_U454[l_U472] )))
        {
            CREATE_CHAR_INSIDE_CAR( l_U454[l_U472], 26, 523785438, ref l_U468[l_U472] );
        }
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( 523785438 );
    l_U360 = 1;
    return;
}

void sub_16791()
{
    if (NOT (HAVE_ANIMS_LOADED( "amb@pimps_pros" )))
    {
        REQUEST_ANIMS( "amb@pimps_pros" );
        while (NOT (HAVE_ANIMS_LOADED( "amb@pimps_pros" )))
        {
            WAIT( 0 );
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U327 )))
    {
        if (NOT (IS_CHAR_INJURED( l_U328[0] )))
        {
            TASK_PLAY_ANIM( l_U328[0], "street_argue_f_b", "amb@pimps_pros", 8.00000000, 1, 0, 0, 0, 0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U328[1] )))
        {
            TASK_PLAY_ANIM( l_U328[1], "street_argue_f_a", "amb@pimps_pros", 8.00000000, 1, 0, 0, 0, 0 );
            OPEN_SEQUENCE_TASK( ref l_U483 );
            TASK_LOOK_AT_CHAR( 0, l_U328[1], -1, 0 );
            TASK_CHAT_WITH_CHAR( 0, l_U328[1], 1, 1 );
            CLOSE_SEQUENCE_TASK( l_U483 );
            TASK_PERFORM_SEQUENCE( l_U327, l_U483 );
            CLEAR_SEQUENCE_TASK( l_U483 );
        }
    }
    if ((NOT (IS_CHAR_INJURED( l_U328[2] ))) AND (NOT (IS_CHAR_INJURED( l_U468[1] ))))
    {
        OPEN_SEQUENCE_TASK( ref l_U483 );
        TASK_LOOK_AT_CHAR( 0, l_U468[1], -1, 0 );
        TASK_CHAT_WITH_CHAR( 0, l_U468[1], 1, 1 );
        CLOSE_SEQUENCE_TASK( l_U483 );
        TASK_PERFORM_SEQUENCE( l_U328[2], l_U483 );
        CLEAR_SEQUENCE_TASK( l_U483 );
        OPEN_SEQUENCE_TASK( ref l_U483 );
        TASK_LOOK_AT_CHAR( 0, l_U328[2], -1, 0 );
        TASK_CHAT_WITH_CHAR( 0, l_U328[2], 0, 1 );
        CLOSE_SEQUENCE_TASK( l_U483 );
        TASK_PERFORM_SEQUENCE( l_U468[1], l_U483 );
        CLEAR_SEQUENCE_TASK( l_U483 );
    }
    if (NOT (IS_CHAR_INJURED( l_U328[3] )))
    {
        TASK_PLAY_ANIM( l_U328[3], "car_proposition", "amb@pimps_pros", 8.00000000, 1, 0, 0, 0, 0 );
        if (NOT (IS_CHAR_INJURED( l_U468[0] )))
        {
            TASK_LOOK_AT_CHAR( l_U468[0], l_U328[3], -2, 0 );
        }
    }
    l_U372 = 1;
    return;
}

void sub_17904()
{
    if (l_U407)
    {
        if (IS_VEH_DRIVEABLE( l_U338 ))
        {
            SET_CAR_COORDINATES( l_U338, 1308.20300000, 1699.99900000, 15.64700000 );
            SET_CAR_HEADING( l_U338, 273.50380000 );
            SET_CAR_ON_GROUND_PROPERLY( l_U338 );
        }
    }
    else if (IS_VEH_DRIVEABLE( l_U338 ))
    {
        SET_CAR_COORDINATES( l_U338, 1307.60300000, 1699.99900000, 15.64700000 );
        SET_CAR_HEADING( l_U338, 86.50380000 );
        SET_CAR_ON_GROUND_PROPERLY( l_U338 );
    }
    sub_16791();
    return;
}

int sub_18272()
{
    if (NOT (IS_CHAR_INJURED( l_U327 )))
    {
        if (((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U327, sub_2519(), 0 )) || (IS_PLAYER_TARGETTING_CHAR( sub_2573(), l_U327 ))) || (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_2573(), l_U327 )))
        {
            return 1;
        }
    }
    if (DOES_VEHICLE_EXIST( l_U338 ))
    {
        if (IS_VEH_DRIVEABLE( l_U338 ))
        {
            if ((HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U338, sub_2519() )) || (IS_CHAR_IN_CAR( sub_2519(), l_U338 )))
            {
                return 1;
            }
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

void sub_19164(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12)
{
    return sub_19215( uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 0, 0, uParam8, uParam9, uParam9, uParam9, uParam9, uParam10, uParam11, uParam12 );
}

int sub_19215(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17)
{
    int iVar20;
    int I;
    unknown uVar22;

    l_U145[0] = uParam7;
    l_U145[1] = uParam8;
    l_U145[2] = uParam9;
    l_U144 = uParam7;
    sub_19263();
    sub_19595();
    sub_20475();
    if (sub_20656( l_U145[0], l_U145[1], l_U145[2], uParam11, uParam12, uParam13, uParam14, l_U139, uParam15, 0, 0, 0 ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((uParam16) AND (IS_WANTED_LEVEL_GREATER( sub_2573(), 0 )))
            {
                if (DOES_BLIP_EXIST( l_U136 ))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U136 );
                    sub_21204( uParam10 );
                }
                if (((NOT (sub_25322( 0 ))) AND (NOT sub_26582())) AND (NOT l_U105))
                {
                    sub_21084( uParam17, 0 );
                    l_U149 = uParam17;
                    l_U105 = 1;
                    l_U106 = 0;
                    if (NOT (IS_CHAR_INJURED( l_U145[0] )))
                    {
                        SAY_AMBIENT_SPEECH( l_U145[0], "CAR_POLICE_PURSUIT", 1, 1, 0 );
                    }
                }
            }
            else if (l_U105)
            {
                sub_21204( uParam17 );
                l_U105 = 0;
                l_U106 = 1;
            }
            if (l_U106)
            {
                if (NOT (sub_25322( 0 )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U145[0] )))
                    {
                        SAY_AMBIENT_SPEECH( l_U145[0], "LOSE_WANTED_LEVEL", 1, 1, 0 );
                    }
                    l_U106 = 0;
                }
            }
            if (NOT (DOES_BLIP_EXIST( l_U136 )))
            {
                ADD_BLIP_FOR_COORD( uParam0, uParam1, uParam2 - 1.00000000, ref l_U136 );
                sub_23155( l_U136 );
                if (l_U124)
                {
                    SHOW_BLIP_ON_ALTIMETER( l_U136, 1 );
                }
            }
            if (NOT (sub_25322( 0 )))
            {
                if (NOT l_U107)
                {
                    sub_21084( uParam10, 0 );
                    l_U107 = 1;
                }
            }
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_2519(), uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6 ))
            {
                iVar20 = 1;
                for ( I = 0; I < 3; I++ )
                {
                    if (DOES_CHAR_EXIST( l_U145[I] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U145[I] )))
                        {
                            if ((NOT (IS_GROUP_MEMBER( l_U145[I], sub_12466() ))) || (NOT (sub_23274( l_U145[I] ))))
                            {
                                iVar20 = 0;
                            }
                        }
                    }
                }
                if ((iVar20) AND (sub_27135()))
                {
                    sub_21204( uParam10 );
                    sub_21204( uParam11 );
                    sub_21204( uParam12 );
                    sub_21204( uParam13 );
                    sub_21204( uParam14 );
                    sub_21204( uParam17 );
                    sub_21204( "MORE_SEATS" );
                    sub_27354();
                    return 1;
                }
            }
        }
    }
    else if (DOES_BLIP_EXIST( l_U136 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U136 );
        sub_21204( uParam10 );
    }
    sub_27849( uParam0, uParam1, uParam2, 0, 0 );
    sub_32006( uParam0, uParam1, uParam2 );
    return 0;
}

void sub_19263()
{
    int I;

    for ( I = 0; I < l_U145; I++ )
    {
        if (DOES_CHAR_EXIST( l_U145[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U145[I] )))
            {
                if (((IS_CHAR_SITTING_IN_ANY_CAR( l_U145[I] )) AND (sub_19356( l_U145[I] ))) AND (sub_19421()))
                {
                    BLOCK_CHAR_AMBIENT_ANIMS( l_U145[I], 1 );
                }
            }
        }
    }
    if (IS_PLAYER_PLAYING( sub_2573() ))
    {
        if (NOT (IS_CHAR_INJURED( sub_2519() )))
        {
            if (((IS_CHAR_SITTING_IN_ANY_CAR( sub_2519() )) AND (sub_19356( sub_2519() ))) AND (sub_19421()))
            {
                BLOCK_CHAR_AMBIENT_ANIMS( sub_2519(), 1 );
            }
        }
    }
    return;
}

int sub_19356(int iParam0)
{
    int I;

    for ( I = 0; I < 9; I++ )
    {
        if (l_U6._fU16[I]._fU0 == iParam0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_19421()
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8867 == 1)) || (g_U8867 == 2))
    {
        return 1;
    }
    return 0;
}

void sub_19595()
{
    if (NOT l_U118)
    {
        l_U153 = CREATE_WIDGET_GROUP( "Locates Header" );
        ADD_WIDGET_TOGGLE( "bPrintedLoseWantedLevel", ref l_U105 );
        ADD_WIDGET_TOGGLE( "bPlayLostCopsSpeech", ref l_U106 );
        ADD_WIDGET_TOGGLE( "bInitialGodTextPrinted", ref l_U107 );
        ADD_WIDGET_TOGGLE( "bPrintedGetACar", ref l_U108 );
        ADD_WIDGET_TOGGLE( "bPrintedGetBackInCar", ref l_U110 );
        ADD_WIDGET_TOGGLE( "bPrintedGetInCar", ref l_U109 );
        ADD_WIDGET_TOGGLE( "bPrintedPickupAllBuddysText", ref l_U111 );
        ADD_WIDGET_TOGGLE( "bPrintedPickupBuddyText[0]", ref l_U112[0] );
        ADD_WIDGET_TOGGLE( "bPrintedPickupBuddyText[1]", ref l_U112[1] );
        ADD_WIDGET_TOGGLE( "bPrintedPickupBuddyText[2]", ref l_U112[2] );
        ADD_WIDGET_TOGGLE( "bUseSpecificJSkipCoords", ref l_U116 );
        ADD_WIDGET_TOGGLE( "bDontDoSafeForCutsceneCheck", ref l_U117 );
        ADD_WIDGET_FLOAT_SLIDER( "fClearCarDistance", ref l_U138, 0.00000000, 100.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "fBuddyJoinDistance", ref l_U139, 0.00000000, 100.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "fSkipHeading", ref l_U140, 0.00000000, 360.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "vSkipCoords.x", ref l_U150._fU0, -9999.00000000, 9999.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "vSkipCoords.y", ref l_U150._fU4, -9999.00000000, 9999.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "vSkipCoords.z", ref l_U150._fU8, -9999.00000000, 9999.00000000, 0.10000000 );
        ADD_WIDGET_TOGGLE( "bToldPlayerToFindCarWithMoreSeats", ref l_U119 );
        ADD_WIDGET_TOGGLE( "bHasBeenInCar", ref l_U120 );
        END_WIDGET_GROUP();
        l_U118 = 1;
    }
    return;
}

void sub_20475()
{
    int I;

    if (IS_PLAYER_PLAYING( sub_2573() ))
    {
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_2519(), 0 );
    }
    for ( I = 0; I < l_U145; I++ )
    {
        if (DOES_CHAR_EXIST( l_U145[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U145[I] )))
            {
                SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U145[I], 0 );
            }
        }
    }
    return;
}

int sub_20656(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, int iParam9, unknown uParam10, unknown uParam11)
{
    int I;
    int iVar15;
    int iVar16;
    int iVar17;
    int iVar18;
    int iVar19;
    int[3] iVar20;
    boolean bVar24;
    boolean bVar25;
    int iVar26;
    int iVar27;
    unknown[3] uVar28;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;

    array(ref iVar20, 3);
    l_U145[0] = uParam0;
    l_U145[1] = uParam1;
    l_U145[2] = uParam2;
    l_U144 = uParam0;
    array(ref uVar28, 3);
    uVar28[0] = uParam3;
    uVar28[1] = uParam4;
    uVar28[2] = uParam5;
    iVar18 = 1;
    iVar15 = 0;
    iVar16 = 0;
    iVar20[0] = 0;
    iVar20[1] = 0;
    iVar20[2] = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U145[I] )))
        {
            iVar16++;
        }
    }
    if (((NOT sub_20827()) AND (IS_CHAR_SITTING_IN_ANY_CAR( sub_2519() ))) AND (NOT (DOES_VEHICLE_EXIST( iParam9 ))))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2519(), ref iVar26 );
        if (IS_VEH_DRIVEABLE( iVar26 ))
        {
            if (NOT l_U125)
            {
                sub_21084( "MORE_SEATS", 0 );
                l_U125 = 1;
            }
            bVar25 = true;
        }
    }
    else
    {
        bVar25 = false;
        l_U125 = 0;
        sub_21204( "MORE_SEATS" );
    }
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_CHAR_EXIST( l_U145[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U145[I] )))
            {
                if (NOT (IS_GROUP_MEMBER( l_U145[I], sub_12466() )))
                {
                    SET_CHAR_DROWNS_IN_WATER( l_U145[I], 1 );
                }
                else
                {
                    SET_CHAR_DROWNS_IN_WATER( l_U145[I], 0 );
                }
                if (IS_CHAR_SITTING_IN_ANY_CAR( sub_2519() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2519(), ref iVar26 );
                    if (IS_VEH_DRIVEABLE( iVar26 ))
                    {
                        if (IS_GROUP_MEMBER( l_U145[I], sub_12466() ))
                        {
                            if ((NOT sub_20827()) AND (IS_CHAR_SITTING_IN_ANY_CAR( sub_2519() )))
                            {
                                if (NOT (sub_21480( l_U145[I] )))
                                {
                                    REMOVE_CHAR_FROM_GROUP( l_U145[I] );
                                    PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - REMOVE_CHAR_FROM_GROUP - 1" );
                                    PRINTNL();
                                }
                            }
                        }
                    }
                }
                bVar24 = true;
                if (NOT (IS_GROUP_MEMBER( l_U145[I], sub_12466() )))
                {
                    if (IS_CHAR_SITTING_IN_ANY_CAR( l_U145[I] ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U145[I], ref iVar26 );
                        if (IS_VEH_DRIVEABLE( iParam9 ))
                        {
                            if (NOT (iVar26 == iParam9))
                            {
                                if (NOT (IS_CAR_DEAD( iVar26 )))
                                {
                                    if (NOT (IS_CHAR_SITTING_IN_CAR( sub_2519(), iVar26 )))
                                    {
                                        TASK_LEAVE_CAR_IMMEDIATELY( l_U145[I], iVar26 );
                                        PRINTSTRING( "locates_heder - HAVE_BUDDIES_JOINED_PLAYERS_GROUP - Buddy told to leave car" );
                                        PRINTNL();
                                        bVar24 = false;
                                    }
                                }
                            }
                        }
                    }
                }
                if (IS_GROUP_MEMBER( l_U145[I], sub_12466() ))
                {
                    if (sub_22041())
                    {
                        if (l_U127[I])
                        {
                            SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( l_U145[I], -1 );
                            l_U127[I] = 0;
                        }
                    }
                    else if (NOT l_U127[I])
                    {
                        SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( l_U145[I], 2 );
                        l_U127[I] = 1;
                    }
                }
                if (((NOT (IS_GROUP_MEMBER( l_U145[I], sub_12466() ))) AND (NOT (sub_22223( l_U145[I], iParam9 )))) AND (NOT (sub_22319( l_U145[I], iParam9 ))))
                {
                    if (sub_22432( l_U145[I], uParam7, uParam10 ))
                    {
                        if (NOT (IS_GROUP_MEMBER( l_U145[I], sub_12466() )))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U145[I], 11, ref iVar27 );
                            if (iVar27 == 7)
                            {
                                CLEAR_CHAR_TASKS( l_U145[I] );
                                PRINTSTRING( "locates_heder - HAVE_BUDDIES_JOINED_PLAYERS_GROUP - CLEAR_CHAR_TASKS - 1" );
                                PRINTNL();
                            }
                            SET_GROUP_MEMBER( sub_12466(), l_U145[I] );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - SET_GROUP_MEMBER - 1" );
                            PRINTNL();
                            bVar24 = false;
                        }
                    }
                    if (bVar24)
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U132[I] )))
                        {
                            GET_GAME_TIMER( ref l_U142 );
                            ADD_BLIP_FOR_CHAR( l_U145[I], ref l_U132[I] );
                            CHANGE_BLIP_DISPLAY( l_U132[I], 2 );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - add blip for char - 1" );
                            PRINTNL();
                            SET_BLIP_AS_FRIENDLY( l_U132[I], 1 );
                            if (bParam8)
                            {
                                sub_23155( l_U132[I] );
                            }
                        }
                    }
                    iVar18 = 0;
                }
                else if (DOES_BLIP_EXIST( l_U132[I] ))
                {
                    if (((sub_23274( l_U145[I] )) || (sub_22223( l_U145[I], iParam9 ))) || (uParam11))
                    {
                        if (DOES_BLIP_EXIST( l_U132[I] ))
                        {
                            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U132[I] );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - remove blip for char - 1" );
                            PRINTNL();
                            sub_21204( uVar28[I] );
                            iVar19 = 1;
                        }
                    }
                    else if (bParam8)
                    {
                        sub_23155( l_U132[I] );
                    }
                    iVar18 = 0;;
                }
                else if (IS_VEH_DRIVEABLE( iParam9 ))
                {
                    if (NOT (IS_CHAR_SITTING_IN_CAR( l_U145[I], iParam9 )))
                    {
                        if ((LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U145[I], iParam9, 20.00000000, 20.00000000, 5.00000000, 0 )) AND (NOT l_U122))
                        {
                            if (IS_CHAR_SITTING_IN_ANY_CAR( l_U145[I] ))
                            {
                                if (NOT (IS_CHAR_IN_CAR( l_U145[I], iParam9 )))
                                {
                                    if (NOT (sub_23274( l_U145[I] )))
                                    {
                                        if (sub_23882( l_U145[I] ))
                                        {
                                            GET_SCRIPT_TASK_STATUS( l_U145[I], 31, ref iVar27 );
                                            if (iVar27 == 7)
                                            {
                                                TASK_LEAVE_ANY_CAR( l_U145[I] );
                                            }
                                        }
                                    }
                                }
                            }
                            else if (NOT (IS_CHAR_SITTING_IN_CAR( sub_2519(), iParam9 )))
                            {
                                SET_FORCE_PLAYER_TO_ENTER_THROUGH_DIRECT_DOOR( sub_2519(), 1 );
                            }
                            if (IS_GROUP_MEMBER( l_U145[I], sub_12466() ))
                            {
                                REMOVE_CHAR_FROM_GROUP( l_U145[I] );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - REMOVE_CHAR_FROM_GROUP - 2" );
                                PRINTNL();
                            }
                            GET_SCRIPT_TASK_STATUS( l_U145[I], 11, ref iVar27 );
                            if (iVar27 == 7)
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U145[I], 1 );
                                if (l_U121)
                                {
                                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                }
                                TASK_ENTER_CAR_AS_PASSENGER( l_U145[I], iParam9, -1, I );
                                SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U145[I], 0 );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - told to enter car as passenger" );
                                PRINTNL();
                            }
                            else if (IS_CHAR_IN_CAR( sub_2519(), iParam9 ))
                            {
                                ADD_BLIP_FOR_CHAR( l_U145[I], ref l_U132[I] );
                                CHANGE_BLIP_DISPLAY( l_U132[I], 2 );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - add blip for char - 2" );
                                PRINTNL();
                                SET_BLIP_AS_FRIENDLY( l_U132[I], 1 );
                                iVar18 = 0;
                            };;;
                        }
                        else if (NOT (IS_GROUP_MEMBER( l_U145[I], sub_12466() )))
                        {
                            if (sub_22432( l_U145[I], uParam7, uParam10 ))
                            {
                                GET_SCRIPT_TASK_STATUS( l_U145[I], 11, ref iVar27 );
                                if (iVar27 == 7)
                                {
                                    CLEAR_CHAR_TASKS( l_U145[I] );
                                    PRINTSTRING( "locates_heder - HAVE_BUDDIES_JOINED_PLAYERS_GROUP - CLEAR_CHAR_TASKS - 2" );
                                    PRINTNL();
                                }
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U145[I], 0 );
                                SET_GROUP_MEMBER( sub_12466(), l_U145[I] );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - SET_GROUP_MEMBER - 2" );
                                PRINTNL();
                            }
                        }
                    }
                    else if (IS_CHAR_SITTING_IN_CAR( sub_2519(), iParam9 ))
                    {
                        if (NOT (IS_GROUP_MEMBER( l_U145[I], sub_12466() )))
                        {
                            SET_GROUP_MEMBER( sub_12466(), l_U145[I] );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - SET_GROUP_MEMBER - 3" );
                            PRINTNL();
                        }
                    }
                    else if (IS_GROUP_MEMBER( l_U145[I], sub_12466() ))
                    {
                        REMOVE_CHAR_FROM_GROUP( l_U145[I] );
                        PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - REMOVE_CHAR_FROM_GROUP - 3" );
                        PRINTNL();
                    };;;
                };;;
            }
            else if (DOES_BLIP_EXIST( l_U132[I] ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U132[I] );
                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - remove blip for char - 2" );
                PRINTNL();
                sub_21204( uVar28[I] );
                iVar19 = 1;
            }
        }
    }
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_BLIP_EXIST( l_U132[I] ))
        {
            iVar20[I] = 1;
            iVar15++;
        }
    }
    if (NOT (sub_25322( 0 )))
    {
        if (iVar15 > 0)
        {
            for ( I = 0; I < 3; I++ )
            {
                if (iVar20[I])
                {
                    if (NOT (IS_CHAR_INJURED( l_U145[I] )))
                    {
                        if ((sub_21480( l_U145[I] )) || (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U145[I], sub_2519(), 40.00000000, 40.00000000, 40.00000000, 0 )))
                        {
                            iVar15--;
                            iVar20[I] = 0;
                        }
                    }
                }
            }
        }
        GET_GAME_TIMER( ref iVar17 );
        if (((iVar17 - l_U142) > 1500) || (iVar16 == 1))
        {
            if (iVar15 > 0)
            {
                if (l_U143 < iVar15)
                {
                    PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - printing 'pickup' text" );
                    PRINTNL();
                    PRINTSTRING( "iPrintedMissingBuddiesNumber = " );
                    PRINTINT( l_U143 );
                    PRINTNL();
                    PRINTSTRING( "iBuddiesMissing = " );
                    PRINTINT( iVar15 );
                    PRINTNL();
                    PRINTSTRING( "iTotalBuddies = " );
                    PRINTINT( iVar16 );
                    PRINTNL();
                    if ((iVar15 == iVar16) AND (iVar16 > 1))
                    {
                        if ((NOT l_U111) AND (NOT (l_U143 == iVar15)))
                        {
                            sub_21084( uParam6, 0 );
                            l_U111 = 1;
                            l_U143 = iVar15;
                        }
                    }
                    else
                    {
                        for ( I = 0; I < 3; I++ )
                        {
                            if (iVar20[I])
                            {
                                if ((NOT l_U112[I]) AND (NOT (l_U143 == iVar15)))
                                {
                                    sub_21084( uVar28[I], 0 );
                                    l_U112[I] = 1;
                                    l_U143 = iVar15;
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                l_U143 = 0;
            }
        }
    }
    l_U121 = 0;
    if ((iVar18) AND (NOT bVar25))
    {
        for ( I = 0; I < 3; I++ )
        {
            if (DOES_BLIP_EXIST( l_U132[I] ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U132[I] );
                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - remove blip for char - 3" );
                PRINTNL();
                sub_21204( uVar28[I] );
            }
        }
        sub_21204( "MORE_SEATS" );
        return 1;
    }
    if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
    {
        for ( I = 0; I < 3; I++ )
        {
            if (NOT (IS_CHAR_INJURED( sub_2519() )))
            {
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2519(), 0.00000000, 1.00000000 + (TO_FLOAT( I )), 0.00000000, ref uVar32._fU0, ref uVar32._fU4, ref uVar32._fU8 );
                if (NOT (IS_CHAR_INJURED( l_U145[I] )))
                {
                    SET_CHAR_COORDINATES( l_U145[I], uVar32._fU0, uVar32._fU4, uVar32._fU8 );
                }
            }
        }
    }
    return 0;
}

int sub_20827()
{
    unknown uVar2;

    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_2519() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2519(), ref uVar2 );
        if (sub_20868( uVar2 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_20868(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        iVar3 = 0;
        for ( I = 0; I < l_U145; I++ )
        {
            if (DOES_CHAR_EXIST( l_U145[I] ))
            {
                iVar3++;
            }
        }
        GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam0, ref iVar4 );
        if (iVar4 >= iVar3)
        {
            return 1;
        }
    }
    return 0;
}

void sub_21084(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (NOT (IS_STRING_NULL( uParam0 )))
        {
            if (NOT (COMPARE_STRING( uParam0, "" )))
            {
                PRINT_NOW( uParam0, 7500, 1 );
            }
        }
    }
    GET_GAME_TIMER( ref l_U141 );
    return;
}

void sub_21204(unknown uParam0)
{
    if (NOT (IS_STRING_NULL( uParam0 )))
    {
        CLEAR_THIS_PRINT( uParam0 );
    }
    return;
}

int sub_21480(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (IS_PLAYER_PLAYING( sub_2573() ))
    {
        GET_CAR_CHAR_IS_USING( sub_2519(), ref iVar3 );
        if (IS_VEH_DRIVEABLE( iVar3 ))
        {
            if (NOT (IS_CHAR_INJURED( uParam0 )))
            {
                GET_CAR_CHAR_IS_USING( uParam0, ref iVar4 );
                if (IS_VEH_DRIVEABLE( iVar4 ))
                {
                    if (iVar3 == iVar4)
                    {
                        if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2519(), uParam0, 20.00000000, 20.00000000, 20.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_CAR_3D( uParam0, iVar4, 20.00000000, 20.00000000, 20.00000000, 0 )))
                        {
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_22041()
{
    unknown uVar2;

    GET_CAR_CHAR_IS_USING( sub_2519(), ref uVar2 );
    if (sub_20868( uVar2 ))
    {
        return 1;
    }
    return 0;
}

int sub_22223(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (DOES_VEHICLE_EXIST( uParam1 ))
        {
            if (IS_VEH_DRIVEABLE( uParam1 ))
            {
                if (IS_CHAR_SITTING_IN_CAR( uParam0, uParam1 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_22319(unknown uParam0, int iParam1)
{
    int iVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_GROUP_MEMBER( uParam0, sub_12466() )))
        {
            GET_CAR_CHAR_IS_USING( uParam0, ref iVar4 );
            if (IS_VEH_DRIVEABLE( iParam1 ))
            {
                if (iVar4 == iParam1)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_22432(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar5 );
            if (NOT (IS_CAR_DEAD( uVar5 )))
            {
                if (IS_VEH_DRIVEABLE( uVar5 ))
                {
                    if (IS_CHAR_SITTING_IN_CAR( sub_2519(), uVar5 ))
                    {
                        if (sub_20827())
                        {
                            return 1;
                        }
                    }
                }
                else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2519(), uParam0, uParam1, uParam1, 3.00000000, 0 ))
                {
                    return 1;
                }
            }
        }
        else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2519(), uParam0, uParam1, uParam1, 3.00000000, 0 ))
        {
            if (NOT bParam2)
            {
                if (sub_22041())
                {
                    return 1;
                }
                else
                {
                    GET_CAR_CHAR_IS_USING( sub_2519(), ref uVar5 );
                    if (NOT (DOES_VEHICLE_EXIST( uVar5 )))
                    {
                        return 1;
                    }
                }
            }
            else
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_23155(unknown uParam0)
{
    if (DOES_BLIP_EXIST( uParam0 ))
    {
        if (DOES_BLIP_EXIST( l_U137 ))
        {
            SET_ROUTE( l_U137, 0 );
        }
        l_U137 = uParam0;
        SET_ROUTE( uParam0, 1 );
    }
    return;
}

int sub_23274(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_2519() ))
        {
            if (sub_23322( sub_2519(), uParam0 ))
            {
                SET_GROUP_SEPARATION_RANGE( sub_12466(), 40.00000000 );
                return 1;
            }
        }
        else if (IS_GROUP_MEMBER( uParam0, sub_12466() ))
        {
            SET_GROUP_SEPARATION_RANGE( sub_12466(), 40.00000000 );
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

int sub_23322(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar4 );
            if (IS_VEH_DRIVEABLE( uVar4 ))
            {
                if (NOT (IS_CHAR_INJURED( uParam1 )))
                {
                    if (IS_CHAR_SITTING_IN_CAR( uParam1, uVar4 ))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_23882(unknown uParam0)
{
    float fVar3;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_CHAR_SPEED( uParam0, ref fVar3 );
        if ((fVar3 > -0.50000000) AND (fVar3 < 0.50000000))
        {
            return 1;
        }
    }
    return 0;
}

int sub_25322(boolean bParam0)
{
    if (((((IS_MESSAGE_BEING_DISPLAYED()) || (((sub_19421()) AND (NOT bParam0)) || ((sub_25347()) AND (bParam0)))) || (sub_25376())) || (IS_SCRIPTED_CONVERSATION_ONGOING())) || (sub_25435()))
    {
        return 1;
    }
    return 0;
}

void sub_25347()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

int sub_25376()
{
    if ((g_U95._fU0 == 1007) || (g_U95._fU0 == 1008))
    {
        return 1;
    }
    return 0;
}

int sub_25435()
{
    int iVar2;
    int iVar3;

    GET_GAME_TIMER( ref iVar3 );
    iVar2 = iVar3 - l_U141;
    if (iVar2 < 35)
    {
        return 1;
    }
    return 0;
}

int sub_26582()
{
    if (NOT (IS_CHAR_INJURED( l_U144 )))
    {
        if (IS_AMBIENT_SPEECH_PLAYING( l_U144 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_27135()
{
    int iVar2;

    iVar2 = 1;
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_2519() ))
    {
        if ((IS_CHAR_ON_ANY_BIKE( sub_2519() )) || (IS_CHAR_IN_ANY_HELI( sub_2519() )))
        {
            iVar2 = 0;
        }
    }
    if (l_U123)
    {
        if (sub_23882( sub_2519() ))
        {
            if ((sub_6985( 1, iVar2 )) || (l_U117))
            {
                return 1;
            }
        }
    }
    else if ((sub_6985( 1, iVar2 )) || (l_U117))
    {
        return 1;
    }
    return 0;
}

void sub_27354()
{
    int I;

    sub_27363();
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_BLIP_EXIST( l_U132[I] ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U132[I] );
        }
    }
    if (DOES_BLIP_EXIST( l_U131 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U131 );
    }
    l_U137 = nil;
    l_U111 = 0;
    for ( I = 0; I < l_U112; I++ )
    {
        l_U112[I] = 0;
        l_U127[I] = 0;
    }
    l_U107 = 0;
    l_U105 = 0;
    l_U106 = 0;
    l_U108 = 0;
    l_U110 = 0;
    l_U109 = 0;
    l_U116 = 0;
    l_U117 = 0;
    l_U119 = 0;
    l_U120 = 0;
    l_U143 = 0;
    for ( I = 0; I < l_U145; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U145[I] )))
        {
            BLOCK_CHAR_AMBIENT_ANIMS( l_U145[I], 0 );
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U145[I], 1 );
        }
    }
    if (IS_PLAYER_PLAYING( sub_2573() ))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( sub_2519(), 0 );
    }
    if (IS_PLAYER_PLAYING( sub_2573() ))
    {
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_2519(), 1 );
    }
    l_U121 = 0;
    l_U122 = 0;
    l_U123 = 0;
    l_U124 = 0;
    return;
}

void sub_27363()
{
    if (DOES_BLIP_EXIST( l_U136 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U136 );
    }
    return;
}

void sub_27849(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4)
{
    int I;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    sub_19595();
    if (l_U116)
    {
        uParam0 = l_U150._fU0;
        uParam1 = l_U150._fU4;
        uParam2 = l_U150._fU8;
        uVar12 = l_U140;
        l_U116 = 0;
    }
    else if (NOT (IS_CHAR_INJURED( sub_2519() )))
    {
        GET_CHAR_HEADING( sub_2519(), ref uVar12 );
    }
    if (IS_SCREEN_FADED_IN())
    {
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
        {
            PRINTSTRING( "J_SKIP - called" );
            PRINTNL();
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            CLEAR_WANTED_LEVEL( sub_2573() );
            sub_28060( ref uVar8 );
            if (bParam3)
            {
                PRINTSTRING( "J_SKIP - onFoot = TRUE" );
                PRINTNL();
                sub_28481( uParam0, uParam1, uParam2, 0 );
                for ( I = 0; I < l_U145; I++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U145[I] )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U145[I] );
                        if (NOT (IS_CHAR_INJURED( sub_2519() )))
                        {
                            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2519(), 0.00000000, 1.00000000 + (TO_FLOAT( I )), 0.00000000, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
                            SET_CHAR_COORDINATES( l_U145[I], uVar9._fU0, uVar9._fU4, uVar9._fU8 );
                            SET_CHAR_HEADING( l_U145[I], uVar12 );
                        }
                    }
                }
            }
            else if (DOES_VEHICLE_EXIST( uParam4 ))
            {
                PRINTSTRING( "J_SKIP - SpecificCarID exists" );
                PRINTNL();
                if (IS_VEH_DRIVEABLE( uParam4 ))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2519() );
                    WARP_CHAR_INTO_CAR( sub_2519(), uParam4 );
                    for ( I = 0; I < l_U145; I++ )
                    {
                        if (DOES_CHAR_EXIST( l_U145[I] ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U145[I] )))
                            {
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U145[I] );
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U145[I], uParam4, I );
                                SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U145[I], 0 );
                            }
                        }
                    }
                }
                sub_28481( uParam0, uParam1, uParam2, uVar12 );
                if (IS_VEH_DRIVEABLE( uParam4 ))
                {
                    SET_CAR_COORDINATES( uParam4, uParam0, uParam1, uParam2 );
                }
            }
            else
            {
                PRINTSTRING( "J_SKIP - searching for temp_car" );
                PRINTNL();
                if (DOES_VEHICLE_EXIST( uVar8 ))
                {
                    if (NOT (IS_VEH_DRIVEABLE( uVar8 )))
                    {
                        PRINTSTRING( "J_SKIP - temp_car existed but not driveable" );
                        PRINTNL();
                        uVar8 = nil;
                    }
                }
                if (NOT (DOES_VEHICLE_EXIST( uVar8 )))
                {
                    PRINTSTRING( "J_SKIP - creating new temp_car" );
                    PRINTNL();
                    REQUEST_MODEL( 1264341792 );
                    while (NOT (HAS_MODEL_LOADED( 1264341792 )))
                    {
                        WAIT( 0 );
                    }
                    CREATE_CAR( 1264341792, uParam0, uParam1, uParam2, ref uVar8, 1 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( 1264341792 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2519() );
                    WARP_CHAR_INTO_CAR( sub_2519(), uVar8 );
                    sub_29388( uVar8 );
                }
                else
                {
                    PRINTSTRING( "J_SKIP - temp_car exists" );
                    PRINTNL();
                    if (IS_VEH_DRIVEABLE( uVar8 ))
                    {
                        PRINTSTRING( "J_SKIP - temp_car is driveable" );
                        PRINTNL();
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2519() );
                        WARP_CHAR_INTO_CAR( sub_2519(), uVar8 );
                    }
                }
                for ( I = 0; I < l_U145; I++ )
                {
                    if (DOES_CHAR_EXIST( l_U145[I] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U145[I] )))
                        {
                            PRINTSTRING( "J_SKIP - buddy exists, clearing tasks." );
                            PRINTNL();
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U145[I] );
                            if (IS_VEH_DRIVEABLE( uVar8 ))
                            {
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U145[I], uVar8, I );
                            }
                            else
                            {
                                PRINTSTRING( "J_SKIP - buddy exists, clearing tasks." );
                                PRINTNL();
                            }
                        }
                    }
                }
                for ( I = 0; I < l_U145; I++ )
                {
                    if (DOES_CHAR_EXIST( l_U145[I] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U145[I] )))
                        {
                            if (IS_VEH_DRIVEABLE( uVar8 ))
                            {
                                PRINTSTRING( "J_SKIP - warping buddy into car" );
                                PRINTNL();
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U145[I], uVar8, I );
                            }
                        }
                    }
                }
                if (IS_VEH_DRIVEABLE( uVar8 ))
                {
                    SET_CAR_COORDINATES( uVar8, uParam0, uParam1, uParam2 );
                    SET_CAR_HEADING( uVar8, uVar12 );
                }
            }
            LOAD_SCENE( uParam0, uParam1, uParam2 );
            WAIT( 500 );
            sub_30008( 0, 0 );
            DO_SCREEN_FADE_IN( 500 );
        }
    }
    return;
}

void sub_28060(unknown uParam0)
{
    if (IS_PLAYER_PLAYING( sub_2573() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_2519() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2519(), uParam0 );
        }
    }
    if (NOT (DOES_VEHICLE_EXIST( (uParam0^) )))
    {
        GET_CAR_CHAR_IS_USING( sub_2519(), uParam0 );
    }
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            sub_28180( (uParam0^) );
        }
        else
        {
            (uParam0^) = nil;
        }
    }
    else
    {
        (uParam0^) = nil;
    }
    return;
}

void sub_28180(unknown uParam0)
{
    unknown uVar3;
    int I;
    int iVar5;

    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            GET_DRIVER_OF_CAR( uParam0, ref uVar3 );
            if (DOES_CHAR_EXIST( uVar3 ))
            {
                if (NOT (IS_CHAR_INJURED( uVar3 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( uVar3 );
                }
                else
                {
                    DELETE_CHAR( ref uVar3 );
                }
            }
            GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam0, ref iVar5 );
            for ( I = 0; I < iVar5; I++ )
            {
                if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uParam0, I )))
                {
                    GET_CHAR_IN_CAR_PASSENGER_SEAT( uParam0, I, ref uVar3 );
                    if (DOES_CHAR_EXIST( uVar3 ))
                    {
                        if (NOT (IS_CHAR_INJURED( uVar3 )))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( uVar3 );
                        }
                        else
                        {
                            DELETE_CHAR( ref uVar3 );
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_28481(unknown uParam0, unknown uParam1, float fParam2, unknown uParam3)
{
    fParam2 += 1.00000000;
    SET_CHAR_COORDINATES( sub_2519(), uParam0, uParam1, fParam2 );
    SET_GAME_CAM_HEADING( 0 );
    REQUEST_COLLISION_AT_POSN( uParam0, uParam1, fParam2 );
    LOAD_ALL_OBJECTS_NOW();
    GET_CHAR_COORDINATES( sub_2519(), ref uParam0, ref uParam1, ref fParam2 );
    GET_GROUND_Z_FOR_3D_COORD( uParam0, uParam1, fParam2, ref fParam2 );
    SET_CHAR_COORDINATES( sub_2519(), uParam0, uParam1, fParam2 );
    SET_CHAR_HEADING( sub_2519(), uParam3 );
    return;
}

void sub_29388(unknown uParam0)
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

void sub_30008(boolean bParam0, unknown uParam1)
{
    boolean bVar4;
    int iVar5;
    int iVar6;

    PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - called for " );
    PRINTNL();
    if (NOT bParam0)
    {
        if (NOT IS_SCREEN_FADED_OUT())
        {
            SCRIPT_ASSERT( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN() - should only be called when screen is faded out." );
        }
        else
        {
            WAIT( 0 );
        }
    }
    if ((NOT (IS_CHAR_INJURED( sub_2519() ))) AND ((IS_SCREEN_FADED_OUT()) || (bParam0)))
    {
        PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - checking if player is near a club..." );
        PRINTNL();
        g_U30093[0] = 0;
        g_U30093[1] = 0;
        g_U30093[2] = 0;
        g_U30176 = uParam1;
        if (sub_30388( sub_2519(), 0, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - bahama mamas" );
            PRINTNL();
            g_U30110[0] = 1;
        }
        if (sub_30388( sub_2519(), 1, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - maisonette 9" );
            PRINTNL();
            g_U30110[1] = 1;
        }
        if (sub_30388( sub_2519(), 2, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - hercules" );
            PRINTNL();
            g_U30110[2] = 1;
        }
        sub_31665( 0 );
        sub_31665( 1 );
        sub_31665( 2 );
        bVar4 = false;
        GET_GAME_TIMER( ref l_U104 );
        while (NOT bVar4)
        {
            GET_GAME_TIMER( ref iVar5 );
            iVar6 = iVar5 - l_U104;
            if ((iVar6 > 15000) || (((g_U30110[0] == 0) AND (g_U30110[1] == 0)) AND (g_U30110[2] == 0)))
            {
                if (iVar6 > 15000)
                {
                    ;
                }
                bVar4 = true;
            }
            else
            {
                PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN  - loading stuff" );
                PRINTNL();
                WAIT( 0 );
            }
        }
        if (NOT bParam0)
        {
            WAIT( 0 );
        }
        PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - finished" );
        PRINTNL();
    }
    return;
}

int sub_30388(unknown uParam0, unknown uParam1, unknown uParam2)
{
    vector vVar5;
    vector vVar8;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    vVar5 = {sub_30399( uParam1 )};
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_30559( uParam0, uParam1, 0 ))
        {
            return 1;
        }
        else
        {
            GET_CHAR_COORDINATES( uParam0, ref vVar8.x, ref vVar8.y, ref vVar8.z );
            uVar11 = {vVar5 - vVar8};
            uVar11._fU8 = 0.00000000;
            if ((VMAG2( uVar11 )) < (uParam2 * uParam2))
            {
                return 1;
            }
        }
    }
    return 0;
}

vector sub_30399(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return vector( 14.17720000, 397.67000000, -399.10690000);
        break;
        case 1:
        return vector( 9.80000000, 153.41000000, -468.03000000);
        break;
        case 2:
        return vector( 11.54000000, 356.98000000, -440.28000000);
        break;
    }
    return vector( 0.00000000, 0.00000000, 0.00000000);
}

int sub_30559(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;
    unknown uVar6;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_30587( uParam0, uParam1 ))
        {
            return 1;
        }
        switch (uParam1)
        {
            case 0:
            if (bParam2)
            {
                if ((LOCATE_CHAR_ON_FOOT_3D( uParam0, -399.10690000, 397.39960000, 14.17720000, 1.60000000, 1.60000000, 1.60000000, 0 )) || ((IS_CHAR_ON_ANY_BIKE( uParam0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -399.10690000, 397.39960000, 14.17720000, 1.60000000, 1.60000000, 1.60000000, 0 ))))
                {
                    return 1;
                }
            }
            break;
            case 1:
            if (bParam2)
            {
                if ((LOCATE_CHAR_ON_FOOT_3D( uParam0, -466.92400000, 153.19500000, 9.87400000, 1.60000000, 1.60000000, 1.60000000, 0 )) || ((IS_CHAR_ON_ANY_BIKE( uParam0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -466.92400000, 153.19500000, 9.87400000, 1.60000000, 1.60000000, 1.60000000, 0 ))))
                {
                    return 1;
                }
            }
            break;
            case 2:
            if (bParam2)
            {
                if ((LOCATE_CHAR_ON_FOOT_3D( uParam0, -440.46400000, 356.91300000, 11.71800000, 1.60000000, 1.60000000, 1.60000000, 0 )) || ((IS_CHAR_ON_ANY_BIKE( uParam0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -440.46400000, 356.91300000, 11.71800000, 1.60000000, 1.60000000, 1.60000000, 0 ))))
                {
                    return 1;
                }
            }
            break;
        }
    }
    return 0;
}

int sub_30587(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        switch (uParam1)
        {
            case 0:
            GET_INTERIOR_AT_COORDS( -395.22000000, 400.50000000, 14.40000000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            break;
            case 1:
            GET_INTERIOR_AT_COORDS( -483.90180000, 149.43310000, 7.56070000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            break;
            case 2:
            GET_INTERIOR_AT_COORDS( -431.82560000, 351.76230000, 11.71660000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            if (IS_CHAR_IN_AREA_3D( sub_2519(), -438.84750000, 349.78630000, 9.59170000, -436.09750000, 353.78630000, 14.46670000, 0 ))
            {
                return 1;
            }
            break;
        }
    }
    return 0;
}

void sub_31665(unknown uParam0)
{
    g_U30114[uParam0] = 1;
    return;
}

void sub_32006(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    if (NOT (sub_32031( uParam0, uParam1, uParam2, l_U138, 1120403456 )))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_2519(), uParam0, uParam1, uParam2, 50.00000000, 50.00000000, 50.00000000, 0 )))
        {
            GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar5 );
            if (DOES_VEHICLE_EXIST( uVar5 ))
            {
                if (NOT (IS_CAR_DEAD( uVar5 )))
                {
                    if (NOT (LOCATE_CAR_3D( uVar5, uParam0, uParam1, uParam2, l_U138, l_U138, l_U138, 0 )))
                    {
                        CLEAR_AREA_OF_CARS( uParam0, uParam1, uParam2, l_U138 );
                    }
                }
            }
            else
            {
                CLEAR_AREA_OF_CARS( uParam0, uParam1, uParam2, l_U138 );
            }
        }
    }
    return;
}

int sub_32031(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (sub_32048( uParam0, uParam1, uParam2, uParam3 ))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_2519(), uParam0, uParam1, uParam4, uParam4, 0 )))
        {
            return 0;
        }
        else if (IS_SCREEN_FADED_OUT())
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int sub_32048(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    GET_GAME_VIEWPORT_ID( ref uVar6 );
    if (CAM_IS_SPHERE_VISIBLE( uVar6, uParam0, uParam1, uParam2, uParam3 ))
    {
        return 1;
    }
    return 0;
}

int sub_32361()
{
    if ((NOT (IS_CHAR_INJURED( l_U327 ))) AND (NOT (IS_CHAR_INJURED( l_U326 ))))
    {
        if (IS_PED_IN_GROUP( l_U326 ))
        {
            if (((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U327, sub_2519(), 0 )) || (IS_PLAYER_TARGETTING_CHAR( sub_2573(), l_U327 ))) || (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_2573(), l_U327 )))
            {
                return 1;
            }
        }
    }
    if (DOES_VEHICLE_EXIST( l_U338 ))
    {
        if (IS_VEH_DRIVEABLE( l_U338 ))
        {
            if ((HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U338, sub_2519() )) || (IS_CHAR_IN_CAR( sub_2519(), l_U338 )))
            {
                return 1;
            }
        }
        else
        {
            return 1;
        }
    }
    if (l_U360)
    {
        for ( l_U472 = 0; l_U472 <= 3; l_U472++ )
        {
            if (IS_CHAR_INJURED( l_U328[l_U472] ))
            {
                return 1;
            }
            else if (NOT (IS_CHAR_INJURED( l_U328[l_U472] )))
            {
                if (((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U328[l_U472], sub_2519(), 0 )) || (IS_PLAYER_TARGETTING_CHAR( sub_2573(), l_U328[l_U472] ))) || (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_2573(), l_U328[l_U472] )))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_33138(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_33163( uParam0, ref l_U6._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_33163(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    char[16] cVar9;
    char[12] cVar13;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;

    StrCopy( ref cVar9, uParam1, 16 );
    array(ref cVar13, 2);
    StrCopy( ref cVar13[0], uParam0, 16 );
    StrCopy( ref cVar13[1], "END", 16 );
    return sub_7839( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

void sub_36383(unknown uParam0, unknown uParam1)
{
    unknown Result;

    GENERATE_RANDOM_INT_IN_RANGE( uParam0, uParam1, ref Result );
    return Result;
}

void sub_36732()
{
    if ((NOT (IS_CHAR_INJURED( l_U326 ))) AND (NOT (IS_CHAR_INJURED( sub_2519() ))))
    {
        if (((IS_CHAR_IN_ANY_CAR( sub_2519() )) || (IS_CHAR_ON_ANY_BIKE( sub_2519() ))) || (IS_CHAR_IN_ANY_HELI( sub_2519() )))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2519(), ref l_U336 );
            if (NOT (IS_CHAR_IN_CAR( l_U326, l_U336 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U326, 29, ref l_U347 );
                if ((l_U347 == 7) || (l_U347 == 2))
                {
                    CLEAR_CHAR_TASKS( l_U326 );
                    OPEN_SEQUENCE_TASK( ref l_U346 );
                    TASK_ENTER_CAR_AS_PASSENGER( 0, l_U336, -1, 0 );
                    CLOSE_SEQUENCE_TASK( l_U346 );
                    TASK_PERFORM_SEQUENCE( l_U326, l_U346 );
                    CLEAR_SEQUENCE_TASK( l_U346 );
                }
            }
        }
    }
    return;
}

void sub_37144(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            GET_CAR_HEALTH( (uParam0^), uParam1 );
            (uParam2^) = GET_ENGINE_HEALTH( (uParam0^) );
            (uParam3^) = GET_PETROL_TANK_HEALTH( (uParam0^) );
        }
    }
    return;
}

int sub_37346(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_CAR_CHAR_IS_USING( uParam0, ref iVar4 );
    if (iVar4 == (uParam1^))
    {
        return sub_37384( uParam1, 2.00000000, 0 );
    }
    return 0;
}

int sub_37384(unknown uParam0, float fParam1, boolean bParam2)
{
    vector vVar5;
    vector vVar8;
    float fVar11;

    vVar5 = {0.00000000, 0.00000000, 0.00000000};
    vVar8 = {0.00000000, 0.00000000, 0.00000000};
    fVar11 = 0.00000000;
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            GET_CHAR_COORDINATES( sub_2519(), ref vVar5.x, ref vVar5.y, ref vVar5.z );
            GET_CAR_COORDINATES( (uParam0^), ref vVar8.x, ref vVar8.y, ref vVar8.z );
            GET_DISTANCE_BETWEEN_COORDS_3D( vVar5.x, vVar5.y, vVar5.z, vVar8.x, vVar8.y, vVar8.z, ref fVar11 );
            if (bParam2)
            {
                if (fVar11 >= fParam1)
                {
                    return 1;
                }
            }
            else if (fVar11 < fParam1)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_37615(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if ((((CHECK_STUCK_TIMER( (uParam0^), 0, 5000 )) || (CHECK_STUCK_TIMER( (uParam0^), 3, 60000 ))) || (CHECK_STUCK_TIMER( (uParam0^), 2, 30000 ))) || (CHECK_STUCK_TIMER( (uParam0^), 1, 40000 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_37940(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (l_U157)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED CONTROL_CHASE_HINT_CAM()" );
    }
    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar3 );
    if ((l_U155) AND (IS_HINT_RUNNING()))
    {
        iVar4 = 0;
        GET_GAME_TIMER( ref iVar4 );
        if (iVar4 > (l_U156 + 500))
        {
            l_U155 = 0;
        }
    }
    if (((((IS_CONTROL_PRESSED( 0, 51 )) AND (IS_CHAR_IN_ANY_CAR( sub_2519() ))) AND (NOT (IS_CHAR_DEAD( (uParam0^) )))) AND (NOT sub_2668())) AND (iVar3 != 4))
    {
        if ((NOT IS_HINT_RUNNING()) AND (IS_CHAR_IN_ANY_CAR( (uParam0^) )))
        {
            if (l_U157)
            {
                PRINTNL();
                PRINTSTRING( "**** LAUNCHING THE HINT_CAM" );
            }
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 999999 );
            SET_HINT_TIMES( 500, 0, 0 );
            SET_HINT_FOV( 45.00000000 );
            GET_GAME_TIMER( ref l_U156 );
            l_U155 = 1;
            l_U154 = 0;
        }
    }
    else if (IS_HINT_RUNNING())
    {
        if ((NOT l_U154) AND (NOT l_U155))
        {
            if (l_U157)
            {
                PRINTNL();
                PRINTSTRING( "**** INTERP HINT_CAM BACK" );
            }
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 500 );
            SET_HINT_TIMES( 0, 0, 500 );
            SET_HINT_FOV( 45.00000000 );
            l_U154 = 1;
        }
    }
    else if (l_U154)
    {
        if (l_U157)
        {
            PRINTNL();
            PRINTSTRING( "**** DONE INTERP, RESETTING HINT_CAM VARIABLES" );
        }
        SET_CINEMATIC_BUTTON_ENABLED( 1 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
        l_U154 = 0;
    };;;
    return;
}

int sub_38695(unknown uParam0, unknown uParam1)
{
    if (IS_CHAR_IN_ANY_CAR( uParam1 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam1, uParam0 );
        if (NOT ((uParam0^) == nil))
        {
            if (NOT (IS_CAR_DEAD( (uParam0^) )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_40256(int iParam0)
{
    if (iParam0 == nil)
    {
        return;
    }
    CHANGE_BLIP_DISPLAY( iParam0, 2 );
    return;
}

void sub_40390(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2668 = (uParam0^);
        g_U2683 = {uParam1};
        g_U2681 = uParam4;
    }
    return;
}

float sub_40551(unknown uParam0, int iParam1)
{
    float Result;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    Result = 0.00000000;
    if (DOES_CHAR_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            GET_CHAR_COORDINATES( uParam0, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
            GET_DISTANCE_BETWEEN_COORDS_3D( uVar5._fU0, uVar5._fU4, uVar5._fU8, iParam1->_fU0, iParam1->_fU4, iParam1->_fU8, ref Result );
            return Result;
        }
    }
    return -1.00000000;
}

void sub_42106()
{
    switch (l_U357)
    {
        case 0:
        if (NOT l_U391)
        {
            sub_42178();
        }
        else
        {
            ENABLE_SCENE_STREAMING( 0 );
            BEGIN_CAM_COMMANDS( ref l_U358 );
            SET_USE_HIGHDOF( 1 );
            SET_WIDESCREEN_BORDERS( 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            g_U2792 = 1;
            CLEAR_AREA( l_U451._fU0, l_U451._fU4, l_U451._fU8, 20.00000000, 1 );
            SET_CAM_ACTIVE( l_U522, 1 );
            SET_CAM_PROPAGATE( l_U522, 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U522, l_U521, l_U520, 25000, 0 );
            SET_CHAR_CURRENT_WEAPON_VISIBLE( sub_2519(), 0 );
            if ((NOT (IS_CHAR_INJURED( l_U326 ))) AND (NOT (IS_CHAR_INJURED( sub_2519() ))))
            {
                OPEN_SEQUENCE_TASK( ref l_U483 );
                TASK_LOOK_AT_CHAR( 0, l_U326, -1, 0 );
                CLOSE_SEQUENCE_TASK( l_U483 );
                TASK_PERFORM_SEQUENCE( sub_2519(), l_U483 );
                CLEAR_SEQUENCE_TASK( l_U483 );
                OPEN_SEQUENCE_TASK( ref l_U483 );
                TASK_LOOK_AT_CHAR( 0, sub_2519(), -1, 0 );
                CLOSE_SEQUENCE_TASK( l_U483 );
                TASK_PERFORM_SEQUENCE( l_U326, l_U483 );
                CLEAR_SEQUENCE_TASK( l_U483 );
            }
            l_U357++;
        }
        break;
        case 1:
        sub_7764( "ROM1_DRP2", ref l_U484, 6, 1 );
        l_U357++;
        break;
        case 2:
        if (NOT (sub_2178( l_U484 )))
        {
            sub_33138( "ROM1_PASS", 6, 1, ref l_U484, 6, 0 );
            if (NOT (IS_CHAR_INJURED( l_U326 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U483 );
                if (NOT l_U387)
                {
                    TASK_LEAVE_ANY_CAR( 0 );
                }
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 437.96780000, 1718.97700000, 15.14023000, 2, 20000, 1 );
                CLOSE_SEQUENCE_TASK( l_U483 );
                TASK_PERFORM_SEQUENCE( l_U326, l_U483 );
                CLEAR_SEQUENCE_TASK( l_U483 );
            }
            GET_GAME_TIMER( ref l_U350 );
            l_U357++;
        }
        break;
        case 3:
        GET_GAME_TIMER( ref l_U349 );
        if ((l_U349 - l_U350) > 12000)
        {
            GET_GAME_TIMER( ref l_U350 );
            l_U357++;
        }
        if (NOT (IS_CHAR_INJURED( l_U326 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( l_U326, 437.96780000, 1718.97700000, 15.14023000, 2.50000000, 2.50000000, 2.50000000, 0 ))
            {
                l_U357++;
            }
        }
        break;
        case 4:
        if (NOT (IS_CHAR_INJURED( l_U326 )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U326 );
            DELETE_CHAR( ref l_U326 );
        }
        if (DOES_CAM_EXIST( l_U522 ))
        {
            SET_CAM_ACTIVE( l_U522, 0 );
            SET_CAM_PROPAGATE( l_U522, 0 );
        }
        if (DOES_CAM_EXIST( l_U521 ))
        {
            SET_CAM_ACTIVE( l_U521, 0 );
            SET_CAM_PROPAGATE( l_U522, 0 );
        }
        if (DOES_CAM_EXIST( l_U520 ))
        {
            SET_CAM_ACTIVE( l_U520, 0 );
            SET_CAM_PROPAGATE( l_U520, 0 );
        }
        SET_USE_HIGHDOF( 0 );
        SET_WIDESCREEN_BORDERS( 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        END_CAM_COMMANDS( ref l_U358 );
        ENABLE_SCENE_STREAMING( 1 );
        SET_CHAR_CURRENT_WEAPON_VISIBLE( sub_2519(), 1 );
        SET_CAM_BEHIND_PED( sub_2519() );
        SET_GAME_CAM_HEADING( 0.00000000 );
        l_U381 = 1;
        break;
    }
    if ((sub_43495()) AND (NOT l_U392))
    {
        if (IS_SCREEN_FADED_IN())
        {
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
        }
        INCREMENT_INT_STAT( 372, 1 );
        l_U357 = 4;
        l_U392 = 1;
    }
    return;
}

void sub_42178()
{
    if (NOT (DOES_CAM_EXIST( l_U521 )))
    {
        CREATE_CAM( 14, ref l_U521 );
        SET_CAM_POS( l_U521, 428.36540000, 1724.01500000, 15.88392000 );
        SET_CAM_ROT( l_U521, 1.46645900, 0.00000000, -142.86760000 );
        SET_CAM_FOV( l_U521, 18.60007000 );
        SET_CAM_FAR_DOF( l_U521, 28.00000000 );
        SET_CAM_NEAR_DOF( l_U521, 2.00000000 );
        SET_CAM_ACTIVE( l_U521, 1 );
    }
    if (NOT (DOES_CAM_EXIST( l_U520 )))
    {
        CREATE_CAM( 14, ref l_U520 );
        SET_CAM_POS( l_U520, 428.63130000, 1723.66300000, 15.89520000 );
        SET_CAM_ROT( l_U520, 1.46645900, 0.00000000, -142.86760000 );
        SET_CAM_FOV( l_U520, 18.60007000 );
        SET_CAM_FAR_DOF( l_U520, 28.00000000 );
        SET_CAM_NEAR_DOF( l_U520, 2.00000000 );
        SET_CAM_ACTIVE( l_U520, 1 );
    }
    if (NOT (DOES_CAM_EXIST( l_U522 )))
    {
        CREATE_CAM( 3, ref l_U522 );
    }
    l_U391 = 1;
    return;
}

int sub_43495()
{
    if ((((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_43688()
{
    CLEAR_WANTED_LEVEL( sub_2573() );
    g_U25 = 81;
    sub_43720( l_U518 );
    sub_861();
    return;
}

void sub_43720(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_2726( uParam0 );
    sub_43740( uParam0 );
    sub_45393( uParam0 );
    return;
}

void sub_43740(unknown uParam0)
{
    switch (uParam0)
    {
        case 13:
        sub_43782();
        break;
        case 14:
        sub_44755();
        break;
        case 15:
        sub_44928();
        break;
        default: sub_1058( "Interactions_Pass: Unknown Random Interaction Character ID - tell Keith" );
    }
    sub_45197();
    sub_45281();
    return;
}

void sub_43782()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 13;
    uVar3 = sub_2726( iVar2 );
    sub_43818( ref g_U30257[uVar3]._fU8, 48, 0, 0 );
    g_U30257[uVar3]._fU24 = 0;
    switch (g_U30257[uVar3]._fU28)
    {
        case 1:
        sub_44466( 0 );
        break;
        case 2:
        sub_44466( 500 );
        break;
        default: sub_1058( "Interactions_Arnaud_Pass: Unknown Arnaud Sequence - tell Keith" );
    }
    return;
}

void sub_43818(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_43871( iParam0, uParam1, uParam2 );
    if (NOT bParam3)
    {
        return;
    }
    if (NOT ((ref iParam0->_fU8->_fU4) == 0))
    {
        if ((ref iParam0->_fU8->_fU4) <= 15)
        {
            ref iParam0->_fU8->_fU4 = 15;
        }
        else if ((ref iParam0->_fU8->_fU4) <= 30)
        {
            ref iParam0->_fU8->_fU4 = 30;
        }
        else if ((ref iParam0->_fU8->_fU4) <= 45)
        {
            ref iParam0->_fU8->_fU4 = 45;
        }
        else
        {
            ref iParam0->_fU8->_fU4 = 0;
            ref iParam0->_fU8->_fU0++;
        };;;
    }
    while ((ref iParam0->_fU8->_fU0) >= 24)
    {
        ref iParam0->_fU8->_fU0 -= 24;
        sub_44003( iParam0 + 0 );
    }
    return;
}

void sub_43871(int iParam0, int iParam1, int iParam2)
{
    ref iParam0->_fU8->_fU4 += iParam2;
    ref iParam0->_fU8->_fU0 += iParam1;
    while ((ref iParam0->_fU8->_fU4) >= 60)
    {
        ref iParam0->_fU8->_fU4 -= 60;
        ref iParam0->_fU8->_fU0++;
    }
    while ((ref iParam0->_fU8->_fU0) >= 24)
    {
        ref iParam0->_fU8->_fU0 -= 24;
        sub_44003( iParam0 + 0 );
    }
    return;
}

void sub_44003(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_44034( iParam0->_fU4 )))
    {
        iParam0->_fU0 = 1;
        iParam0->_fU4++;
        if (iParam0->_fU4 > 12)
        {
            iParam0->_fU4 = 1;
        }
    }
    return;
}

int sub_44034(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: return 31;
        case 4:
        case 6:
        case 9:
        case 11: return 30;
        case 2: return 28;
    }
    return 30;
}

void sub_44466(unknown uParam0)
{
    sub_44477( uParam0 );
    return;
}

void sub_44477(unknown uParam0)
{
    ADD_SCORE( sub_2573(), uParam0 );
    sub_44502( uParam0 );
    return;
}

void sub_44502(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1058( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_44755()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 14;
    uVar3 = sub_2726( iVar2 );
    sub_43818( ref g_U30257[uVar3]._fU8, 48, 0, 0 );
    g_U30257[uVar3]._fU24 = 0;
    switch (g_U30257[uVar3]._fU28)
    {
        case 1:
        sub_44466( 500 );
        break;
        default: sub_1058( "Interactions_Daisy_Pass: Unknown Daisy Sequence - tell Keith" );
    }
    return;
}

void sub_44928()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 15;
    uVar3 = sub_2726( iVar2 );
    sub_43818( ref g_U30257[uVar3]._fU8, 24, 0, 0 );
    g_U30257[uVar3]._fU24 = 0;
    switch (g_U30257[uVar3]._fU28)
    {
        case 1:
        sub_44466( 0 );
        break;
        case 2:
        sub_44466( 0 );
        break;
        default: sub_1058( "Interactions_Margot_Pass: Unknown Margot Sequence - tell Keith" );
    }
    return;
}

void sub_45197()
{
    if (g_U0)
    {
        return;
    }
    g_U10953._fU0 = 1;
    g_U10953._fU4 = 0;
    g_U10953._fU8 = 0;
    g_U10953._fU12 = 0;
    g_U10953._fU16 = 0;
    g_U10953._fU20 = 0;
    g_U10953._fU28 = 5;
    return;
}

void sub_45281()
{
    sub_45290();
    StrCopy( ref g_U10966, "RIPASS", 16 );
    return;
}

void sub_45290()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

void sub_45393(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_2726( uParam0 );
    g_U30257[uVar3]._fU28 = 99;
    g_U30257[uVar3]._fU4 = 0;
    sub_9529( ref g_U30257[uVar3]._fU8 );
    g_U30257[uVar3]._fU24 = 0;
    sub_45466( uParam0 );
    sub_46135( uVar3 );
    return;
}

void sub_45466(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (g_U0)
    {
        return;
    }
    iVar3 = 3;
    switch (uParam0)
    {
        case 13:
        iVar3 = 0;
        break;
        case 14:
        iVar3 = 1;
        break;
        case 15:
        iVar3 = 2;
        break;
        default: return;
    }
    iVar4 = 0;
    if (NOT g_U43072[iVar3]._fU0)
    {
        iVar4 = g_U43072[iVar3]._fU8;
        if (iVar4 > 0)
        {
            sub_45598( 5, iVar4 );
            g_U43072[iVar3]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_45598(unknown uParam0, int iParam1)
{
    g_U28780[uParam0]._fU4 += iParam1;
    if (g_U28780[uParam0]._fU4 > g_U28780[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U28780[uParam0]._fU4 = g_U28780[uParam0]._fU0;
    }
    sub_45768( 0 );
    return;
}

void sub_45768(boolean bParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    boolean bVar7;
    int I;

    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    fVar6 = 0.00000000;
    bVar7 = true;
    I = 0;
    for ( I = 0; I < 8; I++ )
    {
        if (g_U28780[I]._fU4 == g_U28780[I]._fU0)
        {
            fVar4 = g_U28780[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U28780[I]._fU0 );
            fVar6 = TO_FLOAT( g_U28780[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U28780[I]._fU8;
        }
        fVar3 += fVar4;
    }
    if (fVar3 > 100.00000000)
    {
        fVar3 = 99.99000000;
    }
    if (bVar7)
    {
        fVar3 = 100.00000000;
    }
    SET_FLOAT_STAT( 187, fVar3 );
    if (bVar7)
    {
        sub_46013();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa()))))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_46013()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15811[5] = 1;
    return;
}

void sub_46135(unknown uParam0)
{
    g_U30257[uParam0]._fU36 = 0;
    g_U30257[uParam0]._fU40 = {0.00000000, 0.00000000, 0.00000000};
    g_U30257[uParam0]._fU52 = 1;
    StrCopy( ref g_U30257[uParam0]._fU60, "", 16 );
    sub_46220( uParam0 );
    return;
}

void sub_46220(unknown uParam0)
{
    sub_46231( uParam0 );
    sub_46309( uParam0 );
    return;
}

void sub_46231(unknown uParam0)
{
    if (DOES_BLIP_EXIST( g_U30257[uParam0]._fU56 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref g_U30257[uParam0]._fU56 );
    }
    g_U30257[uParam0]._fU56 = nil;
    return;
}

void sub_46309(unknown uParam0)
{
    g_U30257[uParam0]._fU76 = 0;
    return;
}
