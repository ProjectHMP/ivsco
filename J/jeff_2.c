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
    l_U226 = 0;
    l_U228 = 0;
    l_U229 = 0;
    l_U230 = 0;
    l_U231 = 0;
    l_U233 = 0;
    l_U234 = 0;
    l_U235 = 0;
    l_U236 = 0;
    l_U237 = 0;
    l_U238 = 0;
    l_U239 = 0;
    l_U242 = 0;
    l_U243 = 0;
    l_U244 = 0;
    l_U245 = 0;
    l_U246 = 0;
    l_U247 = 0;
    l_U248 = 0;
    l_U249 = 0;
    l_U250 = 0;
    l_U251 = 0;
    l_U252 = 0;
    l_U253 = 0;
    l_U254 = 0;
    l_U255 = 0;
    l_U256 = 0;
    l_U257 = 0;
    l_U258 = 0;
    l_U259 = 0;
    l_U260 = 0;
    l_U261 = 0;
    l_U262 = 0;
    l_U263 = 0;
    l_U264 = 0;
    l_U265 = 0;
    l_U266 = 0;
    l_U267 = 0;
    l_U268 = 0;
    l_U269 = 0;
    l_U270 = 0;
    l_U271 = 0;
    l_U272 = 0;
    l_U273 = 0;
    l_U274 = 0;
    l_U275 = 0;
    l_U276 = 0;
    l_U277 = 0;
    l_U278 = 0;
    l_U279 = 0;
    l_U369 = 0;
    l_U372 = 0;
    l_U373 = 0;
    l_U374 = 0;
    l_U375 = 0;
    l_U376 = 0;
    l_U377 = 0;
    l_U397 = 0;
    l_U398 = 0;
    l_U399 = 3000;
    l_U400 = 2;
    l_U401 = 0;
    l_U402 = 0;
    l_U425 = 0;
    l_U428 = 0;
    l_U437 = 46;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_635();
    }
    while (true)
    {
        WAIT( 0 );
        if (NOT l_U239)
        {
            while (g_U10978)
            {
                WAIT( 1000 );
            }
            switch (l_U214)
            {
                case 0:
                sub_2863();
                break;
                default:
            }
        }
        if (l_U239)
        {
            sub_11352( ref l_U288 );
            if (sub_11509( ref l_U280 ))
            {
                CLEAR_PRINTS();
                PRINT_NOW( "JEFF1_PROMPT_4", 7500, 1 );
                sub_11595();
            }
            switch (l_U215)
            {
                case 0:
                sub_11814();
                break;
                case 1:
                sub_13299();
                break;
                case 3:
                if (NOT (IS_VEH_DRIVEABLE( l_U286 )))
                {
                    if (IS_CAR_IN_WATER( l_U286 ))
                    {
                        CLEAR_PRINTS();
                        if (NOT (IS_WANTED_LEVEL_GREATER( sub_1204(), 0 )))
                        {
                            PRINT_NOW( "JEF2_PMT12", 7500, 1 );
                            sub_16194();
                        }
                        else
                        {
                            PRINT_NOW( "JEF2_PMT14", 7500, 1 );
                            sub_11595();
                        }
                    }
                }
                sub_20489();
                if ((sub_20769( ref l_U286 )) > 200)
                {
                    CLEAR_PRINTS();
                    PRINT( "JEF2_PMT14", 7500, 1 );
                    sub_11595();
                }
                sub_20993( ref l_U286, "JEF2_PMT16" );
                sub_21539( l_U293, ref l_U294, ref l_U324, "JEF2_PMT16", "JEF2_PMT6", ref l_U279, 0, 0.00000000, 0.00000000, 0.00000000, 0.00000000 );
                sub_21752();
                break;
            }
            if ((IS_KEYBOARD_KEY_PRESSED( 31 )) AND (NOT l_U241))
            {
                l_U241 = 1;
                sub_16194();
            }
        }
        if (l_U272)
        {
            SET_OBJECT_HEADING( l_U196._fU0, l_U196._fU56 );
            ATTACH_OBJECT_TO_CAR( l_U196._fU0, l_U286, 0, l_U196._fU20, l_U196._fU44 );
        }
    }
    return;
}

void sub_635()
{
    if (sub_654( l_U437, l_U400 ))
    {
        sub_750( l_U437, l_U400 );
        if (IS_PLAYER_PLAYING( sub_1204() ))
        {
            SET_PLAYER_CONTROL( sub_1204(), 1 );
        }
        if (IS_HINT_RUNNING())
        {
            HINT_CAM( 0.00000000, 0.00000000, 0.50000000, l_U280, 0, 0, 0 );
            SET_CAM_BEHIND_PED( sub_1302() );
        }
        sub_1350();
        sub_1397( 0 );
    }
    if (DOES_CHAR_EXIST( l_U281 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U281 )))
        {
            if (IS_PED_ATTACHED_TO_ANY_CAR( l_U281 ))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U281 );
            }
        }
    }
    if (l_U259)
    {
        sub_1613( 46 );
    }
    CLEAR_NAMED_CUTSCENE( "rpJef2" );
    if (l_U258)
    {
        CLEAR_PRINTS();
    }
    if (l_U257)
    {
        CLEAR_PRINTS();
        PRINT( "JEF2_PMT8", 7500, 1 );
    }
    if (l_U410[0] == 1)
    {
        CLEAR_PRINTS();
        PRINT( "JEFF1_PROMPT_2", 7500, 1 );
    }
    else if (l_U410[1] == 1)
    {
        CLEAR_PRINTS();
        PRINT( "JEFF1_PROMPT_4", 7500, 1 );
    }
    if (NOT l_U269)
    {
        if (HAS_SCRIPT_LOADED( "jeff_2" ))
        {
            if (l_U270)
            {
                sub_2029( ref g_U65036, 24, 0, l_U262 );
            }
            sub_2640( "jeff_2", 0 );
        }
    }
    sub_2741();
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_654(int iParam0, int iParam1)
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

void sub_750(unknown uParam0, unknown uParam1)
{
    if (NOT (sub_654( uParam0, uParam1 )))
    {
        sub_838( "Interactions_Ended: Interaction for this character not active" );
        return;
    }
    sub_867();
    if (g_U813)
    {
        sub_959();
    }
    else
    {
        sub_1077();
    }
    g_U10978 = 0;
    return;
}

