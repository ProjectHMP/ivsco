void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 1;
    l_U4 = 3;
    l_U104 = 0;
    l_U105 = 0;
    l_U106 = 0;
    l_U107 = 0;
    l_U108 = 0;
    l_U110 = -1;
    l_U124 = 15.00000000;
    l_U125 = 35.00000000;
    l_U126 = 16.00000000;
    l_U127 = 0.00000000;
    l_U133 = 1000.00000000;
    l_U134 = 7500.00000000;
    l_U143 = 1;
    l_U144 = 30.00000000;
    l_U145 = 30.00000000;
    l_U146 = 2.00000000;
    l_U156 = 0.00000000;
    l_U157 = 0.00000000;
    l_U169 = 1;
    l_U170 = 0;
    l_U171 = -1;
    l_U172 = 1;
    l_U173 = -1;
    l_U174 = -1;
    l_U175 = 15.00000000;
    l_U202 = 0;
    l_U203 = -1949702649;
    l_U204 = 2075870698;
    l_U209 = 0.12000000;
    l_U216 = 0;
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
    l_U239 = 0;
    l_U240 = 0;
    l_U241 = 0;
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
    l_U260 = 1;
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
    l_U280 = 0;
    l_U281 = 0;
    l_U282 = 0;
    l_U283 = 0;
    l_U284 = 0;
    l_U285 = 0;
    l_U286 = 0;
    l_U287 = 0;
    l_U288 = 0;
    l_U289 = 0;
    l_U290 = 0;
    l_U291 = 0;
    l_U292 = 0;
    l_U293 = 0;
    l_U294 = 0;
    l_U295 = 0;
    l_U296 = 0;
    l_U297 = 0;
    l_U298 = 0;
    l_U299 = 0;
    l_U300 = 0;
    l_U301 = 0;
    l_U302 = 0;
    l_U303 = 1;
    l_U304 = 0;
    l_U305 = 0;
    l_U306 = 0;
    l_U307 = 0;
    l_U308 = 0;
    l_U359 = 1;
    l_U392 = {-204.56060000, 1188.91400000, 13.51080000};
    l_U395 = {-1279.96800000, 407.98480000, 15.47440000};
    l_U398 = {-847.45720000, 1168.08200000, 17.03410000};
    l_U401 = {-1546.89900000, 240.59970000, 11.30320000};
    l_U404 = {-203.99900000, 1191.19800000, 13.47590000};
    l_U407 = {-218.23260000, 1211.84500000, 13.46950000};
    l_U410 = {-205.22760000, 1210.09900000, 13.51350000};
    l_U413 = {-206.96690000, 1215.45900000, 13.47650000};
    l_U416 = {-210.75270000, 1194.69300000, 13.47990000};
    l_U419 = {-221.58060000, 1225.29500000, 18.10270000};
    l_U422 = {65316, 1220, 15};
    l_U425 = {65326, 1225, 25};
    l_U428 = {65326, 1220, 10};
    l_U431 = {65336, 1225, 20};
    l_U434 = {-205.27710000, 1258.75400000, 20.94330000};
    l_U437 = 171.25360000;
    l_U440 = 0;
    l_U449 = 287.28330000;
    l_U450 = 242.50220000;
    l_U451 = 98.93450000;
    l_U452 = 290.35580000;
    l_U453 = 93.72900000;
    l_U467 = 13;
    if (sub_1158( l_U467, l_U359 ))
    {
        if (IS_PLAYER_PLAYING( sub_1855() ))
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_1855(), 0 )))
            {
                if (HAS_DEATHARREST_EXECUTED())
                {
                    sub_1929();
                }
                while (true)
                {
                    WAIT( 0 );
                    if (NOT l_U233)
                    {
                        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
                        {
                            if (IS_SCORE_GREATER( sub_1855(), 1 ))
                            {
                                if (sub_3387())
                                {
                                    WAIT( 0 );
                                }
                                else if (g_U12303)
                                {
                                    sub_1929();
                                }
                                sub_3539( ref l_U334 );
                                if (NOT sub_3620())
                                {
                                    sub_1929();
                                }
                                switch (l_U229)
                                {
                                    case 0:
                                    sub_3705();
                                    break;
                                    case 1:
                                    sub_7821();
                                    break;
                                }
                            }
                            else
                            {
                                sub_1929();
                            }
                        }
                        else
                        {
                            sub_1929();
                        }
                        sub_11975();
                    }
                    if (l_U233)
                    {
                        switch (l_U230)
                        {
                            case 0:
                            sub_12094();
                            break;
                            default:
                        }
                    }
                }
            }
            else if (NOT (IS_CHAR_IN_ANY_CAR( sub_2856() )))
            {
                if (sub_8199() < 25)
                {
                    PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                }
            }
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U309, 0, 0, 0 );
            }
            sub_1929();;
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

void sub_1158(unknown uParam0, unknown uParam1)
{
    if (sub_1167())
    {
        return 0;
    }
    return sub_1214( uParam0, uParam1 );
}

int sub_1167()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_1214(unknown uParam0, int iParam1)
{
    unknown uVar4;

    uVar4 = sub_1225( uParam0 );
    if (NOT g_U27953._fU0)
    {
        return 0;
    }
    if (g_U12303)
    {
        return 0;
    }
    if (g_U0)
    {
        return 1;
    }
    if (NOT g_U27892[uVar4]._fU0)
    {
        return 0;
    }
    if (NOT g_U27892[uVar4]._fU4)
    {
        return 0;
    }
    if (IS_BIT_SET( g_U10959._fU0, 2 ))
    {
        return 0;
    }
    if (NOT g_U27892[uVar4]._fU24)
    {
        if (sub_1527( g_U27892[uVar4]._fU8 ))
        {
            g_U27892[uVar4]._fU24 = 1;
        }
    }
    if (NOT g_U27892[uVar4]._fU24)
    {
        return 0;
    }
    if (g_U27892[uVar4]._fU28 == iParam1)
    {
        return 1;
    }
    return 0;
}

int sub_1225(unknown uParam0)
{
    int iVar3;

    if (NOT (sub_1236( uParam0 )))
    {
        sub_1341( "Not a genuine RI Character ID - Tell Keith" );
        return 0;
    }
    iVar3 = uParam0;
    return iVar3 - 13;
}

int sub_1236(unknown uParam0)
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

void sub_1341(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

int sub_1527(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    if (sub_1696( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_1696(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
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

void sub_1855()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1929()
{
    if (sub_1948( l_U467, l_U359 ))
    {
        sub_2038( l_U467, l_U359 );
        CLEAR_HELP();
        if (IS_PLAYER_PLAYING( sub_1855() ))
        {
            SET_PLAYER_CONTROL( sub_1855(), 1 );
        }
        sub_2518();
    }
    sub_2569( ref l_U495, 0 );
    sub_2693();
    REMOVE_BLIP( l_U344 );
    SET_PED_IS_BLIND_RAGING( sub_2856(), 0 );
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 65276, 1150, -10, 65396, 1220, 50 );
    if (NOT (IS_CAR_DEAD( l_U321 )))
    {
        LOCK_CAR_DOORS( l_U321, 1 );
        SET_VEHICLE_IS_CONSIDERED_BY_PLAYER( l_U321, 1 );
    }
    sub_3002();
    ENABLE_SCENE_STREAMING( 1 );
    g_U10460 = 1;
    if (DOES_CHAR_EXIST( l_U309 ))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U309 );
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_1948(int iParam0, int iParam1)
{
    if (NOT g_U27953._fU4)
    {
        return 0;
    }
    if (NOT (g_U27953._fU8 == iParam0))
    {
        return 0;
    }
    if (NOT (g_U27953._fU12 == iParam1))
    {
        return 0;
    }
    return 1;
}

void sub_2038(unknown uParam0, unknown uParam1)
{
    if (NOT (sub_1948( uParam0, uParam1 )))
    {
        sub_1341( "Interactions_Ended: Interaction for this character not active" );
        return;
    }
    sub_2134();
    if (g_U816)
    {
        sub_2214();
    }
    else
    {
        sub_2343();
    }
    g_U12303 = 0;
    return;
}

void sub_2134()
{
    if (g_U0)
    {
        g_U27953._fU0 = 0;
    }
    else
    {
        g_U27953._fU0 = 1;
    }
    g_U27953._fU4 = 0;
    g_U27953._fU8 = 19;
    g_U27953._fU12 = 0;
    return;
}

void sub_2214()
{
    if (COMPARE_STRING( ref g_U10987, "RIPASS" ))
    {
        StrCopy( ref g_U10987, "", 16 );
        return;
    }
    sub_2260();
    return;
}

void sub_2260()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10987, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U10987 );
    StrCopy( ref g_U10987, "", 16 );
    return;
}

void sub_2343()
{
    if (COMPARE_STRING( ref g_U10987, "RIPASS" ))
    {
        StrCopy( ref g_U10987, "", 16 );
        return;
    }
    sub_2389();
    return;
}

void sub_2389()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10987, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U10987 );
    StrCopy( ref g_U10987, "", 16 );
    return;
}

void sub_2518()
{
    if (IS_THREAD_ACTIVE( g_U10541 ))
    {
        DESTROY_THREAD( g_U10541 );
    }
    return;
}

void sub_2569(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8945)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_2693()
{
    if (l_U108)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED KILL_CHASE_HINT_CAM()" );
    }
    if (IS_HINT_RUNNING())
    {
        HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
    }
    l_U106 = 0;
    l_U105 = 0;
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    return;
}

void sub_2856()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3002()
{
    int I;
    unknown uVar3;

    for ( I = 0; I < 5; I++ )
    {
        uVar3 = sub_3025( I );
        if (HAVE_ANIMS_LOADED( uVar3 ))
        {
            REMOVE_ANIMS( uVar3 );
        }
    }
    return;
}

void sub_3025(unknown uParam0)
{
    string Result;

    Result = nil;
    switch (uParam0)
    {
        case 0:
        Result = "MISSBIKE_GESTFREE";
        break;
        case 1:
        Result = "MISSBIKE_GESTCHOP";
        break;
        case 2:
        Result = "MISSBIKE_GESTSPT";
        break;
        case 3:
        Result = "MISSBIKE_GESTSCOT";
        break;
        case 4:
        Result = "MISSBIKE_GESTDIRT";
        break;
    }
    return Result;
}

int sub_3387()
{
    if (IS_CHAR_IN_ANY_CAR( sub_2856() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2856(), ref l_U319 );
        if (NOT (l_U319 == nil))
        {
            if (IS_VEH_DRIVEABLE( l_U319 ))
            {
                GET_CAR_SPEED( l_U319, ref l_U438 );
                if (l_U438 > 15)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_3539(unknown uParam0)
{
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_2856() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2856(), uParam0 );
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

int sub_3620()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U20912)
    {
        return 0;
    }
    return 1;
}

void sub_3705()
{
    switch (l_U228)
    {
        case 0:
        l_U460 = sub_3743( 13 );
        REQUEST_MODEL( l_U460 );
        while (NOT (HAS_MODEL_LOADED( l_U460 )))
        {
            WAIT( 0 );
        }
        REQUEST_ANIMS( "missbrian" );
        while (NOT (HAVE_ANIMS_LOADED( "missbrian" )))
        {
            WAIT( 0 );
        }
        l_U228 = 1;
        break;
        case 1:
        if (NOT l_U234)
        {
            CLEAR_AREA( l_U401._fU0, l_U401._fU4, l_U401._fU8, 15.00000000, 1 );
            SWITCH_PED_PATHS_OFF( l_U401._fU0 - 5.00000000, l_U401._fU4 - 5.00000000, l_U401._fU8 - 5.00000000, l_U401._fU0 + 5.00000000, l_U401._fU4 + 5.00000000, l_U401._fU8 + 5.00000000 );
            sub_4338( 13, ref l_U309, l_U401._fU0, l_U401._fU4, l_U401._fU8, l_U437 );
            SET_CHAR_COMPONENT_VARIATION( l_U309, 1, 1, 0 );
            SET_CHAR_NEVER_TARGETTED( l_U309, 1 );
            SET_CHAR_CANT_BE_DRAGGED_OUT( l_U309, 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U309, 1 );
            l_U234 = 1;
        }
        while (NOT (sub_5653( ref l_U321, -1551.05200000, 241.09370000, 11.40260000, 171.25360000 )))
        {
            WAIT( 0 );
        }
        SET_VEHICLE_IS_CONSIDERED_BY_PLAYER( l_U321, 0 );
        LOCK_CAR_DOORS( l_U321, 3 );
        REQUEST_MODEL( -408052231 );
        while (NOT (HAS_MODEL_LOADED( -408052231 )))
        {
            WAIT( 0 );
        }
        CREATE_CAR( -408052231, -1553.33900000, 240.43440000, 11.45730000, ref l_U333, 1 );
        SET_CAR_HEADING( l_U333, 201.96370000 );
        CHANGE_CAR_COLOUR( l_U333, 98, 102 );
        SET_EXTRA_CAR_COLOURS( l_U333, 6, 0 );
        if (NOT (DOES_BLIP_EXIST( l_U344 )))
        {
            ADD_BLIP_FOR_CHAR( l_U309, ref l_U344 );
            CHANGE_BLIP_SPRITE( l_U344, 63 );
            SET_BLIP_AS_FRIENDLY( l_U344, 1 );
            CHANGE_BLIP_SCALE( l_U344, 1.00000000 );
            CHANGE_BLIP_DISPLAY( l_U344, 2 );
        }
        sub_7724( l_U467, l_U359 );
        if (l_U234)
        {
            l_U229 = 1;
        }
        break;
    }
    return;
}

int sub_3743(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -451718857;
        case 1: return 870892404;
        case 2: return -411638179;
        case 3: return -727962858;
        case 4: return -900623157;
        case 5: return 954215094;
        case 6: return 1728056212;
        case 7: return 1825562762;
        case 8: return -411638179;
        case 16: return 170756246;
        case 17: return -73790512;
        case 13: return 349841464;
        case 15: return -239294183;
    }
    sub_1341( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_4338(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( sub_4349( uParam0 ), sub_3743( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    sub_4456( uParam0, (uParam1^) );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_4562( uParam0, (uParam1^) );
    return;
}

int sub_4349(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        case 1:
        case 6:
        case 7:
        case 16:
        case 13: return 9;
    }
    return 25;
}

void sub_4456(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        case 1:
        case 6:
        case 7:
        case 16:
        case 13:
        SET_CHAR_RELATIONSHIP_GROUP( uParam1, 6 );
        break;
    }
    return;
}

void sub_4562(unknown uParam0, unknown uParam1)
{
    sub_4574( ref uParam1, uParam0 );
    g_U20762[uParam0]._fU0 = 1;
    g_U20762[uParam0]._fU4 = uParam1;
    return;
}

void sub_4574(unknown uParam0, int iParam1)
{
    sub_4585( uParam0 );
    if (iParam1 == 22)
    {
        sub_4685( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_5344( (uParam0^), iParam1, g_U38647[iParam1] );
    }
    return;
}

void sub_4585(unknown uParam0)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    return;
}

void sub_4685(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
    int iVar12;
    int iVar13;

    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
    {
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 0 )) == iParam1)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 0 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 0, iParam1, 0 );
        }
        if (((uParam0^) == sub_2856()) AND (g_U15728[19]))
        {
            if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == 0)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == 1)))
            {
                SET_CHAR_COMPONENT_VARIATION( (uParam0^), 1, 0, 1 );
            }
        }
        else if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == iParam2)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == 0)))
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
        GET_CHAR_PROP_INDEX( (uParam0^), 0, ref iVar13 );
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

void sub_5344(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 13:
        sub_4685( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_4685( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_5653(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    return sub_5670( uParam0, 13, uParam1, uParam4 );
}

void sub_5670(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;

    uVar8 = sub_5681( uParam1 );
    return sub_5914( uParam0, uVar8, uParam2, uParam5, uParam1 );
}

int sub_5681(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -359167535;
        case 1: return -570033273;
        case 6: return -408052231;
        case 7: return -408052231;
        case 13: return -408052231;
        case 16: return -408052231;
        case 17: return -255678177;
        case 15: return -1759858085;
    }
    SCRIPT_ASSERT( "Return_Contact_Vehicle_Model: Unknown Contact ID\n" );
    return -570033273;
}

int sub_5914(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    SUPPRESS_CAR_MODEL( uParam1 );
    REQUEST_MODEL( uParam1 );
    if (NOT (HAS_MODEL_LOADED( uParam1 )))
    {
        REQUEST_MODEL( uParam1 );
        return 0;
    }
    CLEAR_AREA( uParam2._fU0, uParam2._fU4, uParam2._fU8, 5.00000000, 0 );
    CREATE_CAR( uParam1, uParam2._fU0, uParam2._fU4, uParam2._fU8, uParam0, 1 );
    SET_CAR_HEADING( (uParam0^), uParam5 );
    SET_CAR_ON_GROUND_PROPERLY( (uParam0^) );
    sub_6048( (uParam0^), uParam1, uParam6 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( uParam1 );
    }
    return 1;
}

void sub_6048(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case -159126838:
        CHANGE_CAR_COLOUR( uParam0, 106, 106 );
        SET_EXTRA_CAR_COLOURS( uParam0, 127, 0 );
        break;
        case 301427732:
        CHANGE_CAR_COLOUR( uParam0, 69, 112 );
        SET_EXTRA_CAR_COLOURS( uParam0, 112, 0 );
        break;
        case -570033273:
        if (iParam2 == 1)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 0, 0 );
            SET_EXTRA_CAR_COLOURS( uParam0, 4, 35 );
        }
        break;
        case -408052231:
        switch (iParam2)
        {
            case 6:
            case 13:
            case 16:
            case 7:
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            if (iParam2 == 6)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
                CHANGE_CAR_COLOUR( uParam0, 78, 37 );
                SET_EXTRA_CAR_COLOURS( uParam0, 81, 1 );
            }
            else if (iParam2 == 13)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 0 );
                CHANGE_CAR_COLOUR( uParam0, 37, 90 );
                SET_EXTRA_CAR_COLOURS( uParam0, 129, 1 );
            }
            else if (iParam2 == 16)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
                CHANGE_CAR_COLOUR( uParam0, 69, 88 );
                SET_EXTRA_CAR_COLOURS( uParam0, 125, 1 );
            }
            else if (iParam2 == 7)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 0 );
                CHANGE_CAR_COLOUR( uParam0, 70, 78 );
                SET_EXTRA_CAR_COLOURS( uParam0, 1, 1 );
            }
            else
            {
                SCRIPT_ASSERT( "Set_Gang_Bike_Colours: DIABOLUS - missing bike extras and colours for contact" );
            };;;;
            break;
        }
        break;
        case 584879743:
        CHANGE_CAR_COLOUR( uParam0, 78, 66 );
        SET_EXTRA_CAR_COLOURS( uParam0, 90, 0 );
        break;
        case 802082487: break;
        case -359167535:
        CHANGE_CAR_COLOUR( uParam0, 1, 90 );
        SET_EXTRA_CAR_COLOURS( uParam0, 95, 0 );
        break;
        case -571009320:
        CHANGE_CAR_COLOUR( uParam0, 112, 74 );
        SET_EXTRA_CAR_COLOURS( uParam0, 4, 0 );
        break;
        case 2006142190:
        CHANGE_CAR_COLOUR( uParam0, 132, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 131, 0 );
        break;
        case -1606187161:
        CHANGE_CAR_COLOUR( uParam0, 85, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 82, 0 );
        break;
        case -618617997:
        CHANGE_CAR_COLOUR( uParam0, 33, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 5, 0 );
        break;
        case -77769032: break;
        case -1670998136: break;
        case -1759858085:
        if (iParam2 == 15)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 132, 1 );
            SET_EXTRA_CAR_COLOURS( uParam0, 112, 112 );
        }
        break;
        case 1265391242: break;
        case -255678177:
        if (iParam2 == 17)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 112, 112 );
            SET_EXTRA_CAR_COLOURS( uParam0, 1, 112 );
        }
        break;
        case -114291515: break;
        case -891462355: break;
    }
    return;
}

void sub_7724(unknown uParam0, int iParam1)
{
    unknown uVar4;

    uVar4 = sub_1225( uParam0 );
    if (NOT (g_U27892[uVar4]._fU28 == iParam1))
    {
        return;
    }
    g_U27892[uVar4]._fU76 = 1;
    return;
}

void sub_7821()
{
    if ((IS_CHAR_INJURED( l_U309 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U309, sub_2856(), 0 )))
    {
        if (IS_HINT_RUNNING())
        {
            HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U309, 0, 0, 0 );
        }
        sub_1929();
    }
    if (NOT l_U237)
    {
        TASK_PLAY_ANIM( l_U309, "lean", "missbrian", 8.00000000, 1, 0, 0, 0, 0 );
        l_U237 = 1;
    }
    switch (l_U231)
    {
        case 0:
        if (NOT (IS_CAR_DEAD( l_U321 )))
        {
            if (NOT (IS_CHAR_DEAD( l_U309 )))
            {
                if (((((((IS_CHAR_INJURED( l_U309 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U309, sub_2856(), 0 ))) || (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U321, sub_2856() ))) || (IS_CHAR_ON_FIRE( l_U309 ))) || (IS_WANTED_LEVEL_GREATER( sub_1855(), 0 ))) || (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_1855(), l_U309 ))) || (IS_CHAR_TOUCHING_CHAR( sub_2856(), l_U309 )))
                {
                    if (IS_WANTED_LEVEL_GREATER( sub_1855(), 0 ))
                    {
                        if (NOT (IS_CHAR_IN_ANY_CAR( sub_2856() )))
                        {
                            if (sub_8199() < 25)
                            {
                                PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                            }
                        }
                    }
                    if (IS_HINT_RUNNING())
                    {
                        HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U309, 0, 0, 0 );
                    }
                    sub_1929();
                }
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U309 )))
        {
            if ((sub_8199() < 18) AND (IS_CHAR_ON_FOOT( sub_2856() )))
            {
                if ((NOT IS_HINT_RUNNING()) AND (NOT l_U236))
                {
                    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U309, 0, 0, 6000 );
                    l_U236 = 1;
                }
                l_U231 = 1;
            }
        }
        break;
        case 1:
        if (NOT (IS_CAR_DEAD( l_U321 )))
        {
            if (NOT (IS_CHAR_DEAD( l_U309 )))
            {
                if (((((((IS_CHAR_INJURED( l_U309 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U309, sub_2856(), 0 ))) || (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U321, sub_2856() ))) || (IS_CHAR_ON_FIRE( l_U309 ))) || (IS_WANTED_LEVEL_GREATER( sub_1855(), 0 ))) || (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_1855(), l_U309 ))) || (IS_CHAR_TOUCHING_CHAR( sub_2856(), l_U309 )))
                {
                    if (IS_WANTED_LEVEL_GREATER( sub_1855(), 0 ))
                    {
                        if (NOT (IS_CHAR_IN_ANY_CAR( sub_2856() )))
                        {
                            if (sub_8199() < 25)
                            {
                                PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                            }
                        }
                    }
                    if (IS_HINT_RUNNING())
                    {
                        HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U309, 0, 0, 0 );
                    }
                    sub_1929();
                }
            }
        }
        if (sub_8199() < 4.50000000)
        {
            if (IS_CHAR_ON_FOOT( sub_2856() ))
            {
                if (NOT (IS_CHAR_INJURED( l_U309 )))
                {
                    if (sub_8897( 1, 1 ))
                    {
                        if (sub_8897( 1, 1 ))
                        {
                            if (NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U309, sub_2856(), 0 )))
                            {
                                if (NOT (IS_CHAR_ON_FIRE( l_U309 )))
                                {
                                    if (NOT (IS_WANTED_LEVEL_GREATER( sub_1855(), 0 )))
                                    {
                                        if (sub_3620())
                                        {
                                            SET_MISSION_FLAG( 1 );
                                            SET_PLAYER_CONTROL( sub_1855(), 0 );
                                            if (NOT (IS_CHAR_INJURED( sub_2856() )))
                                            {
                                                GET_CHAR_COORDINATES( sub_2856(), ref l_U364._fU0, ref l_U364._fU4, ref l_U364._fU8 );
                                            }
                                            DO_SCREEN_FADE_OUT( 100 );
                                            while (NOT IS_SCREEN_FADED_OUT())
                                            {
                                                WAIT( 0 );
                                            }
                                            LOAD_SCENE( l_U401._fU0, l_U401._fU4, l_U401._fU8 );
                                            l_U231 = 2;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U309 )))
        {
            if ((sub_9438( sub_2856(), l_U309, 1 )) < 7.50000000)
            {
                CLEAR_CHAR_TASKS( l_U309 );
                TASK_LOOK_AT_CHAR( l_U309, sub_2856(), -2, 0 );
                SAY_AMBIENT_SPEECH( l_U309, "generic_hi", 0, 0, 1 );
            }
            else
            {
                TASK_CLEAR_LOOK_AT( l_U309 );
            }
        }
        if (sub_8199() > 18)
        {
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U309, 0, 0, 0 );
            }
            l_U231 = 0;
        }
        break;
        case 2:
        CLEAR_WANTED_LEVEL( sub_1855() );
        if (IS_HINT_RUNNING())
        {
            HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U309, 0, 0, 0 );
        }
        sub_9780();
        sub_9919( l_U467, l_U359 );
        l_U233 = 1;
        break;
    }
    return;
}

void sub_8199()
{
    if (NOT (IS_CHAR_DEAD( l_U309 )))
    {
        GET_CHAR_COORDINATES( sub_2856(), ref l_U364._fU0, ref l_U364._fU4, ref l_U364._fU8 );
        GET_CHAR_COORDINATES( l_U309, ref l_U367._fU0, ref l_U367._fU4, ref l_U367._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_3D( l_U364._fU0, l_U364._fU4, l_U364._fU8, l_U367._fU0, l_U367._fU4, l_U367._fU8, ref l_U440 );
        return l_U440;
    }
    return l_U440;
}

int sub_8897(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_2856() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2856(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_2856() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2856(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_2856()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2856() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2856() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_1855() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_1855() )))
    {
        return 0;
    }
    return 1;
}

void sub_9438(unknown uParam0, unknown uParam1, unknown uParam2)
{
    return VDIST( sub_9451( uParam0, uParam2 ), sub_9451( uParam1, uParam2 ) );
}

void sub_9451(unknown uParam0, boolean bParam1)
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

void sub_9780()
{
    g_U38680._fU0 = 22;
    g_U38680._fU8 = 11;
    g_U38680._fU12 = 0;
    if (g_U38680._fU4 == nil)
    {
        return;
    }
    if (NOT (DOES_CHAR_EXIST( g_U38680._fU4 )))
    {
        g_U38680._fU4 = nil;
        return;
    }
    DELETE_CHAR( ref g_U38680._fU4 );
    g_U38680._fU4 = nil;
    return;
}

void sub_9919(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (g_U12303)
    {
        sub_1341( "Interactions_Started: Already on a mission" );
        return;
    }
    uVar4 = sub_1225( uParam0 );
    if (g_U27953._fU4)
    {
        sub_1341( "Interactions_Started: Another interaction is already taking place" );
        return;
    }
    if (g_U0)
    {
        g_U27892[uVar4]._fU0 = 1;
        g_U27892[uVar4]._fU4 = 1;
        g_U27892[uVar4]._fU28 = uParam1;
    }
    if (NOT g_U27892[uVar4]._fU0)
    {
        sub_1341( "Interactions_Started: This Random Character has been set to NOT allowToActivate" );
        return;
    }
    g_U27953._fU4 = 1;
    g_U27953._fU8 = uParam0;
    g_U27953._fU12 = uParam1;
    sub_10266();
    sub_11102( g_U27892[uVar4]._fU32 );
    g_U27892[uVar4]._fU32 = 0;
    sub_11225( uParam0, uParam1 );
    g_U12303 = 1;
    return;
}

