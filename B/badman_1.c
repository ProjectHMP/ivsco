void main()
{
    l_U0 = 0;
    l_U1 = 1;
    l_U2 = 3;
    l_U102 = 0;
    l_U103 = 0;
    l_U104 = 0;
    l_U105 = 0;
    l_U106 = 0;
    l_U107 = 0;
    l_U108 = 0;
    l_U109 = 0;
    l_U110 = 0;
    l_U111 = 0;
    l_U112 = 0;
    l_U113 = 0;
    ProtectedSet(l_U114, 0);
    ProtectedSet(l_U115, 0);
    l_U116 = 0;
    l_U117 = 0;
    ProtectedSet(l_U178, 0.00000000);
    ProtectedSet(l_U179, 0.00000000);
    l_U196 = 0;
    l_U197 = 0;
    l_U198 = 0;
    l_U199 = 0;
    l_U200 = 0;
    l_U201 = 0;
    l_U202 = 0;
    l_U203 = 0;
    l_U204 = 0;
    l_U205 = 0;
    l_U206 = 0;
    l_U207 = 0;
    l_U208 = 0;
    l_U211 = 0;
    l_U212 = 0;
    l_U213 = 0;
    l_U214 = 0;
    l_U215 = 0;
    l_U216 = 0;
    l_U217 = 0;
    l_U218 = 0;
    l_U219 = 0;
    l_U220 = 0;
    l_U221 = 0;
    l_U222 = 0;
    l_U223 = 0;
    l_U224 = 0;
    l_U225 = 0;
    l_U226 = 0;
    l_U227 = 0;
    l_U228 = 0;
    l_U229 = 0;
    l_U230 = 0;
    l_U231 = 0;
    l_U232 = 0;
    l_U233 = 0;
    l_U234 = 0;
    l_U235 = 0;
    l_U236 = 0;
    l_U237 = 0;
    l_U238 = 0;
    l_U245 = 0;
    l_U246 = 0;
    l_U247 = 0;
    l_U248 = 0;
    l_U249 = 0;
    l_U413 = 0;
    l_U414 = 1;
    l_U415 = 0;
    l_U416 = 0;
    l_U446 = 0;
    l_U447 = 0;
    l_U448 = 0;
    l_U479 = 38;
    if (sub_473( l_U479, l_U414 ))
    {
        if (IS_PLAYER_PLAYING( sub_1174() ))
        {
            if (NOT g_U15654[61])
            {
                if (NOT (IS_WANTED_LEVEL_GREATER( sub_1174(), 0 )))
                {
                    if (HAS_DEATHARREST_EXECUTED())
                    {
                        sub_1264();
                    }
                    while (true)
                    {
                        WAIT( 0 );
                        if (NOT l_U214)
                        {
                            if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
                            {
                                if (g_U10978)
                                {
                                    sub_1264();
                                }
                                if (NOT (IS_WANTED_LEVEL_GREATER( sub_1174(), 0 )))
                                {
                                    if ((sub_2544( ref l_U250 )) || (sub_2636( ref l_U250, 22.00000000 )))
                                    {
                                        sub_2967();
                                    }
                                    sub_3384();
                                    sub_3633( ref l_U263 );
                                    switch (l_U196)
                                    {
                                        case 0:
                                        sub_3739();
                                        break;
                                        case 1:
                                        sub_5803();
                                        break;
                                    }
                                }
                                else if ((sub_2678( ref l_U250 )) < 7.00000000)
                                {
                                    if (NOT g_U65019)
                                    {
                                        g_U65019 = 1;
                                        l_U227 = 1;
                                    }
                                }
                                sub_1264();;
                            }
                            else
                            {
                                sub_1264();
                            }
                            if (DOES_OBJECT_EXIST( l_U462 ))
                            {
                                SET_OBJECT_COORDINATES( l_U462, l_U368._fU0, l_U368._fU4, l_U368._fU8 );
                                SET_OBJECT_HEADING( l_U462, l_U396 );
                            }
                        }
                        if (l_U214)
                        {
                            if (sub_11326( ref l_U250 ))
                            {
                                PRINT_NOW( "BAD1_PROMPT_4", 7500, 1 );
                                sub_2967();
                            }
                            if ((sub_2678( ref l_U250 )) > 200.00000000)
                            {
                                if (NOT (IS_CHAR_ON_SCREEN( l_U250 )))
                                {
                                    DELETE_CHAR( ref l_U250 );
                                    PRINT_NOW( "BAD1_GOD4", 7500, 1 );
                                    sub_2967();
                                }
                            }
                            sub_3633( ref l_U263 );
                            switch (l_U200)
                            {
                                case 0:
                                sub_11539();
                                sub_11696();
                                break;
                                case 2:
                                sub_11539();
                                sub_21178();
                                break;
                                case 3:
                                sub_23207();
                                break;
                                case 4:
                                if (sub_30138( ref l_U493 ))
                                {
                                    sub_2967();
                                }
                                break;
                            }
                            if ((IS_KEYBOARD_KEY_PRESSED( 31 )) AND (NOT l_U210))
                            {
                                l_U210 = 1;
                                sub_25086();
                            }
                            if ((IS_KEYBOARD_KEY_PRESSED( 30 )) AND (NOT l_U216))
                            {
                                BEGIN_CAM_COMMANDS( ref l_U415 );
                                CREATE_CAM( 14, ref l_U398 );
                                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_1884(), 0.00000000, 0.00000000, 0.00000000, ref l_U290._fU0, ref l_U290._fU4, ref l_U290._fU8 );
                                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                                SET_CAM_PROPAGATE( l_U398, 1 );
                                SET_CAM_ACTIVE( l_U398, 1 );
                                l_U216 = 1;
                            }
                            if (l_U216)
                            {
                                SET_CAM_POS( l_U398, l_U290._fU0, l_U290._fU4, l_U290._fU8 );
                                SET_CAM_ROT( l_U398, l_U293._fU0, 0.00000000, l_U293._fU8 );
                            }
                        }
                    }
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

void sub_473(unknown uParam0, unknown uParam1)
{
    if (sub_482())
    {
        return 0;
    }
    return sub_529( uParam0, uParam1 );
}

int sub_482()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

boolean sub_529(unknown uParam0, int iParam1)
{
    unknown uVar4;

    if (NOT g_U34175._fU0)
    {
        return 0;
    }
    if (g_U10978)
    {
        return 0;
    }
    uVar4 = sub_573( uParam0 );
    if (g_U0)
    {
        return 1;
    }
    if (NOT g_U34048[uVar4]._fU0)
    {
        return 0;
    }
    if (NOT g_U34048[uVar4]._fU4)
    {
        return 0;
    }
    if (g_U9893._fU4)
    {
        return 0;
    }
    if (NOT g_U34048[uVar4]._fU24)
    {
        if (sub_850( g_U34048[uVar4]._fU8 ))
        {
            g_U34048[uVar4]._fU24 = 1;
        }
    }
    if (NOT g_U34048[uVar4]._fU24)
    {
        return 0;
    }
    return g_U34048[uVar4]._fU28 == iParam1;
}

int sub_573(unknown uParam0)
{
    int iVar3;

    if (NOT (sub_584( uParam0 )))
    {
        sub_693( "Not a genuine RI Character ID - Tell Keith" );
        return 0;
    }
    iVar3 = uParam0;
    return iVar3 - 38;
}

int sub_584(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = uParam0;
    if (NOT (iVar3 >= 38))
    {
        return 0;
    }
    iVar4 = 52;
    if (NOT (iVar3 < iVar4))
    {
        return 0;
    }
    return 1;
}

void sub_693(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

int sub_850(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    if (sub_1019( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_1019(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
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

void sub_1174()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1264()
{
    if (sub_1283( l_U479, l_U414 ))
    {
        sub_1379( l_U479, l_U414 );
        if (IS_PLAYER_PLAYING( sub_1174() ))
        {
            SET_PLAYER_CONTROL( sub_1174(), 1 );
        }
        if (IS_HINT_RUNNING())
        {
            HINT_CAM( 0.00000000, 0.00000000, 0.50000000, l_U250, 0, 0, 0 );
            SET_CAM_BEHIND_PED( sub_1884() );
        }
        sub_1932();
        sub_1979( 0 );
        if (DOES_BLIP_EXIST( l_U266 ))
        {
            REMOVE_BLIP( l_U266 );
        }
    }
    CLEAR_NAMED_CUTSCENE( "rpbad1" );
    if (l_U227)
    {
        CLEAR_HELP();
        CLEAR_PRINTS();
    }
    if (l_U424[0] == 1)
    {
        CLEAR_PRINTS();
        PRINT( "BRIAN1_PROMPT_8", 7500, 1 );
    }
    else if (l_U424[1] == 1)
    {
        CLEAR_PRINTS();
        PRINT( "BRIAN1_PROMPT_8", 7500, 1 );
    }
    if (l_U233)
    {
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1483.48000000, 69.33280000, 23.84610000, 1493.92500000, 54.10620000, 23.60980000 );
    }
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_1884(), 1 );
    sub_2359( ref l_U250 );
    sub_2417();
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_1283(int iParam0, int iParam1)
{
    if (NOT g_U34175._fU4)
    {
        return 0;
    }
    if (NOT (g_U34175._fU8 == iParam0))
    {
        return 0;
    }
    if (NOT (g_U34175._fU12 == iParam1))
    {
        return 0;
    }
    return 1;
}

void sub_1379(unknown uParam0, unknown uParam1)
{
    if (NOT (sub_1283( uParam0, uParam1 )))
    {
        sub_693( "Interactions_Ended: Interaction for this character not active" );
        return;
    }
    sub_1475();
    if (g_U813)
    {
        sub_1567();
    }
    else
    {
        sub_1685();
    }
    g_U10978 = 0;
    return;
}

void sub_1475()
{
    if (g_U0)
    {
        g_U34175._fU0 = 0;
    }
    else
    {
        g_U34175._fU0 = 1;
    }
    g_U34175._fU4 = 0;
    g_U34175._fU8 = 54;
    g_U34175._fU12 = 0;
    return;
}

void sub_1567()
{
    if (COMPARE_STRING( ref g_U9926, "RIPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_1613();
    return;
}

void sub_1613()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1685()
{
    if (COMPARE_STRING( ref g_U9926, "RIPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_1731();
    return;
}

void sub_1731()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1884()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1932()
{
    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    return;
}

void sub_1979(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_MISSION_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8392 >= 4) AND (g_U8392 <= 8))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_2359(unknown uParam0)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            REMOVE_CHAR_FROM_GROUP( (uParam0^) );
        }
    }
    return;
}

void sub_2417()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

int sub_2544(unknown uParam0)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( (uParam0^), sub_1884(), 0 ))
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

int sub_2636(unknown uParam0, float fParam1)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            if ((sub_2678( uParam0 )) < fParam1)
            {
                if (HAS_CHAR_SPOTTED_CHAR( (uParam0^), sub_1884() ))
                {
                    if (IS_CHAR_ARMED( sub_1884(), 7 ))
                    {
                        if (IS_PLAYER_TARGETTING_CHAR( sub_1174(), (uParam0^) ))
                        {
                            return 1;
                        }
                        if (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_1174(), (uParam0^) ))
                        {
                            return 1;
                        }
                    }
                }
                if (IS_CHAR_SHOOTING( sub_1884() ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_2678(unknown uParam0)
{
    vector vVar3;
    vector vVar6;
    float Result;

    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    vVar6 = {0.00000000, 0.00000000, 0.00000000};
    Result = 0.00000000;
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        GET_CHAR_COORDINATES( sub_1884(), ref vVar3.x, ref vVar3.y, ref vVar3.z );
        GET_CHAR_COORDINATES( (uParam0^), ref vVar6.x, ref vVar6.y, ref vVar6.z );
        GET_DISTANCE_BETWEEN_COORDS_3D( vVar3.x, vVar3.y, vVar3.z, vVar6.x, vVar6.y, vVar6.z, ref Result );
        return Result;
    }
    return Result;
}

void sub_2967()
{
    sub_2980( ref l_U250 );
    if (DOES_CHAR_EXIST( l_U250 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U250 )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U250, 0 );
        }
    }
    if (g_U65020 < 2)
    {
        g_U65020++;
    }
    g_U65021++;
    if (g_U65021 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_1174(), 150 );
        SAY_AMBIENT_SPEECH( sub_1884(), "MISSION_FAIL_RAGE", 0, 0, 0 );
    }
    sub_3201( ref l_U250 );
    sub_1264();
    return;
}

void sub_2980(unknown uParam0)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^), 0 );
        }
    }
    return;
}

void sub_3201(unknown uParam0)
{
    unknown uVar3;

    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            if (IS_CHAR_IN_ANY_CAR( (uParam0^) ))
            {
                if (sub_3260( ref uVar3, (uParam0^) ))
                {
                    SET_CHAR_KEEP_TASK( (uParam0^), 1 );
                    TASK_LEAVE_CAR_IMMEDIATELY( (uParam0^), uVar3 );
                }
            }
        }
    }
    return;
}

int sub_3260(unknown uParam0, unknown uParam1)
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

int sub_3384()
{
    if (l_U215)
    {
        if (IS_HINT_RUNNING())
        {
            if (((sub_2678( ref l_U250 )) > 18.00000000) || (sub_3430()))
            {
                HINT_CAM( 0.00000000, 0.00000000, 0.50000000, l_U250, 0, 0, 0 );
                l_U215 = 0;
                return 1;
            }
        }
    }
    return 0;
}

