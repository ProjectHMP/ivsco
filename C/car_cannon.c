void main()
{
    unknown uVar2;
    float fVar3;
    boolean bVar4;
    unknown uVar5;
    vector vVar6;
    vector vVar9;

    fVar3 = 5.00000000;
    bVar4 = false;
    if (HAS_DEATHARREST_EXECUTED())
    {
        TERMINATE_THIS_SCRIPT();
    }
    uVar5 = CREATE_WIDGET_GROUP( "Virtual Stunt Car Cannon" );
    ADD_WIDGET_STRING( "Press numpad keys to fire cannon" );
    ADD_WIDGET_FLOAT_SLIDER( "", ref fVar3, 0.00000000, 25.00000000, 1.00000000 );
    ADD_WIDGET_TOGGLE( "Deactivate", ref bVar4 );
    END_WIDGET_GROUP();
    while (NOT bVar4)
    {
        WAIT( 0 );
        if (IS_CHAR_IN_ANY_CAR( sub_189() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_189(), ref uVar2 );
            if (NOT (IS_CAR_DEAD( uVar2 )))
            {
                vVar6 = {0.00000000, 0.00000000, fVar3};
                vVar9 = {0.00000000, 0.00000000, 0.00000000};
                if (IS_KEYBOARD_KEY_JUST_PRESSED( 76 ))
                {
                    APPLY_FORCE_TO_CAR( uVar2, 1, vVar6, vVar9, 0, 1, 1, 1 );
                }
                if (IS_KEYBOARD_KEY_JUST_PRESSED( 75 ))
                {
                    vVar9 = {1.50000000, 0.00000000, 0.00000000};
                    APPLY_FORCE_TO_CAR( uVar2, 1, vVar6, vVar9, 0, 1, 1, 1 );
                }
                if (IS_KEYBOARD_KEY_JUST_PRESSED( 77 ))
                {
                    vVar9 = {-1.50000000, 0.00000000, 0.00000000};
                    APPLY_FORCE_TO_CAR( uVar2, 1, vVar6, vVar9, 0, 1, 1, 1 );
                }
                if (IS_KEYBOARD_KEY_JUST_PRESSED( 72 ))
                {
                    vVar9 = {0.00000000, 1.50000000, 0.00000000};
                    APPLY_FORCE_TO_CAR( uVar2, 1, vVar6, vVar9, 0, 1, 1, 1 );
                }
                if (IS_KEYBOARD_KEY_JUST_PRESSED( 80 ))
                {
                    vVar9 = {0.00000000, -1.50000000, 0.00000000};
                    APPLY_FORCE_TO_CAR( uVar2, 1, vVar6, vVar9, 0, 1, 1, 1 );
                }
                if (IS_KEYBOARD_KEY_JUST_PRESSED( 81 ))
                {
                    vVar9 = {-1.50000000, 1.50000000, 0.00000000};
                    APPLY_FORCE_TO_CAR( uVar2, 1, vVar6, vVar9, 0, 1, 1, 1 );
                }
                if (IS_KEYBOARD_KEY_JUST_PRESSED( 79 ))
                {
                    vVar9 = {1.50000000, 1.50000000, 0.00000000};
                    APPLY_FORCE_TO_CAR( uVar2, 1, vVar6, vVar9, 0, 1, 1, 1 );
                }
                if (IS_KEYBOARD_KEY_JUST_PRESSED( 73 ))
                {
                    vVar9 = {-1.50000000, -1.50000000, 0.00000000};
                    APPLY_FORCE_TO_CAR( uVar2, 1, vVar6, vVar9, 0, 1, 1, 1 );
                }
                if (IS_KEYBOARD_KEY_JUST_PRESSED( 71 ))
                {
                    vVar9 = {1.50000000, -1.50000000, 0.00000000};
                    APPLY_FORCE_TO_CAR( uVar2, 1, vVar6, vVar9, 0, 1, 1, 1 );
                }
                if (IS_KEYBOARD_KEY_JUST_PRESSED( 82 ))
                {
                    vVar9 = {0.00000000, 0.00000000, 0.00000000};
                    vVar6 = {0.00000000, fVar3, 0.00000000};
                    APPLY_FORCE_TO_CAR( uVar2, 1, vVar6, vVar9, 0, 1, 1, 1 );
                }
                if (IS_KEYBOARD_KEY_JUST_PRESSED( 203 ))
                {
                    vVar9 = {0.00000000, -1.50000000, 0.00000000};
                    vVar6 = {fVar3 / 2.00000000, 0.00000000, 0.00000000};
                    APPLY_FORCE_TO_CAR( uVar2, 1, vVar6, vVar9, 0, 1, 1, 1 );
                    vVar9 = {0.00000000, 1.50000000, 0.00000000};
                    vVar6 = {-fVar3 / 2.00000000, 0.00000000, 0.00000000};
                    APPLY_FORCE_TO_CAR( uVar2, 1, vVar6, vVar9, 0, 1, 1, 1 );
                }
                if (IS_KEYBOARD_KEY_JUST_PRESSED( 205 ))
                {
                    vVar9 = {0.00000000, -1.50000000, 0.00000000};
                    vVar6 = {-fVar3 / 2.00000000, 0.00000000, 0.00000000};
                    APPLY_FORCE_TO_CAR( uVar2, 1, vVar6, vVar9, 0, 1, 1, 1 );
                    vVar9 = {0.00000000, 1.50000000, 0.00000000};
                    vVar6 = {fVar3 / 2.00000000, 0.00000000, 0.00000000};
                    APPLY_FORCE_TO_CAR( uVar2, 1, vVar6, vVar9, 0, 1, 1, 1 );
                }
            }
        }
    }
    DELETE_WIDGET_GROUP( uVar5 );
    return;
}

void sub_189()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}
