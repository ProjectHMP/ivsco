void main()
{
    l_U0 = 4;
    l_U1 = 5000;
    l_U2 = 0;
    l_U4 = 0;
    l_U5 = 0;
    l_U28 = 0;
    l_U29 = 1;
    l_U30 = 0;
    l_U31 = 0;
    sub_47();
    while (sub_216())
    {
        WAIT( 0 );
        sub_306();
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_47()
{
    l_U32[0] = {182.14080000, 416.38330000, 31.41900000};
    l_U63[0] = {44.09120000, 111.87730000, 17.79490000};
    l_U32[1] = {229.07370000, 341.67610000, 31.41900000};
    l_U63[1] = {7.74960000, 44.09520000, 17.79500000};
    l_U32[2] = {215.76500000, 302.60250000, 31.41900000};
    l_U63[2] = {6.57500000, 3.15000000, 17.79500000};
    l_U2 = 3;
    l_U5 = 0;
    return;
}

int sub_216()
{
    if (IS_PLAYER_PLAYING( sub_225() ))
    {
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            return 1;
        }
    }
    return 0;
}

void sub_225()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_306()
{
    boolean bVar2;
    int iVar3;

    bVar2 = false;
    if (l_U4 >= l_U2)
    {
        l_U4 = 0;
    }
    if (IS_PLAYER_PLAYING( sub_225() ))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_351(), l_U32[l_U4]._fU0, l_U32[l_U4]._fU4, l_U32[l_U4]._fU8, l_U63[l_U4]._fU0, l_U63[l_U4]._fU4, l_U63[l_U4]._fU8, 0 ))
        {
            l_U5 = 0;
            bVar2 = true;
        }
        else
        {
            l_U5++;
        }
        if (bVar2)
        {
            if (NOT l_U30)
            {
                GET_GAME_TIMER( ref l_U3 );
                l_U30 = 1;
            }
            else
            {
                GET_GAME_TIMER( ref iVar3 );
                if ((iVar3 - l_U3) >= l_U1)
                {
                    if (IS_CHAR_IN_ANY_HELI( sub_351() ))
                    {
                        ALTER_WANTED_LEVEL_NO_DROP( sub_225(), 2 );
                    }
                    else
                    {
                        ALTER_WANTED_LEVEL_NO_DROP( sub_225(), l_U0 );
                    }
                    APPLY_WANTED_LEVEL_CHANGE_NOW( sub_225() );
                }
            }
        }
        else if (l_U30)
        {
            if (l_U5 >= l_U2)
            {
                l_U30 = 0;
            }
        }
        l_U4++;
    }
    return;
}

void sub_351()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}