void sub_10266()
{
    sub_10275();
    sub_10420( ref g_U10959._fU32 );
    g_U10959._fU48 = {0.00000000, 0.00000000, 0.00000000};
    sub_10494();
    return;
}

void sub_10275()
{
    CLEAR_BIT( ref g_U10959._fU0, 2 );
    CLEAR_BIT( ref g_U10959._fU0, 3 );
    CLEAR_BIT( ref g_U10959._fU0, 4 );
    CLEAR_BIT( ref g_U10959._fU0, 5 );
    CLEAR_BIT( ref g_U10959._fU0, 6 );
    CLEAR_BIT( ref g_U10959._fU0, 8 );
    CLEAR_BIT( ref g_U10959._fU0, 9 );
    CLEAR_BIT( ref g_U10959._fU0, 10 );
    g_U10959._fU12 = 0;
    return;
}

void sub_10420(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_10494()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_10532( 1, g_U572[I] )) == 0)
        {
            sub_10783( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_10961())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U94._fU404 = 1000;
    }
    g_U94._fU404 = 1000;
    return;
}

int sub_10532(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_10783(int iParam0)
{
    int I;

    if (iParam0 < (g_U572 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U572 - 1); I++ )
        {
            g_U572[I - 1] = {g_U572[I]};
        }
    }
    sub_10868( g_U572 - 1 );
    return;
}

void sub_10868(unknown uParam0)
{
    g_U572[uParam0]._fU0[0] = -1;
    g_U572[uParam0]._fU0[1] = -1;
    g_U572[uParam0]._fU0[2] = -1;
    return;
}

int sub_10961()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_10532( 4, g_U572[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_11102(int iParam0)
{
    g_U27953._fU16._fU4 += iParam0;
    sub_11132();
    INCREMENT_INT_STAT( 286, iParam0 );
    return;
}

void sub_11132()
{
    if (g_U0)
    {
        return;
    }
    if (g_U27953._fU16._fU4 < g_U27953._fU16._fU0)
    {
        return;
    }
    return;
}

void sub_11225(unknown uParam0, int iParam1)
{
    char[16] cVar4;
    int iVar8;

    StrCopy( ref cVar4, "", 16 );
    iVar8 = -1;
    switch (uParam0)
    {
        case 13:
        StrCopy( ref cVar4, "BRIAN", 16 );
        iVar8 = 1;
        break;
        case 14:
        StrCopy( ref cVar4, "DAVE", 16 );
        iVar8 = 1;
        break;
        case 15:
        StrCopy( ref cVar4, "MALC", 16 );
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
    sub_11755( cVar4 );
    return;
}

void sub_11755(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (g_U0)
    {
        return;
    }
    if (NOT (COMPARE_STRING( ref g_U10987, "" )))
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Started: g_labelPlayerStatMissionName is already set up" );
        return;
    }
    g_U10987 = {uParam0};
    PLAYSTATS_MISSION_STARTED( ref g_U10987 );
    return;
}

int sub_11975()
{
    if (IS_HINT_RUNNING())
    {
        if ((sub_8199() > 30) || (sub_3387()))
        {
            HINT_CAM( l_U401._fU0, l_U401._fU4, l_U401._fU8 + 6, 0, 0, 0, 0 );
            return 1;
        }
    }
    return 0;
}

void sub_12094()
{
    unknown uVar2;
    int iVar3;
    int iVar4;

    l_U468[0]._fU0 = l_U309;
    switch (l_U232)
    {
        case 0:
        if (NOT (IS_CAR_DEAD( l_U321 )))
        {
            if (NOT (IS_CAR_DEAD( l_U333 )))
            {
                SET_CAR_HEALTH( l_U321, 1000 );
                SET_CAR_COORDINATES( l_U321, -1551.05200000, 241.09370000, 11.40260000 );
                SET_CAR_HEADING( l_U321, 171.25360000 );
                SET_CAR_HEALTH( l_U333, 1000 );
                SET_CAR_COORDINATES( l_U333, -1553.33900000, 240.43440000, 11.45730000 );
                SET_CAR_HEADING( l_U333, 201.96370000 );
                SET_CAR_IN_CUTSCENE( l_U321, 1 );
                SET_CAR_IN_CUTSCENE( l_U333, 1 );
            }
        }
        SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
        SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
        g_U10460 = 0;
        if (DOES_BLIP_EXIST( l_U344 ))
        {
            REMOVE_BLIP( l_U344 );
        }
        DELETE_CHAR( ref l_U309 );
        LOAD_ADDITIONAL_TEXT( "E1RC3", 0 );
        LOAD_ADDITIONAL_TEXT( "RPi1AUD", 6 );
        sub_12458( "RPi1AUD" );
        sub_12579( 0, sub_2856(), "JOHNNY", 0 );
        sub_12728( ref l_U334 );
        if (IS_CHAR_DUCKING( sub_2856() ))
        {
            SET_CHAR_DUCKING( sub_2856(), 0 );
        }
        CLEAR_AREA_OF_OBJECTS( l_U401._fU0, l_U401._fU4, l_U401._fU8, 50 );
        CLEAR_AREA_OF_CHARS( l_U401._fU0, l_U401._fU4, l_U401._fU8, 50 );
        CLEAR_AREA_OF_CARS( l_U401._fU0, l_U401._fU4, l_U401._fU8, 50 );
        CLEAR_NAMED_CUTSCENE( "RP04_BJ" );
        START_CUTSCENE_NOW( "RP04_BJ" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        l_U232 = 1;
        break;
        case 1:
        sub_13063( 1546.40400000, 238.25410000, 11.35470000, 90.54850000, l_U460, ref l_U468[0] );
        if (NOT (IS_CAR_DEAD( l_U321 )))
        {
            VEHICLE_CAN_BE_TARGETTED_BY_HS_MISSILE( l_U321, 0 );
        }
        l_U309 = l_U468[0]._fU0;
        if (NOT (IS_CHAR_DEAD( l_U309 )))
        {
            SET_CHAR_PROP_INDEX( l_U309, 1, 0 );
            SET_CHAR_COMPONENT_VARIATION( l_U309, 1, 1, 0 );
            GIVE_PED_HELMET_WITH_OPTS( l_U468[0]._fU0, 0 );
            sub_12579( 1, l_U309, "BRIAN", 0 );
        }
        if (NOT (IS_CAR_DEAD( l_U321 )))
        {
            SET_VEHICLE_IS_CONSIDERED_BY_PLAYER( l_U321, 0 );
            LOCK_CAR_DOORS( l_U321, 3 );
        }
        if (NOT (IS_CHAR_DEAD( l_U309 )))
        {
            SET_CHAR_MAX_TIME_IN_WATER( l_U309, 20.00000000 );
            SET_CHAR_MAX_TIME_UNDERWATER( l_U309, 10.00000000 );
            SET_PED_DIES_WHEN_INJURED( l_U309, 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U309, 1 );
            SET_CHAR_CANT_BE_DRAGGED_OUT( l_U309, 1 );
            SET_CHAR_SUFFERS_CRITICAL_HITS( l_U309, 0 );
            SET_CHAR_NEVER_TARGETTED( l_U309, 1 );
            SET_CHAR_COORDINATES( l_U309, -1547.90900000, 238.51870000, 11.35350000 );
            SET_CHAR_HEADING( l_U309, 111.47160000 );
        }
        SET_CHAR_COORDINATES( sub_2856(), -1549.87400000, 236.95540000, 11.37450000 );
        SET_CHAR_HEADING( sub_2856(), 287.33810000 );
        SET_PLAYER_CONTROL_ADVANCED( sub_1855(), 1, 1, 1 );
        SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
        SET_CAR_DENSITY_MULTIPLIER( 0.40000000 );
        SWITCH_PED_PATHS_ON( l_U401._fU0 - 5.00000000, l_U401._fU4 - 5.00000000, l_U401._fU8 - 5.00000000, l_U401._fU0 + 5.00000000, l_U401._fU4 + 5.00000000, l_U401._fU8 + 5.00000000 );
        LOAD_SCENE( l_U401._fU0, l_U401._fU4, l_U401._fU8 );
        CLEAR_AREA_OF_CARS( l_U401._fU0, l_U401._fU4, l_U401._fU8, 100 );
        if (l_U268)
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U334 );
            l_U268 = 0;
        }
        if (NOT (IS_CHAR_INJURED( l_U309 )))
        {
            if (NOT (IS_CAR_DEAD( l_U321 )))
            {
                TASK_LOOK_AT_CHAR( sub_2856(), l_U309, 3500, 0 );
                OPEN_SEQUENCE_TASK( ref l_U348 );
                TASK_LOOK_AT_CHAR( 0, sub_2856(), 2000, 0 );
                SET_NEXT_DESIRED_MOVE_STATE( 2 );
                TASK_ENTER_CAR_AS_DRIVER( 0, l_U321, 20000 );
                CLOSE_SEQUENCE_TASK( l_U348 );
                TASK_PERFORM_SEQUENCE( l_U309, l_U348 );
                CLEAR_SEQUENCE_TASK( l_U348 );
            }
        }
        SET_CAM_BEHIND_PED( sub_2856() );
        DO_SCREEN_FADE_IN( 250 );
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
        l_U232 = 2;
        break;
        case 2:
        l_U468[0]._fU0 = l_U309;
        sub_15302( ref l_U468 );
        sub_15847( ref l_U468[0] );
        sub_22849( ref l_U468[0], 0 );
        sub_40066( ref l_U468[0] );
        if (NOT l_U246)
        {
            sub_40747();
        }
        if (NOT l_U246)
        {
            if (l_U262)
            {
                if (NOT l_U267)
                {
                    sub_41659();
                }
            }
            if (NOT l_U283)
            {
                sub_42107();
            }
        }
        if (DOES_BLIP_EXIST( l_U468[0]._fU100 ))
        {
            REMOVE_BLIP( l_U468[0]._fU100 );
        }
        if ((NOT (IS_CAR_DEAD( l_U321 ))) AND (NOT (IS_CHAR_DEAD( l_U309 ))))
        {
            if (IS_CHAR_IN_CAR( l_U309, l_U321 ))
            {
                if (NOT l_U238)
                {
                    sub_42713( ref l_U468[0], l_U395, 0 );
                    if (NOT (sub_26340( l_U495 )))
                    {
                        sub_24557( "RPi1_FOLLO", ref l_U495, 6, 1 );
                    }
                    sub_43153( ref l_U468[0], l_U321, 0 );
                    l_U238 = 1;
                }
            }
        }
        if (NOT l_U267)
        {
            if (NOT (IS_CAR_DEAD( l_U321 )))
            {
                if ((IS_CAR_ON_FIRE( l_U321 )) || (NOT (IS_VEH_DRIVEABLE( l_U321 ))))
                {
                    PRINT_NOW( "RC3_BBIK", 7500, 0 );
                    sub_41481();
                }
            }
        }
        if (l_U260)
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_1855(), 0 )))
            {
                if ((sub_9438( sub_2856(), l_U309, 1 )) > 250)
                {
                    if (NOT (IS_CHAR_DEAD( l_U309 )))
                    {
                        PRINT_NOW( "RC3_ABANB", 7500, 0 );
                        sub_41481();
                    }
                }
            }
        }
        if (IS_PAY_N_SPRAY_ACTIVE())
        {
            PRINT_NOW( "RC3_ABANB", 7500, 0 );
            sub_41481();
        }
        if (NOT l_U267)
        {
            if (l_U262)
            {
                if (sub_43452( l_U320 ))
                {
                    PRINT_NOW( "RC3_WREK", 7500, 0 );
                    sub_41481();
                }
                if (IS_CAR_DEAD( l_U320 ))
                {
                    PRINT_NOW( "RC3_WREK", 7500, 0 );
                    sub_41481();
                }
            }
        }
        if (NOT l_U262)
        {
            if (NOT (sub_26340( l_U495 )))
            {
                if (IS_CHAR_ON_ANY_BIKE( sub_2856() ))
                {
                    if (NOT (DOES_BLIP_EXIST( l_U345 )))
                    {
                        ADD_BLIP_FOR_CHAR( l_U309, ref l_U345 );
                        SET_BLIP_AS_FRIENDLY( l_U345, 1 );
                    }
                    GET_CAR_CHAR_IS_USING( sub_2856(), ref uVar2 );
                    GET_CAR_HEALTH( uVar2, ref iVar3 );
                    if (NOT (IS_CAR_DEAD( uVar2 )))
                    {
                        if ((((NOT (IS_CAR_ON_FIRE( uVar2 ))) AND (iVar3 > 300)) AND (NOT (IS_CAR_TYRE_BURST( uVar2, 6 )))) AND (NOT (IS_CAR_TYRE_BURST( uVar2, 7 ))))
                        {
                            if (IS_VEH_DRIVEABLE( uVar2 ))
                            {
                                l_U320 = uVar2;
                                if (NOT (IS_CAR_A_MISSION_CAR( l_U320 )))
                                {
                                    SET_CAR_AS_MISSION_CAR( l_U320 );
                                }
                                SET_CAR_HEALTH( l_U320, 1000 );
                                l_U262 = 1;
                            }
                        }
                    }
                    if (NOT (sub_26340( l_U495 )))
                    {
                        if (NOT l_U264)
                        {
                            PRINT_NOW( "RC3_FBJ", 7500, 0 );
                            SETTIMERA( 0 );
                            l_U264 = 1;
                        }
                    }
                }
                else if (NOT (sub_26340( l_U495 )))
                {
                    if (NOT l_U263)
                    {
                        PRINT_NOW( "RC3_FDBK", 7500, 0 );
                        l_U263 = 1;
                    }
                }
            }
        }
        if (l_U262)
        {
            if (NOT (IS_CHAR_DEAD( l_U309 )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2856(), l_U309, 20, 20, 5, 0 ))
                {
                    if (TIMERA() > 2500)
                    {
                        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_2856(), l_U392._fU0, l_U392._fU4, l_U392._fU8, 150, 150, 5, 0 )))
                        {
                            if (NOT l_U251)
                            {
                                if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "RC3_FDBK", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
                                {
                                    if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "RC3_FBJ", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
                                    {
                                        if (NOT (sub_26340( l_U495 )))
                                        {
                                            if (NOT l_U261)
                                            {
                                                l_U169 = 0;
                                                GET_CHAR_COORDINATES( l_U309, ref l_U455, ref l_U456, ref l_U457 );
                                                CREATE_OBJECT( 248532041, l_U455 + 5, l_U456 + 5, l_U457 + 5, ref l_U454, 1 );
                                                if (NOT (IS_CHAR_DEAD( l_U309 )))
                                                {
                                                    ATTACH_OBJECT_TO_PED( l_U454, l_U309, 1232, 0.07000000, 0.05200000, 0, 3.30000000, 0.30000000, -0.45000000, 0 );
                                                }
                                                TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U309, "Cell_In", "missbrian", 8.00000000, 0, 0, 0, 1, 0 );
                                                SETTIMERB( 0 );
                                                l_U261 = 1;
                                            }
                                            if (l_U261)
                                            {
                                                if (TIMERB() > 2000)
                                                {
                                                    GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U362 );
                                                    if (l_U362 == 0)
                                                    {
                                                        sub_24557( "RP!1_CALL1", ref l_U495, 6, 1 );
                                                    }
                                                    else if (l_U362 == 1)
                                                    {
                                                        sub_24557( "RPi1_CALL2", ref l_U495, 6, 1 );
                                                    }
                                                    else if (l_U362 == 2)
                                                    {
                                                        sub_24557( "RPi1_CALL3", ref l_U495, 6, 1 );
                                                    };;;
                                                    l_U251 = 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (l_U251)
        {
            if (NOT l_U265)
            {
                if (NOT (sub_26340( l_U495 )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U309 )))
                    {
                        TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U309, "Cell_Out", "missbrian", 800.00000000, 0, 0, 0, 0, 0 );
                    }
                    if (DOES_OBJECT_EXIST( l_U454 ))
                    {
                        DETACH_OBJECT( l_U454, 0 );
                        DELETE_OBJECT( ref l_U454 );
                    }
                    l_U169 = 1;
                    l_U265 = 1;
                }
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U309 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( l_U309, l_U395._fU0, l_U395._fU4, l_U395._fU8, 15, 15, 15, 0 ))
            {
                if (NOT l_U239)
                {
                    CLEAR_CHAR_TASKS( l_U309 );
                    sub_42713( ref l_U468[0], -207.92430000, 1203.27800000, 13.47050000, 1 );
                    l_U239 = 1;
                    l_U240 = 1;
                }
            }
        }
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_2856(), -207.92430000, 1203.27800000, 13.47050000, 350, 350, 15, 0 ))
        {
            if (NOT l_U300)
            {
                sub_46240();
                sub_46795();
                sub_48238();
                l_U300 = 1;
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U309 )))
        {
            if (NOT l_U266)
            {
                if ((NOT l_U241) || (NOT l_U281))
                {
                    sub_48702( ref l_U468[0], 10.00000000, 28.00000000, 1, 0 );
                }
                if (LOCATE_CHAR_ANY_MEANS_3D( l_U309, -625.88420000, 1167.02200000, 18.47260000, 3, 12, 5, 0 ))
                {
                    if (NOT l_U304)
                    {
                        sub_49126( ref l_U468[0], 60 );
                        l_U304 = 1;
                    }
                    l_U241 = 1;
                }
                else if (LOCATE_CHAR_ANY_MEANS_3D( l_U309, -206.16580000, 1174.24100000, 13.80520000, 15, 15, 5, 0 ))
                {
                    sub_49126( ref l_U468[0], 35 );
                    l_U241 = 1;
                }
                else if (LOCATE_CHAR_ANY_MEANS_3D( l_U309, 64626, 1053, 20, 20, 20, 10, 0 ))
                {
                    sub_49126( ref l_U468[0], 10 );
                    l_U241 = 1;
                }
                else if (NOT l_U304)
                {
                    l_U241 = 0;
                };;;;
                if (LOCATE_CHAR_ANY_MEANS_3D( l_U309, -1281.59800000, 364.96230000, 13.78680000, 10, 5, 5, 0 ))
                {
                    sub_49126( ref l_U468[0], 35 );
                    l_U281 = 1;
                }
                if (LOCATE_CHAR_ANY_MEANS_3D( l_U309, -1234.98700000, 656.36600000, 12.37700000, 10, 5, 5, 0 ))
                {
                    l_U281 = 0;
                }
            }
        }
        if (NOT l_U252)
        {
            if (NOT (IS_CHAR_INJURED( l_U309 )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U309, l_U404._fU0, l_U404._fU4, l_U404._fU8, 175, 175, 5, 0 )))
                {
                    if (l_U265)
                    {
                        if ((sub_9438( sub_2856(), l_U309, 1 )) < 20)
                        {
                            if (g_U39241 == 0)
                            {
                                sub_24557( "RPi1_B1V1", ref l_U495, 6, 1 );
                                l_U252 = 1;
                                g_U39241++;
                                SETTIMERA( 0 );
                            }
                            else if (g_U39241 == 1)
                            {
                                sub_24557( "RPi1_B1V2", ref l_U495, 6, 1 );
                                l_U252 = 1;
                                g_U39241++;
                                SETTIMERA( 0 );
                            }
                            else if (g_U39241 > 1)
                            {
                                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar4 );
                                if (iVar4 == 0)
                                {
                                    sub_24557( "RPi1_B1V1", ref l_U495, 6, 1 );
                                    l_U252 = 1;
                                    SETTIMERA( 0 );
                                }
                                else if (iVar4 == 1)
                                {
                                    sub_24557( "RPi1_B1V2", ref l_U495, 6, 1 );
                                    l_U252 = 1;
                                    SETTIMERA( 0 );
                                }
                            };;;
                        }
                    }
                }
            }
        }
        if (l_U252)
        {
            if (NOT l_U246)
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_2856(), l_U404._fU0, l_U404._fU4, l_U404._fU8, 35, 35, 5, 0 )))
                {
                    if (NOT (sub_26340( l_U495 )))
                    {
                        if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            if (TIMERA() > 31500)
                            {
                                if (NOT l_U284)
                                {
                                    sub_24557( "RPi1_MUT", ref l_U495, 6, 1 );
                                    l_U284 = 1;
                                }
                            }
                            if (l_U284)
                            {
                                if (TIMERA() > 54000)
                                {
                                    if (NOT l_U285)
                                    {
                                        sub_24557( "RPi1_MUT", ref l_U495, 6, 1 );
                                        l_U285 = 1;
                                    }
                                }
                            }
                            if (l_U285)
                            {
                                if (TIMERA() > 62500)
                                {
                                    if (NOT l_U286)
                                    {
                                        sub_24557( "RPi1_MUT", ref l_U495, 6, 1 );
                                        l_U286 = 1;
                                    }
                                }
                            }
                            if (l_U286)
                            {
                                if (TIMERA() > 77500)
                                {
                                    if (NOT l_U287)
                                    {
                                        sub_24557( "RPi1_MUT", ref l_U495, 6, 1 );
                                        l_U287 = 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_2856(), -204.55270000, 1187.96400000, 13.61970000, 7, 7, 10, 0 ))
        {
            if (NOT l_U257)
            {
                CREATE_CAR( -408052231, l_U434._fU0, l_U434._fU4, l_U434._fU8, ref l_U326, 0 );
                SET_CAR_HEADING( l_U326, l_U453 );
                l_U257 = 1;
            }
        }
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_2856(), -204.55270000, 1187.96400000, 13.61970000, 50, 50, 10, 0 ))
        {
            l_U267 = 1;
            if (DOES_BLIP_EXIST( l_U347 ))
            {
                REMOVE_BLIP( l_U347 );
            }
            if (l_U244)
            {
                if (NOT l_U301)
                {
                    if (NOT (DOES_BLIP_EXIST( l_U346 )))
                    {
                        ADD_BLIP_FOR_CHAR( l_U309, ref l_U346 );
                        l_U301 = 1;
                    }
                }
            }
            else if (NOT l_U301)
            {
                if (NOT (DOES_BLIP_EXIST( l_U345 )))
                {
                    ADD_BLIP_FOR_CHAR( l_U309, ref l_U345 );
                    SET_BLIP_AS_FRIENDLY( l_U345, 1 );
                    l_U301 = 1;
                }
            }
        }
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_2856(), -204.55270000, 1187.96400000, 13.61970000, 100, 100, 10, 0 ))
        {
            if (NOT l_U278)
            {
                for ( l_U358 = 0; l_U358 <= 6; l_U358++ )
                {
                    if (DOES_CHAR_EXIST( l_U310[l_U358] ))
                    {
                        if (NOT (IS_CHAR_DEAD( l_U310[l_U358] )))
                        {
                            if (NOT (IS_PED_IN_COVER( l_U310[l_U358] )))
                            {
                                TASK_SEEK_COVER_FROM_POS( l_U310[l_U358], -211.68550000, 1205.33400000, 13.51530000, -2 );
                                l_U278 = 1;
                            }
                        }
                    }
                }
            }
        }
        if (l_U240)
        {
            if (NOT (IS_CHAR_DEAD( l_U309 )))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( l_U309, -204.50220000, 1192.55600000, 13.47460000, 3, 3, 5, 0 ))
                {
                    if (NOT l_U266)
                    {
                        sub_50782( ref l_U468[0], ref l_U309, ref l_U321 );
                        GIVE_WEAPON_TO_CHAR( l_U309, 22, 30000, 0 );
                        SET_CHAR_HEALTH( l_U309, 200 );
                        l_U266 = 1;
                        l_U283 = 1;
                    }
                    if (IS_WANTED_LEVEL_GREATER( sub_1855(), 0 ))
                    {
                        if (NOT (IS_CAR_DEAD( l_U321 )))
                        {
                            if (IS_CHAR_IN_CAR( l_U309, l_U321 ))
                            {
                                if (NOT l_U273)
                                {
                                    if (NOT l_U297)
                                    {
                                        CLEAR_CHAR_TASKS( l_U309 );
                                        OPEN_SEQUENCE_TASK( ref l_U348 );
                                        TASK_CAR_TEMP_ACTION( 0, l_U321, 24, 500 );
                                        TASK_STAND_STILL( 0, -2 );
                                        CLOSE_SEQUENCE_TASK( l_U348 );
                                        TASK_PERFORM_SEQUENCE( l_U309, l_U348 );
                                        CLEAR_SEQUENCE_TASK( l_U348 );
                                        l_U297 = 1;
                                    }
                                }
                            }
                        }
                    }
                    else if (NOT (IS_CAR_DEAD( l_U321 )))
                    {
                        if (IS_CHAR_IN_CAR( l_U309, l_U321 ))
                        {
                            if (NOT l_U273)
                            {
                                CLEAR_CHAR_TASKS( l_U309 );
                                OPEN_SEQUENCE_TASK( ref l_U348 );
                                TASK_CAR_TEMP_ACTION( 0, l_U321, 24, 500 );
                                TASK_LEAVE_ANY_CAR( 0 );
                                CLOSE_SEQUENCE_TASK( l_U348 );
                                TASK_PERFORM_SEQUENCE( l_U309, l_U348 );
                                CLEAR_SEQUENCE_TASK( l_U348 );
                                l_U273 = 1;
                            }
                        }
                    }
                }
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U309 )))
        {
            if (l_U273)
            {
                if (IS_CHAR_ON_FOOT( l_U309 ))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2856(), l_U309, 50, 50, 5, 0 ))
                    {
                        if (NOT l_U302)
                        {
                            CLEAR_CHAR_TASKS( l_U309 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U309, l_U419._fU0, l_U419._fU4, l_U419._fU8, 4, -2, 2 );
                            l_U302 = 1;
                        }
                    }
                }
            }
        }
        if (l_U273)
        {
            if (NOT (IS_CHAR_DEAD( l_U309 )))
            {
                if (IS_CHAR_ON_FOOT( l_U309 ))
                {
                    if (NOT l_U279)
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2856(), l_U309, 40, 40, 5, 0 ))
                        {
                            sub_51620( ref l_U349, "RPi1_MOCK", "RPi1_ATTB" );
                            sub_51967( ref l_U349, ref l_U495, 7, 1 );
                            SETTIMERB( 0 );
                            l_U279 = 1;
                        }
                    }
                }
            }
        }
        if (l_U279)
        {
            if (NOT l_U242)
            {
                SET_PED_IS_BLIND_RAGING( sub_2856(), 1 );
                SET_WANTED_MULTIPLIER( 0 );
                if (NOT (IS_CAR_DEAD( l_U321 )))
                {
                    SET_VEHICLE_IS_CONSIDERED_BY_PLAYER( l_U321, 1 );
                    LOCK_CAR_DOORS( l_U321, 1 );
                }
                l_U242 = 1;
            }
        }
        if (l_U279)
        {
            if (TIMERB() > 1500)
            {
                if (NOT l_U246)
                {
                    if (NOT (IS_CHAR_DEAD( l_U309 )))
                    {
                        sub_52199();
                    }
                    for ( l_U358 = 0; l_U358 <= 6; l_U358++ )
                    {
                        if (NOT (IS_CHAR_DEAD( l_U310[l_U358] )))
                        {
                            if (NOT (DOES_BLIP_EXIST( l_U336[l_U358] )))
                            {
                                ADD_BLIP_FOR_CHAR( l_U310[l_U358], ref l_U336[l_U358] );
                            }
                            CLEAR_CHAR_TASKS( l_U310[l_U358] );
                            SET_CHAR_NEVER_TARGETTED( l_U310[l_U358], 0 );
                            TASK_COMBAT( l_U310[l_U358], sub_2856() );
                            l_U246 = 1;
                            SETTIMERA( 0 );
                        }
                    }
                }
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U309 )))
        {
            if (NOT l_U246)
            {
                for ( l_U358 = 0; l_U358 <= 6; l_U358++ )
                {
                    if (DOES_CHAR_EXIST( l_U310[l_U358] ))
                    {
                        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U310[l_U358], sub_2856(), 0 ))
                        {
                            l_U308 = 1;
                        }
                    }
                }
                if (l_U308)
                {
                    for ( l_U358 = 0; l_U358 <= 6; l_U358++ )
                    {
                        if (DOES_CHAR_EXIST( l_U310[l_U358] ))
                        {
                            if (NOT (IS_CHAR_DEAD( l_U310[l_U358] )))
                            {
                                if (NOT (DOES_BLIP_EXIST( l_U336[l_U358] )))
                                {
                                    ADD_BLIP_FOR_CHAR( l_U310[l_U358], ref l_U336[l_U358] );
                                }
                                SET_CHAR_NEVER_TARGETTED( l_U310[l_U358], 0 );
                            }
                            if (NOT (IS_CHAR_INJURED( l_U310[l_U358] )))
                            {
                                CLEAR_CHAR_TASKS( l_U310[l_U358] );
                                TASK_COMBAT( l_U310[l_U358], sub_2856() );
                            }
                        }
                        l_U246 = 1;
                        SETTIMERA( 0 );
                    }
                }
                if (l_U246)
                {
                    if (NOT l_U280)
                    {
                        PRINT( "RC3_KILL", 7500, 1 );
                        l_U280 = 1;
                    }
                    if (NOT l_U271)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U309 )))
                        {
                            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U309, -221.95780000, 1225.91100000, 18.11640000, 3 );
                            CLEAR_CHAR_TASKS( l_U309 );
                            OPEN_SEQUENCE_TASK( ref l_U348 );
                            TASK_LEAVE_ANY_CAR( 0 );
                            TASK_COMBAT( 0, sub_2856() );
                            CLOSE_SEQUENCE_TASK( l_U348 );
                            TASK_PERFORM_SEQUENCE( l_U309, l_U348 );
                            CLEAR_SEQUENCE_TASK( l_U348 );
                        }
                        l_U271 = 1;
                    }
                }
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U309 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( l_U309, -210.69240000, 1210.63100000, 13.46950000, 35, 35, 5, 0 ))
            {
                if (l_U244)
                {
                    if (IS_CHAR_ON_ANY_BIKE( l_U309 ))
                    {
                        CLEAR_CHAR_TASKS( l_U309 );
                        TASK_LEAVE_ANY_CAR( l_U309 );
                        l_U273 = 1;
                    }
                }
            }
        }
        if (NOT l_U246)
        {
            if (IS_WANTED_LEVEL_GREATER( sub_1855(), 0 ))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_2856(), -210.69240000, 1210.63100000, 13.46950000, 25, 25, 5, 0 ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U309 )))
                    {
                        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U309, -210.69240000, 1210.63100000, 13.46950000, 35, 35, 5, 0 )))
                        {
                            PRINT_NOW( "RC3_HEAT", 7500, 0 );
                            sub_41481();
                        }
                    }
                }
            }
        }
        if (l_U246)
        {
            if (sub_26340( l_U495 ))
            {
                while (sub_26340( l_U495 ))
                {
                    sub_53503();
                    WAIT( 0 );
                }
                if (NOT l_U280)
                {
                    PRINT( "RC3_KILL", 7500, 1 );
                    l_U280 = 1;
                }
            }
            sub_52199();
        }
        if (l_U280)
        {
            if (IS_THIS_PRINT_BEING_DISPLAYED( "RC3_KILL", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
            {
                while (IS_THIS_PRINT_BEING_DISPLAYED( "RC3_KILL", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                {
                    sub_53503();
                    WAIT( 0 );
                }
                if (NOT (sub_26340( l_U495 )))
                {
                    if (NOT (IS_CHAR_DEAD( l_U309 )))
                    {
                        if ((sub_9438( sub_2856(), l_U309, 1 )) < 35)
                        {
                            if (NOT l_U296)
                            {
                                sub_24557( "RPi1_AOD", ref l_U495, 6, 1 );
                                l_U296 = 1;
                            }
                        }
                    }
                }
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U309 )))
        {
            if (l_U296)
            {
                if (NOT (sub_26340( l_U495 )))
                {
                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                    {
                        if (TIMERA() > 35000)
                        {
                            if (NOT l_U288)
                            {
                                sub_24557( "RPi1_ATTB", ref l_U495, 6, 1 );
                                l_U288 = 1;
                            }
                        }
                        if (l_U288)
                        {
                            if (TIMERA() > 41000)
                            {
                                if (NOT l_U289)
                                {
                                    sub_24557( "RPi1_ATTB", ref l_U495, 6, 1 );
                                    l_U289 = 1;
                                }
                            }
                        }
                        if (l_U289)
                        {
                            if (TIMERA() > 64000)
                            {
                                if (NOT l_U290)
                                {
                                    sub_24557( "RPi1_ATTB", ref l_U495, 6, 1 );
                                    l_U290 = 1;
                                }
                            }
                        }
                        if (l_U290)
                        {
                            if (TIMERA() > 83000)
                            {
                                if (NOT l_U291)
                                {
                                    sub_24557( "RPi1_ATTB", ref l_U495, 6, 1 );
                                    l_U291 = 1;
                                }
                            }
                        }
                    }
                }
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U309 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( l_U309, l_U419._fU0, l_U419._fU4, l_U419._fU8, 3, 3, 3, 0 ))
            {
                if (l_U244)
                {
                    if (NOT l_U271)
                    {
                        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U309, -221.95780000, 1225.91100000, 18.11640000, 3 );
                        CLEAR_CHAR_TASKS( l_U309 );
                        TASK_COMBAT( l_U309, sub_2856() );
                        l_U271 = 1;
                    }
                }
            }
        }
        if (l_U246)
        {
            for ( l_U358 = 0; l_U358 <= 6; l_U358++ )
            {
                if (NOT (IS_CHAR_DEAD( l_U310[l_U358] )))
                {
                    if ((sub_9438( l_U310[l_U358], sub_2856(), 1 )) > 100)
                    {
                        if (NOT l_U307)
                        {
                            PRINT_NOW( "RC3_FAC", 7500, 1 );
                            sub_41481();
                            l_U307 = 1;
                        }
                    }
                }
            }
        }
        if (l_U246)
        {
            if (l_U361 < 3)
            {
                if (NOT (IS_CHAR_DEAD( l_U309 )))
                {
                    l_U232 = 3;
                }
            }
        }
        if (l_U246)
        {
            if (l_U361 < 5)
            {
                if (NOT (IS_CHAR_DEAD( l_U310[0] )))
                {
                    if (NOT l_U274)
                    {
                        REMOVE_CHAR_DEFENSIVE_AREA( l_U310[0] );
                        CLEAR_CHAR_TASKS( l_U310[0] );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U310[0], 1 );
                        TASK_GO_TO_COORD_WHILE_SHOOTING( l_U310[0], -211.92180000, 1215.11900000, 13.47720000, 4, 5, 2, sub_2856(), 1 );
                        l_U274 = 1;
                    }
                }
                if (NOT (IS_CHAR_DEAD( l_U310[1] )))
                {
                    if (NOT l_U275)
                    {
                        REMOVE_CHAR_DEFENSIVE_AREA( l_U310[1] );
                        CLEAR_CHAR_TASKS( l_U310[1] );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U310[1], 1 );
                        TASK_GO_TO_COORD_WHILE_SHOOTING( l_U310[1], -211.92180000, 1215.11900000, 13.47720000, 3, 5, 1, sub_2856(), 1 );
                        l_U275 = 1;
                    }
                }
            }
        }
        if (l_U274)
        {
            if (NOT l_U276)
            {
                if (NOT (IS_CHAR_DEAD( l_U310[0] )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( l_U310[0], -211.92180000, 1215.11900000, 13.47720000, 10, 7, 5, 0 ))
                    {
                        CLEAR_CHAR_TASKS( l_U310[0] );
                        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U310[0], -220.16430000, 1215.75500000, 13.46950000, 10 );
                        TASK_COMBAT( l_U310[0], sub_2856() );
                        l_U276 = 1;
                    }
                }
            }
        }
        if (l_U275)
        {
            if (NOT l_U277)
            {
                if (NOT (IS_CHAR_DEAD( l_U310[1] )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( l_U310[1], -211.92180000, 1215.11900000, 13.47720000, 10, 5, 5, 0 ))
                    {
                        CLEAR_CHAR_TASKS( l_U310[1] );
                        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U310[1], -206.01010000, 1216.56700000, 13.47240000, 7 );
                        TASK_COMBAT( l_U310[1], sub_2856() );
                        l_U277 = 1;
                    }
                }
            }
        }
        if (l_U271)
        {
            if ((sub_9438( sub_2856(), l_U309, 1 )) < 15)
            {
                if (NOT l_U254)
                {
                    if (TIMERA() > 10000)
                    {
                        if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "RC3_KILL", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
                        {
                            sub_24557( "RPi1_ATTK", ref l_U495, 6, 1 );
                            l_U254 = 1;
                        }
                    }
                }
                if (NOT l_U255)
                {
                    if (TIMERA() > 15000)
                    {
                        if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "RC3_KILL", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
                        {
                            sub_24557( "RPi1_ATTK", ref l_U495, 6, 1 );
                            l_U255 = 1;
                        }
                    }
                }
                if (NOT l_U256)
                {
                    if (TIMERA() > 22000)
                    {
                        if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "RC3_KILL", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
                        {
                            sub_24557( "RPi1_ATTK", ref l_U495, 6, 1 );
                            l_U256 = 1;
                        }
                    }
                }
            }
        }
        sub_53503();
        if (sub_55503())
        {
            WAIT( 3500 );
            sub_55674();
        }
        break;
        case 3:
        sub_53503();
        if (sub_55503())
        {
            WAIT( 3500 );
            sub_55674();
        }
        if (l_U246)
        {
            if (NOT (IS_CHAR_DEAD( l_U310[0] )))
            {
                if (NOT l_U274)
                {
                    REMOVE_CHAR_DEFENSIVE_AREA( l_U310[0] );
                    CLEAR_CHAR_TASKS( l_U310[0] );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U310[0], 1 );
                    TASK_GO_TO_COORD_WHILE_SHOOTING( l_U310[0], -211.92180000, 1215.11900000, 13.47720000, 4, 3, 2, sub_2856(), 1 );
                    l_U274 = 1;
                }
            }
            if (NOT (IS_CHAR_DEAD( l_U310[1] )))
            {
                if (NOT l_U275)
                {
                    REMOVE_CHAR_DEFENSIVE_AREA( l_U310[1] );
                    CLEAR_CHAR_TASKS( l_U310[1] );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U310[1], 1 );
                    TASK_GO_TO_COORD_WHILE_SHOOTING( l_U310[1], -211.92180000, 1215.11900000, 13.47720000, 3, 3, 1, sub_2856(), 1 );
                    l_U275 = 1;
                }
            }
        }
        if (l_U274)
        {
            if (NOT l_U276)
            {
                if (NOT (IS_CHAR_DEAD( l_U310[0] )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( l_U310[0], -211.92180000, 1215.11900000, 13.47720000, 10, 5, 5, 0 ))
                    {
                        CLEAR_CHAR_TASKS( l_U310[0] );
                        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U310[0], -220.16430000, 1215.75500000, 13.46950000, 10 );
                        TASK_COMBAT( l_U310[0], sub_2856() );
                        l_U276 = 1;
                    }
                }
            }
        }
        if (l_U275)
        {
            if (NOT l_U277)
            {
                if (NOT (IS_CHAR_DEAD( l_U310[1] )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( l_U310[1], -211.92180000, 1215.11900000, 13.47720000, 10, 5, 5, 0 ))
                    {
                        CLEAR_CHAR_TASKS( l_U310[1] );
                        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U310[1], -206.01010000, 1216.56700000, 13.47240000, 7 );
                        TASK_COMBAT( l_U310[1], sub_2856() );
                        l_U277 = 1;
                    }
                }
            }
        }
        if (l_U246)
        {
            for ( l_U358 = 0; l_U358 <= 6; l_U358++ )
            {
                if (NOT (IS_CHAR_DEAD( l_U310[l_U358] )))
                {
                    if ((sub_9438( l_U310[l_U358], sub_2856(), 1 )) > 100)
                    {
                        if (NOT l_U307)
                        {
                            PRINT_NOW( "RC3_FAC", 7500, 1 );
                            sub_41481();
                            l_U307 = 1;
                        }
                    }
                }
            }
        }
        if (NOT l_U249)
        {
            if (NOT (IS_CHAR_DEAD( l_U309 )))
            {
                CLEAR_CHAR_TASKS( l_U309 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U309, -204.89250000, 1256.15300000, 20.99440000, 4, -2, 2 );
                l_U249 = 1;
            }
        }
        if (l_U249)
        {
            if (NOT (IS_CHAR_DEAD( l_U309 )))
            {
                if (l_U361 < 1)
                {
                    if (NOT (IS_CAR_DEAD( l_U320 )))
                    {
                        if (IS_VEH_DRIVEABLE( l_U320 ))
                        {
                            if (NOT l_U250)
                            {
                                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                {
                                    PRINT_NOW( "RC3_BK", 7500, 0 );
                                    SETTIMERA( 0 );
                                    l_U250 = 1;
                                }
                            }
                        }
                        else if (NOT l_U272)
                        {
                            if (NOT IS_MESSAGE_BEING_DISPLAYED())
                            {
                                PRINT_NOW( "RC3_CHASE", 7500, 0 );
                                SETTIMERA( 0 );
                                l_U272 = 1;
                            }
                        }
                    }
                    else if (NOT l_U272)
                    {
                        if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            PRINT_NOW( "RC3_CHASE", 7500, 0 );
                            SETTIMERA( 0 );
                            l_U272 = 1;
                        }
                    }
                }
            }
        }
        if ((l_U250) || (l_U272))
        {
            if (IS_CHAR_ON_ANY_BIKE( sub_2856() ))
            {
                if (IS_THIS_PRINT_BEING_DISPLAYED( "RC3_BK", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                {
                    CLEAR_THIS_PRINT( "RC3_BK" );
                }
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U309 )))
        {
            if (l_U246)
            {
                if (NOT (sub_26340( l_U495 )))
                {
                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                    {
                        if (TIMERA() > 8000)
                        {
                            if (NOT l_U292)
                            {
                                sub_24557( "RPi1_ATTB", ref l_U495, 6, 1 );
                                l_U292 = 1;
                            }
                        }
                        if (TIMERA() > 15000)
                        {
                            if (NOT l_U293)
                            {
                                sub_24557( "RPi1_ATTB", ref l_U495, 6, 1 );
                                l_U293 = 1;
                            }
                        }
                        if (TIMERA() > 24000)
                        {
                            if (NOT l_U294)
                            {
                                sub_24557( "RPi1_ATTB", ref l_U495, 6, 1 );
                                l_U294 = 1;
                            }
                        }
                        if (TIMERA() > 33000)
                        {
                            if (NOT l_U295)
                            {
                                sub_24557( "RPi1_ATTB", ref l_U495, 6, 1 );
                                l_U295 = 1;
                            }
                        }
                    }
                }
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U309 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( l_U309, -204.89250000, 1256.15300000, 20.99440000, 5, 5, 5, 0 ))
            {
                if (DOES_VEHICLE_EXIST( l_U326 ))
                {
                    if (NOT (IS_CAR_DEAD( l_U326 )))
                    {
                        if (NOT (IS_CAR_ON_FIRE( l_U326 )))
                        {
                            if (IS_VEH_DRIVEABLE( l_U326 ))
                            {
                                if (NOT l_U258)
                                {
                                    CLEAR_CHAR_TASKS( l_U309 );
                                    SET_NEXT_DESIRED_MOVE_STATE( 4 );
                                    TASK_ENTER_CAR_AS_DRIVER( l_U309, l_U326, 10000 );
                                    l_U258 = 1;
                                }
                            }
                            else if (NOT l_U298)
                            {
                                CLEAR_CHAR_TASKS( l_U309 );
                                SET_COMBAT_DECISION_MAKER( l_U309, l_U458 );
                                TASK_SMART_FLEE_CHAR( l_U309, sub_2856(), 300, -1 );
                                l_U298 = 1;
                            }
                        }
                        else if (NOT l_U298)
                        {
                            CLEAR_CHAR_TASKS( l_U309 );
                            SET_COMBAT_DECISION_MAKER( l_U309, l_U458 );
                            TASK_SMART_FLEE_CHAR( l_U309, sub_2856(), 300, -1 );
                            l_U298 = 1;
                        }
                    }
                    else if (NOT l_U298)
                    {
                        CLEAR_CHAR_TASKS( l_U309 );
                        SET_COMBAT_DECISION_MAKER( l_U309, l_U458 );
                        TASK_SMART_FLEE_CHAR( l_U309, sub_2856(), 300, -1 );
                        l_U298 = 1;
                    }
                }
                else if (NOT l_U298)
                {
                    CLEAR_CHAR_TASKS( l_U309 );
                    SET_COMBAT_DECISION_MAKER( l_U309, l_U458 );
                    TASK_SMART_FLEE_CHAR( l_U309, sub_2856(), 300, -1 );
                    l_U298 = 1;
                }
            }
        }
        if (l_U258)
        {
            if (NOT (IS_CAR_DEAD( l_U326 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U309 )))
                {
                    if (IS_CHAR_IN_CAR( l_U309, l_U326 ))
                    {
                        if (NOT l_U299)
                        {
                            TASK_CAR_DRIVE_TO_COORD( l_U309, l_U326, -285.19120000, 1263.00000000, 23.46050000, 30, 1, -408052231, 2, 7, 20 );
                            l_U299 = 1;
                        }
                    }
                }
            }
        }
        if (NOT (IS_CAR_DEAD( l_U326 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U309 )))
            {
                if (IS_CHAR_IN_CAR( l_U309, l_U326 ))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( l_U309, -452.77510000, 1292.26700000, 18.45200000, 15, 15, 5, 0 ))
                    {
                        if (NOT l_U306)
                        {
                            TASK_CAR_DRIVE_TO_COORD( l_U309, l_U326, -452.77510000, 1292.26700000, 18.45200000, 30, 1, -408052231, 2, 7, 20 );
                            l_U306 = 1;
                        }
                    }
                }
            }
        }
        if (NOT (IS_CAR_DEAD( l_U326 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U309 )))
            {
                if (IS_CHAR_IN_CAR( l_U309, l_U326 ))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( l_U309, -285.19120000, 1263.00000000, 23.46050000, 15, 15, 5, 0 ))
                    {
                        if (NOT l_U305)
                        {
                            CLEAR_CHAR_TASKS( l_U309 );
                            TASK_CAR_MISSION_PED_TARGET( l_U309, l_U326, sub_2856(), 8, 35, 2, 1000, 1 );
                            l_U305 = 1;
                        }
                    }
                }
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U309 )))
        {
            if (l_U258)
            {
                if (l_U299)
                {
                    sub_40079( ref l_U309 );
                }
            }
        }
        if (l_U299)
        {
            if (NOT (IS_CHAR_INJURED( l_U309 )))
            {
                if (NOT (IS_CAR_DEAD( l_U326 )))
                {
                    if (IS_CHAR_IN_CAR( l_U309, l_U326 ))
                    {
                        if ((sub_9438( l_U309, sub_2856(), 1 )) < 20)
                        {
                            SET_DRIVE_TASK_CRUISE_SPEED( l_U309, 37 );
                        }
                        else
                        {
                            SET_DRIVE_TASK_CRUISE_SPEED( l_U309, 35 );
                        }
                    }
                }
            }
        }
        if (l_U258)
        {
            if (NOT l_U259)
            {
                if (NOT (IS_CHAR_INJURED( l_U309 )))
                {
                    if (IS_CHAR_ON_FOOT( l_U309 ))
                    {
                        if (NOT (IS_CAR_DEAD( l_U326 )))
                        {
                            if (IS_CAR_ON_FIRE( l_U326 ))
                            {
                                TASK_SMART_FLEE_CHAR( l_U309, sub_2856(), 300, -1 );
                                l_U259 = 1;
                            }
                        }
                    }
                }
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U309 )))
        {
            if (IS_CHAR_ON_FOOT( l_U309 ))
            {
                if ((sub_9438( sub_2856(), l_U309, 1 )) > 150)
                {
                    PRINT_NOW( "RC3_BGET", 7500, 0 );
                    sub_41481();
                }
            }
            else if ((sub_9438( sub_2856(), l_U309, 1 )) > 350)
            {
                PRINT_NOW( "RC3_BGET", 7500, 0 );
                sub_41481();
            }
        }
        break;
    }
    return;
}