int sub_3430()
{
    if (sub_3443( ref l_U260 ))
    {
        GET_CAR_SPEED( l_U260, ref l_U387 );
        if (l_U387 > 15.00000000)
        {
            return 1;
        }
    }
    return 0;
}

int sub_3443(unknown uParam0)
{
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_1884() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1884(), uParam0 );
        if (NOT ((uParam0^) == nil))
        {
            if (IS_VEH_DRIVEABLE( (uParam0^) ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_3633(unknown uParam0)
{
    int iVar3;

    if (sub_3443( ref iVar3 ))
    {
        if (NOT (IS_CAR_A_MISSION_CAR( iVar3 )))
        {
            if ((uParam0^) != iVar3)
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( uParam0 );
                (uParam0^) = iVar3;
                SET_CAR_AS_MISSION_CAR( (uParam0^) );
            }
        }
    }
    return;
}

void sub_3739()
{
    switch (l_U197)
    {
        case 0:
        l_U284 = {1249.71700000, 720.77760000, 35.75550000};
        l_U386 = 296.40240000;
        l_U448 = 300;
        l_U371 = {1251.41200000, 713.14610000, 35.78370000};
        l_U397 = 289.40000000;
        l_U327 = {1756.61100000, 593.64040000, 28.16620000};
        l_U330[0] = {1766.69400000, 598.02810000, 28.14160000};
        l_U389 = 138.35000000;
        l_U330[1] = {1762.47500000, 597.06240000, 28.14160000};
        l_U337[0] = {1766.51500000, 600.23560000, 28.14160000};
        l_U390 = 120.00000000;
        l_U337[1] = {1761.76800000, 598.07140000, 28.14160000};
        l_U308[0] = {1758.97500000, 595.18590000, 28.16240000};
        l_U374[0] = 190.68610000;
        l_U308[1] = {1756.82800000, 592.94160000, 28.16600000};
        l_U374[1] = 346.55820000;
        l_U308[2] = {1749.88500000, 591.09060000, 28.17320000};
        l_U374[2] = 256.60210000;
        l_U308[3] = {1767.09000000, 600.72310000, 28.14950000};
        l_U374[3] = 261.74300000;
        l_U308[4] = {1764.28000000, 596.82340000, 28.15550000};
        l_U374[4] = 6.85420000;
        for ( l_U413 = 0; l_U413 <= 4; l_U413++ )
        {
            l_U239[l_U413] = 0;
        }
        l_U347 = {1482.77800000, 57.85300000, 26.20400000};
        l_U362 = {-0.30534300, 1.56991100, 0.01601700};
        l_U431[0] = 200;
        l_U431[1] = 200;
        l_U431[2] = 200;
        l_U431[3] = 200;
        l_U431[4] = 200;
        l_U402 = 1495769888;
        l_U403[0] = -1180674815;
        l_U403[1] = -1180674815;
        l_U403[2] = 1724587620;
        l_U403[3] = 1724587620;
        l_U403[4] = 1724587620;
        l_U368 = {1249.01800000, 720.51200000, 36.25200000};
        l_U396 = 89.20900000;
        l_U412 = 395385234;
        REQUEST_MODEL( l_U402 );
        REQUEST_MODEL( l_U412 );
        sub_4463( "PIRAUD" );
        sub_4582( 0, sub_1884(), "NIKO", 0 );
        l_U197 = 1;
        break;
        case 1:
        if (NOT l_U248)
        {
            if (HAS_MODEL_LOADED( l_U412 ))
            {
                CLEAR_AREA( l_U368._fU0, l_U368._fU4, l_U368._fU8, 10.00000000, 1 );
                CREATE_OBJECT( l_U412, l_U368._fU0, l_U368._fU4, l_U368._fU8, ref l_U462, 1 );
                SET_OBJECT_HEADING( l_U462, l_U396 );
                GET_OBJECT_HEALTH( l_U462, ref l_U392 );
                CREATE_WIDGET_GROUP( "bench position" );
                ADD_WIDGET_FLOAT_SLIDER( "Float x", ref l_U368._fU0, -1500.00000000, 1500.00000000, 0.10000000 );
                ADD_WIDGET_FLOAT_SLIDER( "Float y", ref l_U368._fU4, -1500.00000000, 1500.00000000, 0.10000000 );
                ADD_WIDGET_FLOAT_SLIDER( "Float z", ref l_U368._fU8, -1500.00000000, 1500.00000000, 0.10000000 );
                ADD_WIDGET_FLOAT_SLIDER( "Heading", ref l_U396, -1500.00000000, 1500.00000000, 0.10000000 );
                END_WIDGET_GROUP();
                l_U248 = 1;
            }
            else
            {
                WAIT( 0 );
            }
        }
        if ((l_U248) AND (NOT l_U212))
        {
            if (HAS_MODEL_LOADED( l_U402 ))
            {
                CLEAR_AREA( l_U284._fU0, l_U284._fU4, l_U284._fU8, 10.00000000, 1 );
                CREATE_CHAR( 26, l_U402, l_U284._fU0, l_U284._fU4, l_U284._fU8, ref l_U250, 1 );
                SET_CHAR_HEADING( l_U250, l_U386 );
                sub_4582( 1, l_U250, "REAL_BADMAN", 0 );
                SET_CHAR_HEALTH( l_U250, 200 );
                SET_CHAR_SUFFERS_CRITICAL_HITS( l_U250, 0 );
                SET_CHAR_NEVER_TARGETTED( l_U250, 1 );
                SET_CHAR_CANT_BE_DRAGGED_OUT( l_U250, 1 );
                SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U250, 1 );
                sub_5311( ref l_U250, 20.00000000, 10.00000000 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U250, 1 );
                sub_5405( ref l_U250, ref l_U264, 1 );
                SET_SENSE_RANGE( l_U250, 100.00000000 );
                SET_CHAR_PROP_INDEX( l_U250, 0, 0 );
                SET_PED_DIES_WHEN_INJURED( l_U250, 1 );
                SET_CHAR_HEALTH( l_U250, l_U448 );
                SET_CHAR_MAX_HEALTH( l_U250, l_U448 );
                SET_CHAR_VISIBLE( l_U250, 0 );
                OPEN_SEQUENCE_TASK( ref l_U463 );
                TASK_SIT_DOWN_ON_OBJECT( 0, 2, 0, l_U462, 0.00000000, 0.00000000, 0.00000000, 0.00000000, -2, 1 );
                CLOSE_SEQUENCE_TASK( l_U463 );
                TASK_PERFORM_SEQUENCE( l_U250, l_U463 );
                CLEAR_SEQUENCE_TASK( l_U463 );
                l_U212 = 1;
            }
            else
            {
                WAIT( 0 );
            }
        }
        if (l_U212)
        {
            if (IS_CHAR_SITTING_IDLE( l_U250 ))
            {
                SET_CHAR_VISIBLE( l_U250, 1 );
                l_U196 = 1;
            }
        }
        break;
    }
    return;
}

void sub_4463(unknown uParam0)
{
    StrCopy( ref l_U4._fU0, uParam0, 16 );
    sub_4480();
    return;
}

void sub_4480()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U4._fU16[I]._fU0 = nil;
        StrCopy( ref l_U4._fU16[I]._fU4, "", 32 );
        l_U4._fU344[I] = 0;
    }
    return;
}

void sub_4582(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U4._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U4._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_4662( "\n PED NUMBER ", uParam0 );
    sub_4702( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_4662(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4702(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5311(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), uParam1 );
            SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), uParam2 );
        }
    }
    return;
}

void sub_5405(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            ADD_BLIP_FOR_CHAR( (uParam0^), uParam1 );
            if (bParam2)
            {
                CHANGE_BLIP_SPRITE( (uParam1^), 63 );
            }
            else
            {
                CHANGE_BLIP_SPRITE( (uParam1^), 64 );
            }
            SET_BLIP_AS_FRIENDLY( (uParam1^), 1 );
            CHANGE_BLIP_SCALE( (uParam1^), 1.00000000 );
            CHANGE_BLIP_DISPLAY( (uParam1^), 2 );
        }
    }
    return;
}

void sub_5803()
{
    switch (l_U198)
    {
        case 0:
        if (NOT (IS_CHAR_INJURED( l_U250 )))
        {
            if (NOT l_U217)
            {
                if (sub_3443( ref l_U260 ))
                {
                    if ((sub_2678( ref l_U250 )) < 10.00000000)
                    {
                        sub_5903();
                    }
                }
                else if (IS_CHAR_ON_FOOT( sub_1884() ))
                {
                    if ((sub_2678( ref l_U250 )) < 10.00000000)
                    {
                        sub_5903();
                    }
                }
            }
        }
        break;
        case 1:
        PRINTSTRING( "*****area check*****" );
        PRINTNL();
        break;
    }
    if (IS_CHAR_ON_FOOT( sub_1884() ))
    {
        switch (l_U199)
        {
            case 0:
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U250, g_U65012._fU0, g_U65012._fU4, g_U65012._fU8, ref l_U296._fU0, ref l_U296._fU4, ref l_U296._fU8 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U250, g_U65015._fU0, g_U65015._fU4, g_U65015._fU8, ref l_U299._fU0, ref l_U299._fU4, ref l_U299._fU8 );
            if (IS_CHAR_IN_ANGLED_AREA_3D( sub_1884(), l_U296._fU0, l_U296._fU4, l_U296._fU8, l_U299._fU0, l_U299._fU4, l_U299._fU8, 6.00000000, 0 ))
            {
                if (sub_6286())
                {
                    SET_PLAYER_CONTROL( sub_1174(), 0 );
                    DO_SCREEN_FADE_OUT( 100 );
                    CLEAR_PRINTS();
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    GET_CHAR_COORDINATES( sub_1884(), ref l_U275._fU0, ref l_U275._fU4, ref l_U275._fU8 );
                    CLEAR_AREA( l_U275._fU0, l_U275._fU4, l_U275._fU8, 40.00000000, 1 );
                    SET_CHAR_COORDINATES( sub_1884(), 1251.58700000, 716.31180000, 38.00000000 );
                    if (NOT (IS_CHAR_INJURED( l_U250 )))
                    {
                        SET_CHAR_COORDINATES( l_U250, 1249.08800000, 714.65220000, 38.00000000 );
                    }
                    if (DOES_VEHICLE_EXIST( l_U263 ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U263 ))
                        {
                            if (LOCATE_CAR_3D( l_U263, l_U275._fU0, l_U275._fU4, l_U275._fU8, 9.00000000, 9.00000000, 5.00000000, 0 ))
                            {
                                SET_CAR_HEADING( l_U263, 155.97520000 );
                                SET_CAR_COORDINATES( l_U263, 1259.17400000, 716.37530000, 38.00000000 );
                            }
                        }
                    }
                    CLEAR_AREA( l_U275._fU0, l_U275._fU4, l_U275._fU8, 40.00000000, 1 );
                    LOAD_ADDITIONAL_TEXT( "PIRAUD", 6 );
                    CLEAR_NAMED_CUTSCENE( "rpbad1" );
                    START_CUTSCENE_NOW( "rpbad1" );
                    while (NOT HAS_CUTSCENE_LOADED())
                    {
                        WAIT( 0 );
                    }
                    while (NOT HAS_CUTSCENE_FINISHED())
                    {
                        WAIT( 0 );
                    }
                    sub_6796();
                    sub_10947( 1 );
                    l_U214 = 1;
                    CLEAR_PRINTS();
                    PRINT_NOW( "BAD1_GOD12", 7500, 1 );
                    l_U200 = 0;
                }
            }
            break;
            default:
        }
    }
    return;
}

void sub_5903()
{
    if (IS_CHAR_ON_FOOT( sub_1884() ))
    {
        TASK_LOOK_AT_CHAR( sub_1884(), l_U250, 6000, 0 );
        l_U215 = 1;
    }
    l_U217 = 1;
    l_U198 = 1;
    return;
}

int sub_6286()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U26757)
    {
        return 0;
    }
    return 1;
}