void sub_838(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_867()
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

void sub_959()
{
    if (COMPARE_STRING( ref g_U9926, "RIPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_1005();
    return;
}

void sub_1005()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1077()
{
    if (COMPARE_STRING( ref g_U9926, "RIPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_1123();
    return;
}

void sub_1123()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1204()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1302()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1350()
{
    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    return;
}

void sub_1397(unknown uParam0)
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

void sub_1613(int iParam0)
{
    if (g_U91._fU60 == iParam0)
    {
        switch (g_U15946[g_U91._fU60]._fU132._fU24)
        {
            case 6:
            case 7:
            case 8: break;
            default:
            g_U15946[g_U91._fU60]._fU132._fU24 = 6;
            if (IS_MOBILE_PHONE_CALL_ONGOING())
            {
                ABORT_SCRIPTED_CONVERSATION( 0 );
            }
            if ((g_U91._fU0 != 1000) AND (g_U91._fU0 != 1001))
            {
                g_U91._fU0 = 1010;
            }
            break;
        }
    }
    return;
}

void sub_2029(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_2082( iParam0, uParam1, uParam2 );
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
        sub_2214( iParam0 + 0 );
    }
    return;
}

void sub_2082(int iParam0, int iParam1, int iParam2)
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
        sub_2214( iParam0 + 0 );
    }
    return;
}

void sub_2214(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_2245( iParam0->_fU4 )))
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

int sub_2245(unknown uParam0)
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

void sub_2640(unknown uParam0, boolean bParam1)
{
    REQUEST_SCRIPT( uParam0 );
    while (NOT (HAS_SCRIPT_LOADED( uParam0 )))
    {
        WAIT( 0 );
    }
    if (bParam1)
    {
        START_NEW_SCRIPT( uParam0, 8192 );
    }
    else
    {
        START_NEW_SCRIPT( uParam0, 1024 );
    }
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( uParam0 );
    return;
}

void sub_2741()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_2863()
{
    switch (l_U212)
    {
        case 0:
        if (NOT g_U65040)
        {
            sub_2029( ref g_U65036, g_U65034, 0, l_U262 );
            g_U65040 = 1;
        }
        GET_GAME_TIMER( ref l_U401 );
        l_U330 = {70.91360000, 1134.49000000, 4.31100000};
        l_U212 = 1;
        break;
        case 1:
        if (sub_2996( g_U65036 ))
        {
            ;
        }
        while (NOT (sub_2996( g_U65036 )))
        {
            WAIT( 0 );
        }
        sub_3278();
        break;
    }
    return;
}

int sub_2996(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    if (sub_3165( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_3165(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
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

void sub_3278()
{
    switch (l_U213)
    {
        case 0:
        if (sub_3324( ref l_U401, l_U425 ))
        {
            if (IS_CHAR_ON_FOOT( sub_1302() ))
            {
                if ((sub_3405( sub_1302(), ref l_U330 )) > 150.00000000)
                {
                    sub_3521();
                }
            }
            else if ((sub_3405( sub_1302(), ref l_U330 )) > 300.00000000)
            {
                sub_3521();
            }
        }
        break;
        case 1:
        if (NOT (sub_8252( 0 )))
        {
            if (sub_8519() != -1)
            {
                l_U417 = sub_8519();
            }
        }
        else if (l_U417 != -1)
        {
            if ((NOT sub_8577()) || (l_U417 >= 4))
            {
                if (sub_3596( l_U437, l_U400 ))
                {
                    l_U259 = 0;
                    SET_MISSION_FLAG( 1 );
                    sub_8661( l_U437, l_U400 );
                    l_U239 = 1;
                    sub_10967( "WI_JEF2", 0 );
                    CLEAR_PRINTS();
                    PRINT_NOW( "JEF2_PMT4", 7500, 1 );
                    l_U363 = {13.73550000, 1151.80900000, 13.59660000};
                    ADD_BLIP_FOR_COORD( l_U363._fU0, l_U363._fU4, l_U363._fU8, ref l_U296 );
                    SET_ROUTE( l_U296, 1 );
                    break;
                }
                else
                {
                    GET_GAME_TIMER( ref l_U401 );
                    l_U425 = 60000;
                    l_U213 = 0;
                }
            }
            else
            {
                GET_GAME_TIMER( ref l_U401 );
                l_U425 = 60000;
                l_U213 = 0;
            }
        }
        else
        {
            GET_GAME_TIMER( ref l_U401 );
            l_U425 = 60000;
            l_U213 = 0;
        }
        break;
    }
    return;
}

int sub_3324(unknown uParam0, int iParam1)
{
    GET_GAME_TIMER( ref l_U113 );
    if ((l_U113 - (uParam0^)) > iParam1)
    {
        return 1;
    }
    return 0;
}

float sub_3405(unknown uParam0, int iParam1)
{
    float Result;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    Result = 0.00000000;
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_CHAR_COORDINATES( sub_1302(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_3D( uVar5._fU0, uVar5._fU4, uVar5._fU8, iParam1->_fU0, iParam1->_fU4, iParam1->_fU8, ref Result );
        return Result;
    }
    return 1.00000000;
}

void sub_3521()
{
    if ((sub_3540( l_U437, l_U400 )) || (l_U274))
    {
        if (NOT (IS_WANTED_LEVEL_GREATER( sub_1204(), 0 )))
        {
            if (sub_4032( 46, "PIJ_MEET", "PIJAUD", 10000, 0 ))
            {
                if (NOT l_U264)
                {
                    sub_7927( "PIJAUD" );
                    sub_8046( 0, sub_1302(), "NIKO", 0 );
                    l_U264 = 1;
                }
                l_U417 = -1;
                l_U259 = 1;
                l_U213 = 1;
            }
        }
    }
    return;
}

void sub_3540(unknown uParam0, unknown uParam1)
{
    if (sub_3549())
    {
        return 0;
    }
    return sub_3596( uParam0, uParam1 );
}

int sub_3549()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

boolean sub_3596(unknown uParam0, int iParam1)
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
    uVar4 = sub_3640( uParam0 );
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
        if (sub_2996( g_U34048[uVar4]._fU8 ))
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

int sub_3640(unknown uParam0)
{
    int iVar3;

    if (NOT (sub_3651( uParam0 )))
    {
        sub_838( "Not a genuine RI Character ID - Tell Keith" );
        return 0;
    }
    iVar3 = uParam0;
    return iVar3 - 38;
}

int sub_3651(unknown uParam0)
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

void sub_4032(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[12] cVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown[2] uVar16;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;

    array(ref cVar7, 2);
    StrCopy( ref cVar7[0], uParam1, 16 );
    StrCopy( ref cVar7[1], "END", 16 );
    array(ref uVar16, 2);
    return sub_4092( uParam0, ref cVar7, uParam2, 0, ref uVar16, ref uVar16, "", uParam3, 1, 0, 1, 0, 0, uParam4 );
}

int sub_4092(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U91._fU540)
    {
        return 0;
    }
    sub_4162( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_4162( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_1204() )))
    {
        sub_4162( "\n player is not playing" );
        return 0;
    }
    if ((IS_CHAR_IN_ANY_CAR( sub_1302() )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1302() ))))
    {
        sub_4162( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_4162( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT sub_4619()) AND (NOT bParam11))
        {
            return 0;
        }
        g_U91._fU60 = uParam0;
        g_U91._fU48 = 1;
        g_U15946[g_U91._fU60]._fU132._fU24 = 0;
        break;
        case 1:
        if (g_U91._fU368)
        {
            if ((g_U91._fU372) || (NOT bParam8))
            {
                sub_4162( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
                return 0;
            }
        }
        if (g_U91._fU60 != -1)
        {
            if ((g_U15946[g_U91._fU60]._fU132._fU24 != 5) AND (g_U15946[g_U91._fU60]._fU132._fU24 != 4))
            {
                g_U15946[g_U91._fU60]._fU132._fU24 = 0;
            }
        }
        g_U91._fU368 = 1;
        g_U91._fU372 = bParam8;
        uParam0 = g_U91._fU60;
        break;
        case 2:
        if ((NOT sub_4619()) AND (NOT bParam11))
        {
            return 0;
        }
        g_U91._fU60 = uParam0;
        g_U91._fU52 = 1;
        g_U91._fU56 = 1;
        g_U91._fU372 = 1;
        g_U91._fU368 = 1;
        g_U15946[g_U91._fU60]._fU132._fU24 = 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    sub_5991( uParam0, ref g_U91._fU176 );
    sub_7372( ref g_U91._fU160 );
    g_U91._fU380 = uParam10;
    g_U91._fU376 = bParam11;
    g_U91._fU420 = uParam12;
    g_U91._fU424 = -1;
    g_U91._fU364 = uParam3;
    StrCopy( ref g_U91._fU144, uParam2, 16 );
    for ( I = 0; I <= (g_U8499 - 1); I++ )
    {
        StrCopy( ref g_U8499[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam1^) - 1); I++ )
    {
        g_U8499[I] = {(uParam1^)[I]};
        sub_7612( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
    }
    for ( I = 0; I <= (g_U91._fU260 - 1); I++ )
    {
        if (I < (uParam4^))
        {
            g_U91._fU260[I] = {(uParam4^)[I]};
        }
        else
        {
            StrCopy( ref g_U91._fU260[I], "", 16 );
        }
    }
    for ( I = 0; I <= (g_U91._fU312 - 1); I++ )
    {
        if (I < (uParam5^))
        {
            g_U91._fU312[I] = {(uParam5^)[I]};
        }
        else
        {
            StrCopy( ref g_U91._fU312[I], "", 16 );
        }
    }
    StrCopy( ref g_U91._fU208, uParam6, 16 );
    g_U91._fU80 = uParam7;
    g_U91._fU384 = 0;
    g_U91._fU532 = uParam13;
    g_U8394 = 4;
    return 1;
}

void sub_4162(unknown uParam0)
{
    return;
}

int sub_4619()
{
    if ((g_U91._fU48) || (g_U91._fU52))
    {
        return 0;
    }
    if (g_U91._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_4676())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_4676()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_1204() )))
    {
        sub_4162( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_4162( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_4162( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U91._fU100) || (g_U91._fU104))
    {
        sub_4162( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_1204() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_1302() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_1302(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_4162( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_1302() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_4162( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((CODE_WANTS_MOBILE_PHONE_REMOVED()) AND (NOT bVar2))
    {
        sub_4162( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_1204() )))
    {
        sub_4162( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_5991(int iParam0, unknown uParam1)
{
    switch (iParam0)
    {
        case 0:
        StrCopy( (uParam1^), "ROMAN", 32 );
        break;
        case 1:
        StrCopy( (uParam1^), "VLAD", 32 );
        break;
        case 2:
        StrCopy( (uParam1^), "MICHELLE", 32 );
        break;
        case 3:
        StrCopy( (uParam1^), "JACOB", 32 );
        break;
        case 4:
        StrCopy( (uParam1^), "FAUSTIN", 32 );
        break;
        case 5:
        StrCopy( (uParam1^), "MANNY", 32 );
        break;
        case 6:
        StrCopy( (uParam1^), "ELIZABETA", 32 );
        break;
        case 7:
        StrCopy( (uParam1^), "DWAYNE", 32 );
        break;
        case 8:
        StrCopy( (uParam1^), "BRUCIE", 32 );
        break;
        case 9:
        StrCopy( (uParam1^), "PLAYBOY", 32 );
        break;
        case 10:
        StrCopy( (uParam1^), "KATE_MCREARY", 32 );
        break;
        case 11:
        StrCopy( (uParam1^), "FRANCIS_MCREARY", 32 );
        break;
        case 12:
        StrCopy( (uParam1^), "CIA_CHARACTER", 32 );
        break;
        case 13:
        StrCopy( (uParam1^), "PACKIE_MCREARY", 32 );
        break;
        case 14:
        StrCopy( (uParam1^), "RAY_BOCCINO", 32 );
        break;
        case 15:
        StrCopy( (uParam1^), "GERRY_MCREARY", 32 );
        break;
        case 16:
        StrCopy( (uParam1^), "DERRICK_MCREARY", 32 );
        break;
        case 18:
        StrCopy( (uParam1^), "BERNIE", 32 );
        break;
        case 19:
        StrCopy( (uParam1^), "BELL", 32 );
        break;
        case 22:
        StrCopy( (uParam1^), "JIMMY_PEGORINO", 32 );
        break;
        case 20:
        StrCopy( (uParam1^), "GRAVELLI", 32 );
        break;
        case 25:
        StrCopy( (uParam1^), "DIMITRI", 32 );
        break;
        case 26:
        StrCopy( (uParam1^), "MALLORIE", 32 );
        break;
        case 27:
        case 42:
        StrCopy( (uParam1^), "GRACIE", 32 );
        break;
        case 28:
        StrCopy( (uParam1^), "ALEX", 32 );
        break;
        case 29:
        StrCopy( (uParam1^), "KIKI", 32 );
        break;
        case 30:
        StrCopy( (uParam1^), "CARMEN", 32 );
        break;
        case 35:
        StrCopy( (uParam1^), "RECEPTIONIST_F", 32 );
        break;
        case 36:
        StrCopy( (uParam1^), "BLACKMAILER_M", 32 );
        break;
        case 37:
        StrCopy( (uParam1^), "TOM", 32 );
        break;
        case 38:
        StrCopy( (uParam1^), "REAL_BADMAN", 32 );
        break;
        case 39:
        StrCopy( (uParam1^), "BRIAN", 32 );
        break;
        case 40:
        StrCopy( (uParam1^), "PI_CHERISE", 32 );
        break;
        case 41:
        StrCopy( (uParam1^), "PI_ED_LOW", 32 );
        break;
        case 43:
        StrCopy( (uParam1^), "HOSSAN", 32 );
        break;
        case 44:
        StrCopy( (uParam1^), "PI_ILYENA", 32 );
        break;
        case 45:
        StrCopy( (uParam1^), "IVAN", 32 );
        break;
        case 46:
        StrCopy( (uParam1^), "PI_JEFF", 32 );
        break;
        case 47:
        StrCopy( (uParam1^), "PI_MARLENE", 32 );
        break;
        case 48:
        StrCopy( (uParam1^), "CLARENCE", 32 );
        break;
        case 49:
        StrCopy( (uParam1^), "PI_MEL", 32 );
        break;
        case 50:
        StrCopy( (uParam1^), "PATHOS", 32 );
        break;
        case 51:
        StrCopy( (uParam1^), "SARA", 32 );
        break;
        case 52:
        StrCopy( (uParam1^), "GORDON", 32 );
        break;
        case 53:
        StrCopy( (uParam1^), "DARKO_BREVIC", 32 );
        break;
        case 21:
        StrCopy( (uParam1^), "LAZLOW", 32 );
        break;
        case 17:
        StrCopy( (uParam1^), "FIXER", 32 );
        break;
        default:
        StrCopy( (uParam1^), "", 32 );
        if (iParam0 != 56)
        {
            ;
        }
        break;
    }
    return;
}

void sub_7372(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

void sub_7612(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_7927(unknown uParam0)
{
    StrCopy( ref l_U4._fU0, uParam0, 16 );
    sub_7944();
    return;
}

void sub_7944()
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

void sub_8046(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U4._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U4._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_8126( "\n PED NUMBER ", uParam0 );
    sub_7612( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_8126(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_8252(boolean bParam0)
{
    unknown uVar3;

    if (g_U91._fU60 != -1)
    {
        switch (g_U15946[g_U91._fU60]._fU132._fU24)
        {
            case 0:
            case 3:
            case 4:
            case 5:
            return 0;
            break;
            default:
            if (g_U91._fU0 != 1000)
            {
                return 0;
            }
            break;
        }
    }
    if (bParam0)
    {
        GET_SCRIPT_TASK_STATUS( sub_1302(), 53, ref uVar3 );
        switch (uVar3)
        {
            case 7:
            case 2:
            return 1;
            break;
            default:
            sub_4162( "\n HAS_PHONE_CALL_ENDED - player is still using the phone" );
            return 0;
            break;
        }
    }
    return 1;
}

void sub_8519()
{
    return GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
}

void sub_8577()
{
    return g_U91._fU504;
}

void sub_8661(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (g_U10978)
    {
        sub_838( "Interactions_Started: Already on a mission" );
        return;
    }
    uVar4 = sub_3640( uParam0 );
    if (g_U34175._fU4)
    {
        sub_838( "Interactions_Started: Another interaction is already taking place" );
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
        sub_838( "Interactions_Started: This Random Character has been set to NOT allowToActivate" );
        return;
    }
    g_U34175._fU4 = 1;
    g_U34175._fU8 = uParam0;
    g_U34175._fU12 = uParam1;
    sub_9024();
    sub_9795( g_U34048[uVar4]._fU32 );
    g_U34048[uVar4]._fU32 = 0;
    sub_9939( uParam0, uParam1 );
    g_U10978 = 1;
    return;
}

void sub_9024()
{
    sub_9033();
    sub_9136( ref g_U9893._fU68 );
    sub_9185();
    return;
}

void sub_9033()
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

void sub_9136(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_9185()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_9223( 1, g_U569[I] )) == 0)
        {
            sub_9474( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_9652())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    g_U91._fU404 = 1000;
    return;
}

int sub_9223(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_9474(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_9559( g_U569 - 1 );
    return;
}

void sub_9559(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_9652()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_9223( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_9795(int iParam0)
{
    g_U34175._fU16._fU4 += iParam0;
    sub_9829();
    INCREMENT_INT_STAT( 286, iParam0 );
    return;
}

void sub_9829()
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

void sub_9939(unknown uParam0, int iParam1)
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
    sub_10785( cVar4 );
    return;
}

void sub_10785(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_10967(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_11003())
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

int sub_11003()
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

void sub_11352(unknown uParam0)
{
    int iVar3;

    if (sub_11362( ref iVar3 ))
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

int sub_11362(unknown uParam0)
{
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_1302() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1302(), uParam0 );
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

int sub_11509(unknown uParam0)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        return IS_CHAR_INJURED( (uParam0^) );
    }
    return 0;
}

void sub_11595()
{
    sub_11608( ref l_U280 );
    STOP_PLAYBACK_RECORDED_CAR( l_U286 );
    g_U65035++;
    if (g_U65035 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_1204(), 150 );
        SAY_AMBIENT_SPEECH( sub_1302(), "MISSION_FAIL_RAGE", 0, 0, 0 );
    }
    l_U270 = 1;
    sub_635();
    return;
}

void sub_11608(unknown uParam0)
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

void sub_11814()
{
    switch (l_U220)
    {
        case 0:
        l_U336 = {67.90000000, 1143.70000000, 1.91100000};
        l_U378 = 305.15740000;
        l_U324 = {-156.69100000, 1698.34900000, 17.98900000};
        l_U348 = {-0.30534300, 1.56991100, 0.01601700};
        l_U354 = {67.90000000, 1143.70000000, 1.91100000};
        l_U382 = 306.86820000;
        l_U426[0] = 200;
        l_U300 = {68.75290000, 1142.28300000, 1.91180000};
        l_U383 = 158.78780000;
        l_U196._fU8 = {67.65440000, 1142.51700000, 1.91100000};
        l_U196._fU56 = 0.00000000;
        l_U196._fU20 = {0.00000000, -0.59000000, -0.20000000};
        l_U196._fU44 = {0.40000000, 0.00000000, 0.10000000};
        l_U366 = {64.51580000, 1139.78200000, 5.00000000};
        l_U373 = 9.00000000;
        for ( l_U402 = 0; l_U402 <= 1; l_U402++ )
        {
            l_U422[l_U402] = 0;
        }
        l_U391 = 390357829;
        l_U392 = -344943009;
        l_U394 = 824245375;
        l_U196._fU4 = 943795626;
        REQUEST_MODEL( l_U391 );
        REQUEST_MODEL( l_U392 );
        SUPPRESS_CAR_MODEL( l_U392 );
        REQUEST_MODEL( l_U196._fU4 );
        GET_WEAPONTYPE_MODEL( 7, ref l_U393 );
        REQUEST_MODEL( l_U393 );
        REQUEST_CAR_RECORDING( 978 );
        CREATE_WIDGET_GROUP( "Sara position" );
        ADD_WIDGET_TOGGLE( "activate Hossan table position", ref l_U272 );
        ADD_WIDGET_FLOAT_SLIDER( "sara pos x", ref l_U196._fU20._fU0, -1000.00000000, 1000.00000000, 0.01000000 );
        ADD_WIDGET_FLOAT_SLIDER( "sara pos y", ref l_U196._fU20._fU4, -1000.00000000, 1000.00000000, 0.01000000 );
        ADD_WIDGET_FLOAT_SLIDER( "sara pos z", ref l_U196._fU20._fU8, -1000.00000000, 1000.00000000, 0.01000000 );
        ADD_WIDGET_FLOAT_SLIDER( "sara rot x", ref l_U196._fU44._fU0, -1000.00000000, 1000.00000000, 0.01000000 );
        ADD_WIDGET_FLOAT_SLIDER( "sara rot y", ref l_U196._fU44._fU4, -1000.00000000, 1000.00000000, 0.01000000 );
        ADD_WIDGET_FLOAT_SLIDER( "sara rot z", ref l_U196._fU44._fU8, -1000.00000000, 1000.00000000, 0.01000000 );
        ADD_WIDGET_FLOAT_SLIDER( "binoculars heading", ref l_U196._fU56, -1000.00000000, 1000.00000000, 0.01000000 );
        END_WIDGET_GROUP();
        l_U220 = 1;
        break;
        case 1:
        if (NOT l_U243)
        {
            if (((((HAS_MODEL_LOADED( l_U391 )) AND (HAS_MODEL_LOADED( l_U392 ))) AND (HAS_MODEL_LOADED( l_U393 ))) AND (HAS_MODEL_LOADED( l_U196._fU4 ))) AND (HAS_CAR_RECORDING_BEEN_LOADED( 978 )))
            {
                CLEAR_AREA( l_U354._fU0, l_U354._fU4, l_U354._fU8, 40.00000000, 1 );
                CREATE_CAR( l_U392, l_U354._fU0, l_U354._fU4, l_U354._fU8, ref l_U286, 1 );
                SET_CAR_HEADING( l_U286, l_U382 );
                SET_VEHICLE_DIRT_LEVEL( l_U286, 4.22000000 );
                LOCK_CAR_DOORS( l_U286, 2 );
                SET_VEH_HAS_STRONG_AXLES( l_U286, 1 );
                l_U235 = 1;
                CREATE_CHAR( 26, l_U391, l_U300._fU0, l_U300._fU4, l_U300._fU8, ref l_U280, 1 );
                SET_CHAR_HEADING( l_U280, l_U383 );
                GIVE_WEAPON_TO_CHAR( l_U280, 7, 20, 0 );
                sub_8046( 1, l_U280, "RI_JEFF", 0 );
                SET_CHAR_HEALTH( l_U280, 200 );
                SET_CHAR_SUFFERS_CRITICAL_HITS( l_U280, 0 );
                SET_CHAR_NEVER_TARGETTED( l_U280, 1 );
                SET_PED_DIES_WHEN_INJURED( l_U280, 1 );
                SET_CHAR_KEEP_TASK( l_U280, 1 );
                TASK_LOOK_AT_CHAR( l_U280, sub_1302(), -2, 0 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U280, 1 );
                GET_CAR_COORDINATES( l_U286, ref l_U351._fU0, ref l_U351._fU4, ref l_U351._fU8 );
                CREATE_OBJECT( l_U196._fU4, l_U196._fU8._fU0, l_U196._fU8._fU4, l_U196._fU8._fU8, ref l_U196._fU0, 1 );
                ATTACH_OBJECT_TO_CAR( l_U196._fU0, l_U286, 0, l_U196._fU20, l_U196._fU44 );
                SET_OBJECT_HEADING( l_U196._fU0, l_U196._fU56 );
                l_U243 = 1;
                l_U215 = 1;
            }
            else
            {
                WAIT( 0 );
            }
        }
        break;
    }
    return;
}

void sub_13299()
{
    switch (l_U221)
    {
        case 0:
        if (NOT l_U277)
        {
            sub_13409( ref l_U296, ref l_U296, ref l_U363, "JEF2_PMT4", "JEF2_PMT17", ref l_U278, 0, 0.00000000, 0.00000000, 0.00000000, 0.00000000 );
        }
        else
        {
            sub_13409( ref l_U292, ref l_U292, ref l_U366, "JEF2_PMT4", "JEF2_PMT17", ref l_U278, 0, 0.00000000, 0.00000000, 0.00000000, 0.00000000 );
        }
        if ((IS_KEYBOARD_KEY_PRESSED( 36 )) AND (NOT l_U222))
        {
            SET_CHAR_COORDINATES( sub_1302(), 13.63820000, 1151.86700000, 13.59920000 );
            SET_CHAR_HEADING( sub_1302(), 217.96410000 );
            l_U222 = 1;
        }
        if (NOT l_U277)
        {
            if (DOES_BLIP_EXIST( l_U296 ))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_1302(), 13.73550000, 1151.80900000, 13.59660000, 2.50000000, 2.50000000, 2.50000000, 0 ))
                {
                    REMOVE_BLIP( l_U296 );
                    ADD_BLIP_FOR_COORD( l_U366._fU0, l_U366._fU4, l_U366._fU8, ref l_U292 );
                    SET_ROUTE( l_U292, 1 );
                    l_U277 = 1;
                }
            }
        }
        if ((sub_13953( ref l_U286, 1000 )) || (sub_14085( ref l_U280 )))
        {
            CLEAR_PRINTS();
            PRINT_NOW( "JEF2_PMT14", 7500, 0 );
            ALTER_WANTED_LEVEL( sub_1204(), 2 );
            sub_11595();
        }
        if (sub_14223())
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_1204(), 0 )))
            {
                if (sub_14559( 1, 1 ))
                {
                    if (DOES_BLIP_EXIST( l_U296 ))
                    {
                        REMOVE_BLIP( l_U296 );
                    }
                    if (DOES_BLIP_EXIST( l_U292 ))
                    {
                        REMOVE_BLIP( l_U292 );
                    }
                    if (sub_11362( ref l_U288 ))
                    {
                        SET_PLAYER_CONTROL( sub_1204(), 0 );
                        CLEAR_CHAR_TASKS( sub_1302() );
                        OPEN_SEQUENCE_TASK( ref l_U434 );
                        TASK_LEAVE_CAR( 0, l_U288 );
                        CLOSE_SEQUENCE_TASK( l_U434 );
                        TASK_PERFORM_SEQUENCE( sub_1302(), l_U434 );
                        CLEAR_SEQUENCE_TASK( l_U434 );
                    }
                    GET_GAME_TIMER( ref l_U401 );
                    l_U221 = 1;
                }
            }
            else
            {
                TASK_SMART_FLEE_CHAR( l_U280, sub_1302(), 150.00000000, -1 );
                CLEAR_PRINTS();
                PRINT_NOW( "JEF2_PMT14", 7500, 1 );
                sub_11595();
            }
        }
        break;
        case 1:
        if (NOT IS_SCREEN_FADED_OUT())
        {
            if (NOT IS_SCREEN_FADING_OUT())
            {
                if ((sub_3324( ref l_U401, 1500 )) || (IS_CHAR_ON_FOOT( sub_1302() )))
                {
                    DO_SCREEN_FADE_OUT( 500 );
                }
            }
        }
        else
        {
            sub_15168();
            START_CUTSCENE_NOW( "rpJef2" );
            while (NOT HAS_CUTSCENE_LOADED())
            {
                WAIT( 0 );
            }
            while (NOT HAS_CUTSCENE_FINISHED())
            {
                WAIT( 0 );
            }
            sub_15361();
            sub_15898( 1 );
            PRINT_NOW( "JEF2_PMT5", 7500, 1 );
        }
        break;
    }
    return;
}

void sub_13409(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, boolean bParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    if (IS_WANTED_LEVEL_GREATER( sub_1204(), 0 ))
    {
        if (NOT (uParam5^))
        {
            if (DOES_BLIP_EXIST( (uParam1^) ))
            {
                REMOVE_BLIP( (uParam1^) );
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
            ADD_BLIP_FOR_COORD( iParam2->_fU0, iParam2->_fU4, iParam2->_fU8, uParam1 );
            SET_ROUTE( (uParam1^), 1 );
            if (bParam6)
            {
                sub_13579( uParam1, uParam7, uParam10 );
            }
            CLEAR_PRINTS();
            PRINT( uParam3, 7500, 1 );
        }
    }
    return;
}

void sub_13579(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2220 = (uParam0^);
        g_U2235 = {uParam1};
        g_U2233 = uParam4;
    }
    return;
}

int sub_13953(unknown uParam0, int iParam1)
{
    int iVar4;

    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            GET_CAR_HEALTH( (uParam0^), ref iVar4 );
            if (((((GET_PETROL_TANK_HEALTH( (uParam0^) )) < iParam1) || ((GET_ENGINE_HEALTH( (uParam0^) )) < iParam1)) || (HAS_CAR_BEEN_DAMAGED_BY_CHAR( (uParam0^), sub_1302() ))) || (iVar4 < iParam1))
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

int sub_14085(unknown uParam0)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( (uParam0^), sub_1302(), 0 ))
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

int sub_14223()
{
    if ((sub_14236( ref l_U280 )) < 8.00000000)
    {
        return 1;
    }
    if (DOES_VEHICLE_EXIST( l_U288 ))
    {
        if (IS_VEH_DRIVEABLE( l_U288 ))
        {
            if (IS_CHAR_SITTING_IN_CAR( sub_1302(), l_U288 ))
            {
                if (LOCATE_CAR_3D( l_U288, l_U354._fU0, l_U354._fU4, l_U354._fU8, 9.00000000, 9.00000000, 9.00000000, 0 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_14236(unknown uParam0)
{
    vector vVar3;
    vector vVar6;
    float Result;

    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    vVar6 = {0.00000000, 0.00000000, 0.00000000};
    Result = 0.00000000;
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        GET_CHAR_COORDINATES( sub_1302(), ref vVar3.x, ref vVar3.y, ref vVar3.z );
        GET_CHAR_COORDINATES( (uParam0^), ref vVar6.x, ref vVar6.y, ref vVar6.z );
        GET_DISTANCE_BETWEEN_COORDS_3D( vVar3.x, vVar3.y, vVar3.z, vVar6.x, vVar6.y, vVar6.z, ref Result );
        return Result;
    }
    return Result;
}

int sub_14559(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_1302() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1302(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_1302() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1302(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_1302()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_1302() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1302() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_1204() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_1204() )))
    {
        return 0;
    }
    return 1;
}

int sub_15168()
{
    if (sub_14559( 1, 1 ))
    {
        CLEAR_PRINTS();
        CLEAR_HELP();
        sub_1397( 0 );
        DISPLAY_HUD( 0 );
        DISPLAY_RADAR( 0 );
        SET_WIDESCREEN_BORDERS( 1 );
        SET_PLAYER_CONTROL( sub_1204(), 0 );
        CLEAR_CHAR_TASKS( sub_1302() );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1302(), 1 );
        ALLOW_EMERGENCY_SERVICES( 0 );
        return 1;
    }
    return 0;
}

void sub_15361()
{
    REQUEST_ANIMS( "missjeff2" );
    LOAD_ALL_OBJECTS_NOW();
    if (NOT (IS_CHAR_INJURED( l_U280 )))
    {
        if (IS_CHAR_IN_ANY_CAR( l_U280 ))
        {
            WARP_CHAR_FROM_CAR_TO_COORD( l_U280, 53.93180000, 1140.76900000, 2.16100000 );
            SET_CHAR_HEADING( l_U280, 284.13880000 );
        }
        else
        {
            SET_CHAR_HEADING( l_U280, 284.13880000 );
            SET_CHAR_COORDINATES( l_U280, 53.93180000, 1140.76900000, 2.16100000 );
        }
        CLEAR_CHAR_TASKS( l_U280 );
        TASK_PLAY_ANIM( l_U280, "jeff_upset", "missjeff2", 8.00000000, 1, 0, 0, 0, -2 );
    }
    GET_CURRENT_POLICE_CAR_MODEL( ref l_U395 );
    GET_CURRENT_BASIC_COP_MODEL( ref l_U396 );
    if (NOT (l_U396 == 0))
    {
        if (NOT (l_U395 == 0))
        {
            CREATE_CAR( l_U395, 8.28060000, 1156.92600000, 13.67950000, ref l_U290, 1 );
            SET_CAR_HEADING( l_U290, 271.91420000 );
            SET_CAR_ENGINE_ON( l_U290, 1, 1 );
            CREATE_CHAR_INSIDE_CAR( l_U290, 6, l_U396, ref l_U282[1] );
            SET_PED_WONT_ATTACK_PLAYER_WITHOUT_WANTED_LEVEL( l_U282[1], 1 );
        }
    }
    if (NOT (IS_CAR_DEAD( l_U286 )))
    {
        if (sub_11362( ref l_U289 ))
        {
            WARP_CHAR_FROM_CAR_TO_CAR( sub_1302(), l_U286, -1 );
        }
        else
        {
            WARP_CHAR_INTO_CAR( sub_1302(), l_U286 );
        }
        LOCK_CAR_DOORS( l_U286, 1 );
        ADD_BLIP_FOR_COORD( l_U324._fU0, l_U324._fU4, l_U324._fU8, ref l_U294 );
        SET_ROUTE( l_U294, 1 );
        l_U222 = 0;
        SET_WANTED_MULTIPLIER( 0.10000000 );
        l_U215 = 3;
    }
    return;
}

void sub_15898(boolean bParam0)
{
    CLEAR_PRINTS();
    CLEAR_HELP();
    sub_1397( 0 );
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    SET_WIDESCREEN_BORDERS( 0 );
    if (IS_PLAYER_PLAYING( sub_1204() ))
    {
        SET_INTERP_IN_OUT_VEHICLE_ENABLED_THIS_FRAME( 0 );
        SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 0 );
        SET_CAM_BEHIND_PED( sub_1302() );
        if (bParam0)
        {
            CLEAR_CHAR_TASKS( sub_1302() );
        }
        SET_PLAYER_CONTROL( sub_1204(), 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1302(), 0 );
    }
    ALLOW_EMERGENCY_SERVICES( 1 );
    DO_SCREEN_FADE_IN( 500 );
    return;
}

void sub_16194()
{
    sub_16208( l_U437 );
    TRIGGER_MISSION_COMPLETE_AUDIO( 50 );
    CLEAR_WANTED_LEVEL( sub_1204() );
    sub_19789( 46, "PIJ_DONE2", "PIJAUD", 0 );
    sub_20379( ref l_U281 );
    l_U269 = 1;
    sub_635();
    return;
}

void sub_16208(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_3640( uParam0 );
    if (NOT g_U34048[uVar3]._fU4)
    {
        sub_838( "Interactions_Move_On_To_Next_Sequence: Character not active - Tell Keith" );
        return;
    }
    sub_16330( uParam0 );
    g_U34048[uVar3]._fU28++;
    return;
}

void sub_16330(unknown uParam0)
{
    switch (uParam0)
    {
        case 38:
        sub_16460();
        break;
        case 39:
        sub_16826();
        break;
        case 40:
        sub_17085();
        break;
        case 48:
        sub_17268();
        break;
        case 41:
        sub_17453();
        break;
        case 42:
        sub_17649();
        break;
        case 43:
        sub_17830();
        break;
        case 44:
        sub_18013();
        break;
        case 45:
        sub_18194();
        break;
        case 46:
        sub_18373();
        break;
        case 47:
        sub_18684();
        break;
        case 49:
        sub_18884();
        break;
        case 50:
        sub_19061();
        break;
        case 51:
        sub_19259();
        break;
        default: sub_838( "Interactions_Pass: Unknown Random Interaction Character ID - tell Keith" );
    }
    sub_19534();
    sub_19607();
    return;
}

void sub_16460()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 38;
    uVar3 = sub_3640( iVar2 );
    sub_2029( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_16550( 500 );
        break;
        default: sub_838( "Interactions_Badman_Pass: Unknown Badman Sequence - tell Keith" );
    }
    return;
}

void sub_16550(unknown uParam0)
{
    sub_16561( uParam0 );
    return;
}

void sub_16561(unknown uParam0)
{
    ADD_SCORE( sub_1204(), uParam0 );
    sub_16586( uParam0 );
    return;
}

void sub_16586(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_838( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_16826()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 39;
    uVar3 = sub_3640( iVar2 );
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_16550( 100 );
        sub_2029( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 2:
        sub_16550( 200 );
        sub_2029( ref g_U34048[uVar3]._fU8, 168, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 3:
        sub_16550( 500 );
        break;
        default: sub_838( "Interactions_Brian_Pass: Unknown Brian Sequence - tell Keith" );
    }
    return;
}

void sub_17085()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 40;
    uVar3 = sub_3640( iVar2 );
    sub_2029( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_16550( 0 );
        break;
        default: sub_838( "Interactions_Cherise_Pass: Unknown Cherise Sequence - tell Keith" );
    }
    return;
}

void sub_17268()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 48;
    uVar3 = sub_3640( iVar2 );
    sub_2029( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_16550( 0 );
        break;
        default: sub_838( "Interactions_Clarence_Pass: Unknown Clarence Sequence - tell Keith" );
    }
    return;
}

void sub_17453()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 41;
    uVar3 = sub_3640( iVar2 );
    sub_2029( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_16550( 0 );
        break;
        case 2:
        sub_16550( 0 );
        break;
        default: sub_838( "Interactions_Eddie_Pass: Unknown Eddie Sequence - tell Keith" );
    }
    return;
}

void sub_17649()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 42;
    uVar3 = sub_3640( iVar2 );
    sub_2029( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_16550( 0 );
        break;
        default: sub_838( "Interactions_Gracie_Pass: Unknown Gracie Sequence - tell Keith" );
    }
    return;
}

void sub_17830()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 43;
    uVar3 = sub_3640( iVar2 );
    sub_2029( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_16550( 500 );
        break;
        default: sub_838( "Interactions_Hossan_Pass: Unknown Hossan Sequence - tell Keith" );
    }
    return;
}

void sub_18013()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 44;
    uVar3 = sub_3640( iVar2 );
    sub_2029( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_16550( 0 );
        break;
        default: sub_838( "Interactions_Ilyena_Pass: Unknown Ilyena Sequence - tell Keith" );
    }
    return;
}

void sub_18194()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 45;
    uVar3 = sub_3640( iVar2 );
    sub_2029( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_16550( 1000 );
        break;
        default: sub_838( "Interactions_Ivan_Pass: Unknown Ivan Sequence - tell Keith" );
    }
    return;
}

void sub_18373()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 46;
    uVar3 = sub_3640( iVar2 );
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_16550( 1000 );
        sub_18460( ref g_U34048[uVar3]._fU8 );
        g_U34048[uVar3]._fU24 = 1;
        break;
        case 2:
        sub_16550( 5000 );
        sub_2029( ref g_U34048[uVar3]._fU8, 96, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 3: break;
        default: sub_838( "Interactions_Jeff_Pass: Unknown Jeff Sequence - tell Keith" );
    }
    return;
}

void sub_18460(int iParam0)
{
    sub_18473( iParam0 + 0 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    return;
}

void sub_18473(int iParam0)
{
    GET_CURRENT_DATE( iParam0 + 0, iParam0 + 4 );
    return;
}

void sub_18684()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 47;
    uVar3 = sub_3640( iVar2 );
    sub_2029( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_16550( 0 );
        break;
        case 2:
        sub_16550( 0 );
        break;
        default: sub_838( "Interactions_Marnie_Pass: Unknown Marnie Sequence - tell Keith" );
    }
    return;
}

void sub_18884()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 49;
    uVar3 = sub_3640( iVar2 );
    sub_2029( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_16550( 500 );
        break;
        default: sub_838( "Interactions_Mel_Pass: Unknown Mel Sequence - tell Keith" );
    }
    return;
}

void sub_19061()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 50;
    uVar3 = sub_3640( iVar2 );
    sub_2029( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_16550( 0 );
        break;
        case 2:
        sub_16550( 0 );
        break;
        default: sub_838( "Interactions_Pathos_Pass: Unknown Pathos Sequence - tell Keith" );
    }
    return;
}

void sub_19259()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 51;
    uVar3 = sub_3640( iVar2 );
    sub_2029( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_16550( 0 );
        break;
        case 2:
        sub_16550( 1000 );
        break;
        default: sub_838( "Interactions_Sara_Pass: Unknown Sara Sequence - tell Keith" );
    }
    return;
}

void sub_19534()
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

void sub_19607()
{
    sub_19616();
    StrCopy( ref g_U9926, "RIPASS", 16 );
    return;
}

void sub_19616()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_19789(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    char[12] cVar6;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    array(ref cVar6, 2);
    StrCopy( ref cVar6[0], uParam1, 16 );
    StrCopy( ref cVar6[1], "END", 16 );
    sub_19833( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_19833(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    unknown uVar35;
    unknown uVar36;
    int I;
    int iVar38;

    array(ref uVar8._fU32, 5);
    ref uVar8;
    iVar38 = uVar8._fU32;
    if (NOT (IS_THREAD_ACTIVE( g_U812 )))
    {
        uVar8._fU12 = uParam0;
        if ((uParam1^) > iVar38)
        {
            SCRIPT_ASSERT( "TELL SIMON END CALL ARRAY SIZE NEEDS INCREASING" );
            return;
        }
        for ( I = 0; I <= ((uParam1^) - 1); I++ )
        {
            uVar8._fU32[I] = {(uParam1^)[I]};
        }
        if ((uParam1^) < iVar38)
        {
            StrCopy( ref uVar8._fU32[(uParam1^)], "END", 16 );
        }
        StrCopy( ref uVar8._fU16, uParam2, 16 );
        uVar8._fU0 = uParam3;
        uVar8._fU4 = uParam4;
        uVar8._fU8 = uParam5;
        REQUEST_SCRIPT( "SPcellphoneEndCall" );
        while (NOT (HAS_SCRIPT_LOADED( "SPcellphoneEndCall" )))
        {
            REQUEST_SCRIPT( "SPcellphoneEndCall" );
            WAIT( 0 );
        }
        g_U811 = 1;
        g_U812 = START_NEW_SCRIPT_WITH_ARGS( "SPcellphoneEndCall", ref uVar8, 29, 1024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    }
    else
    {
        SCRIPT_ASSERT( "MAKE_END_OF_MISSION_CALL() has been called more than once, might be in a loop" );
    }
    return;
}

void sub_20379(unknown uParam0)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            DELETE_CHAR( uParam0 );
        }
    }
    return;
}

void sub_20489()
{
    if (IS_VEH_DRIVEABLE( l_U286 ))
    {
        if (NOT (IS_CAR_IN_WATER( l_U286 )))
        {
            if (CHECK_STUCK_TIMER( l_U286, 0, 5000 ))
            {
                CLEAR_PRINTS();
                PRINT( "JEF2_PMT14", 7500, 1 );
                sub_11595();
            }
            if (((CHECK_STUCK_TIMER( l_U286, 3, 60000 )) || (CHECK_STUCK_TIMER( l_U286, 2, 30000 ))) || (CHECK_STUCK_TIMER( l_U286, 1, 40000 )))
            {
                CLEAR_PRINTS();
                PRINT( "JEF2_PMT14", 7500, 1 );
                sub_11595();
            }
        }
    }
    else if (NOT (IS_CAR_IN_WATER( l_U286 )))
    {
        CLEAR_PRINTS();
        PRINT( "JEF2_PMT13", 7500, 1 );
        ALTER_WANTED_LEVEL( sub_1204(), 2 );
        sub_11595();
    }
    return;
}

float sub_20769(unknown uParam0)
{
    vector vVar3;
    vector vVar6;
    float Result;

    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    vVar6 = {0.00000000, 0.00000000, 0.00000000};
    Result = 0.00000000;
    if (NOT (IS_CAR_DEAD( (uParam0^) )))
    {
        GET_CHAR_COORDINATES( sub_1302(), ref vVar3.x, ref vVar3.y, ref vVar3.z );
        GET_CAR_COORDINATES( (uParam0^), ref vVar6.x, ref vVar6.y, ref vVar6.z );
        GET_DISTANCE_BETWEEN_COORDS_3D( vVar3.x, vVar3.y, vVar3.z, vVar6.x, vVar6.y, vVar6.z, ref Result );
        return Result;
    }
    return 22.22000000;
}

int sub_20993(unknown uParam0, unknown uParam1)
{
    int I;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    int[7] iVar10;

    array(ref iVar10, 7);
    iVar10[0] = 2046537925;
    iVar10[1] = -1627000575;
    iVar10[2] = 148777611;
    iVar10[3] = 1127131465;
    iVar10[4] = -1900572838;
    iVar10[5] = 1911513875;
    iVar10[6] = -350085182;
    if (IS_VEH_DRIVEABLE( (uParam0^) ))
    {
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( (uParam0^), 0.00000000, -5.00000000, 0.00000000, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        for ( I = 0; I <= 6; I++ )
        {
            GET_RANDOM_CAR_IN_SPHERE_NO_SAVE( uVar5._fU0, uVar5._fU4, uVar5._fU8, 7.00000000, iVar10[I], 1, ref uVar8 );
            if (NOT (IS_CAR_DEAD( uVar8 )))
            {
                if (NOT (IS_WANTED_LEVEL_GREATER( sub_1204(), 0 )))
                {
                    ALTER_WANTED_LEVEL_NO_DROP( sub_1204(), 1 );
                    APPLY_WANTED_LEVEL_CHANGE_NOW( sub_1204() );
                    return 1;
                }
            }
        }
        BEGIN_CHAR_SEARCH_CRITERIA();
        SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 26 );
        SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 27 );
        SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 28 );
        SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 29 );
        SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 30 );
        SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 31 );
        END_CHAR_SEARCH_CRITERIA();
        if (GET_CLOSEST_CHAR( uVar5._fU0, uVar5._fU4, uVar5._fU8, 7.00000000, 1, 1, ref uVar9 ))
        {
            if (NOT (IS_CHAR_DEAD( uVar9 )))
            {
                if (((IS_CHAR_MODEL( uVar9, -370395528 )) || (IS_CHAR_MODEL( uVar9, -183203150 ))) || (IS_CHAR_MODEL( uVar9, -1518937979 )))
                {
                    if (NOT (IS_WANTED_LEVEL_GREATER( sub_1204(), 0 )))
                    {
                        ALTER_WANTED_LEVEL_NO_DROP( sub_1204(), 1 );
                        APPLY_WANTED_LEVEL_CHANGE_NOW( sub_1204() );
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_21539(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, boolean bParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    if (IS_WANTED_LEVEL_GREATER( sub_1204(), 0 ))
    {
        if (NOT (uParam5^))
        {
            if (DOES_BLIP_EXIST( (uParam1^) ))
            {
                REMOVE_BLIP( (uParam1^) );
            }
            PRINT_NOW( uParam3, 7500, 1 );
            (uParam5^) = 1;
        }
    }
    else if ((uParam5^))
    {
        CLEAR_THIS_PRINT( uParam3 );
        (uParam5^) = 0;
        if (NOT (DOES_BLIP_EXIST( uParam0 )))
        {
            if (NOT l_U267)
            {
                ADD_BLIP_FOR_COORD( iParam2->_fU0, iParam2->_fU4, iParam2->_fU8, uParam1 );
                SET_ROUTE( (uParam1^), 1 );
                if (bParam6)
                {
                    sub_13579( uParam1, uParam7, uParam10 );
                }
            }
            CLEAR_PRINTS();
            PRINT( uParam4, 7500, 1 );
        }
    }
    return;
}

void sub_21752()
{
    switch (l_U218)
    {
        case 0:
        if (NOT (IS_CAR_DEAD( l_U286 )))
        {
            if (IS_CHAR_IN_CAR( sub_1302(), l_U286 ))
            {
                if (DOES_BLIP_EXIST( l_U294 ))
                {
                    if (LOCATE_CHAR_IN_CAR_3D( sub_1302(), l_U324._fU0, l_U324._fU4, l_U324._fU8, 2.50000000, 2.50000000, 2.50000000, 1 ))
                    {
                        HINT_CAM( -152.69220000, 1765.89500000, 15.20880000, 0, 0, 0, 2000 );
                        REMOVE_BLIP( l_U294 );
                        CLEAR_PRINTS();
                        PRINT( "JEF2_PMT6", 5000, 1 );
                        PRINT_HELP( "JEF2_HELP_0" );
                        l_U415[0] = 1;
                        l_U267 = 1;
                        l_U218 = 2;
                    }
                }
            }
        }
        if ((IS_KEYBOARD_KEY_PRESSED( 36 )) AND (NOT (l_U407[0] == 1)))
        {
            l_U407[0] = 1;
            SET_CHAR_COORDINATES( sub_1302(), -148.39400000, 1689.96100000, 15.73050000 );
        }
        break;
        case 2: break;
    }
    sub_22095( ref l_U286, ref l_U293 );
    if (NOT l_U276)
    {
        if (NOT l_U271)
        {
            if ((sub_22612( ref l_U280, ref l_U426 )) || (IS_CHAR_RESPONDING_TO_EVENT( l_U280, 13 )))
            {
                SET_CHAR_KEEP_TASK( l_U280, 1 );
                OPEN_SEQUENCE_TASK( ref l_U433 );
                TASK_SMART_FLEE_CHAR( 0, sub_1302(), 150.00000000, -1 );
                CLOSE_SEQUENCE_TASK( l_U433 );
                TASK_PERFORM_SEQUENCE( l_U280, l_U433 );
                CLEAR_SEQUENCE_TASK( l_U433 );
                l_U271 = 1;
            }
        }
        if (((sub_14236( ref l_U280 )) > 150.00000000) AND (NOT (IS_CHAR_ON_SCREEN( l_U280 ))))
        {
            sub_20379( ref l_U280 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U391 );
            l_U276 = 1;
        }
    }
    for ( l_U402 = 0; l_U402 <= 1; l_U402++ )
    {
        if (DOES_CHAR_EXIST( l_U282[l_U402] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U282[l_U402] )))
            {
                if (((sub_14236( ref l_U282[l_U402] )) > 150.00000000) AND (NOT (IS_CHAR_ON_SCREEN( l_U282[l_U402] ))))
                {
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U282[l_U402] );
                }
            }
        }
    }
    if (DOES_VEHICLE_EXIST( l_U290 ))
    {
        if (IS_VEH_DRIVEABLE( l_U290 ))
        {
            if (((sub_20769( ref l_U290 )) > 150.00000000) AND (NOT (IS_CAR_ON_SCREEN( l_U290 ))))
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U290 );
            }
        }
    }
    return;
}