void sub_12458(unknown uParam0)
{
    StrCopy( ref l_U6._fU0, uParam0, 16 );
    sub_12475();
    return;
}

void sub_12475()
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

void sub_12579(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U6._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U6._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_12659( "\n PED NUMBER ", uParam0 );
    sub_12699( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_12659(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_12699(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_12728(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if (NOT (IS_CAR_A_MISSION_CAR( (uParam0^) )))
            {
                SET_CAR_AS_MISSION_CAR( (uParam0^) );
                l_U268 = 1;
            }
        }
    }
    return;
}

void sub_13063(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    CREATE_CHAR( sub_13661( sub_13073( ref uParam4 ) ), uParam4, uParam0._fU0, uParam0._fU4, uParam0._fU8, iParam5 + 0, 1 );
    SET_CHAR_HEADING( iParam5->_fU0, uParam3 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( iParam5->_fU0 );
    SET_CHAR_WILL_USE_CARS_IN_COMBAT( iParam5->_fU0, 1 );
    sub_13789( iParam5 );
    return;
}

void sub_13073(unknown uParam0)
{
    int Result;

    Result = 0;
    switch ((uParam0^))
    {
        case -159126838:
        case 301427732:
        case -570033273:
        case -408052231:
        case 584879743:
        case 802082487:
        case -359167535:
        case 1439613707:
        case 1737188996:
        case -411638179:
        case -2130437771:
        case -1832534792:
        case -1670328242:
        case 188410296:
        case 1414790133:
        case 630267504:
        case 1719115836:
        case 1914397972:
        case -2138439183:
        case 1215631816:
        case 1706970202:
        case 717510247:
        case 965080042:
        case 693982133:
        case 454735664:
        case 1409362172:
        case 767450539:
        case 1686719296:
        case 1917871822:
        case 422524045:
        Result = 1;
        break;
        case -571009320:
        case 2006142190:
        case -1606187161:
        case -77769032:
        case -618617997:
        case 977480632:
        case -1159156463:
        case 479817841:
        case 226415164:
        case 15972646:
        case -2107556865:
        case -150646512:
        case 690697563:
        case -504027408:
        Result = 2;
        break;
        case -114291515:
        case -891462355:
        case -1670998136:
        case -1759858085:
        case 1265391242:
        case -255678177:
        case 236691815:
        case 1590280898:
        Result = 3;
        break;
    }
    if (Result == 0)
    {
        if (((((((uParam0^) == (sub_3743( 0 ))) || ((uParam0^) == (sub_3743( 1 )))) || ((uParam0^) == (sub_3743( 6 )))) || ((uParam0^) == (sub_3743( 7 )))) || ((uParam0^) == (sub_3743( 13 )))) || ((uParam0^) == (sub_3743( 16 ))))
        {
            Result = 1;
        }
        else if (((uParam0^) == (sub_3743( 15 ))) || ((uParam0^) == (sub_3743( 17 ))))
        {
            Result = 3;
        }
    }
    return Result;
}

int sub_13661(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        return 9;
        break;
        case 2:
        return 8;
        break;
    }
    return 25;
}

void sub_13789(int iParam0)
{
    int iVar3;

    SET_CHAR_WILL_DO_DRIVEBYS( iParam0->_fU0, 1 );
    ENABLE_PED_HELMET( iParam0->_fU0, 0 );
    iVar3 = sub_13828( iParam0 + 0 );
    if (iVar3 == 1)
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, 0 );
        SET_CHAR_RELATIONSHIP( iParam0->_fU0, 0, 0 );
        SET_CHAR_NEVER_TARGETTED( iParam0->_fU0, 1 );
    }
    else if (iVar3 == 3)
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, 0 );
        SET_CHAR_RELATIONSHIP( iParam0->_fU0, 1, 0 );
    }
    else if (iVar3 == 2)
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, sub_13998( iVar3 ) );
        SET_CHAR_AS_ENEMY( iParam0->_fU0, 1 );
    }
    else
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, sub_13998( iVar3 ) );
    };;;
    SET_CHAR_PROOFS( iParam0->_fU0, 0, 0, 0, 1, 0 );
    SET_CHAR_WILL_USE_CARS_IN_COMBAT( iParam0->_fU0, 1 );
    SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, 0 );
    SET_PED_FALL_OFF_BIKES_WHEN_SHOT( iParam0->_fU0, 0 );
    iParam0->_fU8 = nil;
    iParam0->_fU12 = nil;
    iParam0->_fU92 = 0;
    iParam0->_fU16 = {0, 0, 0};
    iParam0->_fU28 = 18.00000000;
    iParam0->_fU32 = 0;
    iParam0->_fU36 = 4;
    iParam0->_fU40 = 2;
    iParam0->_fU88 = 12;
    iParam0->_fU96 = 5;
    if (iVar3 == 1)
    {
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_backup" )) == 0)
        {
            sub_14285( iParam0 );
        }
        else if ((NOT (IS_CHAR_MODEL( iParam0->_fU0, sub_3743( 6 ) ))) AND (NOT (IS_CHAR_MODEL( iParam0->_fU0, sub_3743( 7 ) ))))
        {
            sub_14285( iParam0 );
        }
    }
    return;
}

void sub_13828(unknown uParam0)
{
    unknown uVar3;
    int Result;

    Result = 0;
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        GET_CHAR_MODEL( (uParam0^), ref uVar3 );
        Result = sub_13073( ref uVar3 );
    }
    return Result;
}

int sub_13998(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        return 6;
        break;
        case 2:
        return 5;
        break;
    }
    return 22;
}

void sub_14285(int iParam0)
{
    if (l_U143)
    {
        ADD_BLIP_FOR_CHAR( iParam0->_fU0, iParam0 + 100 );
        SET_BLIP_AS_FRIENDLY( iParam0->_fU100, 1 );
        CHANGE_BLIP_PRIORITY( iParam0->_fU100, 0 );
        SET_BLIP_AS_SHORT_RANGE( iParam0->_fU100, 1 );
        CHANGE_BLIP_SCALE( iParam0->_fU100, 0.50000000 );
        CHANGE_BLIP_DISPLAY( iParam0->_fU100, 5 );
    }
    return;
}

void sub_15302(unknown uParam0)
{
    int[5] iVar3;
    int I;
    unknown uVar10;
    unknown uVar11;

    array(ref iVar3, 5);
    for ( I = 0; I < (uParam0^); I++ )
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU0 )))
        {
            if (IS_CHAR_ON_ANY_BIKE( (uParam0^)[I]._fU0 ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( (uParam0^)[I]._fU0, ref uVar10 );
                iVar3[sub_15399( uVar10 )] = 1;
            }
        }
    }
    if (IS_CHAR_ON_ANY_BIKE( sub_2856() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2856(), ref uVar10 );
        iVar3[sub_15399( uVar10 )] = 1;
    }
    for ( I = 0; I < iVar3; I++ )
    {
        uVar11 = sub_3025( I );
        if (iVar3[I])
        {
            if (NOT (HAVE_ANIMS_LOADED( uVar11 )))
            {
                REQUEST_ANIMS( uVar11 );
            }
        }
        else if (HAVE_ANIMS_LOADED( uVar11 ))
        {
            REMOVE_ANIMS( uVar11 );
        }
    }
    return;
}