void sub_6796()
{
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_1884(), 0 );
    CLEAR_WANTED_LEVEL( sub_1174() );
    SET_WANTED_MULTIPLIER( 0.10000000 );
    for ( l_U413 = 0; l_U413 <= 4; l_U413++ )
    {
        l_U417[l_U413] = 0;
    }
    REQUEST_MODEL( l_U403[0] );
    REQUEST_MODEL( l_U403[2] );
    REQUEST_ANIMS( "missbadman_1" );
    REQUEST_ANIMS( "gestures@niko" );
    GET_WEAPONTYPE_MODEL( 10, ref l_U410 );
    REQUEST_MODEL( l_U410 );
    GET_WEAPONTYPE_MODEL( 7, ref l_U411 );
    REQUEST_MODEL( l_U411 );
    GET_WEAPONTYPE_MODEL( 12, ref l_U409 );
    REQUEST_MODEL( l_U409 );
    # -sub_C1FFC0-0xc214c8( 0, ref l_U450 );
    # -sub_C1FFC0-0xc214c8( 2, ref l_U451 );
    LOAD_COMBAT_DECISION_MAKER( 0, ref l_U452 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U455 );
    LOAD_COMBAT_DECISION_MAKER( 3, ref l_U453 );
    # -sub_C1FFC0-0xc214c8( 3, ref l_U457 );
    LOAD_COMBAT_DECISION_MAKER( 1, ref l_U458 );
    LOAD_ADDITIONAL_TEXT( "WI_BAD1", 0 );
    sub_7150( "badman_1" );
    SET_MISSION_FLAG( 1 );
    sub_7338( l_U479, l_U414 );
    LOAD_ALL_OBJECTS_NOW();
    LOAD_SCENE( l_U284._fU0, l_U284._fU4, l_U284._fU8 );
    SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U453, 1 );
    SET_DECISION_MAKER_ATTRIBUTE_FIRE_RATE( l_U453, 2 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U453, 10 );
    if (NOT (IS_CHAR_INJURED( l_U250 )))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U250 );
        SET_CHAR_COORDINATES( l_U250, 1251.41200000, 713.14610000, 35.78370000 );
        SET_CHAR_HEADING( l_U250, 289.40000000 );
        GIVE_WEAPON_TO_CHAR( l_U250, 10, 30000, 1 );
        SET_CHAR_COORDINATES( sub_1884(), 1252.28800000, 715.75640000, 35.74420000 );
        SET_CHAR_HEADING( sub_1884(), 274.43250000 );
        sub_9848( ref l_U250, ref l_U457, ref l_U458 );
    }
    if ((NOT (HAS_CHAR_GOT_WEAPON( sub_1884(), 10 ))) AND (NOT (HAS_CHAR_GOT_WEAPON( sub_1884(), 11 ))))
    {
        GIVE_WEAPON_TO_CHAR( sub_1884(), 10, 30, 0 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_1884(), 10 ))
    {
        GET_AMMO_IN_CHAR_WEAPON( sub_1884(), 10, ref l_U443 );
        l_U236 = 1;
    }
    else
    {
        HAS_CHAR_GOT_WEAPON( sub_1884(), 11 );
        GET_AMMO_IN_CHAR_WEAPON( sub_1884(), 11, ref l_U443 );
    }
    l_U444 = 30 - l_U443;
    if (l_U444 < 0)
    {
        l_U444 = 0;
    }
    if (l_U236)
    {
        ADD_AMMO_TO_CHAR( sub_1884(), 10, l_U444 );
    }
    else
    {
        ADD_AMMO_TO_CHAR( sub_1884(), 11, l_U444 );
    }
    GET_GAME_TIMER( ref l_U449 );
    REMOVE_BLIP( l_U264 );
    l_U493._fU0 = l_U250;
    l_U493._fU8 = {1145.40300000, 450.48030000, 28.36880000};
    l_U493._fU20 = 335.93230000;
    l_U493._fU24 = {1150.90200000, 451.25740000, 28.45690000};
    l_U493._fU36 = 175.69790000;
    l_U493._fU40 = {1150.55600000, 449.82500000, 28.47520000};
    l_U493._fU52 = 354.42890000;
    l_U493._fU116[0] = {1148.28100000, 452.34770000, 29.60983000};
    l_U493._fU144[0] = {-4.93143500, 0.00000000, 112.73520000};
    l_U493._fU172[0] = 44.40000000;
    l_U493._fU116[1] = {1151.25200000, 449.15660000, 29.98047000};
    l_U493._fU144[1] = {-1.37207800, 1.37470500, 22.81723000};
    l_U493._fU172[1] = 37.20002000;
    l_U493._fU208[0] = 0;
    l_U493._fU208[1] = 1;
    l_U493._fU184[0] = 0.01000000;
    l_U493._fU196[0] = 150.00000000;
    l_U493._fU184[1] = 0.01000000;
    l_U493._fU196[1] = 20.00000000;
    l_U493._fU56 = {1122.86000000, 379.54000000, 100.00000000};
    l_U493._fU68 = {1171.71000000, 541.16000000, -100.00000000};
    l_U493._fU80 = {1133.59000000, 395.57000000, 100.00000000};
    l_U493._fU92 = {1181.63000000, 510.58000000, -100.00000000};
    l_U493._fU104 = {1197.15000000, 447.20000000, 24.00000000};
    l_U493._fU248 = "PIR_REACT";
    return;
}

void sub_7150(unknown uParam0)
{
    string sVar3;

    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    StrCopy( ref g_U9232, uParam0, 32 );
    sVar3 = "text_link_mission";
    if (IS_NETWORK_SESSION())
    {
        sVar3 = "txtlnkmiss_net";
    }
    while (NOT (HAS_SCRIPT_LOADED( sVar3 )))
    {
        REQUEST_SCRIPT( sVar3 );
        WAIT( 0 );
    }
    g_U9240 = START_NEW_SCRIPT( sVar3, 1024 );
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( sVar3 );
    return;
}

void sub_7338(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (g_U10978)
    {
        sub_693( "Interactions_Started: Already on a mission" );
        return;
    }
    uVar4 = sub_573( uParam0 );
    if (g_U34175._fU4)
    {
        sub_693( "Interactions_Started: Another interaction is already taking place" );
        return;
    }
    if (g_U0)
    {
        g_U34048[uVar4]._fU0 = 1;
        g_U34048[uVar4]._fU4 = 1;
        g_U34048[uVar4]._fU28 = uParam1;
    }
    if (NOT g_U34048[uVar4]._fU0)
    {
        sub_693( "Interactions_Started: This Random Character has been set to NOT allowToActivate" );
        return;
    }
    g_U34175._fU4 = 1;
    g_U34175._fU8 = uParam0;
    g_U34175._fU12 = uParam1;
    sub_7701();
    sub_8472( g_U34048[uVar4]._fU32 );
    g_U34048[uVar4]._fU32 = 0;
    sub_8616( uParam0, uParam1 );
    g_U10978 = 1;
    return;
}

void sub_7701()
{
    sub_7710();
    sub_7813( ref g_U9893._fU68 );
    sub_7862();
    return;
}

void sub_7710()
{
    g_U9893._fU4 = 0;
    g_U9893._fU8 = 0;
    g_U9893._fU12 = 0;
    g_U9893._fU16 = 0;
    g_U9893._fU20 = 0;
    g_U9893._fU28 = 0;
    g_U9893._fU32 = 0;
    g_U9893._fU36 = 0;
    g_U9893._fU48 = 0;
    return;
}

void sub_7813(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_7862()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_7900( 1, g_U569[I] )) == 0)
        {
            sub_8151( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_8329())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    g_U91._fU404 = 1000;
    return;
}

int sub_7900(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_8151(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_8236( g_U569 - 1 );
    return;
}

void sub_8236(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_8329()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_7900( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_8472(int iParam0)
{
    g_U34175._fU16._fU4 += iParam0;
    sub_8506();
    INCREMENT_INT_STAT( 286, iParam0 );
    return;
}

void sub_8506()
{
    if (g_U0)
    {
        return;
    }
    if (g_U34175._fU16._fU4 < g_U34175._fU16._fU0)
    {
        return;
    }
    AWARD_ACHIEVEMENT( 36 );
    return;
}

void sub_8616(unknown uParam0, int iParam1)
{
    char[16] cVar4;
    int iVar8;

    StrCopy( ref cVar4, "", 16 );
    iVar8 = -1;
    switch (uParam0)
    {
        case 38:
        StrCopy( ref cVar4, "BADMAN", 16 );
        iVar8 = 1;
        break;
        case 39:
        StrCopy( ref cVar4, "BRIAN", 16 );
        iVar8 = 3;
        break;
        case 40:
        StrCopy( ref cVar4, "CHERISE", 16 );
        iVar8 = 1;
        break;
        case 41:
        StrCopy( ref cVar4, "EDDIE", 16 );
        iVar8 = 2;
        break;
        case 42:
        StrCopy( ref cVar4, "GRACIE", 16 );
        iVar8 = 1;
        break;
        case 43:
        StrCopy( ref cVar4, "HOSSAN", 16 );
        iVar8 = 1;
        break;
        case 44:
        StrCopy( ref cVar4, "ILYENA", 16 );
        iVar8 = 1;
        break;
        case 45:
        StrCopy( ref cVar4, "IVAN", 16 );
        iVar8 = 1;
        break;
        case 46:
        StrCopy( ref cVar4, "JEFF", 16 );
        iVar8 = 3;
        break;
        case 47:
        StrCopy( ref cVar4, "MARNIE", 16 );
        iVar8 = 2;
        break;
        case 48:
        StrCopy( ref cVar4, "CLARENCE", 16 );
        iVar8 = 1;
        break;
        case 49:
        StrCopy( ref cVar4, "MEL", 16 );
        iVar8 = 1;
        break;
        case 50:
        StrCopy( ref cVar4, "PATHOS", 16 );
        iVar8 = 2;
        break;
        case 51:
        StrCopy( ref cVar4, "SARA", 16 );
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
    sub_9462( cVar4 );
    return;
}

void sub_9462(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (NOT (COMPARE_STRING( ref g_U9926, "" )))
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Started: g_labelPlayerStatMissionName is already set up" );
        return;
    }
    g_U9926 = {uParam0};
    PLAYSTATS_MISSION_STARTED( ref g_U9926 );
    return;
}

void sub_9848(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            SET_CHAR_DECISION_MAKER( (uParam0^), (uParam1^) );
            SET_COMBAT_DECISION_MAKER( (uParam0^), (uParam2^) );
            N_1061756705( (uParam1^), 12 );
            N_1061756705( (uParam1^), 9 );
            N_1061756705( (uParam1^), 7 );
            N_1061756705( (uParam1^), 15 );
            N_1061756705( (uParam1^), 31 );
            N_1061756705( (uParam1^), 43 );
            N_1061756705( (uParam1^), 36 );
            N_1061756705( (uParam1^), 37 );
            N_1061756705( (uParam1^), 13 );
            N_1061756705( (uParam1^), 56 );
            N_1061756705( (uParam1^), 79 );
            N_1061756705( (uParam1^), 11 );
            N_1061756705( (uParam1^), 20 );
            N_1061756705( (uParam1^), 46 );
            N_1061756705( (uParam1^), 44 );
            N_1061756705( (uParam1^), 125 );
            N_1061756705( (uParam1^), 17 );
            ADD_CHAR_DECISION_MAKER_EVENT_RESPONSE( (uParam1^), 31, 413, 0, 100, 100, 100, 0, 1 );
            ADD_CHAR_DECISION_MAKER_EVENT_RESPONSE( (uParam1^), 31, 412, 0, 10, 10, 10, 0, 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^), 0 );
        }
    }
    return;
}

void sub_10947(boolean bParam0)
{
    CLEAR_PRINTS();
    CLEAR_HELP();
    sub_1979( 0 );
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    SET_WIDESCREEN_BORDERS( 0 );
    if (IS_PLAYER_PLAYING( sub_1174() ))
    {
        SET_INTERP_IN_OUT_VEHICLE_ENABLED_THIS_FRAME( 0 );
        SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 0 );
        SET_CAM_BEHIND_PED( sub_1884() );
        if (bParam0)
        {
            CLEAR_CHAR_TASKS( sub_1884() );
        }
        SET_PLAYER_CONTROL( sub_1174(), 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1884(), 0 );
    }
    ALLOW_EMERGENCY_SERVICES( 1 );
    DO_SCREEN_FADE_IN( 500 );
    return;
}

int sub_11326(unknown uParam0)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        return IS_CHAR_INJURED( (uParam0^) );
    }
    return 0;
}

void sub_11539()
{
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_1884(), l_U327._fU0, l_U327._fU4, l_U327._fU8, 200.00000000, 200.00000000, 200.00000000, 0 ))
    {
        if (NOT l_U246)
        {
            SET_PED_DENSITY_MULTIPLIER( 0.20000000 );
            SET_CAR_DENSITY_MULTIPLIER( 0.20000000 );
            l_U246 = 1;
        }
    }
    else if (l_U246)
    {
        SET_PED_DENSITY_MULTIPLIER( 0.20000000 );
        SET_CAR_DENSITY_MULTIPLIER( 0.20000000 );
        l_U246 = 0;
    }
    return;
}

