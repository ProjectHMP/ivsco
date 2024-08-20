void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    while (true)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            switch (l_U2)
            {
                case 0:
                if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "stubbs4" )) < 1)
                {
                    l_U2 = 1;
                }
                break;
                case 1:
                sub_130();
                break;
                case 2: break;
            }
        }
        else
        {
            sub_699();
        }
    }
    return;
}

void sub_130()
{
    if (sub_139())
    {
        if (IS_PLAYER_PLAYING( sub_501() ))
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_501(), 2 )))
            {
                sub_563();
                ALTER_WANTED_LEVEL_NO_DROP( sub_501(), 3 );
                APPLY_WANTED_LEVEL_CHANGE_NOW( sub_501() );
            }
        }
    }
    return;
}

int sub_139()
{
    if (NOT (IS_CHAR_INJURED( sub_148() )))
    {
        if (((((LOCATE_CHAR_ANY_MEANS_3D( sub_148(), -1085.04300000, -411.00780000, 3.00640000, 55.60000000, 88.20000000, 22.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_148(), -1001.04300000, -390.35800000, 3.00640000, 60.60000000, 67.50000000, 22.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_148(), -958.04300000, -403.35800000, 3.00640000, 60.60000000, 54.50000000, 22.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_148(), -1121.04300000, -468.35800000, 3.00640000, 61.00000000, 31.00000000, 22.00000000, 0 ))) AND (NOT ((LOCATE_CHAR_ANY_MEANS_3D( sub_148(), -1140.50400000, -391.49530000, 3.15350000, 0.40000000, 2.00000000, 2.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_148(), -1140.50400000, -357.49530000, 3.15350000, 0.40000000, 2.00000000, 2.00000000, 0 )))))
        {
            return 1;
        }
    }
    return 0;
}

void sub_148()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_501()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_563()
{
    if (g_U10465 == -1)
    {
        g_U10465 = GET_SOUND_ID();
        PLAY_SOUND_FROM_POSITION( g_U10465, "E1_PRISON_SIREN", -1126.30600000, -375.21860000, 17.13520000 );
    }
    return;
}

void sub_699()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambPrisonWanted" )) == 1)
    {
        ;
    }
    g_U10465 = -1;
    TERMINATE_THIS_SCRIPT();
    return;
}