void sub_15399(unknown uParam0)
{
    int Result;
    unknown uVar4;

    Result = 5;
    GET_CAR_MODEL( uParam0, ref uVar4 );
    switch (uVar4)
    {
        case -1830458836:
        case 584879743:
        case -1606187161:
        case -618617997:
        case 301427732:
        case 802082487:
        case -359167535:
        case -159126838:
        case -408052231:
        Result = 0;
        break;
        case -570033273:
        case -571009320:
        case 2006142190:
        case -77769032:
        Result = 1;
        break;
        case 1203311498:
        case -909201658:
        case -1670998136:
        case -1759858085:
        case 1265391242:
        case -255678177:
        case -114291515:
        case -891462355:
        Result = 2;
        break;
        case 788045382:
        Result = 4;
        break;
        case -1842748181:
        Result = 3;
        break;
    }
    return Result;
}

void sub_15847(int iParam0)
{
    unknown uVar3;
    int iVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    int iVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    int iVar15;
    boolean bVar16;
    boolean bVar17;
    boolean bVar18;
    int iVar19;
    int iVar20;
    float fVar21;
    unknown uVar22;
    unknown uVar23;
    int iVar24;
    unknown uVar25;
    float fVar26;

    GET_GAME_TIMER( ref iVar4 );
    if ((NOT l_U169) || (iParam0->_fU36 == 0))
    {
        return;
    }
    if ((sub_15892( (iParam0^) )) AND (sub_15917()))
    {
        if ((NOT (IS_CHAR_INJURED( iParam0->_fU0 ))) AND (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
        {
            if (((IS_CHAR_SITTING_IN_CAR( iParam0->_fU0, iParam0->_fU4 )) AND (IS_CHAR_ON_ANY_BIKE( iParam0->_fU0 ))) AND (IS_CHAR_ON_ANY_BIKE( sub_2856() )))
            {
                GET_CHAR_COORDINATES( sub_2856(), ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                GET_OFFSET_FROM_CAR_GIVEN_WORLD_COORDS( iParam0->_fU4, uVar8._fU0, uVar8._fU4, uVar8._fU8, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                if (IS_SCRIPTED_SPEECH_PLAYING( iParam0->_fU0 ))
                {
                    if ((l_U167 != iParam0->_fU0) || (l_U168 != sub_2856()))
                    {
                        sub_16469( iParam0->_fU0, sub_16160( uVar8._fU0 < 0.00000000, sub_15399( iParam0->_fU4 ) ), sub_2856(), 39 );
                        PRINTSTRING( "PERFORM_BIKER_GESTURE(biker.ped, GET_RANDOM_SPEECH_ANIM(TRUE), PLAYER_CHAR_ID())\n" );
                    }
                    return;
                }
                else if (IS_SCRIPTED_SPEECH_PLAYING( sub_2856() ))
                {
                    l_U167 = sub_2856();
                    l_U168 = iParam0->_fU0;
                }
            }
        }
    }
    if (((sub_15917()) || (sub_15892( (iParam0^) ))) || ((iVar4 - l_U165) < 33))
    {
        return;
    }
    if (l_U165 <= 0)
    {
        l_U165 = iVar4;
        return;
    }
    if ((NOT (IS_CHAR_INJURED( iParam0->_fU0 ))) AND (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        iVar11 = nil;
        uVar12 = nil;
        uVar13 = nil;
        uVar14 = nil;
        iVar15 = 39;
        bVar16 = false;
        bVar17 = false;
        bVar18 = false;
        iVar19 = 10000;
        GET_DRIVER_OF_CAR( iParam0->_fU4, ref iVar20 );
        if (iVar20 == iParam0->_fU0)
        {
            uVar12 = iParam0->_fU4;
            bVar16 = true;
        }
        else if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref uVar12 );
        }
        if (NOT (IS_CAR_DEAD( uVar12 )))
        {
            if (sub_18997( uVar12 ))
            {
                fVar21 = sub_19040( iParam0 );
                if (((NOT (sub_15892( (iParam0^) ))) AND (((IS_CHAR_ON_SCREEN( iParam0->_fU0 )) AND (fVar21 < 19)) || (fVar21 < 15))) AND (iParam0->_fU0 != l_U167))
                {
                    GET_CAR_PITCH( uVar12, ref uVar22 );
                    if ((l_U104) AND ((iParam0->_fU36 != 1) || ((sub_16196( 0, 10 )) == 0)))
                    {
                        l_U104 = 0;
                        iVar15 = 17;
                        iVar11 = sub_2856();
                    }
                    else if ((((sub_19197( iParam0 )) AND (iParam0->_fU36 == 2)) AND ((sub_13828( iParam0 + 0 )) == 1)) AND (NOT (IS_BIT_SET( l_U170, 6 ))))
                    {
                        iVar15 = 38;
                        uVar13 = sub_19311( bVar16 );
                        iVar11 = sub_2856();
                    }
                    else if (((IS_CAR_IN_AIR_PROPER( uVar12 )) AND ((ABSF( uVar22 )) < 20.00000000)) AND (sub_19399( 8 )))
                    {
                        uVar13 = sub_19653( bVar16 );
                        iVar15 = 8;
                    }
                    else if ((HAS_CAR_BEEN_DAMAGED_BY_CHAR( uVar12, sub_2856() )) AND (sub_19399( 12 )))
                    {
                        uVar13 = sub_19311( bVar16 );
                        iVar11 = sub_2856();
                        iVar15 = 12;
                        bVar17 = true;
                    }
                    else if (((HAS_CAR_BEEN_DAMAGED_BY_CHAR( uVar12, 0 )) || (IS_PED_RAGDOLL( iParam0->_fU0 ))) AND (sub_19399( 13 )))
                    {
                        uVar13 = sub_19311( bVar16 );
                        iVar11 = nil;
                        iVar15 = 13;
                        bVar17 = true;
                    }
                    else if (((((sub_13828( iParam0 + 0 )) == 1) AND (NOT (IS_PLAYER_PRESSING_HORN( sub_1855() )))) AND (IS_BIT_SET( l_U170, 7 ))) AND (sub_19399( 20 )))
                    {
                        if (bVar16)
                        {
                            bVar18 = true;
                            uVar13 = sub_19653( bVar16 );
                        }
                        iVar15 = 20;
                        iVar11 = sub_2856();
                        CLEAR_BIT( ref l_U170, 7 );
                    }
                    else if ((((IS_WANTED_LEVEL_GREATER( sub_1855(), 0 )) AND (NOT (IS_BIT_SET( l_U170, 0 )))) AND (sub_19399( 24 ))) AND ((sub_13828( iParam0 + 0 )) == 1))
                    {
                        iVar15 = 24;
                        iVar11 = sub_2856();
                    }
                    else if ((((NOT (IS_WANTED_LEVEL_GREATER( sub_1855(), 0 ))) AND (IS_BIT_SET( l_U170, 0 ))) AND (sub_19399( 30 ))) AND ((sub_13828( iParam0 + 0 )) == 1))
                    {
                        iVar15 = 30;
                    }
                    else
                    {
                        uVar5 = {sub_9451( sub_2856(), 1 )};
                        uVar23 = nil;
                        if (iVar15 == 39)
                        {
                            if (IS_BIT_SET( l_U170, 3 ))
                            {
                                if (NOT (IS_CHAR_ON_ANY_BIKE( sub_2856() )))
                                {
                                    if (IS_PED_RAGDOLL( sub_2856() ))
                                    {
                                        if (sub_19399( 20 ))
                                        {
                                            iVar15 = 20;
                                            iVar11 = sub_2856();
                                            if ((sub_16196( 0, 2 )) == 0)
                                            {
                                                uVar13 = sub_19653( bVar16 );
                                            }
                                            else
                                            {
                                                uVar13 = sub_19311( bVar16 );
                                            }
                                            CLEAR_BIT( ref l_U170, 3 );
                                        }
                                    }
                                    else if (IS_CHAR_ON_FOOT( sub_2856() ))
                                    {
                                        CLEAR_BIT( ref l_U170, 3 );
                                        CLEAR_BIT( ref l_U170, 4 );
                                    }
                                }
                            }
                            else if (IS_CHAR_ON_ANY_BIKE( sub_2856() ))
                            {
                                if (((sub_19399( 33 )) AND (NOT (IS_BIT_SET( l_U170, 4 )))) AND ((sub_13828( iParam0 + 0 )) == 1))
                                {
                                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2856(), ref uVar23 );
                                    if (DOES_VEHICLE_EXIST( uVar23 ))
                                    {
                                        iVar24 = sub_15399( uVar23 );
                                        if ((NOT (IS_CAR_A_MISSION_CAR( uVar23 ))) AND ((iVar24 == 1) || (iVar24 == 0)))
                                        {
                                            iVar15 = 33;
                                            SET_BIT( ref l_U170, 4 );
                                        }
                                    }
                                }
                                SET_BIT( ref l_U170, 3 );
                            }
                            else if (IS_CHAR_SITTING_IN_ANY_CAR( sub_2856() ))
                            {
                                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2856(), ref uVar23 );
                                if (DOES_VEHICLE_EXIST( uVar23 ))
                                {
                                    if (((sub_19399( 31 )) AND (NOT (IS_BIT_SET( l_U170, 4 )))) AND ((sub_13828( iParam0 + 0 )) == 1))
                                    {
                                        if (NOT (IS_CAR_A_MISSION_CAR( uVar23 )))
                                        {
                                            iVar15 = 31;
                                            SET_BIT( ref l_U170, 4 );
                                        }
                                    }
                                }
                                SET_BIT( ref l_U170, 3 );
                            }
                            else if ((IS_CHAR_ON_FOOT( sub_2856() )) AND (NOT (IS_PED_RAGDOLL( sub_2856() ))))
                            {
                                CLEAR_BIT( ref l_U170, 3 );
                                CLEAR_BIT( ref l_U170, 4 );
                            };;;
                            uVar23 = nil;;
                        }
                        if (iVar15 == 39)
                        {
                            BEGIN_CHAR_SEARCH_CRITERIA();
                            SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 30 );
                            SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 28 );
                            SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 26 );
                            END_CHAR_SEARCH_CRITERIA();
                            if (GET_CLOSEST_CHAR( uVar5._fU0, uVar5._fU4, uVar5._fU8, 25.00000000, 1, 1, ref iVar11 ))
                            {
                                if ((IS_CHAR_INJURED( iVar11 )) || (iVar11 == l_U168))
                                {
                                    iVar11 = nil;
                                }
                                else if ((sub_19399( 0 )) AND (NOT (IS_WANTED_LEVEL_GREATER( sub_1855(), 0 ))))
                                {
                                    if (IS_CHAR_ON_SCREEN( iVar11 ))
                                    {
                                        uVar13 = nil;
                                        iVar15 = 0;
                                        bVar18 = (sub_16196( 0, 10 )) == 0;
                                    }
                                }
                                else if (((sub_19399( 36 )) AND (IS_WANTED_LEVEL_GREATER( sub_1855(), 0 ))) AND (NOT (IS_BIT_SET( l_U170, 1 ))))
                                {
                                    if (IS_CHAR_ON_SCREEN( iVar11 ))
                                    {
                                        uVar13 = nil;
                                        iVar15 = 36;
                                    }
                                }
                                else if ((IS_WANTED_LEVEL_GREATER( sub_1855(), 2 )) AND (sub_19399( 23 )))
                                {
                                    uVar13 = nil;
                                    iVar15 = 23;
                                };;;;
                            }
                        }
                        if ((sub_19399( 2 )) AND (iVar15 == 39))
                        {
                            BEGIN_CHAR_SEARCH_CRITERIA();
                            SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 1 );
                            END_CHAR_SEARCH_CRITERIA();
                            ALLOW_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND( 1 );
                            if (GET_CLOSEST_CHAR( uVar5._fU0, uVar5._fU4, uVar5._fU8, 25.00000000, 1, 1, ref iVar11 ))
                            {
                                if ((IS_CHAR_INJURED( iVar11 )) || (iVar11 == l_U168))
                                {
                                    iVar11 = nil;
                                }
                                else if ((IS_CHAR_MODEL( iVar11, 552542187 )) || (IS_CHAR_MODEL( iVar11, 996267216 )))
                                {
                                    uVar13 = nil;
                                    iVar15 = 2;
                                    bVar18 = (sub_16196( 0, 100 )) == 0;
                                }
                                else
                                {
                                    iVar11 = nil;
                                }
                            }
                        }
                        if (iVar15 == 39)
                        {
                            if ((IS_WANTED_LEVEL_GREATER( sub_1855(), 0 )) AND (NOT (IS_BIT_SET( l_U170, 2 ))))
                            {
                                if (IS_COP_VEHICLE_IN_AREA_3D_NO_SAVE( uVar5._fU0 - 25.00000000, uVar5._fU4 - 25.00000000, uVar5._fU8 - 25.00000000, uVar5._fU0 + 25.00000000, uVar5._fU4 + 25.00000000, uVar5._fU8 + 25.00000000 ))
                                {
                                    iVar15 = 35;
                                }
                            }
                        }
                        if (iVar15 == 39)
                        {
                            uVar23 = sub_21542( uVar5, 25.00000000, 4 );
                            if (IS_VEH_DRIVEABLE( uVar23 ))
                            {
                                GET_DRIVER_OF_CAR( uVar23, ref iVar11 );
                                if ((IS_CHAR_INJURED( iVar11 )) || (iVar11 == l_U168))
                                {
                                    iVar11 = nil;
                                }
                                else if (NOT (IS_CHAR_ON_SCREEN( iVar11 )))
                                {
                                    iVar11 = nil;
                                }
                                else
                                {
                                    uVar13 = nil;
                                    uVar25 = sub_13828( ref iVar11 );
                                    switch (uVar25)
                                    {
                                        case 2:
                                        if ((sub_19399( 28 )) AND ((sub_13828( iParam0 + 0 )) == 1))
                                        {
                                            iVar15 = 28;
                                        }
                                        break;
                                        case 1:
                                        if ((sub_13828( iParam0 + 0 )) == 2)
                                        {
                                            if ((sub_19399( 3 )) AND (sub_19399( 4 )))
                                            {
                                                if (g_U15728[13])
                                                {
                                                    iVar15 = 4;
                                                }
                                                else
                                                {
                                                    iVar15 = 3;
                                                }
                                            }
                                        }
                                        else if ((sub_13828( iParam0 + 0 )) == 1)
                                        {
                                            if (sub_19399( 30 ))
                                            {
                                                uVar13 = sub_22143( bVar16 );
                                                iVar15 = 30;
                                            }
                                        }
                                        break;
                                        default:
                                        if (sub_19399( 1 ))
                                        {
                                            iVar15 = 1;
                                        }
                                        break;
                                    }
                                }
                            }
                        }
                        GET_CHAR_SPEED( sub_2856(), ref fVar26 );
                        if (iVar15 == 39)
                        {
                            if (((sub_13828( iParam0 + 0 )) == 1) AND (fVar26 < 5))
                            {
                                if ((sub_19399( 23 )) AND (IS_WANTED_LEVEL_GREATER( sub_1855(), 0 )))
                                {
                                    iVar15 = 23;
                                }
                                else if (sub_19399( 21 ))
                                {
                                    iVar15 = 21;
                                }
                            }
                        }
                        if (iVar15 == 39)
                        {
                            if ((NOT (IS_BIT_SET( l_U170, 5 ))) AND (fVar26 > 30))
                            {
                                if ((sub_19399( 30 )) AND ((sub_13828( iParam0 + 0 )) == 1))
                                {
                                    iVar15 = 30;
                                }
                                else if (sub_19399( 20 ))
                                {
                                    iVar15 = 20;
                                }
                            }
                        }
                    };;;;;;;;
                    if (bVar18)
                    {
                        SOUND_CAR_HORN( uVar12, sub_16196( 1500, 2500 ) );
                    }
                    if (bVar17)
                    {
                        CLEAR_CAR_LAST_DAMAGE_ENTITY( uVar12 );
                    }
                    if ((iVar15 != 39) || (NOT (IS_STRING_NULL( uVar13 ))))
                    {
                        if (sub_16469( iParam0->_fU0, uVar13, iVar11, iVar15 ))
                        {
                            ;
                        }
                    }
                }
            }
        }
    }
    if (((iVar4 - l_U165) > 10000) AND (IS_BIT_SET( l_U170, 6 )))
    {
        CLEAR_BIT( ref l_U170, 6 );
    }
    if ((IS_PLAYER_PRESSING_HORN( sub_1855() )) AND (NOT (IS_BIT_SET( l_U170, 7 ))))
    {
        SET_BIT( ref l_U170, 7 );
    }
    if (((iVar4 - l_U165) > 28000) AND (l_U167 != nil))
    {
        if ((sub_13828( iParam0 + 0 )) == 1)
        {
            sub_16469( iParam0->_fU0, "", sub_2856(), 30 );
        }
        else
        {
            sub_16469( iParam0->_fU0, "", sub_2856(), 20 );
        }
        l_U167 = iParam0->_fU0;
        if (NOT (IS_WANTED_LEVEL_GREATER( sub_1855(), 0 )))
        {
            CLEAR_BIT( ref l_U170, 0 );
            CLEAR_BIT( ref l_U170, 2 );
            CLEAR_BIT( ref l_U170, 1 );
        }
        CLEAR_BIT( ref l_U170, 7 );
    }
    return;
}

void sub_15892(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25)
{
    return uParam0._fU44._fU4;
}

void sub_15917()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

void sub_16160(boolean bParam0, int iParam1)
{
    string Result;

    Result = nil;
    if ((iParam1 == 1) || (iParam1 == 0))
    {
        if (bParam0)
        {
            switch (sub_16196( 0, 3 ))
            {
                case 0:
                Result = "chat_left_e";
                break;
                case 1:
                Result = "chat_left_f";
                break;
                default:
                Result = "chat_left_g";
                break;
            }
        }
        else
        {
            switch (sub_16196( 0, 3 ))
            {
                case 0:
                Result = "chat_right_e";
                break;
                case 1:
                Result = "chat_right_f";
                break;
                default:
                Result = "chat_right_g";
                break;
            }
        }
        PRINTSTRING( "Anim used: " );
        PRINTSTRING( Result );
        PRINTNL();
    }
    return Result;
}

void sub_16196(unknown uParam0, unknown uParam1)
{
    unknown Result;

    GENERATE_RANDOM_INT_IN_RANGE( uParam0, uParam1, ref Result );
    return Result;
}

void sub_16469(int iParam0, unknown uParam1, int iParam2, int iParam3)
{
    boolean Result;
    unknown uVar7;
    int iVar8;

    Result = false;
    if (IS_CHAR_INJURED( iParam0 ))
    {
        PRINTSTRING( "PERFORM_BIKER_GESTURE: ped is injured\n" );
        return 0;
    }
    if (IS_STRING_NULL( uParam1 ))
    {
        Result = true;
    }
    else if (COMPARE_STRING( uParam1, "" ))
    {
        Result = true;
    }
    else if (NOT ((IS_CHAR_ON_ANY_BIKE( iParam0 )) AND (IS_CHAR_SITTING_IN_ANY_CAR( iParam0 ))))
    {
        Result = true;
    }
    else
    {
        uVar7 = sub_3025( sub_16629( iParam0 ) );
        if (NOT (IS_STRING_NULL( uVar7 )))
        {
            if (HAVE_ANIMS_LOADED( uVar7 ))
            {
                if (NOT (IS_CHAR_PLAYING_ANIM( iParam0, uVar7, uParam1 )))
                {
                    TASK_PLAY_ANIM_SECONDARY_IN_CAR( iParam0, uParam1, uVar7, 8.00000000, 0, 0, 0, 0, 0 );
                    Result = true;
                }
            }
        }
    };;;
    if (Result)
    {
        l_U167 = iParam0;
        l_U168 = iParam2;
        if (DOES_CHAR_EXIST( iParam2 ))
        {
            if (NOT (IS_PED_LOOKING_AT_PED( iParam0, iParam2 )))
            {
                TASK_LOOK_AT_CHAR( iParam0, iParam2, sub_16196( 2000, 5500 ), 0 );
            }
            if (iParam0 != sub_2856())
            {
                iVar8 = sub_13828( ref iParam0 );
                if ((iVar8 == 1) AND (iParam2 != sub_2856()))
                {
                    if (NOT (IS_PED_LOOKING_AT_PED( sub_2856(), iParam2 )))
                    {
                        TASK_LOOK_AT_CHAR( sub_2856(), iParam2, sub_16196( 2000, 5500 ), 0 );
                    }
                }
                else if (NOT (IS_PED_LOOKING_AT_PED( sub_2856(), iParam0 )))
                {
                    TASK_LOOK_AT_CHAR( sub_2856(), iParam0, sub_16196( 2000, 5500 ), 0 );
                }
            }
        }
        if (iParam3 != 39)
        {
            if ((iParam3 == 38) AND (IS_CHAR_MODEL( iParam0, sub_3743( 0 ) )))
            {
                if (l_U172)
                {
                    SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0, "E1B1_WA", "BILLY", 1, 1, 2 );
                }
            }
            else
            {
                SAY_AMBIENT_SPEECH( iParam0, sub_17080( iParam3 ), 1, 1, 2 );
            }
            l_U166 = iParam3;
        }
        GET_GAME_TIMER( ref l_U165 );
        switch (iParam3)
        {
            case 35: SET_BIT( ref l_U170, 2 );
            case 36: SET_BIT( ref l_U170, 1 );
            case 24:
            SET_BIT( ref l_U170, 0 );
            break;
            case 38:
            SET_BIT( ref l_U170, 6 );
            break;
        }
    }
    return Result;
}

void sub_16629(unknown uParam0)
{
    unknown uVar3;
    int Result;

    Result = 5;
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar3 );
            Result = sub_15399( uVar3 );
        }
    }
    return Result;
}

void sub_17080(unknown uParam0)
{
    string Result;

    Result = nil;
    switch (uParam0)
    {
        case 0:
        Result = "ABUSE_COPS";
        break;
        case 1:
        Result = "ABUSE_GENERIC_BIKER_PED";
        break;
        case 2:
        Result = "ABUSE_HOOKER";
        break;
        case 3:
        Result = "ANGELS_OF_DEATH_TAUNT_LOST";
        break;
        case 4:
        Result = "ANGELS_OF_DEATH_TAUNT_LOST_TRUCE";
        break;
        case 5:
        Result = "BIKE_CRASH_DRIVEN";
        break;
        case 6:
        Result = "BIKE_DRIVE_MORE_CAREFUL";
        break;
        case 7:
        Result = "BIKE_HIT_PED";
        break;
        case 8:
        Result = "BIKE_JUMP";
        break;
        case 9:
        Result = "BIKE_ON_FIRE";
        break;
        case 10:
        Result = "BIKE_OVERTAKE";
        break;
        case 11:
        Result = "BIKER_ACHIEVE_MISSION_OBJECTIVE";
        break;
        case 12:
        Result = "BIKER_CLIPS_ANOTHER_BIKE";
        break;
        case 13:
        Result = "BIKER_CLIPS_ANYTHING";
        break;
        case 14:
        Result = "BIKER_FALLING_BEHIND";
        break;
        case 15:
        Result = "BIKER_FALLS_BEHIND";
        break;
        case 16:
        Result = "BIKER_PASSENGER_SHOOT_GENERIC";
        break;
        case 17:
        Result = "BIKER_PLAYER_FALLS_BEHIND";
        break;
        case 18:
        Result = "COME_UNDER_ATTACK";
        break;
        case 19:
        Result = "FOLLOW_ME_GUYS";
        break;
        case 20:
        Result = "GENERIC_CELEBRATION";
        break;
        case 21:
        Result = "GET_A_MOVE_ON";
        break;
        case 22:
        Result = "GET_IN_COVER";
        break;
        case 23:
        Result = "GET_THE_HELL_OUT_OF_HERE";
        break;
        case 24:
        Result = "GET_WANTED_LEVEL";
        break;
        case 25:
        Result = "GREET_JOHNNY";
        break;
        case 26:
        Result = "JACKED_BY_PLAYER_LIKE";
        break;
        case 27:
        Result = "KEEP_SHOOTING";
        break;
        case 28:
        Result = "LOST_TAUNT_ANGELS_OF_DEATH";
        break;
        case 29:
        Result = "LOST_TAUNT_LOST";
        break;
        case 30:
        Result = "LOST_WHOOP";
        break;
        case 31:
        Result = "NEED_BIKE_NOT_CAR";
        break;
        case 32:
        Result = "NEED_SOME_HELP";
        break;
        case 33:
        Result = "NICE_BIKE";
        break;
        case 34:
        Result = "NICE_SHOOTING_JOHNNY";
        break;
        case 35:
        Result = "POLICE_PURSUIT";
        break;
        case 36:
        Result = "SPOT_POLICE";
        break;
        case 37:
        Result = "JACKING_LOST_BIKE";
        break;
        case 38:
        Result = "WAIT_FOR_ME";
        break;
    }
    return Result;
}

void sub_18997(unknown uParam0)
{
    unknown uVar3;

    GET_CAR_MODEL( uParam0, ref uVar3 );
    return IS_THIS_MODEL_A_BIKE( uVar3 );
}

void sub_19040(int iParam0)
{
    return sub_9438( iParam0->_fU0, sub_2856(), 1 );
}

void sub_19197(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( iParam0->_fU4, 0, 11, 0, ref uVar3, ref uVar4, ref uVar5 );
    return LOCATE_CHAR_IN_CAR_3D( sub_2856(), uVar3, uVar4, uVar5, 10, 10, 10, 0 );
}

void sub_19311(boolean bParam0)
{
    string Result;

    Result = nil;
    if (bParam0)
    {
        Result = "gest_damn";
    }
    return Result;
}

boolean sub_19399(int iParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 10000;
    switch (iParam0)
    {
        case 20:
        iVar3 = 2500;
        break;
        case 8:
        iVar3 = 4500;
        break;
        case 6:
        iVar3 = 2500;
        break;
        case 5:
        iVar3 = 1000;
        break;
        case 33:
        iVar3 = 2000;
        break;
        case 31:
        iVar3 = 2000;
        break;
        case 0:
        iVar3 = 18000;
        break;
        case 1:
        iVar3 = 19000;
        break;
        case 21:
        iVar3 = 25000;
        break;
        case 38:
        iVar3 = 2000;
        break;
    }
    GET_GAME_TIMER( ref iVar4 );
    if (iParam0 == 39)
    {
        return 0;
    }
    return (iVar4 - l_U165) > iVar3;
}

void sub_19653(boolean bParam0)
{
    unknown uVar3;
    string Result;

    Result = nil;
    if (bParam0)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 1, 3, ref uVar3 );
        switch (uVar3)
        {
            case 1:
            Result = "gest_thumbsup";
            break;
            default:
            Result = "gest_thumbsup";
            break;
        }
    }
    else
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 7, ref uVar3 );
        switch (uVar3)
        {
            case 0:
            Result = "p_gest_celeb_a";
            break;
            case 1:
            Result = "p_gest_celeb_b";
            break;
            case 2:
            Result = "p_gest_celeb_c";
            break;
            case 3:
            Result = "p_gest_celeb_d";
            break;
            case 5:
            Result = "p_gest_rockin";
            break;
            case 6:
            Result = "p_gest_yes";
            break;
            default:
            Result = "p_gest_yes";
            break;
        }
    }
    return Result;
}