void sub_11696()
{
    sub_11705();
    switch (l_U201)
    {
        case 0:
        if (sub_14989( ref l_U250, l_U448 ))
        {
            sub_1979( 0 );
            CLEAR_PRINTS();
            PRINT_NOW( "BAD1_PROMPT_2", 7500, 1 );
            sub_2967();
        }
        sub_15183( ref l_U250, ref l_U463, ref l_U371, ref l_U397, ref l_U249, 0.50000000, "argue_b", "missbadman_1", 1, 0 );
        sub_15536( ref l_U250, ref l_U264, "BAD1_GOD13", "BAD1_GOD12" );
        if (NOT l_U247)
        {
            if (sub_11902( ref l_U449, 500 ))
            {
                SAY_AMBIENT_SPEECH( l_U250, "NEED_A_VEHICLE", 1, 0, 2 );
                l_U247 = 1;
            }
        }
        if (sub_15768( l_U250 ))
        {
            if (DOES_BLIP_EXIST( l_U264 ))
            {
                CLEAR_CHAR_TASKS( l_U250 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U250, 0 );
                sub_15907( ref l_U250, ref l_U460, ref l_U456, 0 );
                REMOVE_BLIP( l_U264 );
                CLEAR_PRINTS();
                for ( l_U413 = 0; l_U413 <= 4; l_U413++ )
                {
                    CREATE_CHAR( 26, l_U403[l_U413], l_U308[l_U413]._fU0, l_U308[l_U413]._fU4, l_U308[l_U413]._fU8, ref l_U252[l_U413], 1 );
                    SET_CHAR_HEADING( l_U252[l_U413], l_U374[l_U413] );
                    SET_CHAR_HEALTH( l_U252[l_U413], l_U431[l_U413] );
                    GIVE_WEAPON_TO_CHAR( l_U252[l_U413], 7, 30000, 0 );
                    ADD_BLIP_FOR_CHAR( l_U252[l_U413], ref l_U267[l_U413] );
                    SET_CHAR_IS_TARGET_PRIORITY( l_U252[l_U413], 1 );
                    SET_CHAR_MONEY( l_U252[l_U413], 100 );
                }
                SET_CHAR_COMPONENT_VARIATION( l_U252[0], 1, 0, 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U252[0], 0, 0, 0 );
                SET_CHAR_PROP_INDEX( l_U252[0], 0, 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U252[1], 1, 2, 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U252[1], 0, 1, 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U252[2], 1, 0, 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U252[2], 0, 0, 0 );
                SET_CHAR_PROP_INDEX( l_U252[2], 0, 0 );
                SET_CHAR_PROP_INDEX( l_U252[2], 1, 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U252[3], 1, 1, 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U252[3], 0, 1, 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U252[4], 1, 0, 1 );
                SET_CHAR_COMPONENT_VARIATION( l_U252[4], 0, 0, 1 );
                SET_CHAR_PROP_INDEX( l_U252[4], 1, 0 );
                ADD_COVER_POINT( 1757.54000000, 597.47000000, 28.57000000, 2, 12.19260000, 0, 0, ref l_U471[0] );
                ADD_COVER_POINT( 1767.78600000, 597.49900000, 28.83000000, 2, 35.08550000, 0, 0, ref l_U471[4] );
                REMOVE_WEAPON_FROM_CHAR( l_U252[0], 12 );
                GIVE_WEAPON_TO_CHAR( l_U252[0], 12, 30000, 0 );
                TASK_TURN_CHAR_TO_FACE_CHAR( l_U252[0], l_U252[1] );
                TASK_TURN_CHAR_TO_FACE_CHAR( l_U252[1], l_U252[0] );
                TASK_TURN_CHAR_TO_FACE_CHAR( l_U252[3], l_U252[4] );
                TASK_TURN_CHAR_TO_FACE_CHAR( l_U252[4], l_U252[3] );
                sub_17056( l_U252[0], "argue_b", "missbadman_1", l_U464[1], l_U252[1], 999999 );
                sub_17056( l_U252[3], "street_chat_b", "missbadman_1", l_U464[3], l_U252[4], 999999 );
                SET_ROUTE( l_U267[0], 1 );
                sub_17311( ref l_U267[0], 761.45140000, 614.20680000, 28.77080000, 272.00000000 );
                SET_CREATE_RANDOM_COPS( 0 );
                CLEAR_AREA_OF_COPS( l_U327._fU0, l_U327._fU4, l_U327._fU8, 100.00000000 );
                ADD_SCENARIO_BLOCKING_AREA( 1793.41600000, 611.55980000, 100, 1734.80200000, 578.65540000, -100.00000000 );
                l_U201 = 1;
            }
        }
        break;
        case 1:
        sub_17519( ref l_U264, ref l_U252, ref l_U267, "BAD1_GOD15", "BAD1_GOD14", ref l_U238, 0, 0.00000000, 0.00000000, 0.00000000, 0.00000000 );
        if (NOT l_U238)
        {
            sub_17906( ref l_U250, ref l_U264, ref l_U252, ref l_U267, "BAD1_GOD11", "BAD1_GOD15", 0, 0.00000000, 0.00000000, 0.00000000, 0.00000000, ref l_U460, ref l_U456 );
        }
        else
        {
            sub_18439( ref l_U250, ref l_U264, "BAD1_GOD11", ref l_U460, ref l_U456 );
        }
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_1884(), l_U327._fU0, l_U327._fU4, l_U327._fU8, 25.00000000, 20.00000000, 20.00000000, 0 ))
        {
            CLEAR_PRINTS();
            sub_1979( 0 );
            l_U203 = 6;
            sub_11705();
            if (HAS_CHAR_GOT_WEAPON( sub_1884(), 10 ))
            {
                SET_CURRENT_CHAR_WEAPON( sub_1884(), 10, 1 );
            }
            SET_CURRENT_CHAR_WEAPON( l_U250, 10, 1 );
            for ( l_U413 = 0; l_U413 <= (l_U252 - 1); l_U413++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U252[l_U413] )))
                {
                    if (NOT (DOES_BLIP_EXIST( l_U267[l_U413] )))
                    {
                        ADD_BLIP_FOR_CHAR( l_U252[l_U413], ref l_U267[l_U413] );
                    }
                }
            }
            l_U201 = 2;
        }
        break;
        case 2:
        sub_18907( ref l_U250, ref l_U264, ref l_U252, ref l_U267, "BAD1_PROMPT_5", "BAD1_GOD6" );
        if (NOT l_U245)
        {
            if (((sub_19518( ref l_U252, ref l_U431 )) || (sub_19829( ref l_U252, 5.00000000, 1 ))) || (sub_20068()))
            {
                if (NOT (IS_CHAR_INJURED( l_U252[0] )))
                {
                    SAY_AMBIENT_SPEECH( l_U252[0], "Gang_Attack_Warning", 1, 1, 2 );
                }
                GET_GAME_TIMER( ref l_U447 );
                l_U245 = 1;
            }
        }
        else if (sub_11902( ref l_U447, 1000 ))
        {
            l_U203 = 8;
            sub_11705();
            STOP_PED_SPEAKING( sub_1884(), 0 );
            SET_ALL_RANDOM_PEDS_FLEE( sub_1174(), 1 );
            if (NOT (IS_CHAR_INJURED( l_U252[0] )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U252[0], 1 );
                TASK_SEEK_COVER_TO_COVER_POINT( l_U252[0], l_U471[0], l_U275._fU0, l_U275._fU4, l_U275._fU8, 0 );
            }
            if (NOT (IS_CHAR_INJURED( l_U252[4] )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U252[4], 1 );
                TASK_SEEK_COVER_TO_COVER_POINT( l_U252[4], l_U471[4], l_U275._fU0, l_U275._fU4, l_U275._fU8, 0 );
            }
            SET_RELATIONSHIP( 5, 0, 23 );
            SET_RELATIONSHIP( 5, 23, 0 );
            for ( l_U413 = 0; l_U413 <= 4; l_U413++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U252[l_U413] )))
                {
                    CLEAR_CHAR_TASKS( l_U252[l_U413] );
                    SET_COMBAT_DECISION_MAKER( l_U252[l_U413], l_U455 );
                    SET_CHAR_WILL_USE_COVER( l_U252[l_U413], 1 );
                    SET_CHAR_RELATIONSHIP_GROUP( l_U252[l_U413], 23 );
                }
            }
            GET_CHAR_COORDINATES( sub_1884(), ref l_U275._fU0, ref l_U275._fU4, ref l_U275._fU8 );
            if (IS_PED_IN_GROUP( l_U250 ))
            {
                CLEAR_CHAR_TASKS( l_U250 );
                sub_15907( ref l_U250, ref l_U460, ref l_U456, 1 );
                SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U250, 0 );
                SET_CHAR_CANT_BE_DRAGGED_OUT( l_U250, 0 );
                SET_CHAR_DECISION_MAKER( l_U250, l_U451 );
                sub_20825( ref l_U250, ref l_U455 );
            }
            if (DOES_BLIP_EXIST( l_U264 ))
            {
                REMOVE_BLIP( l_U264 );
                for ( l_U413 = 0; l_U413 <= 4; l_U413++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U252[l_U413] )))
                    {
                        ADD_BLIP_FOR_CHAR( l_U252[l_U413], ref l_U267[l_U413] );
                    }
                }
            }
            l_U200 = 2;
        }
        break;
    }
    if ((IS_KEYBOARD_KEY_PRESSED( 36 )) AND (NOT (l_U437[0] == 1)))
    {
        SET_CHAR_COORDINATES( sub_1884(), 1761.45100000, 614.20680000, 28.77080000 );
        SET_CHAR_HEADING( sub_1884(), 272.00000000 );
        l_U437[0] = 1;
    }
    return;
}

void sub_11705()
{
    switch (l_U203)
    {
        case 0:
        if (sub_11815( ref l_U250, ref l_U263, 1 ))
        {
            sub_12094( "PIR_GO", ref l_U480[0], 8, 1 );
            l_U203 = 1;
        }
        break;
        case 1:
        if (NOT (sub_13075( l_U480[0] )))
        {
            if (sub_11815( ref l_U250, ref l_U263, 1 ))
            {
                PRINT_NOW( "BAD1_GOD15", 7500, 1 );
                GET_GAME_TIMER( ref l_U423 );
                l_U203 = 2;
            }
        }
        break;
        case 2:
        if (sub_11815( ref l_U250, ref l_U263, 1 ))
        {
            switch (g_U65020)
            {
                case 0:
                if (sub_11902( ref l_U423, 7500 ))
                {
                    CLEAR_PRINTS();
                    sub_12094( "PIR_BANT1", ref l_U480[0], 8, 1 );
                    l_U203 = 4;
                }
                break;
                case 1:
                if (sub_11902( ref l_U423, 7500 ))
                {
                    CLEAR_PRINTS();
                    sub_12094( "PIR_BANT2", ref l_U480[0], 8, 1 );
                    l_U203 = 4;
                }
                break;
                case 2: break;
            }
        }
        break;
        case 4:
        switch (g_U65020)
        {
            case 0:
            if (sub_11815( ref l_U250, ref l_U263, 1 ))
            {
                BLOCK_CHAR_AMBIENT_ANIMS( l_U250, 1 );
                BLOCK_CHAR_AMBIENT_ANIMS( sub_1884(), 1 );
                if (l_U234)
                {
                    sub_13613( "PIR_BANT1", ref l_U480[0], 8, 1 );
                    l_U234 = 0;
                }
                if (NOT (sub_13075( l_U480[0] )))
                {
                    l_U203 = 12;
                }
            }
            else if (NOT l_U234)
            {
                if (sub_13075( l_U480[0] ))
                {
                    sub_13798( ref l_U480[0] );
                    l_U234 = 1;
                }
            }
            break;
            case 1:
            if (sub_11815( ref l_U250, ref l_U263, 1 ))
            {
                BLOCK_CHAR_AMBIENT_ANIMS( l_U250, 1 );
                BLOCK_CHAR_AMBIENT_ANIMS( sub_1884(), 1 );
                if (l_U234)
                {
                    sub_13613( "PIR_BANT2", ref l_U480[0], 8, 1 );
                    l_U234 = 0;
                }
                if (NOT (sub_13075( l_U480[0] )))
                {
                    l_U203 = 12;
                }
            }
            else if (NOT l_U234)
            {
                if (sub_13075( l_U480[0] ))
                {
                    sub_13798( ref l_U480[0] );
                    l_U234 = 1;
                }
            }
            break;
            case 2: break;
        }
        break;
        case 6:
        if (sub_11815( ref l_U250, ref l_U263, 0 ))
        {
            sub_12094( "PIR_ARRIVE", ref l_U480[0], 8, 1 );
            l_U234 = 0;
            l_U203 = 7;
        }
        break;
        case 7:
        if (sub_11815( ref l_U250, ref l_U263, 0 ))
        {
            if (l_U234)
            {
                sub_13613( "PIR_ARRIVE", ref l_U480[0], 8, 1 );
                l_U234 = 0;
            }
            if (NOT (sub_13075( l_U480[0] )))
            {
                CLEAR_PRINTS();
                PRINT_NOW( "BAD1_GOD6", 7500, 0 );
                l_U203 = 12;
            }
        }
        else if (NOT l_U234)
        {
            if (sub_13075( l_U480[0] ))
            {
                sub_13798( ref l_U480[0] );
                l_U234 = 1;
            }
        }
        break;
        case 8:
        if (sub_11815( ref l_U250, ref l_U263, 0 ))
        {
            sub_12094( "PIR_STEP2", ref l_U480[0], 8, 1 );
            l_U234 = 0;
            l_U203 = 9;
        }
        break;
        case 9:
        if (sub_11815( ref l_U250, ref l_U263, 0 ))
        {
            if (l_U234)
            {
                sub_13613( "PIR_STEP2", ref l_U480[0], 8, 1 );
                l_U234 = 0;
            }
            if (NOT (sub_13075( l_U480[0] )))
            {
                l_U203 = 10;
            }
        }
        else if (NOT l_U234)
        {
            if (sub_13075( l_U480[0] ))
            {
                sub_13798( ref l_U480[0] );
                l_U234 = 1;
            }
        }
        break;
        case 10:
        if (sub_11815( ref l_U250, ref l_U263, 0 ))
        {
            sub_12094( "PIR_FIGHT", ref l_U480[0], 8, 1 );
            l_U203 = 12;
        }
        break;
        case 12: break;
    }
    return;
}