int sub_22095(unknown uParam0, unknown uParam1)
{
    if (IS_VEH_DRIVEABLE( (uParam0^) ))
    {
        if (DOES_BLIP_EXIST( (uParam1^) ))
        {
            if (IS_CHAR_SITTING_IN_CAR( sub_1302(), (uParam0^) ))
            {
                REMOVE_BLIP( (uParam1^) );
                CLEAR_PRINTS();
                if (NOT (IS_WANTED_LEVEL_GREATER( sub_1204(), 0 )))
                {
                    if (NOT l_U267)
                    {
                        ADD_BLIP_FOR_COORD( l_U324._fU0, l_U324._fU4, l_U324._fU8, ref l_U294 );
                        SET_ROUTE( l_U294, 1 );
                    }
                    PRINT_NOW( "JEF2_PMT6", 7500, 1 );
                }
                else
                {
                    PRINT_NOW( "JEF2_PMT17", 7500, 1 );
                }
            }
        }
        else if (NOT (IS_CHAR_SITTING_IN_CAR( sub_1302(), (uParam0^) )))
        {
            if (NOT l_U273)
            {
                GET_GAME_TIMER( ref l_U428 );
                l_U273 = 1;
            }
            if (NOT l_U275)
            {
                if (DOES_BLIP_EXIST( l_U294 ))
                {
                    REMOVE_BLIP( l_U294 );
                    l_U275 = 1;
                }
            }
            if ((NOT (IS_CAR_IN_WATER( l_U286 ))) || (IS_VEHICLE_ON_ALL_WHEELS( l_U286 )))
            {
                if (sub_3324( ref l_U428, 5000 ))
                {
                    if (NOT (DOES_BLIP_EXIST( (uParam1^) )))
                    {
                        if (NOT l_U267)
                        {
                            if (DOES_BLIP_EXIST( l_U294 ))
                            {
                                REMOVE_BLIP( l_U294 );
                            }
                        }
                        ADD_BLIP_FOR_CAR( (uParam0^), uParam1 );
                        SET_BLIP_AS_FRIENDLY( (uParam1^), 1 );
                        CLEAR_PRINTS();
                        PRINT( "JEF2_PMT11", 7500, 1 );
                        l_U273 = 0;
                        l_U275 = 0;
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_22612(unknown uParam0, unknown uParam1)
{
    unknown[2] uVar4;

    array(ref uVar4, 2);
    return sub_22631( uParam0, ref uVar4, uParam1, 0 );
}

int sub_22631(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3)
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
                    if (((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( (uParam1^)[I], sub_1302(), 0 )) || (iVar7 < (uParam2^)[I])) || (IS_CHAR_RESPONDING_TO_EVENT( (uParam1^)[I], 9 )))
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
            if (((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( (uParam0^), sub_1302(), 0 )) || (iVar7 < (uParam2^)[0])) || (IS_CHAR_RESPONDING_TO_EVENT( (uParam0^), 9 )))
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