void sub_21542(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown Result;
    int[22] iVar8;
    int I;

    Result = nil;
    array(ref iVar8, 22);
    iVar8[0] = -408052231;
    iVar8[1] = 584879743;
    iVar8[2] = 802082487;
    iVar8[3] = -570033273;
    iVar8[4] = 301427732;
    iVar8[5] = -159126838;
    iVar8[6] = -359167535;
    iVar8[7] = -571009320;
    iVar8[8] = 2006142190;
    iVar8[9] = -1606187161;
    iVar8[10] = -618617997;
    iVar8[11] = -77769032;
    iVar8[12] = 1265391242;
    iVar8[13] = -255678177;
    iVar8[14] = -1670998136;
    iVar8[15] = -1759858085;
    iVar8[16] = -114291515;
    iVar8[17] = -891462355;
    iVar8[18] = 1203311498;
    iVar8[19] = -909201658;
    iVar8[20] = 788045382;
    iVar8[21] = -1842748181;
    for ( I = 0; I < iVar8; I++ )
    {
        Result = GET_CLOSEST_CAR( uParam0, uParam3, iVar8[I], uParam4 );
        if (IS_VEH_DRIVEABLE( Result ))
        {
            return Result;
        }
    }
    return nil;
}

void sub_22143(boolean bParam0)
{
    unknown uVar3;
    string Result;

    Result = nil;
    if (bParam0)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref uVar3 );
        switch (uVar3)
        {
            case 0:
            Result = "gest_thumbsup";
            break;
            case 1:
            Result = "gest_hey";
            break;
        }
    }
    else
    {
        Result = "p_gest_rockin";
    }
    return Result;
}

void sub_22849(int iParam0, boolean bParam1)
{
    unknown uVar4;
    int iVar5;

    if (IS_CHAR_INJURED( iParam0->_fU0 ))
    {
        if (iParam0->_fU92 > 0)
        {
            sub_22896( iParam0->_fU92 );
            iParam0->_fU92 = 0;
        }
        if (DOES_BLIP_EXIST( iParam0->_fU100 ))
        {
            REMOVE_BLIP( iParam0->_fU100 );
        }
        return;
    }
    if (iParam0->_fU36 != 0)
    {
        if ((sub_23291( iParam0 )) == 2)
        {
            return;
        }
        sub_24286( iParam0 );
        if (iParam0->_fU36 != 0)
        {
            sub_15847( iParam0 );
        }
        if (sub_23785( iParam0, 1 ))
        {
            sub_27017( iParam0 + 0, 0 );
        }
        else
        {
            sub_27017( iParam0 + 0, 1 );
        }
        if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
        {
            if (IS_CHAR_ON_ANY_BIKE( iParam0->_fU0 ))
            {
                uVar4 = nil;
                STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref uVar4 );
                if (NOT (IS_CAR_DEAD( uVar4 )))
                {
                    if ((IS_CAR_UPSIDEDOWN( uVar4 )) AND (NOT (IS_CAR_IN_AIR_PROPER( uVar4 ))))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( iParam0->_fU0 );
                    }
                }
            }
        }
    }
    switch (iParam0->_fU36)
    {
        case 2:
        iVar5 = sub_27308( iParam0 );
        if (iVar5 == 1)
        {
            if (sub_23785( iParam0, 32 ))
            {
                sub_28279( iParam0, 3 );
            }
            else if (sub_23785( iParam0, 64 ))
            {
                if (sub_23785( iParam0, 1 ))
                {
                    sub_28279( iParam0, 5 );
                }
                else
                {
                    sub_28279( iParam0, 4 );
                }
            }
        }
        else if (iVar5 == 2)
        {
            ;
        }
        else if ((sub_28380( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_29619( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_30787( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_30901( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_31022( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_31322( iParam0 )) != 0)
        {
            ;
        };;;;;;;;
        break;
        case 3:
        if ((sub_31678( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_28380( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_29619( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_30787( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_30901( iParam0 )) != 0)
        {
            ;
        };;;;;
        break;
        case 1:
        if ((g_U10956 != 0) || (g_U10958 != 0))
        {
            if ((sub_23893( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_31937( iParam0 )) != 0)
            {
                ;
            }
        }
        else if ((sub_32094( iParam0 )) != 0)
        {
            ;
        }
        break;
        case 4:
        if ((sub_23893( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_28380( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_29619( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_30787( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_30901( iParam0 )) != 0)
        {
            ;
        };;;;;
        break;
        case 5:
        if ((sub_27405( iParam0 )) > 30.00000000)
        {
            sub_39402( iParam0 );
        }
        else if ((sub_31937( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_23707( iParam0, 1, 0 )) != 0)
        {
            ;
        };;;
        break;
        default: break;
    }
    if (NOT bParam1)
    {
        sub_39487( iParam0 );
    }
    return;
}

void sub_22896(unknown uParam0)
{
    int iVar3;

    iVar3 = sub_22907( uParam0 );
    if (iVar3 == -1)
    {
        return;
    }
    if (NOT g_U38937[iVar3]._fU4)
    {
        PRINTSTRING( "Recurring_Lost_Killed: marked as killed but wasn't in use: " );
        PRINTINT( iVar3 );
        PRINTNL();
        return;
    }
    g_U38937[iVar3]._fU0 = 0;
    return;
}

int sub_22907(int iParam0)
{
    int iVar3;
    int Result;

    iVar3 = 0;
    Result = 0;
    for ( Result = 0; Result < 13; Result++ )
    {
        if ((g_U38937[Result]._fU0) || (g_U38937[Result]._fU4))
        {
            iVar3++;
            if (iVar3 == iParam0)
            {
                return Result;
            }
        }
    }
    SCRIPT_ASSERT( "Get_Recurring_Lost_ArrayPos: Run out of alive Recurring Lost characters" );
    return -1;
}

int sub_23291(int iParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;

    if ((NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))) || (IS_CHAR_SITTING_IN_ANY_CAR( sub_2856() )))
    {
        return 0;
    }
    STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref iVar3 );
    GET_CAR_CHAR_IS_USING( sub_2856(), ref iVar4 );
    GET_DRIVER_OF_CAR( iVar3, ref iVar5 );
    if (iVar5 != iParam0->_fU0)
    {
        return 0;
    }
    GET_CAR_DOOR_LOCK_STATUS( iVar3, ref iVar6 );
    if (iVar6 != 1)
    {
        return 0;
    }
    if (iVar4 == iVar3)
    {
        if (NOT (((sub_13828( iParam0 + 0 )) == 3) AND ((sub_23434( iVar3 )) == sub_23463())))
        {
            if ((((sub_13828( iParam0 + 0 )) != 1) || ((sub_23509( iParam0->_fU0 )) == (sub_3743( 0 )))) || ((sub_23551( sub_2856() )) AND (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( sub_2856() )))))
            {
                return 0;
            }
            else
            {
                GET_CAR_DOOR_LOCK_STATUS( iVar4, ref iVar7 );
                if (iVar7 != 1)
                {
                    return 0;
                }
            }
        }
        if ((sub_13828( iParam0 + 0 )) == 3)
        {
            sub_16469( iParam0->_fU0, "", sub_2856(), 26 );
        }
        else
        {
            sub_16469( sub_2856(), "", iParam0->_fU0, 37 );
        }
        return sub_23707( iParam0, 1, 1 );
    }
    return 0;
}

void sub_23434(unknown uParam0)
{
    unknown Result;

    GET_CAR_MODEL( uParam0, ref Result );
    return Result;
}

int sub_23463()
{
    return 301427732;
}

void sub_23509(unknown uParam0)
{
    unknown Result;

    GET_CHAR_MODEL( uParam0, ref Result );
    return Result;
}

boolean sub_23551(unknown uParam0)
{
    return (IS_CHAR_IN_ANY_CAR( uParam0 )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )));
}

int sub_23707(int iParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;
    float fVar6;
    int iVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    if (IS_CHAR_ON_FOOT( iParam0->_fU0 ))
    {
        return 1;
    }
    else if ((sub_23551( iParam0->_fU0 )) AND (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( iParam0->_fU0 ))))
    {
        return 2;
    }
    else if ((uParam1) || (sub_23785( iParam0, 1 )))
    {
        uVar5 = nil;
        if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref uVar5 );
        }
        if (IS_VEH_DRIVEABLE( uVar5 ))
        {
            GET_CAR_SPEED( uVar5, ref fVar6 );
            if (fVar6 > 0.20000000)
            {
                return sub_23893( iParam0 );
            }
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 31, ref iVar7 );
            if (iVar7 == 7)
            {
                if (bParam2)
                {
                    uVar8 = {sub_9451( sub_2856(), 1 )};
                    GET_OFFSET_FROM_CAR_GIVEN_WORLD_COORDS( uVar5, uVar8._fU0, uVar8._fU4, uVar8._fU8, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                    TASK_LEAVE_CAR_IN_DIRECTION( iParam0->_fU0, uVar5, uVar8._fU0 > 0.00000000 );
                }
                else
                {
                    TASK_LEAVE_ANY_CAR( iParam0->_fU0 );
                }
            }
            return 2;
        }
    };;;
    return 0;
}

boolean sub_23785(int iParam0, unknown uParam1)
{
    return ((iParam0->_fU88) AND (uParam1)) > 0;
}

int sub_23893(int iParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = sub_23904( iParam0 );
    if (IS_VEH_DRIVEABLE( uVar3 ))
    {
        if (IS_CHAR_STOPPED( iParam0->_fU0 ))
        {
            return 1;
        }
        else
        {
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 49, ref iVar4 );
            if ((iVar4 == 7) || (iParam0->_fU96 != 5))
            {
                iParam0->_fU96 = 5;
                TASK_CAR_MISSION( iParam0->_fU0, uVar3, 0, iParam0->_fU96, 0.00000000, 2, -1, -1 );
            }
            return 2;
        }
    }
    return 0;
}

void sub_23904(int iParam0)
{
    unknown Result;
    int iVar4;

    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref Result );
        if (IS_VEH_DRIVEABLE( Result ))
        {
            GET_DRIVER_OF_CAR( Result, ref iVar4 );
            if (iVar4 == iParam0->_fU0)
            {
                return Result;
            }
        }
    }
    return nil;
}

void sub_24286(int iParam0)
{
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if (NOT (sub_15892( (iParam0^) )))
        {
            if (((sub_24332( (iParam0^) )) AND (NOT l_U154)) AND (NOT l_U155))
            {
                if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (NOT sub_15917()))
                {
                    if ((IS_CHAR_ON_ANY_BIKE( iParam0->_fU0 )) AND (IS_CHAR_ON_ANY_BIKE( sub_2856() )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2856(), iParam0->_fU0, l_U144, l_U144, l_U144, 0 ))
                        {
                            if (sub_24464())
                            {
                                if (iParam0->_fU0 == l_U153)
                                {
                                    if (NOT (ref iParam0->_fU44->_fU8))
                                    {
                                        sub_24557( (iParam0 + 44) + 12, ref l_U147, 7, 1 );
                                    }
                                    else
                                    {
                                        sub_24557( (iParam0 + 44) + 28, ref l_U147, 7, 1 );
                                    }
                                    sub_25545( iParam0 );
                                    if (NOT (IS_CHAR_INJURED( sub_2856() )))
                                    {
                                        TASK_LOOK_AT_CHAR( iParam0->_fU0, sub_2856(), -2, 0 );
                                        TASK_LOOK_AT_CHAR( sub_2856(), iParam0->_fU0, -2, 128 );
                                    }
                                    l_U130 = 0;
                                }
                                else
                                {
                                    GET_CHAR_COORDINATES( sub_2856(), ref l_U159._fU0, ref l_U159._fU4, ref l_U159._fU8 );
                                    GET_CHAR_COORDINATES( iParam0->_fU0, ref l_U162._fU0, ref l_U162._fU4, ref l_U162._fU8 );
                                    GET_DISTANCE_BETWEEN_COORDS_3D( l_U159._fU0, l_U159._fU4, l_U159._fU8, l_U162._fU0, l_U162._fU4, l_U162._fU8, ref l_U158 );
                                    if (iParam0->_fU0 == l_U153)
                                    {
                                        l_U157 += 1.00000000 * TIMESTEP();
                                        l_U156 = l_U158;
                                    }
                                    else if ((l_U158 <= l_U156) || (IS_CHAR_INJURED( l_U153 )))
                                    {
                                        l_U153 = iParam0->_fU0;
                                        l_U156 = l_U158;
                                        l_U157 = 0.00000000;
                                    }
                                }
                            }
                            else if (NOT sub_25973())
                            {
                                sub_26001();
                            }
                            else if (sub_26058())
                            {
                                sub_26022();
                            }
                            GET_CHAR_COORDINATES( sub_2856(), ref l_U159._fU0, ref l_U159._fU4, ref l_U159._fU8 );
                            GET_CHAR_COORDINATES( iParam0->_fU0, ref l_U162._fU0, ref l_U162._fU4, ref l_U162._fU8 );
                            GET_DISTANCE_BETWEEN_COORDS_3D( l_U159._fU0, l_U159._fU4, l_U159._fU8, l_U162._fU0, l_U162._fU4, l_U162._fU8, ref l_U158 );
                            if (iParam0->_fU0 == l_U153)
                            {
                                l_U157 += 1.00000000 * TIMESTEP();
                                l_U156 = l_U158;
                            }
                            else if ((l_U158 <= l_U156) || (IS_CHAR_INJURED( l_U153 )))
                            {
                                l_U153 = iParam0->_fU0;
                                l_U156 = l_U158;
                                l_U157 = 0.00000000;
                            };;;;
                        }
                        else if (NOT sub_26322())
                        {
                            sub_26530( (iParam0^) );
                        }
                    }
                    else if (NOT sub_26322())
                    {
                        sub_26530( (iParam0^) );
                    }
                }
                else if (NOT sub_26322())
                {
                    sub_26530( (iParam0^) );
                }
            }
            else if (NOT sub_26322())
            {
                sub_26530( (iParam0^) );
            }
        }
        else if (NOT sub_26322())
        {
            if ((((((NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2856(), iParam0->_fU0, l_U145, l_U145, l_U145, 0 ))) || (NOT (IS_CHAR_ON_ANY_BIKE( sub_2856() )))) || (NOT (IS_CHAR_ON_ANY_BIKE( iParam0->_fU0 )))) || (NOT (IS_CHAR_SITTING_IN_ANY_CAR( iParam0->_fU0 )))) || (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2856() )))) || (NOT (sub_26340( l_U147 ))))
            {
                sub_26831( iParam0 );
            }
        }
    }
    else if (sub_15892( (iParam0^) ))
    {
        sub_2569( ref l_U147, 0 );
        sub_26831( iParam0 );
    }
    return;
}

void sub_24332(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25)
{
    return uParam0._fU44._fU0;
}

int sub_24464()
{
    if (NOT l_U131)
    {
        if (l_U130)
        {
            return 1;
        }
    }
    return 0;
}

void sub_24557(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_24578( uParam0, ref l_U6._fU0, uParam1, uParam2, uParam3 );
}

void sub_24578(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_24632( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_24632(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_24654( iParam1 )))
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
    for ( I = 0; I <= (g_U9051 - 1); I++ )
    {
        StrCopy( ref g_U9051[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U9051[I] = {(uParam0^)[I]};
    }
    g_U9045 = {(iParam1^)};
    sub_25342( ref g_U8947, ref l_U6 );
    StrCopy( ref g_U8947._fU0, uParam7, 16 );
    g_U8947._fU388 = uParam8;
    g_U8946 = 1;
    return 1;
}

int sub_24654(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_24731( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U559[1] ))
    {
        switch (g_U94._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_24731( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8946)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8944 > iParam0->_fU0)
        {
            sub_24731( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8944 = iParam0->_fU0;
    g_U8945++;
    if (g_U8945 > 100000)
    {
        g_U8945 = 1;
    }
    iParam0->_fU4 = g_U8945;
    return 1;
}

void sub_24731(unknown uParam0)
{
    return;
}

void sub_25342(int iParam0, int iParam1)
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

void sub_25545(int iParam0)
{
    ref iParam0->_fU44->_fU4 = 1;
    if (ref iParam0->_fU44->_fU8)
    {
        ref iParam0->_fU44->_fU0 = 0;
    }
    else if (COMPARE_STRING( (iParam0 + 44) + 28, "" ))
    {
        ref iParam0->_fU44->_fU0 = 0;
    }
    else
    {
        ref iParam0->_fU44->_fU8 = 1;
    }
    l_U153 = nil;
    l_U157 = 0.00000000;
    l_U154 = 1;
    return;
}

void sub_25973()
{
    return l_U129;
}

void sub_26001()
{
    l_U129 = 1;
    l_U130 = 0;
    sub_26022();
    return;
}

void sub_26022()
{
    l_U131 = 0;
    return;
}

void sub_26058()
{
    return l_U131;
}

void sub_26322()
{
    int Result;

    Result = 0;
    if (sub_26340( l_U137 ))
    {
        Result = 1;
    }
    return Result;
}

int sub_26340(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8946 == 1)) || (g_U8946 == 2))
    {
        if (uParam0._fU4 == g_U8945)
        {
            return 1;
        }
        else
        {
            sub_24731( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_24731( "\n speech is not playing" );
    }
    return 0;
}

void sub_26530(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25)
{
    if (uParam0._fU0 == l_U153)
    {
        l_U153 = nil;
        l_U157 = 0.00000000;
        sub_26571();
    }
    return;
}

void sub_26571()
{
    if (l_U128 == 1)
    {
        l_U132 = 0.00000000;
        l_U131 = 1;
        l_U130 = 0;
    }
    return;
}

void sub_26831(int iParam0)
{
    sub_2569( ref l_U147, 1 );
    ref iParam0->_fU44->_fU4 = 0;
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        TASK_CLEAR_LOOK_AT( iParam0->_fU0 );
    }
    if (NOT (IS_CHAR_DEAD( sub_2856() )))
    {
        TASK_CLEAR_LOOK_AT( sub_2856() );
    }
    l_U154 = 0;
    return;
}

void sub_27017(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if ((sub_13828( uParam0 )) == 1)
        {
            if ((IS_SCREEN_FADED_OUT()) || (NOT (IS_CHAR_ON_SCREEN( (uParam0^) ))))
            {
                if ((IS_CHAR_ON_ANY_BIKE( (uParam0^) )) || (uParam1))
                {
                    GIVE_PED_HELMET_WITH_OPTS( (uParam0^), 1 );
                }
                else
                {
                    REMOVE_PED_HELMET( (uParam0^), 1 );
                }
            }
        }
    }
    return;
}

int sub_27308(int iParam0)
{
    int iVar3;
    float fVar4;
    int iVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    if (NOT (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        return 0;
    }
    else if ((sub_23904( iParam0 )) != iParam0->_fU4)
    {
        if (sub_18997( iParam0->_fU4 ))
        {
            SET_CAR_TRACTION( iParam0->_fU4, 1.00000000 );
        }
        return 0;
    }
    else if ((sub_27405( iParam0 )) < l_U175)
    {
        return 1;
    };;;
    if (sub_18997( iParam0->_fU4 ))
    {
        SET_CAR_TRACTION( iParam0->_fU4, 1.70000000 );
    }
    GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 49, ref iVar3 );
    if ((iVar3 == 7) || ((iParam0->_fU96 != 4) AND (iParam0->_fU96 != 14)))
    {
        if (sub_23785( iParam0, 8 ))
        {
            iParam0->_fU96 = 14;
        }
        else
        {
            iParam0->_fU96 = 4;
        }
        if (sub_23785( iParam0, 16 ))
        {
            iVar5 = 4;
        }
        else
        {
            iVar5 = 2;
        }
        if (sub_23785( iParam0, 128 ))
        {
            TASK_CAR_MISSION_COORS_TARGET_NOT_AGAINST_TRAFFIC( iParam0->_fU0, iParam0->_fU4, ref iParam0->_fU16->_fU0, ref iParam0->_fU16->_fU4, ref iParam0->_fU16->_fU8, iParam0->_fU96, iParam0->_fU28, iVar5, l_U174, l_U173 );
        }
        else
        {
            TASK_CAR_MISSION_COORS_TARGET( iParam0->_fU0, iParam0->_fU4, ref iParam0->_fU16->_fU0, ref iParam0->_fU16->_fU4, ref iParam0->_fU16->_fU8, iParam0->_fU96, iParam0->_fU28, iVar5, l_U174, l_U173 );
        }
    }
    else if (sub_23785( iParam0, 64 ))
    {
        fVar4 = (sub_27405( iParam0 )) / 3.00000000;
        if (fVar4 < iParam0->_fU28)
        {
            SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, fVar4 );
        }
        else
        {
            SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, iParam0->_fU28 );
        }
    }
    else
    {
        SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, iParam0->_fU28 );
    }
    if (sub_27933( iParam0->_fU4 ))
    {
        uVar6 = {sub_28083( iParam0->_fU4, 1 )};
        if (GET_RANDOM_CAR_NODE( uVar6, 12.00000000, 1, 0, 0, ref uVar6, ref uVar9 ))
        {
            SET_CAR_COORDINATES( iParam0->_fU4, uVar6._fU0, uVar6._fU4, uVar6._fU8 );
            SET_CAR_ON_GROUND_PROPERLY( iParam0->_fU4 );
        }
    }
    return 2;
}

void sub_27405(int iParam0)
{
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        switch (iParam0->_fU36)
        {
            case 1:
            if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
            {
                return sub_9438( iParam0->_fU0, iParam0->_fU8, 1 );
            }
            break;
            default:
        }
    }
    return VDIST( sub_9451( iParam0->_fU0, 1 ), iParam0->_fU16 );
}

int sub_27933(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (CHECK_STUCK_TIMER( uParam0, 0, 5000 ))
        {
            return 1;
        }
        else if (CHECK_STUCK_TIMER( uParam0, 3, 60000 ))
        {
            return 1;
        }
        else if (CHECK_STUCK_TIMER( uParam0, 2, 30000 ))
        {
            return 1;
        }
        else if (CHECK_STUCK_TIMER( uParam0, 1, 40000 ))
        {
            return 1;
        };;;;
    }
    return 0;
}

void sub_28083(unknown uParam0, boolean bParam1)
{
    unknown Result;
    unknown uVar5;
    unknown uVar6;

    if (IS_CAR_DEAD( uParam0 ))
    {
        GET_DEAD_CAR_COORDINATES( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    else
    {
        GET_CAR_COORDINATES( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    if (NOT bParam1)
    {
        Result._fU8 = 0.00000000;
    }
    return Result;
}

void sub_28279(int iParam0, unknown uParam1)
{
    iParam0->_fU36 = uParam1;
    return;
}

int sub_28380(int iParam0)
{
    unknown uVar3;
    int iVar4;

    if (NOT (sub_23785( iParam0, 2 )))
    {
        return 0;
    }
    uVar3 = sub_23904( iParam0 );
    if (IS_VEH_DRIVEABLE( uVar3 ))
    {
        iParam0->_fU4 = uVar3;
        return 1;
    }
    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        GET_CAR_CHAR_IS_USING( iParam0->_fU0, ref uVar3 );
        if (NOT (IS_CAR_DEAD( uVar3 )))
        {
            if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
            {
                if (IS_CHAR_IN_CAR( iParam0->_fU8, uVar3 ))
                {
                    iParam0->_fU4 = uVar3;
                    return 1;
                }
            }
            GET_DRIVER_OF_CAR( uVar3, ref iVar4 );
            if (NOT (IS_CHAR_INJURED( iVar4 )))
            {
                if (((sub_13828( ref iVar4 )) == (sub_13828( iParam0 + 0 ))) || ((iVar4 == sub_2856()) AND ((sub_13828( iParam0 + 0 )) == 1)))
                {
                    sub_28605( iParam0, iVar4 );
                    return 2;
                }
            }
        }
    }
    return 0;
}

void sub_28605(int iParam0, int iParam1)
{
    unknown uVar4;
    unknown uVar5;
    int iVar6;

    if (IS_CHAR_INJURED( iParam1 ))
    {
        return;
    }
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                if (sub_28701( iParam0->_fU0, uVar4 ))
                {
                    if (NOT (IS_CHAR_IN_CAR( iParam1, uVar4 )))
                    {
                        return;
                    }
                }
            }
        }
    }
    if ((iParam0->_fU8 == sub_2856()) AND (iParam1 != sub_2856()))
    {
        if (iParam0->_fU0 == g_U11198)
        {
            g_U11198 = nil;
        }
        if (iParam0->_fU0 == g_U11197)
        {
            g_U11197 = nil;
        }
    }
    if ((iParam0->_fU0 != g_U11081[0]) AND (iParam0->_fU0 != g_U11081[1]))
    {
        if (DOES_CHAR_EXIST( g_U11197 ))
        {
            if ((g_U11197 == g_U11081[0]) || (g_U11197 == g_U11081[1]))
            {
                g_U11197 = nil;
            }
        }
        if (DOES_CHAR_EXIST( g_U11198 ))
        {
            if ((g_U11198 == g_U11081[0]) || (g_U11198 == g_U11081[1]))
            {
                g_U11198 = nil;
            }
        }
        g_U11114 = 1;
    }
    if ((NOT (IS_CHAR_INJURED( iParam0->_fU0 ))) AND ((iParam0->_fU8 != iParam1) || (iParam0->_fU36 != 1)))
    {
        TASK_PAUSE( iParam0->_fU0, 30 );
    }
    iParam0->_fU8 = iParam1;
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if (IS_PED_IN_GROUP( iParam0->_fU0 ))
        {
            GET_PED_GROUP_INDEX( iParam0->_fU0, ref uVar5 );
            GET_GROUP_LEADER( uVar5, ref iVar6 );
            if (DOES_GROUP_EXIST( uVar5 ))
            {
                GET_GROUP_LEADER( uVar5, ref iVar6 );
                if (iVar6 != iParam0->_fU8)
                {
                    REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
                }
            }
        }
        sub_28279( iParam0, 1 );
        if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
        {
            SET_CHAR_DEFENSIVE_AREA_ATTACHED_TO_PED( iParam0->_fU0, iParam0->_fU8, 0, 2, -2, 0, 65516, 5, 20, 1 );
        }
        if (iParam0->_fU8 == sub_2856())
        {
            if (NOT (DOES_CHAR_EXIST( g_U11198 )))
            {
                sub_29280( iParam0, 0 );
            }
            else if (IS_CHAR_INJURED( g_U11198 ))
            {
                sub_29280( iParam0, 0 );
            }
            else if (NOT (g_U11198 == iParam0->_fU0))
            {
                if (NOT (DOES_CHAR_EXIST( g_U11197 )))
                {
                    sub_29280( iParam0, 1 );
                }
                else if (IS_CHAR_INJURED( g_U11197 ))
                {
                    sub_29280( iParam0, 1 );
                }
                else if (NOT (g_U11197 == iParam0->_fU0))
                {
                    sub_29280( iParam0, 2 );
                };;;
            };;;
        }
    }
    return;
}

boolean sub_28701(unknown uParam0, unknown uParam1)
{
    return (IS_CHAR_SITTING_IN_CAR( uParam0, uParam1 )) AND (NOT (sub_28725( uParam0, uParam1 )));
}

boolean sub_28725(int iParam0, unknown uParam1)
{
    int iVar4;

    GET_DRIVER_OF_CAR( uParam1, ref iVar4 );
    return iVar4 == iParam0;
}

void sub_29280(int iParam0, int iParam1)
{
    if (iParam0->_fU8 == sub_2856())
    {
        if (iParam1 == 1)
        {
            g_U11197 = iParam0->_fU0;
            if (g_U11198 == iParam0->_fU0)
            {
                g_U11198 = nil;
            }
        }
        if (iParam1 == 0)
        {
            g_U11198 = iParam0->_fU0;
            if (g_U11197 == iParam0->_fU0)
            {
                g_U11197 = nil;
            }
        }
    }
    if ((iParam0->_fU0 != g_U11081[0]) AND (iParam0->_fU0 != g_U11081[1]))
    {
        g_U11114 = 1;
    }
    iParam0->_fU40 = iParam1;
    return;
}