int sub_11815(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if (IS_PED_IN_GROUP( (uParam0^) ))
        {
            if (bParam2)
            {
                if (IS_WANTED_LEVEL_GREATER( sub_1174(), 0 ))
                {
                    GET_GAME_TIMER( ref l_U118 );
                    return 0;
                }
                if (NOT (sub_11902( ref l_U118, 3000 )))
                {
                    return 0;
                }
            }
            if ((IS_CHAR_ON_FOOT( (uParam0^) )) AND (IS_CHAR_ON_FOOT( sub_1884() )))
            {
                return 1;
            }
            if (DOES_VEHICLE_EXIST( (uParam1^) ))
            {
                if (IS_VEH_DRIVEABLE( (uParam1^) ))
                {
                    if ((IS_CHAR_SITTING_IN_CAR( (uParam0^), (uParam1^) )) AND (IS_CHAR_SITTING_IN_CAR( sub_1884(), (uParam1^) )))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_11902(unknown uParam0, int iParam1)
{
    GET_GAME_TIMER( ref l_U113 );
    if ((l_U113 - (uParam0^)) > iParam1)
    {
        return 1;
    }
    return 0;
}

void sub_12094(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_12115( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3 );
}

void sub_12115(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_12169( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_12169(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_12191( iParam1 )))
    {
        return 0;
    }
    l_U4._fU384 = 0;
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
    for ( I = 0; I <= (g_U8499 - 1); I++ )
    {
        StrCopy( ref g_U8499[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U8499[I] = {(uParam0^)[I]};
    }
    g_U8493 = {(iParam1^)};
    sub_12879( ref g_U8395, ref l_U4 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_12191(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_12268( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U556[1] ))
    {
        switch (g_U91._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_12268( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 > iParam0->_fU0)
        {
            sub_12268( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8392 = iParam0->_fU0;
    g_U8393++;
    if (g_U8393 > 100000)
    {
        g_U8393 = 1;
    }
    iParam0->_fU4 = g_U8393;
    return 1;
}

void sub_12268(unknown uParam0)
{
    return;
}

void sub_12879(int iParam0, int iParam1)
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

int sub_13075(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_12268( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_12268( "\n speech is not playing" );
    }
    return 0;
}

void sub_13613(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_13634( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3 );
}

int sub_13634(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
    if (iParam2->_fU12)
    {
        StrCopy( ref cVar11[0], uParam0, 16 );
        StrCopy( ref cVar11[1], "END", 16 );
        return sub_12169( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_13798(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_12268( "\n already paused" );
    }
    else if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_12268( "\n CONVERSATION PAUSED AT LINE " );
            sub_13954( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_12268( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_12268( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_12268( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_13954(unknown uParam0)
{
    return;
}

int sub_14989(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            GET_CHAR_HEALTH( (uParam0^), ref iVar4 );
            iVar5 = ROUND( uParam1 * 0.80000000 );
            if (iVar4 < iVar5)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_15183(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, boolean bParam9)
{
    int iVar12;

    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if (NOT (uParam4^))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( (uParam0^), iParam2->_fU0, iParam2->_fU4, iParam2->_fU8, uParam5, uParam5, 1.80000000, 0 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^), 1 );
                TASK_FLUSH_ROUTE();
                TASK_EXTEND_ROUTE( iParam2->_fU0, iParam2->_fU4, iParam2->_fU8 );
                OPEN_SEQUENCE_TASK( uParam1 );
                TASK_FOLLOW_POINT_ROUTE( 0, 3, 0 );
                TASK_ACHIEVE_HEADING( 0, (uParam3^) );
                CLOSE_SEQUENCE_TASK( (uParam1^) );
                TASK_PERFORM_SEQUENCE( (uParam0^), (uParam1^) );
                CLEAR_SEQUENCE_TASK( (uParam1^) );
                (uParam4^) = 1;
            }
        }
        else
        {
            PRINTSTRING( "fail 0" );
            PRINTNL();
            GET_SCRIPT_TASK_STATUS( (uParam0^), 29, ref iVar12 );
            if (iVar12 == 7)
            {
                PRINTSTRING( "fail 1" );
                PRINTNL();
                if (bParam9)
                {
                    TASK_PLAY_ANIM( (uParam0^), uParam6, uParam7, 8.00000000, 1, 0, 0, 0, -2 );
                }
                (uParam4^) = 0;
                if (bParam8)
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^), 0 );
                }
            }
        }
    }
    return;
}

void sub_15536(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (NOT (DOES_BLIP_EXIST( (uParam1^) )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_1884() ))
        {
            ADD_BLIP_FOR_CHAR( (uParam0^), uParam1 );
            SET_BLIP_AS_FRIENDLY( (uParam1^), 1 );
            CLEAR_PRINTS();
            PRINT_NOW( uParam2, 7500, 1 );
        }
    }
    else if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1884() )))
    {
        if (DOES_BLIP_EXIST( (uParam1^) ))
        {
            REMOVE_BLIP( (uParam1^) );
        }
        CLEAR_PRINTS();
        PRINT_NOW( uParam3, 7500, 1 );
    }
    return;
}

int sub_15768(unknown uParam0)
{
    if ((sub_2678( ref uParam0 )) < 10.00000000)
    {
        return 1;
    }
    if ((IS_PLAYER_PRESSING_HORN( sub_1174() )) AND ((sub_2678( ref uParam0 )) < (10.00000000 * 2.00000000)))
    {
        return 1;
    }
    return 0;
}

void sub_15907(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    switch (uParam3)
    {
        case 0:
        if (DOES_GROUP_EXIST( (uParam1^) ))
        {
            REMOVE_GROUP( (uParam1^) );
        }
        if (IS_PED_IN_GROUP( (uParam0^) ))
        {
            REMOVE_CHAR_FROM_GROUP( (uParam0^) );
        }
        if (DOES_DECISION_MAKER_EXIST( (uParam2^) ))
        {
            REMOVE_DECISION_MAKER( (uParam2^) );
        }
        if (sub_16020( uParam0, uParam1 ))
        {
            COPY_GROUP_CHAR_DECISION_MAKER( 65537, uParam2 );
            SET_GROUP_CHAR_DECISION_MAKER( (uParam0^), (uParam2^) );
        }
        break;
        case 1:
        if (DOES_GROUP_EXIST( (uParam1^) ))
        {
            REMOVE_GROUP( (uParam1^) );
        }
        if (IS_PED_IN_GROUP( (uParam0^) ))
        {
            REMOVE_CHAR_FROM_GROUP( (uParam0^) );
        }
        if (DOES_DECISION_MAKER_EXIST( (uParam2^) ))
        {
            REMOVE_DECISION_MAKER( (uParam2^) );
        }
        if (sub_16020( uParam0, uParam1 ))
        {
            COPY_GROUP_CHAR_DECISION_MAKER( 65536, uParam2 );
            SET_GROUP_CHAR_DECISION_MAKER( (uParam0^), (uParam2^) );
        }
        break;
    }
    return;
}

int sub_16020(unknown uParam0, unknown uParam1)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            GET_PLAYER_GROUP( sub_1174(), uParam1 );
            SET_GROUP_MEMBER( (uParam1^), (uParam0^) );
            return 1;
        }
    }
    return 0;
}

void sub_17056(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_CHAR_INJURED( uParam4 )))
        {
            CLEAR_SEQUENCE_TASK( uParam3 );
            CLEAR_CHAR_TASKS( uParam0 );
            OPEN_SEQUENCE_TASK( ref uParam3 );
            TASK_TURN_CHAR_TO_FACE_CHAR( 0, uParam4 );
            TASK_LOOK_AT_CHAR( 0, uParam4, -2, 0 );
            TASK_PLAY_ANIM( 0, uParam1, uParam2, 8.00000000, 1, 0, 0, 0, uParam5 );
            CLOSE_SEQUENCE_TASK( uParam3 );
            TASK_PERFORM_SEQUENCE( uParam0, uParam3 );
            CLEAR_SEQUENCE_TASK( uParam3 );
        }
    }
    return;
}

void sub_17311(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2220 = (uParam0^);
        g_U2235 = {uParam1};
        g_U2233 = uParam4;
    }
    return;
}

void sub_17519(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, boolean bParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    int I;
    boolean bVar14;

    bVar14 = false;
    if (IS_WANTED_LEVEL_GREATER( sub_1174(), 0 ))
    {
        if (NOT (uParam5^))
        {
            for ( I = 0; I <= ((uParam1^) - 1); I++ )
            {
                if (DOES_BLIP_EXIST( (uParam2^)[I] ))
                {
                    REMOVE_BLIP( (uParam2^)[I] );
                }
            }
            PRINT_NOW( uParam4, 7500, 1 );
            (uParam5^) = 1;
        }
    }
    else if ((uParam5^))
    {
        CLEAR_THIS_PRINT( uParam4 );
        (uParam5^) = 0;
        if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
        {
            for ( I = 0; I <= ((uParam1^) - 1); I++ )
            {
                if (NOT (IS_CHAR_INJURED( (uParam1^)[I] )))
                {
                    ADD_BLIP_FOR_CHAR( (uParam1^)[I], ref (uParam2^)[I] );
                    if (bParam6)
                    {
                        if (NOT bVar14)
                        {
                            sub_17311( ref (uParam2^)[I], uParam7, uParam10 );
                            bVar14 = true;
                        }
                    }
                }
            }
            CLEAR_PRINTS();
            PRINT( uParam3, 7500, 1 );
        }
    }
    return;
}

void sub_17906(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, boolean bParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12)
{
    int I;

    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if (sub_17933( uParam3 ))
        {
            if (NOT (IS_PED_IN_GROUP( (uParam0^) )))
            {
                for ( I = 0; I <= ((uParam3^) - 1); I++ )
                {
                    if (DOES_BLIP_EXIST( (uParam3^)[I] ))
                    {
                        REMOVE_BLIP( (uParam3^)[I] );
                    }
                }
                ADD_BLIP_FOR_CHAR( (uParam0^), uParam1 );
                SET_BLIP_AS_FRIENDLY( (uParam1^), 1 );
                CLEAR_PRINTS();
                PRINT( uParam4, 7500, 1 );
            }
        }
        else if ((sub_2678( uParam0 )) < 12.00000000)
        {
            if (DOES_BLIP_EXIST( (uParam1^) ))
            {
                REMOVE_BLIP( (uParam1^) );
                sub_15907( uParam0, uParam11, uParam12, 0 );
                for ( I = 0; I <= ((uParam3^) - 1); I++ )
                {
                    if (NOT (IS_CHAR_INJURED( (uParam2^)[I] )))
                    {
                        ADD_BLIP_FOR_CHAR( (uParam2^)[I], ref (uParam3^)[I] );
                    }
                }
                for ( I = 0; I <= ((uParam3^) - 1); I++ )
                {
                    if (sub_17933( uParam3 ))
                    {
                        SET_ROUTE( (uParam3^)[I], 1 );
                        I = (uParam3^);
                    }
                }
                if (bParam6)
                {
                    if (DOES_BLIP_EXIST( (uParam3^)[I] ))
                    {
                        sub_17311( ref (uParam3^)[I], uParam7, uParam10 );
                    }
                }
                CLEAR_PRINTS();
                PRINT( uParam5, 7500, 1 );
            }
        }
    }
    return;
}

int sub_17933(unknown uParam0)
{
    int I;

    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        if (DOES_BLIP_EXIST( (uParam0^)[I] ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_18439(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;

    if (NOT (DOES_BLIP_EXIST( (uParam1^) )))
    {
        if (NOT (IS_PED_IN_GROUP( (uParam0^) )))
        {
            ADD_BLIP_FOR_CHAR( (uParam0^), uParam1 );
            SET_BLIP_AS_FRIENDLY( (uParam1^), 1 );
            CLEAR_PRINTS();
            PRINT( uParam2, 7500, 1 );
        }
    }
    else if (NOT (IS_PED_IN_GROUP( (uParam0^) )))
    {
        if ((sub_2678( uParam0 )) < 12.00000000)
        {
            if (DOES_BLIP_EXIST( (uParam1^) ))
            {
                REMOVE_BLIP( (uParam1^) );
            }
            sub_15907( uParam0, uParam3, uParam4, 0 );
        }
    }
    return;
}

void sub_18907(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if (sub_18936( uParam2, uParam3 ))
        {
            if (NOT (IS_PED_IN_GROUP( (uParam0^) )))
            {
                sub_19087( uParam3 );
                ADD_BLIP_FOR_CHAR( (uParam0^), uParam1 );
                SET_BLIP_AS_FRIENDLY( (uParam1^), 1 );
                CLEAR_PRINTS();
                PRINT( uParam4, 5000, 1 );
            }
        }
        else if ((sub_2678( uParam0 )) < 12.00000000)
        {
            if (DOES_BLIP_EXIST( (uParam1^) ))
            {
                REMOVE_BLIP( (uParam1^) );
                GET_PLAYER_GROUP( sub_1174(), ref l_U460 );
                SET_GROUP_MEMBER( l_U460, (uParam0^) );
                SET_PLAYER_GROUP_TO_FOLLOW_ALWAYS( sub_1174(), 1 );
                sub_19321( uParam2, uParam3 );
                CLEAR_PRINTS();
                PRINT( uParam5, 5000, 1 );
            }
        }
    }
    return;
}

int sub_18936(unknown uParam0, unknown uParam1)
{
    for ( l_U413 = 0; l_U413 <= ((uParam0^) - 1); l_U413++ )
    {
        if (DOES_CHAR_EXIST( (uParam0^)[l_U413] ))
        {
            if (NOT (IS_CHAR_INJURED( (uParam0^)[l_U413] )))
            {
                if (DOES_BLIP_EXIST( (uParam1^)[l_U413] ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_19087(unknown uParam0)
{
    for ( l_U413 = 0; l_U413 <= ((uParam0^) - 1); l_U413++ )
    {
        if (DOES_BLIP_EXIST( (uParam0^)[l_U413] ))
        {
            REMOVE_BLIP( (uParam0^)[l_U413] );
        }
    }
    return;
}

void sub_19321(unknown uParam0, unknown uParam1)
{
    for ( l_U413 = 0; l_U413 <= ((uParam0^) - 1); l_U413++ )
    {
        if (DOES_CHAR_EXIST( (uParam0^)[l_U413] ))
        {
            if (NOT (IS_CHAR_INJURED( (uParam0^)[l_U413] )))
            {
                if (NOT (DOES_BLIP_EXIST( (uParam1^)[l_U413] )))
                {
                    ADD_BLIP_FOR_CHAR( (uParam0^)[l_U413], ref (uParam1^)[l_U413] );
                }
            }
        }
    }
    return;
}

void sub_19518(unknown uParam0, unknown uParam1)
{
    return sub_19537( ref (uParam0^)[0], uParam0, uParam1, 1 );
}

int sub_19537(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    int I;
    int iVar7;

    if (bParam3)
    {
        for ( I = 0; I <= ((uParam1^) - 1); I++ )
        {
            if (DOES_CHAR_EXIST( (uParam1^)[I] ))
            {
                if (NOT (IS_CHAR_INJURED( (uParam1^)[I] )))
                {
                    GET_CHAR_HEALTH( (uParam1^)[I], ref iVar7 );
                    if (((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( (uParam1^)[I], sub_1884(), 0 )) || (iVar7 < (uParam2^)[I])) || (IS_CHAR_RESPONDING_TO_EVENT( (uParam1^)[I], 9 )))
                    {
                        return 1;
                    }
                }
                else
                {
                    return 1;
                }
            }
        }
    }
    else if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            GET_CHAR_HEALTH( (uParam0^), ref iVar7 );
            if (((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( (uParam0^), sub_1884(), 0 )) || (iVar7 < (uParam2^)[0])) || (IS_CHAR_RESPONDING_TO_EVENT( (uParam0^), 9 )))
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

int sub_19829(unknown uParam0, float fParam1, boolean bParam2)
{
    int I;

    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^)[I] )))
        {
            if ((sub_2678( ref (uParam0^)[I] )) < fParam1)
            {
                if (HAS_CHAR_SPOTTED_CHAR( (uParam0^)[I], sub_1884() ))
                {
                    if (IS_PLAYER_TARGETTING_CHAR( sub_1174(), (uParam0^)[I] ))
                    {
                        return 1;
                    }
                    if (bParam2)
                    {
                        if (HAS_CHAR_GOT_WEAPON( sub_1884(), 57 ))
                        {
                            return 1;
                        }
                    }
                }
                if (IS_CHAR_SHOOTING( sub_1884() ))
                {
                    return 1;
                }
            }
            if ((sub_2678( ref (uParam0^)[I] )) < 10.00000000)
            {
                if (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_1174(), (uParam0^)[I] ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_20068()
{
    for ( l_U413 = 0; l_U413 <= (l_U252 - 1); l_U413++ )
    {
        if (DOES_CHAR_EXIST( l_U252[l_U413] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U252[l_U413] )))
            {
                if (NOT (IS_CHAR_INJURED( l_U250 )))
                {
                    if (HAS_CHAR_SPOTTED_CHAR( l_U252[l_U413], l_U250 ))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_20825(unknown uParam0, unknown uParam1)
{
    SET_RELATIONSHIP( 5, 0, 23 );
    SET_RELATIONSHIP( 5, 23, 0 );
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^), 0 );
            SET_COMBAT_DECISION_MAKER( (uParam0^), (uParam1^) );
            SET_CHAR_RELATIONSHIP_GROUP( (uParam0^), 0 );
            SET_CHAR_WILL_USE_COVER( (uParam0^), 1 );
            SET_CHAR_IS_TARGET_PRIORITY( (uParam0^), 1 );
        }
    }
    return;
}

void sub_21178()
{
    if (sub_21207( ref l_U252, 200, "BAD1_GOD10" ))
    {
        sub_21374( ref l_U252, ref l_U267 );
        GET_GAME_TIMER( ref l_U493._fU220 );
        l_U200 = 4;
        return;
    }
    if (NOT l_U239[0])
    {
        if (NOT (IS_CHAR_INJURED( l_U252[0] )))
        {
            GET_SCRIPT_TASK_STATUS( l_U252[0], 29, ref l_U477 );
            if (l_U477 == 7)
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U252[0], 0 );
                l_U239[0] = 1;
            }
        }
    }
    if (NOT l_U239[4])
    {
        if (NOT (IS_CHAR_INJURED( l_U252[4] )))
        {
            GET_SCRIPT_TASK_STATUS( l_U252[4], 29, ref l_U478 );
            if (l_U478 == 7)
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U252[4], 0 );
                l_U239[4] = 1;
            }
        }
    }
    sub_21672();
    if (sub_22589( ref l_U252, ref l_U267 ))
    {
        GET_GAME_TIMER( ref l_U423 );
        l_U200 = 3;
        return;
    }
    if (NOT l_U237)
    {
        if (sub_22784( ref l_U252, ref l_U446 ))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U252[l_U446], 1 );
            OPEN_SEQUENCE_TASK( ref l_U464[l_U446] );
            TASK_SMART_FLEE_CHAR( 0, sub_1884(), 200.00000000, -2 );
            CLOSE_SEQUENCE_TASK( l_U464[l_U446] );
            TASK_PERFORM_SEQUENCE( l_U252[l_U446], l_U464[l_U446] );
            CLEAR_SEQUENCE_TASK( l_U464[l_U446] );
            l_U237 = 1;
        }
    }
    else if (((sub_2678( ref l_U252[l_U446] )) > 100.00000000) AND (NOT (IS_CHAR_ON_SCREEN( l_U252[l_U446] ))))
    {
        sub_21374( ref l_U252, ref l_U267 );
        GET_GAME_TIMER( ref l_U493._fU220 );
        sub_1979( 0 );
        CLEAR_PRINTS();
        PRINT_NOW( "BAD1_GOD10", 7500, 0 );
        l_U200 = 4;
    }
    return;
}

int sub_21207(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int I;

    I = 0;
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        if (DOES_CHAR_EXIST( (uParam0^)[I] ))
        {
            if (NOT (IS_CHAR_INJURED( (uParam0^)[I] )))
            {
                if (((sub_2678( ref (uParam0^)[I] )) > 200) AND (NOT (IS_CHAR_ON_SCREEN( (uParam0^)[I] ))))
                {
                    sub_1979( 0 );
                    CLEAR_PRINTS();
                    PRINT_NOW( uParam2, 7500, 1 );
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_21374(unknown uParam0, unknown uParam1)
{
    int I;

    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        if (DOES_BLIP_EXIST( (uParam1^)[I] ))
        {
            REMOVE_BLIP( (uParam1^)[I] );
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref (uParam0^)[I] );
    }
    return;
}

void sub_21672()
{
    if ((sub_2678( ref l_U250 )) > 12.00000000)
    {
        if (NOT (IS_PED_IN_GROUP( l_U250 )))
        {
            switch (l_U205)
            {
                case 0:
                sub_21767( ref l_U250, ref l_U252, ref l_U258 );
                SET_CHAR_DECISION_MAKER( l_U250, l_U450 );
                SET_COMBAT_DECISION_MAKER( l_U250, l_U452 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U250, 1 );
                GET_CHAR_COORDINATES( l_U258, ref l_U365._fU0, ref l_U365._fU4, ref l_U365._fU8 );
                OPEN_SEQUENCE_TASK( ref l_U463 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U365._fU0, l_U365._fU4, l_U365._fU8, 3, -2, 0.10000000 );
                CLOSE_SEQUENCE_TASK( l_U463 );
                TASK_PERFORM_SEQUENCE( l_U250, l_U463 );
                CLEAR_SEQUENCE_TASK( l_U463 );
                l_U205 = 1;
                break;
                case 1:
                if (((sub_21831( ref l_U250, ref l_U258 )) < 3.00000000) || (sub_22271( ref l_U250, ref l_U252 )))
                {
                    CLEAR_CHAR_TASKS( l_U250 );
                    SET_CHAR_DECISION_MAKER( l_U250, l_U451 );
                    sub_20825( ref l_U250, ref l_U455 );
                    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U250, 0 );
                    SET_CHAR_CANT_BE_DRAGGED_OUT( l_U250, 0 );
                    l_U205 = 2;
                }
                break;
                case 3: break;
            }
        }
    }
    else if (NOT (IS_PED_IN_GROUP( l_U250 )))
    {
        CLEAR_CHAR_TASKS( l_U250 );
        sub_15907( ref l_U250, ref l_U460, ref l_U456, 1 );
        SET_CHAR_DECISION_MAKER( l_U250, l_U451 );
        sub_20825( ref l_U250, ref l_U455 );
        l_U205 = 0;
    }
    return;
}

void sub_21767(unknown uParam0, unknown uParam1, unknown uParam2)
{
    boolean bVar5;
    int I;
    int iVar7;
    float fVar8;

    bVar5 = false;
    for ( I = 0; I <= ((uParam1^) - 1); I++ )
    {
        if (NOT (IS_CHAR_INJURED( (uParam1^)[I] )))
        {
            if (NOT bVar5)
            {
                fVar8 = sub_21831( uParam0, ref (uParam1^)[I] );
                iVar7 = I;
                bVar5 = true;
            }
            else if ((sub_21831( uParam0, ref (uParam1^)[I] )) < fVar8)
            {
                fVar8 = sub_21831( uParam0, ref (uParam1^)[I] );
                iVar7 = I;
            }
        }
    }
    (uParam2^) = (uParam1^)[iVar7];
    return;
}

float sub_21831(unknown uParam0, unknown uParam1)
{
    float Result;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    Result = 0.00000000;
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if (NOT (IS_CHAR_INJURED( (uParam1^) )))
        {
            GET_CHAR_COORDINATES( (uParam0^), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
            GET_CHAR_COORDINATES( (uParam1^), ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
            GET_DISTANCE_BETWEEN_COORDS_3D( uVar5._fU0, uVar5._fU4, uVar5._fU8, uVar8._fU0, uVar8._fU4, uVar8._fU8, ref Result );
            return Result;
        }
    }
    return -1.00000000;
    return 100.00000000;
}

int sub_22271(unknown uParam0, unknown uParam1)
{
    int I;

    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        for ( I = 0; I <= 1; I++ )
        {
            if (DOES_CHAR_EXIST( (uParam1^)[I] ))
            {
                if (NOT (IS_CHAR_INJURED( (uParam1^)[I] )))
                {
                    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( (uParam0^), (uParam1^)[I], 0 ))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_22589(unknown uParam0, unknown uParam1)
{
    int I;
    int iVar5;

    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        if (DOES_CHAR_EXIST( (uParam0^)[I] ))
        {
            if (IS_CHAR_INJURED( (uParam0^)[I] ))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref (uParam0^)[I] );
                (uParam0^)[I] = nil;
                REMOVE_BLIP( (uParam1^)[I] );
                iVar5++;
            }
        }
        else
        {
            iVar5++;
        }
    }
    if (iVar5 == (uParam0^))
    {
        return 1;
    }
    return 0;
}

int sub_22784(unknown uParam0, unknown uParam1)
{
    int I;
    int iVar5;

    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        if (DOES_CHAR_EXIST( (uParam0^)[I] ))
        {
            if (IS_CHAR_INJURED( (uParam0^)[I] ))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref (uParam0^)[I] );
                (uParam0^)[I] = nil;
                iVar5++;
            }
            else
            {
                (uParam1^) = I;
            }
        }
        else
        {
            iVar5++;
        }
    }
    if (iVar5 == ((uParam0^) - 1))
    {
        return 1;
    }
    return 0;
}

void sub_23207()
{
    if ((NOT (l_U428[1] == 1)) AND (l_U232))
    {
        if (sub_23245( ref l_U427, 1000 ))
        {
            l_U428[1] = 1;
            l_U204 = 4;
        }
    }
    switch (l_U204)
    {
        case 0:
        if (sub_11902( ref l_U423, 3000 ))
        {
            SET_CHAR_PROOFS( l_U250, 1, 1, 1, 1, 1 );
            if (sub_23433( 1 ))
            {
                CLEAR_AREA( 1774.94900000, 602.94660000, 28.08750000, 50.00000000, 1 );
                LOAD_SCENE( 1774.94900000, 602.94660000, 28.08750000 );
                BEGIN_CAM_COMMANDS( ref l_U415 );
                CREATE_CAM( 14, ref l_U398 );
                CREATE_CAM( 14, ref l_U399 );
                SET_CAM_POS( l_U398, 1775.71800000, 604.01670000, 29.41594000 );
                SET_CAM_ROT( l_U398, 2.88731600, -0.00000000, 128.18080000 );
                SET_CAM_FOV( l_U398, 29.10004000 );
                if (IS_VEH_DRIVEABLE( l_U263 ))
                {
                    if (LOCATE_CAR_3D( l_U263, 1774.94900000, 602.94660000, 28.08750000, 5.00000000, 5.00000000, 5.00000000, 0 ))
                    {
                        SET_CAR_HEADING( l_U263, 269.76410000 );
                        SET_CAR_COORDINATES( l_U263, 1775.26500000, 614.31550000, 27.98720000 );
                    }
                }
                if (IS_CHAR_IN_ANY_CAR( l_U250 ))
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( l_U250, 1773.31700000, 602.63940000, 28.10560000 );
                }
                if (IS_CHAR_IN_ANY_CAR( sub_1884() ))
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( sub_1884(), 1774.94900000, 602.94660000, 28.08750000 );
                }
                REMOVE_CHAR_FROM_GROUP( l_U250 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U250 );
                SET_CHAR_PROOFS( l_U250, 1, 1, 1, 1, 1 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U250, 1 );
                SET_CHAR_HEADING( l_U250, 281.10010000 );
                SET_CHAR_COORDINATES( l_U250, 1773.31700000, 602.63940000, 28.10560000 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1884() );
                SET_CHAR_COORDINATES( sub_1884(), 1774.94900000, 602.94660000, 28.08750000 );
                SET_CHAR_HEADING( sub_1884(), 118.62320000 );
                TASK_LOOK_AT_CHAR( sub_1884(), l_U250, -2, 0 );
                TASK_LOOK_AT_CHAR( l_U250, sub_1884(), -2, 0 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                SET_CAM_ACTIVE( l_U398, 1 );
                SET_CAM_PROPAGATE( l_U398, 1 );
                sub_12094( "PIR_PASS", ref l_U480[0], 8, 1 );
                l_U232 = 1;
                GET_GAME_TIMER( ref l_U427 );
                DO_SCREEN_FADE_IN( 500 );
                l_U204 = 1;
            }
        }
        break;
        case 1:
        if (NOT (sub_13075( l_U480[0] )))
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_1884(), 5.00000000, 0.00000000, 0.00000000, ref l_U275._fU0, ref l_U275._fU4, ref l_U275._fU8 );
            TASK_FLUSH_ROUTE();
            TASK_EXTEND_ROUTE( l_U275._fU0, l_U275._fU4, l_U275._fU8 );
            CLEAR_CHAR_TASKS( l_U250 );
            OPEN_SEQUENCE_TASK( ref l_U463 );
            TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
            CLOSE_SEQUENCE_TASK( l_U463 );
            TASK_PERFORM_SEQUENCE( l_U250, l_U463 );
            CLEAR_SEQUENCE_TASK( l_U463 );
            l_U204 = 2;
        }
        break;
        case 2:
        if (NOT (IS_CHAR_INJURED( l_U250 )))
        {
            if (NOT (IS_CHAR_ON_SCREEN( l_U250 )))
            {
                DELETE_CHAR( ref l_U250 );
                l_U204 = 3;
            }
        }
        break;
        case 3:
        SET_CAM_ACTIVE( l_U398, 0 );
        SET_CAM_PROPAGATE( l_U398, 0 );
        SET_CAM_ACTIVE( l_U399, 0 );
        SET_CAM_PROPAGATE( l_U399, 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        DESTROY_ALL_CAMS();
        END_CAM_COMMANDS( ref l_U415 );
        if (l_U428[1] == 1)
        {
            sub_10947( 1 );
        }
        else
        {
            sub_24926( 1 );
        }
        sub_25086();
        break;
        case 4:
        CLEAR_PRINTS();
        sub_1979( 0 );
        DO_SCREEN_FADE_OUT( 500 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        DELETE_CHAR( ref l_U250 );
        l_U204 = 3;
        break;
    }
    return;
}

int sub_23245(unknown uParam0, unknown uParam1)
{
    if (sub_11902( uParam0, uParam1 ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if (sub_23280())
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_23280()
{
    return IS_CONTROL_JUST_PRESSED( 2, 77 );
}

int sub_23433(boolean bParam0)
{
    int iVar3;

    if (NOT IS_SCREEN_FADED_OUT())
    {
        if (NOT IS_SCREEN_FADING())
        {
            if (IS_CHAR_IN_ANY_BOAT( sub_1884() ))
            {
                iVar3 = 0;
            }
            else
            {
                iVar3 = 1;
            }
            if (sub_23499( 1, iVar3 ))
            {
                if (bParam0)
                {
                    SET_PLAYER_CONTROL( sub_1174(), 0 );
                }
                DO_SCREEN_FADE_OUT( 500 );
            }
        }
    }
    else
    {
        sub_1979( 0 );
        CLEAR_PRINTS();
        CLEAR_HELP();
        SET_PLAYER_CONTROL( sub_1174(), 0 );
        CLEAR_CHAR_TASKS( sub_1884() );
        DISPLAY_HUD( 0 );
        DISPLAY_RADAR( 0 );
        SET_WIDESCREEN_BORDERS( 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1884(), 1 );
        ALLOW_EMERGENCY_SERVICES( 0 );
        return 1;
    }
    return 0;
}

int sub_23499(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_1884() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1884(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_1884() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1884(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_1884()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_1884() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1884() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_1174() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_1174() )))
    {
        return 0;
    }
    return 1;
}

void sub_24926(boolean bParam0)
{
    CLEAR_PRINTS();
    CLEAR_HELP();
    sub_1979( 0 );
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    SET_WIDESCREEN_BORDERS( 0 );
    if (IS_PLAYER_PLAYING( sub_1174() ))
    {
        SET_INTERP_IN_OUT_VEHICLE_ENABLED_THIS_FRAME( 0 );
        SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 0 );
        SET_CAM_BEHIND_PED( sub_1884() );
        if (bParam0)
        {
            CLEAR_CHAR_TASKS( sub_1884() );
        }
        SET_PLAYER_CONTROL( sub_1174(), 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1884(), 0 );
    }
    ALLOW_EMERGENCY_SERVICES( 1 );
    return;
}

void sub_25086()
{
    sub_25100( l_U479 );
    CLEAR_WANTED_LEVEL( sub_1174() );
    TRIGGER_MISSION_COMPLETE_AUDIO( 50 );
    sub_1264();
    return;
}

void sub_25100(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_573( uParam0 );
    sub_25120( uParam0 );
    sub_29094( uParam0 );
    return;
}

void sub_25120(unknown uParam0)
{
    switch (uParam0)
    {
        case 38:
        sub_25250();
        break;
        case 39:
        sub_26212();
        break;
        case 40:
        sub_26471();
        break;
        case 48:
        sub_26654();
        break;
        case 41:
        sub_26839();
        break;
        case 42:
        sub_27035();
        break;
        case 43:
        sub_27216();
        break;
        case 44:
        sub_27399();
        break;
        case 45:
        sub_27580();
        break;
        case 46:
        sub_27759();
        break;
        case 47:
        sub_28070();
        break;
        case 49:
        sub_28270();
        break;
        case 50:
        sub_28447();
        break;
        case 51:
        sub_28645();
        break;
        default: sub_693( "Interactions_Pass: Unknown Random Interaction Character ID - tell Keith" );
    }
    sub_28920();
    sub_28993();
    return;
}

void sub_25250()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 38;
    uVar3 = sub_573( iVar2 );
    sub_25290( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_25936( 500 );
        break;
        default: sub_693( "Interactions_Badman_Pass: Unknown Badman Sequence - tell Keith" );
    }
    return;
}

void sub_25290(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_25343( iParam0, uParam1, uParam2 );
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
        sub_25475( iParam0 + 0 );
    }
    return;
}