int sub_29619(int iParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
    {
        if (sub_29657( iParam0->_fU8, iParam0->_fU0, 0 ))
        {
            return 2;
        }
    }
    if (IS_VEH_DRIVEABLE( iParam0->_fU4 ))
    {
        if (sub_23551( iParam0->_fU0 ))
        {
            return 2;
        }
        if ((sub_23904( iParam0 )) == iParam0->_fU4)
        {
            if (sub_18997( iParam0->_fU4 ))
            {
                SET_BLIP_THROTTLE_RANDOMLY( iParam0->_fU4, 1 );
            }
            return 1;
        }
        if (NOT (sub_18997( iParam0->_fU4 )))
        {
            iParam0->_fU4 = nil;
            return 0;
        }
        iVar3 = nil;
        GET_DRIVER_OF_CAR( iParam0->_fU4, ref iVar3 );
        if ((iVar3 == sub_2856()) || ((iVar3 == iParam0->_fU8) AND (NOT (IS_CHAR_INJURED( iVar3 )))))
        {
            if (IS_CHAR_IN_CAR( iParam0->_fU0, iParam0->_fU4 ))
            {
                return 2;
            }
            else
            {
                return 0;
            }
        }
        else if (NOT (IS_CHAR_INJURED( iVar3 )))
        {
            if ((sub_13828( iParam0 + 0 )) == (sub_13828( ref iVar3 )))
            {
                return 0;
            }
        }
        if ((((IS_CHAR_IN_CAR( sub_2856(), iParam0->_fU4 )) || (IS_CHAR_ON_SCREEN( iParam0->_fU0 ))) || (IS_CAR_ON_SCREEN( iParam0->_fU4 ))) || ((sub_9438( iParam0->_fU0, sub_2856(), 1 )) < 90.00000000))
        {
            if (LOCATE_CHAR_ANY_MEANS_CAR_3D( iParam0->_fU0, iParam0->_fU4, 30.00000000, 30.00000000, 30.00000000, 0 ))
            {
                bVar4 = false;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            bVar4 = true;
            if (DOES_CHAR_EXIST( iVar3 ))
            {
                if (NOT (IS_CHAR_DEAD( iVar3 )))
                {
                    if (IS_PED_A_MISSION_PED( iVar3 ))
                    {
                        bVar4 = false;
                    }
                }
                if (bVar4)
                {
                    DELETE_CHAR( ref iVar3 );
                }
            }
        }
        sub_30341( iParam0 );
        if (bVar4)
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( iParam0->_fU0 );
            SET_CAR_ON_GROUND_PROPERLY( iParam0->_fU4 );
            WARP_CHAR_INTO_CAR( iParam0->_fU0, iParam0->_fU4 );
            if (sub_18997( iParam0->_fU4 ))
            {
                SET_BLIP_THROTTLE_RANDOMLY( iParam0->_fU4, 1 );
            }
            return 1;
        }
        else
        {
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 12, ref iVar5 );
            if (iVar5 == 7)
            {
                if (LOCATE_CHAR_ANY_MEANS_CAR_3D( iParam0->_fU0, iParam0->_fU4, 12.00000000, 30.00000000, 30.00000000, 0 ))
                {
                    TASK_ENTER_CAR_AS_DRIVER( iParam0->_fU0, iParam0->_fU4, -1 );
                }
                else
                {
                    TASK_ENTER_CAR_AS_DRIVER( iParam0->_fU0, iParam0->_fU4, -2 );
                }
            }
            return 2;
        }
    }
    return 0;
}

void sub_29657(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown[2] uVar5;

    array(ref uVar5, 2);
    uVar5[0] = uParam0;
    uVar5[1] = uParam1;
    return sub_29687( ref uVar5, uParam2 );
}

int sub_29687(unknown uParam0, unknown uParam1)
{
    int I;
    unknown[2] uVar5;

    array(ref uVar5, 2);
    if (NOT (sub_29712( (uParam0^)[0], ref uVar5[0], uParam1 )))
    {
        return 0;
    }
    for ( I = 1; I <= ((uParam0^) - 1); I++ )
    {
        if (sub_29712( (uParam0^)[I], ref uVar5[1], uParam1 ))
        {
            if (uVar5[0] != uVar5[1])
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

int sub_29712(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )))
        {
            return 0;
        }
    }
    else if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
    {
        return 0;
    }
    STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, uParam1 );
    return 1;
}

int sub_30341(int iParam0)
{
    if (sub_30355( iParam0->_fU0 ))
    {
        ;
    }
    return 1;
}

int sub_30355(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;

    if (IS_PED_IN_GROUP( uParam0 ))
    {
        GET_PED_GROUP_INDEX( uParam0, ref iVar3 );
        if (DOES_GROUP_EXIST( iVar3 ))
        {
            GET_GROUP_SIZE( iVar3, ref iVar4, ref iVar5 );
            if (NOT (IS_GROUP_LEADER( uParam0, iVar3 )))
            {
                if (((iVar4 < 1) || (iVar5 < 2)) AND (iVar3 != sub_30441()))
                {
                    REMOVE_GROUP( iVar3 );
                }
                else
                {
                    REMOVE_CHAR_FROM_GROUP( uParam0 );
                }
                return 1;
            }
            else if ((iVar5 < 1) AND (iVar3 != sub_30441()))
            {
                REMOVE_GROUP( iVar3 );
            }
        }
    }
    return 0;
}

void sub_30441()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_30787(int iParam0)
{
    unknown uVar3;

    if ((NOT (sub_23785( iParam0, 2 ))) AND (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        return 0;
    }
    uVar3 = sub_21542( sub_9451( iParam0->_fU0, 1 ), 30.00000000, 190 );
    if (IS_VEH_DRIVEABLE( uVar3 ))
    {
        iParam0->_fU4 = uVar3;
        return 1;
    }
    return 0;
}

int sub_30901(int iParam0)
{
    unknown uVar3;

    return 0;
    if ((NOT (sub_23785( iParam0, 2 ))) AND (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        return 0;
    }
    uVar3 = GET_CLOSEST_CAR( sub_9451( iParam0->_fU0, 1 ), 30.00000000, 0, 190 );
    if (IS_VEH_DRIVEABLE( uVar3 ))
    {
        iParam0->_fU4 = uVar3;
        return 1;
    }
    return 0;
}

int sub_31022(int iParam0)
{
    float fVar3;
    int iVar4;

    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        return 0;
    }
    fVar3 = sub_27405( iParam0 );
    if (fVar3 < 12.00000000)
    {
        return 1;
    }
    else if (fVar3 > 90.00000000)
    {
        return 0;
    }
    else
    {
        switch (iParam0->_fU36)
        {
            case 2:
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 27, ref iVar4 );
            if (iVar4 == 7)
            {
                TASK_FOLLOW_NAV_MESH_TO_COORD( iParam0->_fU0, ref iParam0->_fU16->_fU0, ref iParam0->_fU16->_fU4, ref iParam0->_fU16->_fU8, 4, -1, 12.00000000 / 2.00000000 );
            }
            else if ((GET_NAVMESH_ROUTE_RESULT( iParam0->_fU0 )) == 2)
            {
                return 0;
            }
            break;
            case 1:
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 21, ref iVar4 );
            if (iVar4 == 7)
            {
                TASK_GO_TO_CHAR( iParam0->_fU0, iParam0->_fU8, -1, 12.00000000 / 2.00000000 );
            }
            break;
            default: break;
        }
    }
    return 2;
}

int sub_31322(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (iParam0->_fU36 != 2)
    {
        return 0;
    }
    GET_GAME_VIEWPORT_ID( ref uVar3 );
    if ((sub_27405( iParam0 )) < 12.00000000)
    {
        return 1;
    }
    else if ((((sub_27405( iParam0 )) > 90.00000000) AND (NOT (IS_CHAR_ON_SCREEN( iParam0->_fU0 )))) AND ((sub_9438( iParam0->_fU0, sub_2856(), 1 )) > 90.00000000))
    {
        if (GET_SAFE_POSITION_FOR_CHAR( ref iParam0->_fU16->_fU0, ref iParam0->_fU16->_fU4, ref iParam0->_fU16->_fU8, 0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 ))
        {
            if (((CAM_IS_SPHERE_VISIBLE( uVar3, uVar4._fU0, uVar4._fU4, uVar4._fU8, 2.00000000 )) || (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar4._fU0, uVar4._fU4, uVar4._fU8, 2.00000000, 2.00000000, 2.00000000 ))) || ((VDIST( sub_9451( sub_2856(), 1 ), uVar4 )) < 30.00000000))
            {
                ;
            }
            else if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( iParam0->_fU0, uVar4._fU0, uVar4._fU4, uVar4._fU8 );
            }
            else
            {
                SET_CHAR_COORDINATES( iParam0->_fU0, uVar4._fU0, uVar4._fU4, uVar4._fU8 );
            }
            return 2;;
        }
    }
    return 0;
}

int sub_31678(int iParam0)
{
    int iVar3;

    if (NOT (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        return 0;
    }
    else if ((sub_23904( iParam0 )) != iParam0->_fU4)
    {
        return 0;
    }
    GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 16, ref iVar3 );
    if (iVar3 == 7)
    {
        TASK_CAR_DRIVE_WANDER( iParam0->_fU0, iParam0->_fU4, iParam0->_fU28, 2 );
    }
    SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, iParam0->_fU28 );
    return 2;
}

int sub_31937(int iParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 )))
    {
        if (NOT (IS_PED_IN_COMBAT( iParam0->_fU0 )))
        {
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 34, ref iVar3 );
            if ((iVar3 == 7) AND (NOT (IS_CHAR_FACING_CHAR( iParam0->_fU0, sub_2856(), 45.00000000 ))))
            {
                TASK_LOOK_AT_CHAR( iParam0->_fU0, sub_2856(), -1, 0 );
                TASK_TURN_CHAR_TO_FACE_CHAR( iParam0->_fU0, sub_2856() );
            }
        }
        return 1;
    }
    return 0;
}

int sub_32094(int iParam0)
{
    unknown uVar3;
    int iVar4;
    boolean bVar5;
    boolean bVar6;
    unknown uVar7;
    float fVar8;
    int iVar9;

    if (IS_CHAR_INJURED( iParam0->_fU8 ))
    {
        return 0;
    }
    iVar4 = nil;
    bVar5 = false;
    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref iVar4 );
    }
    if (DOES_VEHICLE_EXIST( iVar4 ))
    {
        if (sub_28701( iParam0->_fU0, iVar4 ))
        {
            bVar5 = true;
            GET_DRIVER_OF_CAR( iVar4, ref uVar3 );
            bVar6 = false;
            if ((NOT (IS_CHAR_IN_CAR( sub_2856(), iVar4 ))) AND (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( sub_2856() ))))
            {
                if (IS_CHAR_INJURED( uVar3 ))
                {
                    bVar6 = true;
                }
            }
            if (IS_CAR_MODEL( iVar4, -960289747 ))
            {
                if (sub_29657( sub_2856(), iParam0->_fU0, 0 ))
                {
                    return 2;
                }
            }
            else if ((sub_13828( iParam0 + 0 )) == 1)
            {
                GET_CAR_CHAR_IS_USING( sub_2856(), ref uVar7 );
                if (DOES_VEHICLE_EXIST( uVar7 ))
                {
                    if (IS_CAR_MODEL( uVar7, 800869680 ))
                    {
                        return 2;
                    }
                }
            }
            if (bVar6)
            {
                return sub_23707( iParam0, 1, 0 );
            }
        }
    }
    if ((sub_23785( iParam0, 1 )) AND ((sub_27405( iParam0 )) < 30.00000000))
    {
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, 1 );
        if (IS_PED_IN_COMBAT( iParam0->_fU0 ))
        {
            return 2;
        }
    }
    else
    {
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, 0 );
        if ((IS_PED_IN_COMBAT( iParam0->_fU0 )) AND (NOT bVar5))
        {
            CLEAR_CHAR_TASKS( iParam0->_fU0 );
        }
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( iParam0->_fU0 )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0->_fU0, 1 );
        }
        else
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0->_fU0, 0 );
        }
    }
    iVar4 = nil;
    GET_CAR_CHAR_IS_USING( sub_2856(), ref iVar4 );
    fVar8 = 20.00000000;
    if (iParam0->_fU8 == sub_2856())
    {
        if ((IS_CHAR_ON_FOOT( iParam0->_fU0 )) AND (IS_CHAR_ON_FOOT( sub_2856() )))
        {
            GET_KEY_FOR_CHAR_IN_ROOM( sub_2856(), ref iVar9 );
            if (iVar9 != 0)
            {
                fVar8 = 100.00000000;
            }
        }
    }
    if ((NOT (IS_CHAR_IN_WATER( iParam0->_fU8 ))) AND ((((IS_CHAR_SITTING_IN_ANY_CAR( iParam0->_fU8 )) || (IS_CHAR_GETTING_IN_TO_A_CAR( iParam0->_fU8 ))) || (DOES_VEHICLE_EXIST( iVar4 ))) || ((sub_9438( iParam0->_fU0, iParam0->_fU8, 1 )) > fVar8)))
    {
        if (IS_VEH_DRIVEABLE( iParam0->_fU4 ))
        {
            if ((sub_28725( iParam0->_fU8, iParam0->_fU4 )) || (iParam0->_fU4 == iVar4))
            {
                if ((sub_32780( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_28380( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_30787( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_33847( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_34346( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_31022( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_31937( iParam0 )) != 0)
                {
                    ;
                };;;;;;;
            }
            else if ((sub_28725( sub_2856(), iParam0->_fU4 )) AND ((sub_13828( iParam0 + 0 )) == 1))
            {
                if ((sub_28380( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_30787( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_33847( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_34346( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_31022( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_31937( iParam0 )) != 0)
                {
                    ;
                };;;;;;
            }
            else if ((sub_35172( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_35321( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_29619( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_28380( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_30787( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_34346( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_32780( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_33847( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_31022( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_31937( iParam0 )) != 0)
            {
                ;
            };;;;;;;;;;;;
        }
        else if ((sub_35172( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_29619( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_28380( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_32780( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_30787( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_30901( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_33847( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_34346( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_31022( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_31937( iParam0 )) != 0)
        {
            ;
        };;;;;;;;;;;
    }
    else if (((sub_29657( sub_2856(), iParam0->_fU0, 1 )) AND (iParam0->_fU8 != sub_2856())) AND ((sub_13828( iParam0 + 0 )) == 1))
    {
        sub_28605( iParam0, sub_2856() );
    }
    if (IS_CHAR_IN_WATER( iParam0->_fU8 ))
    {
        if (IS_CHAR_IN_WATER( iParam0->_fU0 ))
        {
            if ((sub_23893( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_29619( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_28380( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_34346( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_33119( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_31022( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_30787( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_30901( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_33847( iParam0 )) != 0)
            {
                ;
            };;;;;;;;;
        }
        else if ((NOT (sub_23785( iParam0, 1 ))) || (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 )))
        {
            if ((sub_23893( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_29619( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_28380( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_34346( iParam0 )) != 0)
            {
                ;
            };;;;
        }
        else if ((sub_35172( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_33119( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_31022( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_31937( iParam0 )) != 0)
        {
            ;
        };;;;;;
    }
    else if ((sub_23785( iParam0, 1 )) AND (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU8 ))))
    {
        if ((sub_35172( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_33119( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_31022( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_23707( iParam0, 0, 0 )) != 0)
        {
            ;
        }
        else if ((sub_23893( iParam0 )) != 0)
        {
            ;
        };;;;;
    }
    else if ((sub_35172( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_23893( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_29619( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_28380( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_32780( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_30787( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_34346( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_33847( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_33119( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_31022( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_31937( iParam0 )) != 0)
    {
        ;
    };;;;;;;;;;;;;;
    return 2;
}

int sub_32780(int iParam0)
{
    unknown uVar3;
    int iVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    int iVar14;
    int iVar15;

    if (IS_CHAR_INJURED( iParam0->_fU8 ))
    {
        return 0;
    }
    else if (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU8 )))
    {
        return 0;
    }
    else
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU8, ref uVar3 );
        if (NOT (IS_VEH_DRIVEABLE( uVar3 )))
        {
            return 0;
        }
        else if (IS_CHAR_IN_CAR( iParam0->_fU0, uVar3 ))
        {
            return 1;
        }
        else
        {
            iVar4 = sub_32909( uVar3 );
            if (iVar4 < 0)
            {
                return 0;
            }
        }
    }
    uVar5 = {sub_28083( uVar3, 1 )};
    uVar8 = {sub_9451( iParam0->_fU0, 1 )};
    uVar11 = {sub_9451( sub_2856(), 1 )};
    if (IS_PED_IN_GROUP( iParam0->_fU0 ))
    {
        if ((sub_27405( iParam0 )) > 30.00000000)
        {
            sub_30341( iParam0 );
            return 0;
        }
        else
        {
            return 2;
        }
    }
    else if ((sub_27405( iParam0 )) < 12.00000000)
    {
        iVar14 = sub_33119( iParam0 );
        if (iVar14 != 0)
        {
            return 2;
        }
    }
    if ((((IS_CHAR_ON_SCREEN( iParam0->_fU0 )) || (IS_CAR_ON_SCREEN( uVar3 ))) || ((VDIST( uVar11, uVar5 )) < 30.00000000)) || ((VDIST( uVar11, uVar8 )) < 30.00000000))
    {
        if ((VDIST( uVar8, uVar5 )) > 30.00000000)
        {
            return 0;
        }
        else
        {
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 11, ref iVar15 );
            if (iVar15 == 7)
            {
                TASK_ENTER_CAR_AS_PASSENGER( iParam0->_fU0, uVar3, -2, iVar4 );
            }
            return 2;
        }
    }
    else
    {
        CLEAR_CHAR_TASKS( iParam0->_fU0 );
        WARP_CHAR_INTO_CAR_AS_PASSENGER( iParam0->_fU0, uVar3, iVar4 );
        return 1;
    }
    return 0;
}

int sub_32909(unknown uParam0)
{
    int Result;
    int iVar4;

    GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam0, ref iVar4 );
    for ( Result = 0; Result < iVar4; Result++ )
    {
        if (IS_CAR_PASSENGER_SEAT_FREE( uParam0, Result ))
        {
            return Result;
        }
    }
    return -1;
}

int sub_33119(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    int iVar5;
    unknown uVar6;

    if (IS_CHAR_INJURED( iParam0->_fU8 ))
    {
        if (sub_30355( iParam0->_fU0 ))
        {
            ;
        }
        return 0;
    }
    else if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        if (NOT (sub_29657( iParam0->_fU0, iParam0->_fU8, 1 )))
        {
            return 0;
        }
    }
    else if ((sub_9438( iParam0->_fU0, iParam0->_fU8, 1 )) > 12.00000000)
    {
        return 0;
    }
    GET_PED_GROUP_INDEX( iParam0->_fU8, ref uVar3 );
    if (DOES_GROUP_EXIST( uVar3 ))
    {
        if (IS_GROUP_MEMBER( iParam0->_fU0, uVar3 ))
        {
            return 1;
        }
    }
    else
    {
        REMOVE_ALL_INACTIVE_GROUPS_FROM_CLEANUP_LIST();
        CREATE_GROUP( 0, ref uVar3, 1 );
        SET_GROUP_LEADER( uVar3, iParam0->_fU8 );
        PRINTSTRING( "e1_biker_buddy_task: CREATING GROUP with leader" );
        PRINTINT( iParam0->_fU8 );
        PRINTSTRING( " and ped " );
        PRINTINT( iParam0->_fU0 );
        PRINTNL();
    }
    if (DOES_GROUP_EXIST( uVar3 ))
    {
        GET_GROUP_SIZE( uVar3, ref uVar4, ref iVar5 );
        if (iVar5 < 7)
        {
            if (IS_PED_IN_GROUP( iParam0->_fU0 ))
            {
                REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
            }
            GET_GROUP_LEADER( uVar3, ref uVar6 );
            if (NOT (IS_CHAR_INJURED( uVar6 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0->_fU0, 0 );
                SET_GROUP_MEMBER( uVar3, iParam0->_fU0 );
                SET_CHAR_NEVER_LEAVES_GROUP( iParam0->_fU0, 1 );
                return 1;
            }
        }
    }
    return 0;
}

int sub_33847(int iParam0)
{
    int iVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    if (NOT (sub_23785( iParam0, 2 )))
    {
        return 0;
    }
    iVar3 = 0;
    if (NOT (IS_CAR_DEAD( iParam0->_fU4 )))
    {
        iVar3 = sub_23434( iParam0->_fU4 );
    }
    else if (HAS_MODEL_LOADED( -408052231 ))
    {
        iVar3 = -408052231;
    }
    else if (HAS_MODEL_LOADED( -570033273 ))
    {
        iVar3 = -570033273;
    }
    else if (HAS_MODEL_LOADED( 584879743 ))
    {
        iVar3 = 584879743;
    }
    else if (HAS_MODEL_LOADED( 802082487 ))
    {
        iVar3 = 802082487;
    }
    else if (HAS_MODEL_LOADED( -1830458836 ))
    {
        iVar3 = -1830458836;
    };;;;;;
    if (iVar3 == 0)
    {
        ;
    }
    else if ((NOT (IS_CHAR_ON_SCREEN( iParam0->_fU0 ))) AND ((sub_19040( iParam0 )) > 30.00000000))
    {
        GET_CHAR_COORDINATES( iParam0->_fU0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
        if (GET_CLOSEST_CAR_NODE_WITH_HEADING( uVar4._fU0, uVar4._fU4, uVar4._fU8, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8, ref uVar10 ))
        {
            uVar11 = sub_34162( uVar4, uVar10, iVar3 );
            WARP_CHAR_INTO_CAR( iParam0->_fU0, uVar11 );
            if (sub_18997( uVar11 ))
            {
                GIVE_PED_HELMET_WITH_OPTS( iParam0->_fU0, 0 );
                SET_BLIP_THROTTLE_RANDOMLY( uVar11, 1 );
            }
            MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar11 );
            return 1;
        }
    }
    return 0;
}

void sub_34162(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown Result;

    CREATE_CAR( uParam4, uParam0._fU0, uParam0._fU4, uParam0._fU8, ref Result, 1 );
    SET_CAR_HEADING( Result, uParam3 );
    sub_6048( Result, uParam4, 9 );
    SET_LOAD_COLLISION_FOR_CAR_FLAG( Result, 1 );
    SET_BLIP_THROTTLE_RANDOMLY( Result, 1 );
    VEHICLE_CAN_BE_TARGETTED_BY_HS_MISSILE( Result, 0 );
    return Result;
}

int sub_34346(int iParam0)
{
    int iVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    int iVar13;
    int iVar14;
    boolean bVar15;

    if (IS_VEH_DRIVEABLE( iParam0->_fU4 ))
    {
        if (IS_CHAR_SITTING_IN_CAR( iParam0->_fU0, iParam0->_fU4 ))
        {
            GET_DRIVER_OF_CAR( iParam0->_fU4, ref iVar3 );
            if ((iVar3 == iParam0->_fU0) || (IS_CHAR_INJURED( iVar3 )))
            {
                return 0;
            }
            else if (iVar3 != iParam0->_fU8)
            {
                sub_28605( iParam0, iVar3 );
                return 2;
            }
            else
            {
                return 1;
            }
        }
        uVar4 = {sub_9451( sub_2856(), 1 )};
        uVar7 = {sub_9451( iParam0->_fU0, 1 )};
        uVar10 = {sub_28083( iParam0->_fU4, 1 )};
        if ((((IS_CHAR_ON_SCREEN( iParam0->_fU0 )) || (IS_CAR_ON_SCREEN( iParam0->_fU4 ))) || ((VDIST( uVar4, uVar10 )) < 30.00000000)) || ((VDIST( uVar4, uVar7 )) < 30.00000000))
        {
            if ((VDIST( uVar10, uVar7 )) > 30.00000000)
            {
                return 0;
            }
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 11, ref iVar13 );
            if (iVar13 != 7)
            {
                return 2;
            }
            GET_DRIVER_OF_CAR( iParam0->_fU4, ref iVar3 );
            if (IS_CHAR_INJURED( iVar3 ))
            {
                return 0;
            }
            else if ((iVar3 == sub_2856()) || ((sub_13828( ref iVar3 )) == (sub_13828( iParam0 + 0 ))))
            {
                iVar14 = sub_32909( iParam0->_fU4 );
                if (iVar14 < 0)
                {
                    return 0;
                }
                else
                {
                    TASK_ENTER_CAR_AS_PASSENGER( iParam0->_fU0, iParam0->_fU4, -2, iVar14 );
                    return 2;
                }
            }
            else
            {
                return 0;
            }
        }
        else
        {
            GET_DRIVER_OF_CAR( iParam0->_fU4, ref iVar3 );
            if (DOES_CHAR_EXIST( iVar3 ))
            {
                if (IS_PED_A_MISSION_PED( iVar3 ))
                {
                    bVar15 = false;
                }
                else
                {
                    DELETE_CHAR( ref iVar3 );
                    bVar15 = true;
                }
            }
            else
            {
                bVar15 = true;
            }
            if (bVar15)
            {
                CLEAR_CHAR_TASKS( iParam0->_fU0 );
                SET_CAR_ON_GROUND_PROPERLY( iParam0->_fU4 );
                WARP_CHAR_INTO_CAR( iParam0->_fU0, iParam0->_fU4 );
                if (sub_18997( iParam0->_fU4 ))
                {
                    GIVE_PED_HELMET_WITH_OPTS( iParam0->_fU0, 0 );
                    SET_BLIP_THROTTLE_RANDOMLY( iParam0->_fU4, 1 );
                }
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }
    iParam0->_fU4 = nil;
    return 0;
}

int sub_35172(int iParam0)
{
    unknown uVar3;
    unknown uVar4;

    if (IS_CHAR_INJURED( iParam0->_fU0 ))
    {
        return 0;
    }
    GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 91, ref uVar3 );
    GET_CHAR_HIGHEST_PRIORITY_EVENT( iParam0->_fU0, ref uVar4 );
    if ((((IS_PED_IN_COMBAT( iParam0->_fU0 )) || (IS_CHAR_RESPONDING_TO_EVENT( iParam0->_fU0, 110 ))) || (IS_CHAR_RESPONDING_TO_EVENT( iParam0->_fU0, 115 ))) AND ((sub_27405( iParam0 )) < 30.00000000))
    {
        return 2;
    }
    return 0;
}

int sub_35321(int iParam0)
{
    int iVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    int iVar8;
    boolean bVar9;
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

    if (NOT (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        return 0;
    }
    else if ((sub_23904( iParam0 )) != iParam0->_fU4)
    {
        if (sub_18997( iParam0->_fU4 ))
        {
            SET_CAR_TRACTION( iParam0->_fU4, 1.00000000 );
        }
        return 0;
    }
    else if (NOT (DOES_CHAR_EXIST( iParam0->_fU8 )))
    {
        if (sub_18997( iParam0->_fU4 ))
        {
            SET_CAR_TRACTION( iParam0->_fU4, 1.00000000 );
        }
        return 0;
    };;;
    if (sub_18997( iParam0->_fU4 ))
    {
        SET_CAR_TRACTION( iParam0->_fU4, 2.00000000 );
    }
    if ((CHECK_STUCK_TIMER( iParam0->_fU4, 0, 5000 )) AND (NOT (IS_CAR_ON_SCREEN( iParam0->_fU4 ))))
    {
        SET_CAR_ON_GROUND_PROPERLY( iParam0->_fU4 );
    }
    sub_30341( iParam0 );
    iVar8 = 2;
    if (sub_23785( iParam0, 16 ))
    {
        iVar8 = 4;
    }
    bVar9 = false;
    GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 49, ref iVar3 );
    fVar6 = sub_27405( iParam0 );
    uVar10 = nil;
    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU8 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU8, ref uVar10 );
    }
    else if ((iParam0->_fU8 == sub_2856()) AND (IS_CHAR_GETTING_IN_TO_A_CAR( sub_2856() )))
    {
        GET_VEHICLE_PLAYER_WOULD_ENTER( sub_1855(), ref uVar10 );
    }
    if (IS_VEH_DRIVEABLE( uVar10 ))
    {
        GET_CAR_MODEL( uVar10, ref uVar11 );
        if (NOT ((IS_THIS_MODEL_A_BIKE( uVar11 )) || (IS_THIS_MODEL_A_CAR( uVar11 ))))
        {
            uVar10 = nil;
        }
    }
    if (IS_VEH_DRIVEABLE( uVar10 ))
    {
        if (PLAYER_IS_INTERACTING_WITH_GARAGE())
        {
            uVar12 = {sub_9451( sub_2856(), 1 )};
            if (GET_NTH_CLOSEST_CAR_NODE( uVar12._fU0, uVar12._fU4, uVar12._fU8, 5, ref uVar12._fU0, ref uVar12._fU4, ref uVar12._fU8 ))
            {
                return sub_35839( iParam0, uVar12 );
            }
            else
            {
                return sub_23893( iParam0 );
            }
        }
        GET_CHAR_SPEED( iParam0->_fU8, ref fVar5 );
        GET_CHAR_SPEED( iParam0->_fU0, ref fVar4 );
        fVar7 = 50.00000000;
        if ((fVar4 < 2.50000000) AND (fVar6 < 9.00000000))
        {
            return sub_23893( iParam0 );
        }
        else if (fVar6 < 15.00000000)
        {
            if (fVar6 < 1.50000000)
            {
                fVar7 = 0.00000000;
            }
            else if (fVar5 < 0.50000000)
            {
                return sub_23893( iParam0 );
            }
            else if (fVar5 < 4.00000000)
            {
                fVar7 = fVar5;
            }
            else
            {
                GET_MODEL_DIMENSIONS( uVar11, ref uVar15, ref uVar18 );
                if (iParam0->_fU8 != sub_2856())
                {
                    if ((((fVar6 < 6.00000000) AND (iParam0->_fU40 == 2)) || ((fVar6 < 5.00000000) AND (iParam0->_fU40 == 3))) || (fVar6 < 3.00000000))
                    {
                        fVar7 = fVar5 - 2.00000000;
                        if (iParam0->_fU40 == 2)
                        {
                            SET_CAR_LANE_SHIFT( iParam0->_fU4, 1.50000000 );
                        }
                    }
                    else
                    {
                        SET_CAR_LANE_SHIFT( iParam0->_fU4, 0.00000000 );
                    }
                }
                else if (sub_36320())
                {
                    if (fVar6 < 5.00000000)
                    {
                        fVar7 = fVar5 - 5.00000000;
                    }
                    else
                    {
                        fVar7 = fVar5;
                    }
                }
                else if ((IS_THIS_MODEL_A_CAR( uVar11 )) AND (fVar6 < (((ABSF( uVar15._fU4 )) + uVar18._fU0) + 2.50000000)))
                {
                    fVar7 = fVar5 - 2.00000000;
                }
                else if ((fVar6 < 4.00000000) AND (iParam0->_fU40 == 2))
                {
                    fVar7 = fVar5 - 5.00000000;
                }
                else if (fVar6 < 2.50000000)
                {
                    fVar7 = fVar5;
                };;;;;
            };;;
        }
        else if (((sub_27933( iParam0->_fU4 )) || (sub_23785( iParam0, 4 ))) AND ((sub_19040( iParam0 )) >= l_U125))
        {
            bVar9 = sub_36590( iParam0, l_U125, l_U126, fVar5 + 4.00000000 );
            if (bVar9)
            {
                if (sub_23785( iParam0, 128 ))
                {
                    TASK_CAR_MISSION_PED_TARGET_NOT_AGAINST_TRAFFIC( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, fVar5 + 6.00000000, iVar8, 12, -1 );
                }
                else
                {
                    TASK_CAR_MISSION_PED_TARGET( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, fVar5 + 6.00000000, iVar8, 12, -1 );
                }
                return 2;
            }
        };;;
        if (fVar7 < 0.00000000)
        {
            fVar7 = 0.00000000;
        }
        if (((((((iVar3 == 7) || ((iParam0->_fU96 == 10) AND (iParam0->_fU40 != 0))) || ((iParam0->_fU96 == 12) AND (iParam0->_fU40 != 2))) || ((iParam0->_fU96 == 11) AND (iParam0->_fU40 != 1))) || ((iParam0->_fU96 == 7) AND (iParam0->_fU40 != 3))) || ((((iParam0->_fU96 != 7) AND (iParam0->_fU96 != 10)) AND (iParam0->_fU96 != 12)) AND (iParam0->_fU96 != 11))) || ((iParam0->_fU8 != iParam0->_fU12) AND (NOT (iParam0->_fU12 == nil))))
        {
            switch (iParam0->_fU40)
            {
                case 0:
                iParam0->_fU96 = 10;
                break;
                case 1:
                iParam0->_fU96 = 11;
                break;
                case 2:
                iParam0->_fU96 = 12;
                break;
                default:
                iParam0->_fU96 = 7;
                break;
            }
            if (sub_23785( iParam0, 128 ))
            {
                TASK_CAR_MISSION_PED_TARGET_NOT_AGAINST_TRAFFIC( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, fVar7, iVar8, 12, -1 );
            }
            else
            {
                TASK_CAR_MISSION_PED_TARGET( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, fVar7, iVar8, 12, -1 );
            }
            return 2;
        }
        SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, fVar7 );
        return 2;
    }
    else
    {
        GET_CHAR_SPEED( iParam0->_fU0, ref fVar4 );
        if (fVar6 < 12.00000000)
        {
            return sub_23893( iParam0 );
        }
        else if (((((((iVar3 == 7) || ((iParam0->_fU96 == 10) AND (iParam0->_fU40 != 0))) || ((iParam0->_fU96 == 12) AND (iParam0->_fU40 != 2))) || ((iParam0->_fU96 == 11) AND (iParam0->_fU40 != 1))) || ((iParam0->_fU96 == 7) AND (iParam0->_fU40 != 3))) || ((((iParam0->_fU96 != 7) AND (iParam0->_fU96 != 10)) AND (iParam0->_fU96 != 12)) AND (iParam0->_fU96 != 11))) || ((iParam0->_fU8 != iParam0->_fU12) AND (NOT (iParam0->_fU12 == nil))))
        {
            switch (iParam0->_fU40)
            {
                case 0:
                iParam0->_fU96 = 10;
                break;
                case 1:
                iParam0->_fU96 = 11;
                break;
                case 2:
                iParam0->_fU96 = 12;
                break;
                default:
                iParam0->_fU96 = 7;
                break;
            }
            if (sub_23785( iParam0, 128 ))
            {
                TASK_CAR_MISSION_PED_TARGET_NOT_AGAINST_TRAFFIC( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, iParam0->_fU28, iVar8, 12, -1 );
            }
            else
            {
                TASK_CAR_MISSION_PED_TARGET( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, iParam0->_fU28, iVar8, 12, -1 );
            }
        }
        fVar7 = fVar6;
        sub_38034( ref fVar7, 5.00000000, 50.00000000 );
        SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, fVar7 );;
    }
    return 2;
}

void sub_35839(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown Result;

    uVar6 = {iParam0->_fU16};
    iParam0->_fU16 = {uParam1};
    uVar9 = iParam0->_fU88;
    sub_35881( iParam0, 64 );
    Result = sub_27308( iParam0 );
    iParam0->_fU16 = {uVar6};
    iParam0->_fU88 = uVar9;
    return Result;
}

void sub_35881(int iParam0, int iParam1)
{
    iParam0->_fU88 = (iParam0->_fU88) || (iParam1);
    if (iParam1 == 1)
    {
        if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
        {
            SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, 1 );
        }
    }
    return;
}

boolean sub_36320()
{
    return ((IS_CONTROL_PRESSED( 0, 41 )) || (IS_CONTROL_PRESSED( 0, 44 ))) || (IS_CONTROL_PRESSED( 0, 45 ));
}

int sub_36590(int iParam0, unknown uParam1, float fParam2, unknown uParam3)
{
    vector vVar6;
    vector vVar9;
    vector vVar12;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    float fVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;

    if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( iParam0->_fU8, iParam0->_fU4, uParam1, uParam1, uParam1, 0 )))
    {
        if (NOT (IS_CAR_ON_SCREEN( iParam0->_fU4 )))
        {
            GET_CAR_COORDINATES( iParam0->_fU4, ref vVar6.x, ref vVar6.y, ref vVar6.z );
            GET_CHAR_COORDINATES( iParam0->_fU8, ref vVar12.x, ref vVar12.y, ref vVar12.z );
            vVar9 = {vVar6 - vVar12};
            vVar9 = {vVar9 * ((fParam2 + (10.00000000 / 2)) / (VMAG( vVar9 )))};
            vVar9 = {vVar9 + vVar12};
            if (GET_CLOSEST_CAR_NODE_WITH_HEADING( vVar9.x, vVar9.y, vVar9.z, ref uVar15._fU0, ref uVar15._fU4, ref uVar15._fU8, ref uVar18 ))
            {
                if (NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar15._fU0, uVar15._fU4, uVar15._fU8, 4.00000000, 4.00000000, 4.00000000 )))
                {
                    GET_GAME_VIEWPORT_ID( ref uVar19 );
                    if (((NOT (CAM_IS_SPHERE_VISIBLE( uVar19, uVar15._fU0, uVar15._fU4, uVar15._fU8, 6.00000000 ))) AND ((VDIST( uVar15, sub_9451( sub_2856(), 1 ) )) > fParam2)) AND ((VDIST2( uVar15, vVar6 )) > 9.00000000))
                    {
                        uVar21 = {-SIN( uVar18 ), COS( uVar18 ), 0.00000000};
                        GET_ANGLE_BETWEEN_2D_VECTORS( uVar21._fU0, uVar21._fU4, vVar12.x - uVar15._fU0, vVar12.y - uVar15._fU4, ref fVar20 );
                        if (fVar20 > 90.00000000)
                        {
                            LIMIT_ANGLE( fVar20 + 180.00000000, ref fVar20 );
                            LIMIT_ANGLE( uVar18 + 180.00000000, ref uVar18 );
                        }
                        if ((fVar20 < 45.00000000) || (fVar20 > 315.00000000))
                        {
                            SET_CAR_HEADING( iParam0->_fU4, uVar18 );
                            SET_CAR_COORDINATES( iParam0->_fU4, uVar15._fU0, uVar15._fU4, uVar15._fU8 );
                            SET_CAR_FORWARD_SPEED( iParam0->_fU4, uParam3 );
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_38034(unknown uParam0, float fParam1, float fParam2)
{
    float fVar5;

    if (fParam2 < fParam1)
    {
        fVar5 = fParam2;
        fParam2 = fParam1;
        fParam1 = fVar5;
    }
    if ((uParam0^) < fParam1)
    {
        (uParam0^) = fParam1;
        return 1;
    }
    else if ((uParam0^) > fParam2)
    {
        (uParam0^) = fParam2;
        return 1;
    }
    return 0;
}

void sub_39402(unknown uParam0)
{
    sub_28279( uParam0, 2 );
    return;
}

void sub_39487(int iParam0)
{
    if (PLAYER_IS_INTERACTING_WITH_GARAGE())
    {
        if (NOT (sub_23785( iParam0, 256 )))
        {
            if (DOES_CHAR_EXIST( iParam0->_fU0 ))
            {
                if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
                {
                    if (IS_CHAR_VISIBLE( iParam0->_fU0 ))
                    {
                        if (NOT (sub_29657( sub_2856(), iParam0->_fU0, 1 )))
                        {
                            SET_CHAR_VISIBLE( iParam0->_fU0, 0 );
                            FREEZE_CHAR_POSITION( iParam0->_fU0, 1 );
                            if (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 )))
                            {
                                SET_CHAR_COLLISION( iParam0->_fU0, 0 );
                            }
                        }
                    }
                }
            }
            if (NOT (IS_CAR_DEAD( iParam0->_fU4 )))
            {
                if (NOT (IS_CHAR_IN_CAR( sub_2856(), iParam0->_fU4 )))
                {
                    SET_CAR_VISIBLE( iParam0->_fU4, 0 );
                    FREEZE_CAR_POSITION( iParam0->_fU4, 1 );
                    SET_CAR_COLLISION( iParam0->_fU4, 0 );
                }
            }
            sub_35881( iParam0, 256 );
        }
    }
    else if (sub_23785( iParam0, 256 ))
    {
        if (DOES_CHAR_EXIST( iParam0->_fU0 ))
        {
            if (NOT (IS_CHAR_ON_SCREEN( iParam0->_fU0 )))
            {
                if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
                {
                    if (NOT (IS_CHAR_VISIBLE( iParam0->_fU0 )))
                    {
                        SET_CHAR_VISIBLE( iParam0->_fU0, 1 );
                        FREEZE_CHAR_POSITION( iParam0->_fU0, 0 );
                        if (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 )))
                        {
                            SET_CHAR_COLLISION( iParam0->_fU0, 1 );
                        }
                    }
                }
                if (NOT (IS_CAR_DEAD( iParam0->_fU4 )))
                {
                    SET_CAR_VISIBLE( iParam0->_fU4, 1 );
                    FREEZE_CAR_POSITION( iParam0->_fU4, 0 );
                    SET_CAR_COLLISION( iParam0->_fU4, 1 );
                }
                sub_39955( iParam0, 256 );
            }
        }
    }
    return;
}

void sub_39955(int iParam0, int iParam1)
{
    if (sub_23785( iParam0, iParam1 ))
    {
        iParam0->_fU88 = (iParam0->_fU88) XOR (iParam1);
    }
    if (iParam1 == 1)
    {
        if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
        {
            SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, 0 );
        }
    }
    return;
}

void sub_40066(int iParam0)
{
    sub_40079( iParam0 + 0 );
    return;
}

void sub_40079(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (l_U108)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED CONTROL_CHASE_HINT_CAM()" );
    }
    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar3 );
    if ((l_U106) AND (IS_HINT_RUNNING()))
    {
        iVar4 = 0;
        GET_GAME_TIMER( ref iVar4 );
        if (iVar4 > (l_U107 + 500))
        {
            l_U106 = 0;
        }
    }
    if (((((IS_CONTROL_PRESSED( 0, 51 )) AND (IS_CHAR_IN_ANY_CAR( sub_2856() ))) AND (NOT (IS_CHAR_DEAD( (uParam0^) )))) AND (NOT sub_1167())) AND (iVar3 != 4))
    {
        if ((NOT IS_HINT_RUNNING()) AND (IS_CHAR_IN_ANY_CAR( (uParam0^) )))
        {
            if (l_U108)
            {
                PRINTNL();
                PRINTSTRING( "**** LAUNCHING THE HINT_CAM" );
            }
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 999999 );
            SET_HINT_TIMES( 500, 0, 0 );
            SET_HINT_FOV( 45.00000000 );
            GET_GAME_TIMER( ref l_U107 );
            l_U106 = 1;
            l_U105 = 0;
        }
    }
    else if (IS_HINT_RUNNING())
    {
        if ((NOT l_U105) AND (NOT l_U106))
        {
            if (l_U108)
            {
                PRINTNL();
                PRINTSTRING( "**** INTERP HINT_CAM BACK" );
            }
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 500 );
            SET_HINT_TIMES( 0, 0, 500 );
            SET_HINT_FOV( 45.00000000 );
            l_U105 = 1;
        }
    }
    else if (l_U105)
    {
        if (l_U108)
        {
            PRINTNL();
            PRINTSTRING( "**** DONE INTERP, RESETTING HINT_CAM VARIABLES" );
        }
        SET_CINEMATIC_BUTTON_ENABLED( 1 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
        l_U105 = 0;
    };;;
    return;
}

void sub_40747()
{
    if (DOES_CHAR_EXIST( l_U309 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U309 )))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U309, sub_2856(), 0 ))
            {
                sub_2569( ref l_U495, 0 );
                sub_40825( 0 );
                CLEAR_PRINTS();
                while (l_U303 == 1)
                {
                    switch (l_U363)
                    {
                        case 0:
                        if (NOT l_U270)
                        {
                            sub_24557( "RPi1_FAIL", ref l_U495, 7, 1 );
                            l_U270 = 1;
                        }
                        if (DOES_BLIP_EXIST( l_U345 ))
                        {
                            REMOVE_BLIP( l_U345 );
                        }
                        if (sub_26340( l_U495 ))
                        {
                            while (sub_26340( l_U495 ))
                            {
                                WAIT( 0 );
                            }
                        }
                        l_U363++;
                        break;
                        case 1:
                        if (NOT (IS_CHAR_DEAD( l_U309 )))
                        {
                            SAY_AMBIENT_SPEECH( l_U309, "Shot_By_Player_Dislike", 0, 0, 2 );
                            if (IS_AMBIENT_SPEECH_PLAYING( l_U309 ))
                            {
                                while (IS_AMBIENT_SPEECH_PLAYING( l_U309 ))
                                {
                                    WAIT( 0 );
                                }
                            }
                        }
                        l_U363++;
                        break;
                        case 2:
                        if (IS_SCREEN_FADED_IN())
                        {
                            DO_SCREEN_FADE_OUT( 250 );
                            while (NOT IS_SCREEN_FADED_OUT())
                            {
                                WAIT( 0 );
                            }
                        }
                        DELETE_CHAR( ref l_U309 );
                        DELETE_CAR( ref l_U321 );
                        l_U363++;
                        break;
                        case 3:
                        if (IS_SCREEN_FADED_OUT())
                        {
                            DO_SCREEN_FADE_IN( 250 );
                            while (NOT IS_SCREEN_FADED_IN())
                            {
                                WAIT( 0 );
                            }
                        }
                        l_U363++;
                        break;
                        case 4:
                        if (NOT l_U269)
                        {
                            PRINT_NOW( "RC3_HURT", 7500, 1 );
                            l_U269 = 1;
                            sub_41481();
                            l_U303 = 0;
                        }
                        break;
                    }
                    WAIT( 0 );
                }
            }
        }
        else if (NOT l_U269)
        {
            PRINT_NOW( "RC3_BJD", 7500, 1 );
            sub_41481();
        }
    }
    return;
}

void sub_40825(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_AMBIENT_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8944 >= 1) AND (g_U8944 <= 3))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_41481()
{
    SET_PLAYER_MOOD_PISSED_OFF( sub_1855(), 150 );
    SAY_AMBIENT_SPEECH( sub_2856(), "MISSION_FAIL_RAGE", 0, 0, 0 );
    sub_1929();
    return;
}

void sub_41659()
{
    if (NOT (IS_CAR_DEAD( l_U320 )))
    {
        if (NOT (IS_CHAR_IN_CAR( sub_2856(), l_U320 )))
        {
            if (NOT l_U245)
            {
                if (NOT (sub_26340( l_U495 )))
                {
                    PRINT_NOW( "RC3_BIK", 7500, 0 );
                    l_U245 = 1;
                }
            }
            if (DOES_BLIP_EXIST( l_U345 ))
            {
                REMOVE_BLIP( l_U345 );
            }
            if (NOT (DOES_BLIP_EXIST( l_U347 )))
            {
                ADD_BLIP_FOR_CAR( l_U320, ref l_U347 );
                SET_BLIP_AS_FRIENDLY( l_U347, 1 );
            }
            if (NOT (sub_41847( ref l_U468[0] )))
            {
                sub_41897( ref l_U468[0], 0 );
            }
        }
        else
        {
            CLEAR_THIS_PRINT( "RC3_BIK" );
            if (DOES_BLIP_EXIST( l_U347 ))
            {
                REMOVE_BLIP( l_U347 );
            }
            if (NOT (DOES_BLIP_EXIST( l_U345 )))
            {
                ADD_BLIP_FOR_CHAR( l_U309, ref l_U345 );
                SET_BLIP_AS_FRIENDLY( l_U345, 1 );
            }
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_1855(), 0 )))
            {
                if (sub_41847( ref l_U468[0] ))
                {
                    sub_39402( ref l_U468[0] );
                }
            }
        }
    }
    return;
}

boolean sub_41847(int iParam0)
{
    return (4 == iParam0->_fU36) || (5 == iParam0->_fU36);
}

void sub_41897(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        sub_28279( uParam0, 5 );
    }
    else
    {
        sub_28279( uParam0, 4 );
    }
    return;
}

void sub_42107()
{
    if (NOT (IS_CHAR_DEAD( l_U309 )))
    {
        if (IS_WANTED_LEVEL_GREATER( sub_1855(), 0 ))
        {
            if (DOES_BLIP_EXIST( l_U345 ))
            {
                REMOVE_BLIP( l_U345 );
            }
            if (NOT l_U282)
            {
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    PRINT_NOW( "RC3_WLEV", 7500, 0 );
                    l_U260 = 0;
                    if (NOT (IS_CHAR_DEAD( l_U309 )))
                    {
                        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U309, -207.92430000, 1203.27800000, 13.47050000, 15, 15, 10, 0 )))
                        {
                            sub_41897( ref l_U468[0], 0 );
                        }
                    }
                    l_U282 = 1;
                }
            }
        }
        else
        {
            CLEAR_THIS_PRINT( "RC3_WLEV" );
            l_U282 = 0;
            if (NOT (IS_CAR_DEAD( l_U320 )))
            {
                if (IS_CHAR_IN_CAR( sub_2856(), l_U320 ))
                {
                    if (NOT (DOES_BLIP_EXIST( l_U345 )))
                    {
                        ADD_BLIP_FOR_CHAR( l_U309, ref l_U345 );
                        SET_BLIP_AS_FRIENDLY( l_U345, 1 );
                    }
                }
                else if (NOT (DOES_BLIP_EXIST( l_U347 )))
                {
                    ADD_BLIP_FOR_CAR( l_U320, ref l_U347 );
                    SET_BLIP_AS_FRIENDLY( l_U347, 1 );
                }
                if (NOT (IS_CHAR_DEAD( l_U309 )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2856(), l_U309, 25, 25, 10, 0 ))
                    {
                        l_U260 = 1;
                        if (IS_CHAR_IN_CAR( sub_2856(), l_U320 ))
                        {
                            if (sub_41847( ref l_U468[0] ))
                            {
                                sub_39402( ref l_U468[0] );
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_42713(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    int iVar7;

    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if ((VDIST2( uParam1, iParam0->_fU16 )) > 1.00000000)
        {
            TASK_PAUSE( iParam0->_fU0, 30 );
        }
        else if ((iParam0->_fU36 == 4) AND ((VDIST( iParam0->_fU16, sub_9451( iParam0->_fU0, 1 ) )) < 12.00000000))
        {
            return;
        }
        else if (iParam0->_fU36 != 2)
        {
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 49, ref iVar7 );
            if (iVar7 != 7)
            {
                TASK_PAUSE( iParam0->_fU0, 30 );
            }
        };;;
    }
    if (iParam0->_fU28 < 0.01000000)
    {
        iParam0->_fU28 = 28.00000000;
    }
    iParam0->_fU36 = 2;
    iParam0->_fU16 = {uParam1};
    switch (uParam4)
    {
        case 0:
        sub_39955( iParam0, 32 );
        sub_39955( iParam0, 64 );
        break;
        case 1:
        sub_39955( iParam0, 32 );
        sub_35881( iParam0, 64 );
        sub_35881( iParam0, 1 );
        break;
        case 2:
        sub_39955( iParam0, 32 );
        sub_35881( iParam0, 64 );
        sub_39955( iParam0, 1 );
        break;
        case 3:
        sub_35881( iParam0, 32 );
        sub_39955( iParam0, 64 );
        break;
    }
    return;
}

void sub_43153(int iParam0, unknown uParam1, boolean bParam2)
{
    iParam0->_fU4 = uParam1;
    if (bParam2)
    {
        sub_39955( iParam0, 2 );
    }
    return;
}

int sub_43452(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( sub_2856() )))
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            if (IS_CHAR_IN_CAR( sub_2856(), uParam0 ))
            {
                if (CHECK_STUCK_TIMER( uParam0, 3, 60000 ))
                {
                    return 1;
                }
                if ((CHECK_STUCK_TIMER( uParam0, 2, 30000 )) AND (NOT (CHECK_STUCK_TIMER( uParam0, 1, 0 ))))
                {
                    return 1;
                }
                if (CHECK_STUCK_TIMER( uParam0, 0, 5000 ))
                {
                    return 1;
                }
            }
            if (sub_43596( uParam0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_43596(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( sub_2856() )))
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            if (NOT (IS_CHAR_IN_CAR( sub_2856(), uParam0 )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_2856(), uParam0, 5, 5, 5, 0 ))
                {
                    if (((IS_BUTTON_PRESSED( 0, 15 )) AND (IS_USING_CONTROLLER())) || ((IS_CONTROL_PRESSED( 2, 3 )) AND (NOT IS_USING_CONTROLLER())))
                    {
                        if (IS_BUTTON_JUST_PRESSED( 0, 15 ))
                        {
                            l_U217++;
                        }
                        GET_GAME_TIMER( ref l_U218 );
                    }
                    else if (NOT sub_43767())
                    {
                        if (sub_43845( uParam0 ))
                        {
                            if (l_U217 > 2)
                            {
                                if (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( sub_2856() )))
                                {
                                    if (NOT (IS_PED_RAGDOLL( sub_2856() )))
                                    {
                                        GET_GAME_TIMER( ref l_U219 );
                                        l_U220 = l_U219 - l_U218;
                                        if (l_U220 > 1000)
                                        {
                                            PRINTNL();
                                            PRINTSTRING( "*******************************" );
                                            PRINTNL();
                                            PRINTSTRING( "Brenda's Stuck Check has returned true" );
                                            PRINTNL();
                                            PRINTSTRING( "*******************************" );
                                            PRINTNL();
                                            PRINTNL();
                                            PRINTSTRING( "*******************************" );
                                            PRINTNL();
                                            PRINTSTRING( "Brenda's Stuck Check is setting your vehicle on fire" );
                                            PRINTNL();
                                            PRINTSTRING( "*******************************" );
                                            PRINTNL();
                                            SET_PETROL_TANK_HEALTH( uParam0, 65436 );
                                            return 1;
                                        }
                                    }
                                    else
                                    {
                                        GET_GAME_TIMER( ref l_U218 );
                                        l_U217 = 0;
                                    }
                                }
                                else
                                {
                                    GET_GAME_TIMER( ref l_U218 );
                                    l_U217 = 0;
                                }
                            }
                        }
                        else
                        {
                            GET_GAME_TIMER( ref l_U218 );
                            l_U217 = 0;
                        }
                    }
                    else
                    {
                        GET_GAME_TIMER( ref l_U218 );
                        l_U217 = 0;
                    }
                }
                else
                {
                    GET_GAME_TIMER( ref l_U218 );
                    l_U217 = 0;
                }
            }
            else
            {
                GET_GAME_TIMER( ref l_U218 );
                l_U217 = 0;
            }
        }
    }
    return 0;
}

int sub_43767()
{
    int iVar2;
    int iVar3;
    unknown uVar4;
    unknown uVar5;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar2, ref iVar3, ref uVar4, ref uVar5 );
    if ((iVar2 > 20) || (iVar2 < 65516))
    {
        return 1;
    }
    if ((iVar3 > 20) || (iVar3 < 65516))
    {
        return 1;
    }
    return 0;
}

int sub_43845(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_COORDINATES( uParam0, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
    }
    if (NOT (IS_CHAR_INJURED( sub_2856() )))
    {
        GET_CHAR_COORDINATES( sub_2856(), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
    }
    GET_HEADING_FROM_VECTOR_2D( uVar3._fU0 - uVar6._fU0, uVar3._fU4 - uVar6._fU4, ref uVar9 );
    if (sub_43963( sub_2856(), uVar9, 90 ))
    {
        return 1;
    }
    return 0;
}

int sub_43963(unknown uParam0, unknown uParam1, unknown uParam2)
{
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_HEADING( uParam0, ref fVar5 );
        fVar6 = uParam1 - uParam2;
        fVar7 = (uParam1 + uParam2) - 1;
        fVar9 = fVar7 - 360;
        fVar8 = fVar6 + 360;
        if ((fVar7 <= 360) AND (fVar6 >= 0))
        {
            if ((fVar5 > fVar6) AND (fVar5 < fVar7))
            {
                l_U216 = 1;
            }
            else
            {
                l_U216 = 0;
            }
        }
        else if (fVar7 > 360)
        {
            if (((fVar5 < fVar9) AND (fVar5 >= 0)) || ((fVar5 <= 360) AND (fVar5 > fVar6)))
            {
                l_U216 = 1;
            }
            else
            {
                l_U216 = 0;
            }
        }
        else if (fVar6 < 0)
        {
            if (((fVar5 > fVar8) AND (fVar5 <= 360)) || ((fVar5 >= 0) AND (fVar5 < fVar7)))
            {
                l_U216 = 1;
            }
            else
            {
                l_U216 = 0;
            }
        };;;
        if (l_U216)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    return 0;
}

void sub_46240()
{
    if (NOT l_U243)
    {
        CLEAR_AREA( -205.22760000, 1210.09900000, 13.51350000, 18, 1 );
        SWITCH_ROADS_OFF( 65276, 1150, -10, 65396, 1220, 50 );
        l_U462 = 1264341792;
        REQUEST_MODEL( l_U462 );
        while (NOT (HAS_MODEL_LOADED( l_U462 )))
        {
            WAIT( 0 );
        }
        l_U463 = 486987393;
        REQUEST_MODEL( l_U463 );
        while (NOT (HAS_MODEL_LOADED( l_U463 )))
        {
            WAIT( 0 );
        }
        l_U464 = 2016857647;
        REQUEST_MODEL( l_U464 );
        while (NOT (HAS_MODEL_LOADED( l_U464 )))
        {
            WAIT( 0 );
        }
        REQUEST_MODEL( -408052231 );
        while (NOT (HAS_MODEL_LOADED( -408052231 )))
        {
            WAIT( 0 );
        }
        CREATE_CAR( l_U462, l_U407._fU0, l_U407._fU4, l_U407._fU8, ref l_U322, 1 );
        SET_CAR_HEADING( l_U322, l_U449 );
        CREATE_CAR( l_U463, l_U410._fU0, l_U410._fU4, l_U410._fU8, ref l_U323, 1 );
        SET_CAR_HEADING( l_U323, l_U450 );
        CREATE_CAR( l_U464, l_U413._fU0, l_U413._fU4, l_U413._fU8, ref l_U324, 1 );
        SET_CAR_HEADING( l_U324, l_U451 );
        CREATE_CAR( l_U462, l_U416._fU0, l_U416._fU4, l_U416._fU8, ref l_U325, 1 );
        SET_CAR_HEADING( l_U325, l_U452 );
        ADD_COVER_BLOCKING_AREA( l_U422, l_U425, 0, 0, 1 );
        ADD_COVER_BLOCKING_AREA( l_U428, l_U431, 0, 0, 1 );
        l_U243 = 1;
    }
    return;
}

void sub_46795()
{
    if (NOT l_U235)
    {
        l_U465 = 1439613707;
        REQUEST_MODEL( l_U465 );
        while (NOT (HAS_MODEL_LOADED( l_U465 )))
        {
            WAIT( 0 );
        }
        l_U466 = -1670328242;
        REQUEST_MODEL( l_U466 );
        while (NOT (HAS_MODEL_LOADED( l_U466 )))
        {
            WAIT( 0 );
        }
        LOAD_COMBAT_DECISION_MAKER( 1, ref l_U458 );
        LOAD_COMBAT_DECISION_MAKER( 2, ref l_U459 );
        sub_46945();
        CREATE_CHAR( 26, l_U466, l_U370[0]._fU0, l_U370[0]._fU4, l_U370[0]._fU8, ref l_U310[0], 1 );
        GIVE_WEAPON_TO_CHAR( l_U310[0], 26, 30000, 0 );
        for ( l_U358 = 1; l_U358 <= 3; l_U358++ )
        {
            CREATE_CHAR( 26, l_U465, l_U370[l_U358]._fU0, l_U370[l_U358]._fU4, l_U370[l_U358]._fU8, ref l_U310[l_U358], 1 );
            GIVE_WEAPON_TO_CHAR( l_U310[l_U358], 27, 30000, 0 );
        }
        CREATE_CHAR( 26, l_U466, l_U370[4]._fU0, l_U370[4]._fU4, l_U370[4]._fU8, ref l_U310[4], 1 );
        GIVE_WEAPON_TO_CHAR( l_U310[4], 27, 30000, 0 );
        for ( l_U358 = 5; l_U358 <= 6; l_U358++ )
        {
            CREATE_CHAR( 26, l_U466, l_U370[l_U358]._fU0, l_U370[l_U358]._fU4, l_U370[l_U358]._fU8, ref l_U310[l_U358], 1 );
            GIVE_WEAPON_TO_CHAR( l_U310[l_U358], 26, 30000, 0 );
        }
        for ( l_U358 = 0; l_U358 <= 6; l_U358++ )
        {
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U310[l_U358] );
            SET_CHAR_RELATIONSHIP_GROUP( l_U310[l_U358], 24 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U310[l_U358], 1 );
            SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U310[l_U358], 0 );
            SET_PED_DIES_WHEN_INJURED( l_U310[l_U358], 1 );
            SET_CHAR_HEADING( l_U310[l_U358], l_U441[l_U358] );
            SET_CHAR_NEVER_TARGETTED( l_U310[l_U358], 1 );
            SET_CHAR_AS_ENEMY( l_U310[l_U358], 1 );
            SET_COMBAT_DECISION_MAKER( l_U310[l_U358], l_U459 );
            SET_CHAR_WILL_USE_COVER( l_U310[l_U358], 1 );
            BLOCK_PEEKING_IN_COVER( l_U310[l_U358], 1 );
        }
        if (NOT (IS_CHAR_DEAD( l_U310[0] )))
        {
            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U310[0], -221.66320000, 1223.18800000, 18.10320000, 3 );
        }
        if (NOT (IS_CHAR_DEAD( l_U310[1] )))
        {
            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U310[1], -204.82200000, 1223.20500000, 18.13310000, 3 );
        }
        for ( l_U358 = 2; l_U358 <= 6; l_U358++ )
        {
            if (NOT (IS_CHAR_DEAD( l_U310[l_U358] )))
            {
                SET_CHAR_ANGLED_DEFENSIVE_AREA( l_U310[l_U358], 65324, 1209, 13, 65325, 1217, 17, 17 );
            }
        }
        SET_CHAR_MONEY( l_U310[1], 125 );
        SET_CHAR_MONEY( l_U310[3], 175 );
        SET_CHAR_MONEY( l_U310[4], 200 );
        l_U235 = 1;
    }
    return;
}

void sub_46945()
{
    for ( l_U358 = 0; l_U358 <= 6; l_U358++ )
    {
        l_U370[0] = {-221.66320000, 1223.18800000, 18.10320000};
        l_U370[1] = {-204.82200000, 1223.20500000, 18.13310000};
        l_U370[2] = {-217.19650000, 1213.82600000, 13.46950000};
        l_U370[3] = {-209.26750000, 1216.74400000, 13.47140000};
        l_U370[4] = {-206.20020000, 1212.32900000, 13.52850000};
        l_U370[5] = {-203.09970000, 1210.60200000, 13.50750000};
        l_U370[6] = {-222.69010000, 1214.40700000, 13.61980000};
    }
    for ( l_U358 = 0; l_U358 <= 6; l_U358++ )
    {
        l_U441[0] = 295.59620000;
        l_U441[1] = 336.31770000;
        l_U441[2] = 28.70790000;
        l_U441[3] = 158.96830000;
        l_U441[4] = 155.08890000;
        l_U441[5] = 84.05290000;
        l_U441[6] = 139.60490000;
    }
    return;
}

void sub_48238()
{
    CREATE_CAR( -408052231, -203.01770000, 1245.71300000, 21.37250000, ref l_U327[0], 1 );
    SET_CAR_HEADING( l_U327[0], 37.80080000 );
    sub_6048( l_U327[0], -408052231, 9 );
    CREATE_CAR( -408052231, -203.26760000, 1248.39400000, 21.32250000, ref l_U327[1], 1 );
    SET_CAR_HEADING( l_U327[1], 38.83790000 );
    sub_6048( l_U327[1], -408052231, 9 );
    CREATE_CAR( -408052231, -224.73520000, 1245.44200000, 22.57050000, ref l_U327[2], 1 );
    SET_CAR_HEADING( l_U327[2], 318.17450000 );
    sub_6048( l_U327[2], -408052231, 9 );
    CREATE_CAR( -408052231, -236.06010000, 1230.38100000, 22.57030000, ref l_U327[3], 1 );
    SET_CAR_HEADING( l_U327[3], 51.92140000 );
    sub_6048( l_U327[3], -408052231, 9 );
    CREATE_CAR( -408052231, -238.92240000, 1230.01700000, 22.55910000, ref l_U327[4], 1 );
    SET_CAR_HEADING( l_U327[4], 53.28860000 );
    sub_6048( l_U327[4], -408052231, 9 );
    return;
}

void sub_48702(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3, boolean bParam4)
{
    float fVar7;
    float fVar8;
    float Result;

    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if (IS_VEH_DRIVEABLE( sub_23904( iParam0 ) ))
        {
            fVar7 = sub_9438( iParam0->_fU0, sub_2856(), 1 );
            if (IS_CHAR_IN_ANY_CAR( sub_2856() ))
            {
                if (fVar7 > 200.00000000)
                {
                    if (bParam3)
                    {
                        SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, 0 );
                    }
                    l_U104 = 1;
                }
                else if (fVar7 < 6.00000000)
                {
                    l_U104 = 0;
                }
                if (fVar7 > 75.00000000)
                {
                    fVar7 = 75.00000000;
                    l_U104 = 1;
                }
                fVar7 /= 100.00000000;
                fVar7 += -1.00000000;
                fVar7 *= -1.00000000;
                fVar8 = (fVar7 * (uParam2 - uParam1)) + uParam1;
                Result = (fVar7 * (uParam2 - uParam1)) + uParam1;
                if (NOT bParam4)
                {
                    SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, Result );
                }
                return Result;;
            }
            else if (fVar7 < 200)
            {
                SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, uParam1 );
                return uParam1;
                if (fVar7 > 40.00000000)
                {
                    l_U104 = 1;
                }
            }
            else
            {
                SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, 0 );
                l_U104 = 1;
                return 0.00000000;
            }
        }
    }
    return iParam0->_fU28;
}

void sub_49126(int iParam0, unknown uParam1)
{
    iParam0->_fU28 = uParam1;
    return;
}

void sub_50782(int iParam0, unknown uParam1, unknown uParam2)
{
    (uParam1^) = iParam0->_fU0;
    (uParam2^) = iParam0->_fU4;
    iParam0->_fU36 = 0;
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
        if (IS_VEH_DRIVEABLE( sub_23904( iParam0 ) ))
        {
            SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, iParam0->_fU28 );
        }
        if (iParam0->_fU0 == g_U11197)
        {
            g_U11197 = nil;
        }
        if (iParam0->_fU0 == g_U11198)
        {
            g_U11198 = nil;
        }
        if ((iParam0->_fU0 != g_U11081[0]) AND (iParam0->_fU0 != g_U11081[1]))
        {
            g_U11114 = 1;
        }
        TASK_STAND_STILL( iParam0->_fU0, -2 );
    }
    return;
}

void sub_51620(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_51671( uParam0, uParam1, uParam2, "END", "END", "END", "END", "END", "END" );
    return;
}

void sub_51671(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
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

void sub_51967(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_51988( uParam0, ref l_U6._fU0, uParam1, uParam2, uParam3 );
}

void sub_51988(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;

    StrCopy( ref cVar7, uParam1, 16 );
    return sub_24632( uParam0, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

void sub_52199()
{
    if (NOT l_U244)
    {
        SET_CHAR_RELATIONSHIP_GROUP( l_U309, 24 );
        SET_COMBAT_DECISION_MAKER( l_U309, l_U459 );
        SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U309, 0 );
        SET_CHAR_NEVER_TARGETTED( l_U309, 0 );
        SET_CHAR_IS_TARGET_PRIORITY( l_U309, 1 );
        SET_CHAR_CANT_BE_DRAGGED_OUT( l_U309, 0 );
        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U309, 1 );
        SET_CHAR_SUFFERS_CRITICAL_HITS( l_U309, 1 );
        if (DOES_BLIP_EXIST( l_U345 ))
        {
            REMOVE_BLIP( l_U345 );
        }
        if (NOT (DOES_BLIP_EXIST( l_U346 )))
        {
            ADD_BLIP_FOR_CHAR( l_U309, ref l_U346 );
            SET_CHAR_AS_ENEMY( l_U309, 1 );
        }
        l_U244 = 1;
    }
    return;
}

void sub_53503()
{
    l_U361 = 7;
    for ( l_U358 = 0; l_U358 <= 6; l_U358++ )
    {
        if (IS_CHAR_INJURED( l_U310[l_U358] ))
        {
            l_U361--;
            if (DOES_BLIP_EXIST( l_U336[l_U358] ))
            {
                REMOVE_BLIP( l_U336[l_U358] );
            }
        }
    }
    if ((DOES_BLIP_EXIST( l_U346 )) AND (IS_CHAR_INJURED( l_U309 )))
    {
        REMOVE_BLIP( l_U346 );
    }
    return;
}

int sub_55503()
{
    if ((((((((IS_CHAR_INJURED( l_U310[0] )) AND (IS_CHAR_INJURED( l_U310[1] ))) AND (IS_CHAR_INJURED( l_U310[2] ))) AND (IS_CHAR_INJURED( l_U310[3] ))) AND (IS_CHAR_INJURED( l_U310[4] ))) AND (IS_CHAR_INJURED( l_U310[5] ))) AND (IS_CHAR_INJURED( l_U310[6] ))) AND (IS_CHAR_INJURED( l_U309 )))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_55674()
{
    sub_55688( l_U467 );
    g_U24 = 83;
    sub_58431( 1.00000000 );
    sub_1929();
    return;
}

void sub_55688(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_1225( uParam0 );
    sub_55708( uParam0 );
    sub_57453( uParam0 );
    return;
}

void sub_55708(unknown uParam0)
{
    switch (uParam0)
    {
        case 13:
        sub_55750();
        break;
        case 14:
        sub_56700();
        break;
        case 15:
        sub_56999();
        break;
        default: sub_1341( "Interactions_Pass: Unknown Random Interaction Character ID - tell Keith" );
    }
    sub_57268();
    sub_57341();
    return;
}

void sub_55750()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 13;
    uVar3 = sub_1225( iVar2 );
    sub_55786( ref g_U27892[uVar3]._fU8, 48, 0, 0 );
    g_U27892[uVar3]._fU24 = 0;
    switch (g_U27892[uVar3]._fU28)
    {
        case 1:
        sub_56426( 0 );
        break;
        default: sub_1341( "Interactions_Brian_Pass: Unknown Brian Sequence - tell Keith" );
    }
    return;
}

void sub_55786(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_55839( iParam0, uParam1, uParam2 );
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
        sub_55971( iParam0 + 0 );
    }
    return;
}

void sub_55839(int iParam0, int iParam1, int iParam2)
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
        sub_55971( iParam0 + 0 );
    }
    return;
}

void sub_55971(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_56002( iParam0->_fU4 )))
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

int sub_56002(unknown uParam0)
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

void sub_56426(unknown uParam0)
{
    sub_56437( uParam0 );
    return;
}

void sub_56437(unknown uParam0)
{
    ADD_SCORE( sub_1855(), uParam0 );
    sub_56462( uParam0 );
    return;
}

void sub_56462(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1341( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_56700()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 14;
    uVar3 = sub_1225( iVar2 );
    sub_55786( ref g_U27892[uVar3]._fU8, 48, 0, 0 );
    g_U27892[uVar3]._fU24 = 0;
    switch (g_U27892[uVar3]._fU28)
    {
        case 1:
        sub_56426( 500 );
        break;
        default: sub_1341( "Interactions_Dave_Pass: Unknown Dave Sequence - tell Keith" );
    }
    sub_56860( 10, 0 );
    return;
}

void sub_56860(unknown uParam0, int iParam1)
{
    if (iParam1 < g_U1551[uParam0]._fU316)
    {
        if (g_U1551[uParam0]._fU184[iParam1] == 0)
        {
            sub_55786( ref g_U1551[uParam0]._fU204[iParam1], g_U1551[uParam0]._fU400, 0, 0 );
            g_U1551[uParam0]._fU184[iParam1] = 1;
        }
    }
    return;
}

void sub_56999()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 15;
    uVar3 = sub_1225( iVar2 );
    sub_55786( ref g_U27892[uVar3]._fU8, 48, 0, 0 );
    g_U27892[uVar3]._fU24 = 0;
    switch (g_U27892[uVar3]._fU28)
    {
        case 1:
        sub_56426( 500 );
        break;
        case 2:
        sub_56426( 0 );
        break;
        default: sub_1341( "Interactions_Malc_Pass: Unknown Malc Sequence - tell Keith" );
    }
    return;
}

void sub_57268()
{
    g_U10974._fU0 = 1;
    g_U10974._fU4 = 0;
    g_U10974._fU8 = 0;
    g_U10974._fU12 = 0;
    g_U10974._fU16 = 0;
    g_U10974._fU20 = 0;
    g_U10974._fU28 = 6;
    return;
}

void sub_57341()
{
    sub_57350();
    StrCopy( ref g_U10987, "RIPASS", 16 );
    return;
}

void sub_57350()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10987, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U10987 );
    StrCopy( ref g_U10987, "", 16 );
    return;
}

void sub_57453(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_1225( uParam0 );
    g_U27892[uVar3]._fU28 = 99;
    g_U27892[uVar3]._fU4 = 0;
    sub_10420( ref g_U27892[uVar3]._fU8 );
    g_U27892[uVar3]._fU24 = 0;
    sub_57526( uParam0 );
    sub_58182( uVar3 );
    return;
}

void sub_57526(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (g_U0)
    {
        return;
    }
    iVar3 = 2;
    switch (uParam0)
    {
        case 14:
        iVar3 = 0;
        break;
        case 15:
        iVar3 = 1;
        break;
        case 13: return;
    }
    return;
    iVar4 = 0;
    if (NOT g_U38821[iVar3]._fU0)
    {
        iVar4 = ProtectedGet(g_U38821[iVar3]._fU8);
        if (iVar4 > 0)
        {
            sub_57653( 5, iVar4 );
            g_U38821[iVar3]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_57653(unknown uParam0, int iParam1)
{
    g_U26712[uParam0]._fU4 += iParam1;
    if (g_U26712[uParam0]._fU4 > g_U26712[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U26712[uParam0]._fU4 = g_U26712[uParam0]._fU0;
    }
    sub_57823( 0 );
    return;
}

void sub_57823(boolean bParam0)
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
        if (g_U26712[I]._fU4 == g_U26712[I]._fU0)
        {
            fVar4 = g_U26712[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U26712[I]._fU0 );
            fVar6 = TO_FLOAT( g_U26712[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U26712[I]._fU8;
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
    SET_FLOAT_STAT( 133, fVar3 );
    if (bVar7)
    {
        sub_58068();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_58068()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15728[5] = 1;
    return;
}

void sub_58182(unknown uParam0)
{
    g_U27892[uParam0]._fU36 = 0;
    g_U27892[uParam0]._fU40 = {0.00000000, 0.00000000, 0.00000000};
    g_U27892[uParam0]._fU52 = 1;
    StrCopy( ref g_U27892[uParam0]._fU60, "", 16 );
    sub_58267( uParam0 );
    return;
}

void sub_58267(unknown uParam0)
{
    sub_58278( uParam0 );
    sub_58357( uParam0 );
    return;
}

void sub_58278(unknown uParam0)
{
    if (DOES_BLIP_EXIST( g_U27892[uParam0]._fU56 ))
    {
        REMOVE_BLIP( g_U27892[uParam0]._fU56 );
    }
    g_U27892[uParam0]._fU56 = nil;
    return;
}

void sub_58357(unknown uParam0)
{
    g_U27892[uParam0]._fU76 = 0;
    return;
}

void sub_58431(unknown uParam0)
{
    int I;

    for ( I = 0; I < 2; I++ )
    {
        sub_58457( I, uParam0, 0 );
    }
    g_U11101 = 1;
    return;
}

void sub_58457(int iParam0, unknown uParam1, unknown uParam2)
{
    float fVar5;
    unknown uVar6;
    float fVar7;
    float fVar8;
    float fVar9;

    if ((NOT (IS_CHAR_INJURED( g_U11081[iParam0] ))) || (uParam2))
    {
        if (iParam0 == 0)
        {
            fVar5 = 20.00000000;
        }
        else
        {
            fVar5 = 20.00000000;
        }
        fVar7 = g_U11141[iParam0] + (((100.00000000 - fVar5) / 10.00000000) * uParam1);
        if (fVar7 > 100.00000000)
        {
            fVar7 = 100.00000000;
        }
        g_U11180[iParam0] = fVar7 - g_U11141[iParam0];
        g_U11141[iParam0] = fVar7;
        fVar8 = (g_U11141[iParam0] - fVar5) / (100.00000000 - fVar5);
        fVar9 = (-1.00000000 * ((fVar8 - 1.00000000) * (fVar8 - 1.00000000))) + 1.00000000;
        if (iParam0 == 0)
        {
            fVar5 = 350.00000000;
        }
        else
        {
            fVar5 = 475.00000000;
        }
        fVar7 = ((1000.00000000 - fVar5) * fVar8) + fVar5;
        if (fVar7 > 1000.00000000)
        {
            fVar7 = 1000.00000000;
        }
        g_U11165[iParam0] = fVar7 - g_U11144[iParam0];
        g_U11144[iParam0] = fVar7;
        if (iParam0 == 0)
        {
            fVar5 = 0.00000000;
        }
        else
        {
            fVar5 = 0.00000000;
        }
        fVar7 = ((13.00000000 - fVar5) * fVar8) + fVar5;
        if (fVar7 > 13.00000000)
        {
            fVar7 = 13.00000000;
        }
        g_U11168[iParam0] = fVar7 - g_U11147[iParam0];
        g_U11147[iParam0] = fVar7;
        if (iParam0 == 0)
        {
            fVar5 = 38.00000000;
        }
        else
        {
            fVar5 = 28.00000000;
        }
        fVar7 = ((100.00000000 - fVar5) * fVar9) + fVar5;
        if (fVar7 > 100.00000000)
        {
            fVar7 = 100.00000000;
        }
        g_U11171[iParam0] = fVar7 - g_U11150[iParam0];
        g_U11150[iParam0] = fVar7;
        if (iParam0 == 0)
        {
            fVar5 = 33.00000000;
        }
        else
        {
            fVar5 = 23.00000000;
        }
        fVar7 = ((100.00000000 - fVar5) * fVar9) + fVar5;
        if (fVar7 > 100.00000000)
        {
            fVar7 = 100.00000000;
        }
        g_U11174[iParam0] = fVar7 - g_U11153[iParam0];
        g_U11153[iParam0] = fVar7;
        if (iParam0 == 0)
        {
            fVar5 = 1.00000000;
        }
        else
        {
            fVar5 = 1.00000000;
        }
        fVar7 = ((5.00000000 - fVar5) * fVar8) + fVar5;
        if (fVar7 > 5.00000000)
        {
            fVar7 = 5.00000000;
        }
        g_U11177[iParam0] = fVar7 - g_U11156[iParam0];
        g_U11156[iParam0] = fVar7;
        if ((g_U11141[0] >= 100.00000000) AND (g_U11141[1] >= 100.00000000))
        {
            AWARD_ACHIEVEMENT( 55 );
        }
        SET_FLOAT_STAT( 168, g_U11141[0] );
        SET_FLOAT_STAT( 169, g_U11141[1] );
        sub_59227( iParam0 );
        g_U11129[iParam0] = 1;
        GET_GAME_TIMER( ref g_U11140 );
    }
    else
    {
        g_U11165[iParam0] = 0.00000000;
        g_U11168[iParam0] = 0.00000000;
        g_U11171[iParam0] = 0.00000000;
        g_U11174[iParam0] = 0.00000000;
        g_U11177[iParam0] = 0.00000000;
        g_U11129[iParam0] = 0;
    }
    return;
}

void sub_59227(unknown uParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_INJURED( g_U11081[uParam0] )))
    {
        SET_CHAR_MAX_HEALTH( g_U11081[uParam0], FLOOR( g_U11144[uParam0] ) );
        GET_CHAR_HEALTH( g_U11081[uParam0], ref iVar3 );
        iVar3 += FLOOR( g_U11165[uParam0] );
        SET_CHAR_HEALTH( g_U11081[uParam0], iVar3 );
        GIVE_WEAPON_TO_CHAR( g_U11081[uParam0], sub_59366( g_U11147[uParam0], uParam0 ), 30000, 0 );
        GIVE_WEAPON_TO_CHAR( g_U11081[uParam0], sub_60020( g_U11147[uParam0], uParam0 ), 30000, 0 );
        SET_CURRENT_CHAR_WEAPON( g_U11081[uParam0], sub_60020( g_U11147[uParam0], uParam0 ), 0 );
        SET_CHAR_ACCURACY( g_U11081[uParam0], FLOOR( g_U11150[uParam0] ) );
        SET_CHAR_SHOOT_RATE( g_U11081[uParam0], FLOOR( g_U11153[uParam0] ) );
        SET_CHAR_FIRE_DAMAGE_MULTIPLIER( g_U11081[uParam0], g_U11156[uParam0] );
    }
    return;
}

int sub_59366(float fParam0, unknown uParam1)
{
    switch (uParam1)
    {
        default:
          case 0:
        if (fParam0 < 1.00000000)
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 0 - returned PISTOL \n" );
            return 7;
        }
        else if (fParam0 < 3.00000000)
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 0 - returned EPISODIC_7 \n" );
            return 27;
        }
        else
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 0 - returned UZI \n" );
            return 12;
        }
        break;
        case 1:
        if (fParam0 < 3.00000000)
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 1 - returned PISTOL \n" );
            return 7;
        }
        else
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 1 - returned EPISODIC 6 \n" );
            return 26;
        }
        break;
    }
    PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - returned default value \n" );
    return 7;
}

int sub_60020(float fParam0, unknown uParam1)
{
    switch (uParam1)
    {
        default:
          case 0:
        if (fParam0 < 1.00000000)
        {
            return 7;
        }
        else if (fParam0 < 3.00000000)
        {
            return 27;
        }
        else if (fParam0 < 8.00000000)
        {
            return 12;
        }
        else if (fParam0 < 13.00000000)
        {
            return 14;
        }
        else
        {
            return 15;
        };;;;
        break;
        case 1:
        if (fParam0 < 1.00000000)
        {
            return 7;
        }
        else if (fParam0 < 3.00000000)
        {
            return 10;
        }
        else if (fParam0 < 8.00000000)
        {
            return 26;
        }
        else if (fParam0 < 13.00000000)
        {
            return 11;
        }
        else
        {
            return 22;
        };;;;
        break;
    }
    return 7;
}