void sub_25343(int iParam0, int iParam1, int iParam2)
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
        sub_25475( iParam0 + 0 );
    }
    return;
}

void sub_25475(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_25506( iParam0->_fU4 )))
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

int sub_25506(unknown uParam0)
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

void sub_25936(unknown uParam0)
{
    sub_25947( uParam0 );
    return;
}

void sub_25947(unknown uParam0)
{
    ADD_SCORE( sub_1174(), uParam0 );
    sub_25972( uParam0 );
    return;
}

void sub_25972(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_693( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_26212()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 39;
    uVar3 = sub_573( iVar2 );
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_25936( 100 );
        sub_25290( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 2:
        sub_25936( 200 );
        sub_25290( ref g_U34048[uVar3]._fU8, 168, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 3:
        sub_25936( 500 );
        break;
        default: sub_693( "Interactions_Brian_Pass: Unknown Brian Sequence - tell Keith" );
    }
    return;
}

void sub_26471()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 40;
    uVar3 = sub_573( iVar2 );
    sub_25290( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_25936( 0 );
        break;
        default: sub_693( "Interactions_Cherise_Pass: Unknown Cherise Sequence - tell Keith" );
    }
    return;
}

void sub_26654()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 48;
    uVar3 = sub_573( iVar2 );
    sub_25290( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_25936( 0 );
        break;
        default: sub_693( "Interactions_Clarence_Pass: Unknown Clarence Sequence - tell Keith" );
    }
    return;
}

void sub_26839()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 41;
    uVar3 = sub_573( iVar2 );
    sub_25290( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_25936( 0 );
        break;
        case 2:
        sub_25936( 0 );
        break;
        default: sub_693( "Interactions_Eddie_Pass: Unknown Eddie Sequence - tell Keith" );
    }
    return;
}

void sub_27035()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 42;
    uVar3 = sub_573( iVar2 );
    sub_25290( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_25936( 0 );
        break;
        default: sub_693( "Interactions_Gracie_Pass: Unknown Gracie Sequence - tell Keith" );
    }
    return;
}

void sub_27216()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 43;
    uVar3 = sub_573( iVar2 );
    sub_25290( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_25936( 500 );
        break;
        default: sub_693( "Interactions_Hossan_Pass: Unknown Hossan Sequence - tell Keith" );
    }
    return;
}

void sub_27399()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 44;
    uVar3 = sub_573( iVar2 );
    sub_25290( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_25936( 0 );
        break;
        default: sub_693( "Interactions_Ilyena_Pass: Unknown Ilyena Sequence - tell Keith" );
    }
    return;
}

void sub_27580()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 45;
    uVar3 = sub_573( iVar2 );
    sub_25290( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_25936( 1000 );
        break;
        default: sub_693( "Interactions_Ivan_Pass: Unknown Ivan Sequence - tell Keith" );
    }
    return;
}

void sub_27759()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 46;
    uVar3 = sub_573( iVar2 );
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_25936( 1000 );
        sub_27846( ref g_U34048[uVar3]._fU8 );
        g_U34048[uVar3]._fU24 = 1;
        break;
        case 2:
        sub_25936( 5000 );
        sub_25290( ref g_U34048[uVar3]._fU8, 96, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 3: break;
        default: sub_693( "Interactions_Jeff_Pass: Unknown Jeff Sequence - tell Keith" );
    }
    return;
}

void sub_27846(int iParam0)
{
    sub_27859( iParam0 + 0 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    return;
}

void sub_27859(int iParam0)
{
    GET_CURRENT_DATE( iParam0 + 0, iParam0 + 4 );
    return;
}

void sub_28070()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 47;
    uVar3 = sub_573( iVar2 );
    sub_25290( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_25936( 0 );
        break;
        case 2:
        sub_25936( 0 );
        break;
        default: sub_693( "Interactions_Marnie_Pass: Unknown Marnie Sequence - tell Keith" );
    }
    return;
}

void sub_28270()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 49;
    uVar3 = sub_573( iVar2 );
    sub_25290( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_25936( 500 );
        break;
        default: sub_693( "Interactions_Mel_Pass: Unknown Mel Sequence - tell Keith" );
    }
    return;
}

void sub_28447()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 50;
    uVar3 = sub_573( iVar2 );
    sub_25290( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_25936( 0 );
        break;
        case 2:
        sub_25936( 0 );
        break;
        default: sub_693( "Interactions_Pathos_Pass: Unknown Pathos Sequence - tell Keith" );
    }
    return;
}

void sub_28645()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 51;
    uVar3 = sub_573( iVar2 );
    sub_25290( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_25936( 0 );
        break;
        case 2:
        sub_25936( 1000 );
        break;
        default: sub_693( "Interactions_Sara_Pass: Unknown Sara Sequence - tell Keith" );
    }
    return;
}

void sub_28920()
{
    g_U9914._fU0 = 1;
    g_U9914._fU4 = 0;
    g_U9914._fU8 = 0;
    g_U9914._fU12 = 0;
    g_U9914._fU16 = 0;
    g_U9914._fU20 = 0;
    g_U9914._fU24 = 7;
    return;
}

void sub_28993()
{
    sub_29002();
    StrCopy( ref g_U9926, "RIPASS", 16 );
    return;
}

void sub_29002()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_29094(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_573( uParam0 );
    g_U34048[uVar3]._fU28 = 99;
    g_U34048[uVar3]._fU4 = 0;
    sub_7813( ref g_U34048[uVar3]._fU8 );
    g_U34048[uVar3]._fU24 = 0;
    sub_29175( uParam0 );
    return;
}

void sub_29175(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (g_U0)
    {
        return;
    }
    iVar3 = 10;
    switch (uParam0)
    {
        case 38:
        iVar3 = 0;
        break;
        case 39:
        iVar3 = 1;
        break;
        case 41:
        iVar3 = 2;
        break;
        case 42:
        iVar3 = 3;
        break;
        case 43:
        iVar3 = 4;
        break;
        case 44:
        iVar3 = 5;
        break;
        case 47:
        iVar3 = 6;
        break;
        case 49:
        iVar3 = 7;
        break;
        case 50:
        iVar3 = 8;
        break;
        case 51:
        iVar3 = 9;
        break;
        case 40:
        case 45:
        case 48:
        case 46: return;
    }
    return;
    iVar4 = 0;
    if (NOT g_U64848[iVar3]._fU0)
    {
        iVar4 = ProtectedGet(g_U64848[iVar3]._fU8);
        if (iVar4 > 0)
        {
            sub_29454( 5, iVar4 );
            g_U64848[iVar3]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_29454(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_29636( 0 );
    return;
}

void sub_29636(boolean bParam0)
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
        if (g_U32871[I]._fU4 == g_U32871[I]._fU0)
        {
            fVar4 = g_U32871[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U32871[I]._fU0 );
            fVar6 = TO_FLOAT( g_U32871[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U32871[I]._fU8;
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
    SET_FLOAT_STAT( 0, fVar3 );
    if (bVar7)
    {
        sub_29891();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_29891()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

int sub_30138(int iParam0)
{
    if (NOT l_U110)
    {
        if (l_U111)
        {
            if (sub_23245( ref l_U116, 1000 ))
            {
                l_U110 = 1;
                l_U107 = 6;
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        switch (l_U107)
        {
            case 0:
            if ((sub_2678( iParam0 + 0 )) > 200.00000000)
            {
                return 1;
            }
            if (sub_11902( iParam0 + 220, 7500 ))
            {
                sub_30334( iParam0 + 0, iParam0 + 4 );
                if (sub_23433( 0 ))
                {
                    if (sub_30801( iParam0 + 4 ))
                    {
                        l_U107 = 1;
                    }
                    else
                    {
                        l_U107 = 2;
                    }
                }
            }
            break;
            case 1:
            if (IS_VEH_DRIVEABLE( iParam0->_fU4 ))
            {
                if (NOT (IS_CHAR_SITTING_IN_CAR( iParam0->_fU0, iParam0->_fU4 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( iParam0->_fU0 );
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( iParam0->_fU0, iParam0->_fU4, 0 );
                }
                if (NOT (IS_CHAR_SITTING_IN_CAR( sub_1884(), iParam0->_fU4 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1884() );
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( sub_1884(), iParam0->_fU4, 0 );
                }
                SWITCH_ROADS_OFF( ref iParam0->_fU56->_fU0, ref iParam0->_fU56->_fU4, ref iParam0->_fU56->_fU8, ref iParam0->_fU68->_fU0, ref iParam0->_fU68->_fU4, ref iParam0->_fU68->_fU8 );
                CLEAR_AREA( iParam0->_fU116[0]._fU0, iParam0->_fU116[0]._fU4, iParam0->_fU116[0]._fU8, 100.00000000, 1 );
                FREEZE_CAR_POSITION( iParam0->_fU4, 1 );
                SET_CAR_HEADING( iParam0->_fU4, iParam0->_fU20 );
                SET_CAR_COORDINATES( iParam0->_fU4, ref iParam0->_fU8->_fU0, ref iParam0->_fU8->_fU4, -101.00000000 );
                REQUEST_COLLISION_AT_POSN( ref iParam0->_fU8->_fU0, ref iParam0->_fU8->_fU4, ref iParam0->_fU8->_fU8 );
                LOAD_SCENE( iParam0->_fU116[0]._fU0, iParam0->_fU116[0]._fU4, iParam0->_fU116[0]._fU8 );
                SET_CAR_COORDINATES( iParam0->_fU4, ref iParam0->_fU8->_fU0, ref iParam0->_fU8->_fU4, -101.00000000 );
                TASK_LOOK_AT_CHAR( sub_1884(), iParam0->_fU0, -2, 0 );
                TASK_LOOK_AT_CHAR( iParam0->_fU0, sub_1884(), -2, 0 );
                if (IS_PED_IN_GROUP( iParam0->_fU0 ))
                {
                    REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
                }
                BEGIN_CAM_COMMANDS( ref l_U117 );
                CREATE_CAM( 14, ref l_U181 );
                SET_CAM_ROT( l_U181, iParam0->_fU144[0]._fU0, iParam0->_fU144[0]._fU4, iParam0->_fU144[0]._fU8 );
                if (IS_BIG_VEHICLE( iParam0->_fU4 ))
                {
                    SET_CAM_FOV( l_U181, iParam0->_fU172[0] * 1.50000000 );
                    SET_CAM_POS( l_U181, iParam0->_fU116[0]._fU0, iParam0->_fU116[0]._fU4, iParam0->_fU116[0]._fU8 * 1.15000000 );
                    POINT_CAM_AT_PED( l_U181, sub_1884() );
                }
                else
                {
                    SET_CAM_FOV( l_U181, iParam0->_fU172[0] );
                    SET_CAM_POS( l_U181, iParam0->_fU116[0]._fU0, iParam0->_fU116[0]._fU4, iParam0->_fU116[0]._fU8 );
                }
                if (iParam0->_fU208[0])
                {
                    SET_CAM_NEAR_DOF( l_U181, iParam0->_fU184[0] );
                    SET_CAM_FAR_DOF( l_U181, iParam0->_fU196[0] );
                }
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                SET_CAM_ACTIVE( l_U181, 1 );
                SET_CAM_PROPAGATE( l_U181, 1 );
                if (iParam0->_fU208[0])
                {
                    SET_USE_HIGHDOF( 1 );
                }
                GET_GAME_TIMER( ref l_U116 );
                l_U111 = 1;
                DO_SCREEN_FADE_IN( 500 );
                sub_12094( iParam0->_fU248, iParam0 + 224, 8, 1 );
                l_U107 = 3;
            }
            break;
            case 2:
            SWITCH_PED_PATHS_OFF( ref iParam0->_fU80->_fU0, ref iParam0->_fU80->_fU4, ref iParam0->_fU80->_fU8, ref iParam0->_fU92->_fU0, ref iParam0->_fU92->_fU4, ref iParam0->_fU92->_fU8 );
            SWITCH_ROADS_OFF( ref iParam0->_fU56->_fU0, ref iParam0->_fU56->_fU4, ref iParam0->_fU56->_fU8, ref iParam0->_fU68->_fU0, ref iParam0->_fU68->_fU4, ref iParam0->_fU68->_fU8 );
            CLEAR_AREA( iParam0->_fU116[0]._fU0, iParam0->_fU116[0]._fU4, iParam0->_fU116[0]._fU8, 100.00000000, 1 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1884() );
            SET_CHAR_COORDINATES( sub_1884(), ref iParam0->_fU40->_fU0, ref iParam0->_fU40->_fU4, ref iParam0->_fU40->_fU8 );
            SET_CHAR_HEADING( sub_1884(), iParam0->_fU52 );
            REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( iParam0->_fU0 );
            SET_CHAR_COORDINATES( iParam0->_fU0, ref iParam0->_fU24->_fU0, ref iParam0->_fU24->_fU4, ref iParam0->_fU24->_fU8 );
            SET_CHAR_HEADING( iParam0->_fU0, iParam0->_fU36 );
            REQUEST_COLLISION_AT_POSN( ref iParam0->_fU8->_fU0, ref iParam0->_fU8->_fU4, ref iParam0->_fU8->_fU8 );
            LOAD_SCENE( iParam0->_fU116[0]._fU0, iParam0->_fU116[0]._fU4, iParam0->_fU116[0]._fU8 );
            SET_CHAR_COORDINATES( iParam0->_fU0, ref iParam0->_fU24->_fU0, ref iParam0->_fU24->_fU4, ref iParam0->_fU24->_fU8 );
            SET_CHAR_HEADING( iParam0->_fU0, iParam0->_fU36 );
            SET_CHAR_COORDINATES( iParam0->_fU0, ref iParam0->_fU24->_fU0, ref iParam0->_fU24->_fU4, ref iParam0->_fU24->_fU8 );
            SET_CHAR_HEADING( iParam0->_fU0, iParam0->_fU36 );
            TASK_LOOK_AT_CHAR( sub_1884(), iParam0->_fU0, -2, 0 );
            TASK_LOOK_AT_CHAR( iParam0->_fU0, sub_1884(), -2, 0 );
            BEGIN_CAM_COMMANDS( ref l_U117 );
            CREATE_CAM( 14, ref l_U181 );
            SET_CAM_POS( l_U181, iParam0->_fU116[1]._fU0, iParam0->_fU116[1]._fU4, iParam0->_fU116[1]._fU8 );
            SET_CAM_ROT( l_U181, iParam0->_fU144[1]._fU0, iParam0->_fU144[1]._fU4, iParam0->_fU144[1]._fU8 );
            SET_CAM_FOV( l_U181, iParam0->_fU172[1] );
            if (iParam0->_fU208[1])
            {
                SET_CAM_NEAR_DOF( l_U181, iParam0->_fU184[1] );
                SET_CAM_FAR_DOF( l_U181, iParam0->_fU196[1] );
            }
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            SET_CAM_ACTIVE( l_U181, 1 );
            SET_CAM_PROPAGATE( l_U181, 1 );
            if (iParam0->_fU208[1])
            {
                SET_USE_HIGHDOF( 1 );
            }
            DO_SCREEN_FADE_IN( 500 );
            sub_12094( iParam0->_fU248, iParam0 + 224, 8, 1 );
            l_U107 = 4;
            break;
            case 3:
            if (IS_VEH_DRIVEABLE( iParam0->_fU4 ))
            {
                if (NOT (sub_13075( iParam0->_fU224 )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U195 );
                    TASK_LOOK_AT_CHAR( 0, sub_1884(), 50, 0 );
                    TASK_LEAVE_CAR( 0, iParam0->_fU4 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, ref iParam0->_fU104->_fU0, ref iParam0->_fU104->_fU4, ref iParam0->_fU104->_fU8, 2, -1, 0.10000000 );
                    CLOSE_SEQUENCE_TASK( l_U195 );
                    TASK_PERFORM_SEQUENCE( iParam0->_fU0, l_U195 );
                    l_U107 = 5;
                }
            }
            break;
            case 4:
            if (NOT (sub_13075( iParam0->_fU224 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U195 );
                TASK_LOOK_AT_CHAR( 0, sub_1884(), 50, 0 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, ref iParam0->_fU104->_fU0, ref iParam0->_fU104->_fU4, ref iParam0->_fU104->_fU8, 2, -1, 0.10000000 );
                CLOSE_SEQUENCE_TASK( l_U195 );
                TASK_PERFORM_SEQUENCE( iParam0->_fU0, l_U195 );
                CLEAR_SEQUENCE_TASK( l_U195 );
                l_U107 = 5;
            }
            break;
            case 5:
            if ((NOT (IS_CHAR_ON_SCREEN( iParam0->_fU0 ))) || (l_U110))
            {
                SET_CAM_ACTIVE( l_U181, 0 );
                SET_CAM_PROPAGATE( l_U181, 0 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                END_CAM_COMMANDS( ref l_U117 );
                DESTROY_ALL_CAMS();
                if (DOES_VEHICLE_EXIST( iParam0->_fU4 ))
                {
                    if (IS_VEH_DRIVEABLE( iParam0->_fU4 ))
                    {
                        FREEZE_CAR_POSITION( iParam0->_fU4, 0 );
                    }
                }
                if ((iParam0->_fU208[0]) || (iParam0->_fU208[1]))
                {
                    SET_USE_HIGHDOF( 0 );
                }
                SET_CAM_BEHIND_PED( sub_1884() );
                if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
                {
                    if (IS_PED_IN_GROUP( iParam0->_fU0 ))
                    {
                        REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
                    }
                    CLEAR_CHAR_TASKS( iParam0->_fU0 );
                    DELETE_CHAR( iParam0 + 0 );
                }
                if (l_U110)
                {
                    sub_10947( 1 );
                }
                else
                {
                    sub_24926( 1 );
                }
                return 1;
            }
            break;
            case 6:
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            l_U109 = 1;
            sub_1979( 0 );
            CLEAR_PRINTS();
            l_U107 = 5;
            break;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

void sub_30334(unknown uParam0, unknown uParam1)
{
    sub_30352( 1, 1 );
    sub_30421( uParam0 );
    sub_30520( 1, ref l_U179, 1, 1 );
    sub_30628( uParam1 );
    return;
    break;
    2;
    1;
    ref l_U115;
    2;
    1;
    ref l_U178;
    2;
    1;
    ref l_U179;
    1;
    ref l_U178;
    1;
    1;
    ref l_U115;
    uParam1;
    2;
    1;
    ref l_U114;
    ref l_U114;
    uParam0;
    break;
}

void sub_30352(unknown uParam0, unknown uParam1)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            GET_CHAR_HEALTH( (uParam0^), uParam1 );
        }
    }
    return;
}

void sub_30421(unknown uParam0)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            SET_CHAR_HEALTH( (uParam0^), 200 );
            SET_CHAR_PROOFS( (uParam0^), 1, 1, 1, 1, 1 );
        }
    }
    return;
}

void sub_30520(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_30628(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if (ProtectedGet(l_U115) < 500)
            {
                SET_CAR_HEALTH( (uParam0^), 500 );
            }
            if (ProtectedGet(l_U178) < 500)
            {
                SET_ENGINE_HEALTH( (uParam0^), 500.00000000 );
            }
            if (ProtectedGet(l_U179) < 500.00000000)
            {
                SET_PETROL_TANK_HEALTH( (uParam0^), 500.00000000 );
            }
            SET_CAR_PROOFS( (uParam0^), 1, 1, 1, 1, 1 );
        }
    }
    return;
}

int sub_30801(unknown uParam0)
{
    if (sub_3443( uParam0 ))
    {
        if (IS_CHAR_SITTING_IN_CAR( sub_1884(), (uParam0^) ))
        {
            return 1;
        }
    }
    return 0;
}