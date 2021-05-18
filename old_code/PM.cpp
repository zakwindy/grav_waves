#include "PM.h"

PM::PM(const Body& body1, const Body& body2, const double& userG): G(userG), Equations(body1, body2)
{
    qdot0[0][0]=0.25*G*(o28*(o48+o22*o28*o51)+o43*(o48+o37*o43*o57))+o7*pax-0.5*G*(o15*o20*o28*o9+o15*o20*o43*o9+o20*o28*o34*o7*pax+o20*o34*o43*o7*pax)-0.25*G*(-(o100*o107*o138*o22*o28*o43*o63*o66)-o102*o142*o146*o194*o28*pax-2.*o100*o101*o43*o63*o72*(o101*o22*o28*o66*o7-o102*o69*pax)+o142*o146*o28*o7*(2.*(o120+o162-2.*o151*o31*o37*o43+2.*o37*o43*o57*o75-2.*o140*pax+2.*o151*o57*pbx)+o143*o63*(o128+o162-6.*o151*o31*o37*o43+8.*o37*o43*o57*o75-6.*o140*pax+8.*o151*o57*pbx)+2.*o32*(2.*o148*o151*o37*o43-2.*o31*o37*o43*o57*o75-2.*o151*o31*o57*pbx+4.*o140*o75*pbx-2.*o31*o75*pbx))+o101*o107*o43*o63*(o101*o22*o28*o66*o7*o90-4.*o11*o83*pax-o102*o69*o90*pax+2.*(o120+o125+2.*o22*o28*o51*o75+2.*o22*o28*o66*o94-2.*o81*pax+2.*o51*o66*pbx)+o69*o7*(o125+o128-6.*o22*o28*o31*o66+8.*o22*o28*o51*o75-6.*o81*pax+8.*o51*o66*pbx)+2.*o13*(-2.*o10*o22*o28*o51*o75+4.*o22*o28*o66*o76-4.*o51*o66*o75*pax-2.*o76*pax+4.*o10*o81*pax-2.*o10*o51*o66*pbx-2.*o10*o75*pbx+4.*o67*o75*pbx)));
    
    qdot0[0][1]=0.25*G*(o28*(o209+o25*o28*o51)+o43*(o209+o40*o43*o57))+o7*pay-0.5*G*(o20*o202*o28*o9+o20*o202*o43*o9+o20*o28*o34*o7*pay+o20*o34*o43*o7*pay)-0.25*G*(-(o100*o107*o138*o25*o28*o43*o63*o66)-o102*o142*o146*o194*o28*pay-2.*o100*o101*o43*o63*o72*(o101*o25*o28*o66*o7-o102*o69*pay)+o142*o146*o28*o7*(2.*(o234+o264-2.*o151*o31*o40*o43+2.*o40*o43*o57*o75-2.*o140*pay+2.*o151*o57*pby)+o143*o63*(o242+o264-6.*o151*o31*o40*o43+8.*o40*o43*o57*o75-6.*o140*pay+8.*o151*o57*pby)+2.*o32*(2.*o148*o151*o40*o43-2.*o31*o40*o43*o57*o75-2.*o151*o31*o57*pby+4.*o140*o75*pby-2.*o31*o75*pby))+o101*o107*o43*o63*(o101*o25*o28*o66*o7*o90-4.*o11*o83*pay-o102*o69*o90*pay+2.*(o234+o239+2.*o25*o28*o51*o75+2.*o25*o28*o66*o94-2.*o81*pay+2.*o51*o66*pby)+o69*o7*(o239+o242-6.*o25*o28*o31*o66+8.*o25*o28*o51*o75-6.*o81*pay+8.*o51*o66*pby)+2.*o13*(-2.*o10*o25*o28*o51*o75+4.*o25*o28*o66*o76-4.*o51*o66*o75*pay-2.*o76*pay+4.*o10*o81*pay-2.*o10*o51*o66*pby-2.*o10*o75*pby+4.*o67*o75*pby)));
    
    qdot0[1][0]=0.25*G*(o43*(o290+o151*o37*o43)+o28*(o290+o22*o28*o66))+o63*pbx-0.5*G*(o20*o28*o283*o9+o20*o283*o43*o9+o28*o34*o63*o9*pbx+o34*o43*o63*o9*pbx)-0.25*G*(-(o146*o194*o28*o358*o37*o43*o57*o7)-o100*o101*o107*o299*o43*pbx-2.*o142*o194*o28*o356*o7*(o142*o37*o43*o57*o63-o143*o299*pbx)+o101*o107*o43*o63*(2.*o13*(-2.*o10*o22*o28*o66*o75+2.*o22*o28*o51*o80-2.*o10*o51*o66*pax-2.*o10*o75*pax+4.*o67*o75*pax)+o69*o7*(o308+o313-6.*o10*o22*o28*o51+8.*o22*o28*o66*o75+8.*o51*o66*pax-6.*o67*pbx)+2.*(o313+o316-2.*o10*o22*o28*o51+2.*o22*o28*o66*o75+2.*o51*o66*pax-2.*o67*pbx))+o142*o146*o28*o7*(o142*o192*o37*o43*o57*o63-4.*o178*o280*pbx-o143*o192*o299*pbx+o143*o63*(o308+o329-6.*o10*o37*o43*o57+8.*o151*o37*o43*o75+8.*o151*o57*pax-6.*o174*pbx)+2.*(o316+o329+2.*o184*o37*o43*o57+2.*o151*o37*o43*o75+2.*o151*o57*pax-2.*o174*pbx)+2.*o32*(-2.*o151*o31*o37*o43*o75+4.*o37*o43*o57*o76-2.*o151*o31*o57*pax+4.*o140*o75*pax-2.*o31*o75*pax+4.*o174*o31*pbx-4.*o151*o57*o75*pbx-2.*o76*pbx)));
    
    qdot0[1][1]=0.25*G*(o43*(o373+o151*o40*o43)+o28*(o373+o25*o28*o66))+o63*pby-0.5*G*(o20*o28*o366*o9+o20*o366*o43*o9+o28*o34*o63*o9*pby+o34*o43*o63*o9*pby)-0.25*G*(-(o146*o194*o28*o358*o40*o43*o57*o7)-o100*o101*o107*o299*o43*pby-2.*o142*o194*o28*o356*o7*(o142*o40*o43*o57*o63-o143*o299*pby)+o101*o107*o43*o63*(2.*o13*(-2.*o10*o25*o28*o66*o75+2.*o25*o28*o51*o80-2.*o10*o51*o66*pay-2.*o10*o75*pay+4.*o67*o75*pay)+o69*o7*(o390+o395-6.*o10*o25*o28*o51+8.*o25*o28*o66*o75+8.*o51*o66*pay-6.*o67*pby)+2.*(o395+o398-2.*o10*o25*o28*o51+2.*o25*o28*o66*o75+2.*o51*o66*pay-2.*o67*pby))+o142*o146*o28*o7*(o142*o192*o40*o43*o57*o63-4.*o178*o280*pby-o143*o192*o299*pby+o143*o63*(o390+o411-6.*o10*o40*o43*o57+8.*o151*o40*o43*o75+8.*o151*o57*pay-6.*o174*pby)+2.*(o398+o411+2.*o184*o40*o43*o57+2.*o151*o40*o43*o75+2.*o151*o57*pay-2.*o174*pby)+2.*o32*(-2.*o151*o31*o40*o43*o75+4.*o40*o43*o57*o76-2.*o151*o31*o57*pay+4.*o140*o75*pay-2.*o31*o75*pay+4.*o174*o31*pby-4.*o151*o57*o75*pby-2.*o76*pby)));
    
    /***********************/
    
    pdot0[0][0]=0.5*G*(-(z15*z22*z24*z30*z9)+z15*z22*z34*z40*z9)-0.25*G*(-(z24*z30*z56)+z48*(z51*z61+z54*z66)+z70*(z74*z77+z82*z85)+z34*z40*z90)+0.25*G*(z101*z126*z127*z34*z40*z94-z101*z126*z152*z51*z66*z70*z94-z159*z163*z211*z24*z30*z95-z163*z211*z213*z48*z74*z85*z95-2.*z126*z154*z155*z51*z66*z70*z94*z95-2.*z197*z198*z211*z48*z74*z85*z94*z95+z159*z163*z48*(2.*(z179+z180+2.*z46*z74*z77-2.*z19*z77*z82+2.*z176*z74*z85+2.*z46*z82*z85)+2.*z20*(-2.*z19*z46*z74*z77+2.*z164*z77*z82+4.*z102*z74*z85-2.*z19*z46*z82*z85)+z159*z193*z74*z85*z94+z160*(z179+z180+8.*z46*z74*z77-6.*z19*z77*z82-6.*z16*z74*z85+8.*z46*z82*z85)*z94)*z95+z101*z127*z70*z94*(2.*(z139+z140+2.*z46*z51*z61-2.*z16*z54*z61+2.*z120*z51*z66+2.*z46*z54*z66)+2.*z17*(-2.*z16*z46*z51*z61+2.*z106*z54*z61+4.*z102*z51*z66-2.*z16*z46*z54*z66)+z116*z127*z51*z66*z95+(z139+z140+8.*z46*z51*z61-6.*z16*z54*z61-6.*z19*z51*z66+8.*z46*z54*z66)*z95*z98));
    
    pdot0[0][1]=0.5*G*(-(z15*z22*z27*z30*z9)+z15*z22*z37*z40*z9)-0.25*G*(z48*(z231*z51+z226*z54)-z27*z30*z56+z70*(z239*z77+z244*z85)+z37*z40*z90)+0.25*G*(z101*z126*z127*z37*z40*z94-z101*z126*z152*z226*z51*z70*z94-z159*z163*z211*z27*z30*z95-z163*z211*z213*z239*z48*z85*z95-2.*z126*z154*z155*z226*z51*z70*z94*z95-2.*z197*z198*z211*z239*z48*z85*z94*z95+z159*z163*z48*(2.*(z287+z288-2.*z19*z244*z77+2.*z239*z46*z77+2.*z176*z239*z85+2.*z244*z46*z85)+2.*z20*(2.*z164*z244*z77-2.*z19*z239*z46*z77+4.*z102*z239*z85-2.*z19*z244*z46*z85)+z159*z193*z239*z85*z94+z160*(z287+z288-6.*z19*z244*z77+8.*z239*z46*z77-6.*z16*z239*z85+8.*z244*z46*z85)*z94)*z95+z101*z127*z70*z94*(2.*(z260+z263+2.*z120*z226*z51+2.*z231*z46*z51-2.*z16*z231*z54+2.*z226*z46*z54)+2.*z17*(4.*z102*z226*z51-2.*z16*z231*z46*z51+2.*z106*z231*z54-2.*z16*z226*z46*z54)+z116*z127*z226*z51*z95+(z260+z263-6.*z19*z226*z51+8.*z231*z46*z51-6.*z16*z231*z54+8.*z226*z46*z54)*z95*z98));
    
    pdot0[1][0]=0.5*G*(z15*z22*z24*z30*z9-z15*z22*z34*z40*z9)-0.25*G*(z48*(z314*z51+z319*z54)+z24*z30*z56+z70*(z326*z77+z331*z85)-z34*z40*z90)+0.25*G*(-(z101*z126*z127*z34*z40*z94)-z101*z126*z152*z319*z51*z70*z94+z159*z163*z211*z24*z30*z95-z163*z211*z213*z326*z48*z85*z95-2.*z126*z154*z155*z319*z51*z70*z94*z95-2.*z197*z198*z211*z326*z48*z85*z94*z95+z159*z163*z48*(2.*(z374+z375-2.*z19*z331*z77+2.*z326*z46*z77+2.*z176*z326*z85+2.*z331*z46*z85)+2.*z20*(2.*z164*z331*z77-2.*z19*z326*z46*z77+4.*z102*z326*z85-2.*z19*z331*z46*z85)+z159*z193*z326*z85*z94+z160*(z374+z375-6.*z19*z331*z77+8.*z326*z46*z77-6.*z16*z326*z85+8.*z331*z46*z85)*z94)*z95+z101*z127*z70*z94*(2.*(z349+z350+2.*z120*z319*z51+2.*z314*z46*z51-2.*z16*z314*z54+2.*z319*z46*z54)+2.*z17*(4.*z102*z319*z51-2.*z16*z314*z46*z51+2.*z106*z314*z54-2.*z16*z319*z46*z54)+z116*z127*z319*z51*z95+(z349+z350-6.*z19*z319*z51+8.*z314*z46*z51-6.*z16*z314*z54+8.*z319*z46*z54)*z95*z98));
    
    pdot0[1][1]=0.5*G*(z15*z22*z27*z30*z9-z15*z22*z37*z40*z9)-0.25*G*(z48*(z405*z51+z400*z54)+z27*z30*z56+z70*(z413*z77+z418*z85)-z37*z40*z90)+0.25*G*(-(z101*z126*z127*z37*z40*z94)-z101*z126*z152*z400*z51*z70*z94+z159*z163*z211*z27*z30*z95-z163*z211*z213*z413*z48*z85*z95-2.*z126*z154*z155*z400*z51*z70*z94*z95-2.*z197*z198*z211*z413*z48*z85*z94*z95+z159*z163*z48*(2.*(z461+z462-2.*z19*z418*z77+2.*z413*z46*z77+2.*z176*z413*z85+2.*z418*z46*z85)+2.*z20*(2.*z164*z418*z77-2.*z19*z413*z46*z77+4.*z102*z413*z85-2.*z19*z418*z46*z85)+z159*z193*z413*z85*z94+z160*(z461+z462-6.*z19*z418*z77+8.*z413*z46*z77-6.*z16*z413*z85+8.*z418*z46*z85)*z94)*z95+z101*z127*z70*z94*(2.*(z434+z437+2.*z120*z400*z51+2.*z405*z46*z51-2.*z16*z405*z54+2.*z400*z46*z54)+2.*z17*(4.*z102*z400*z51-2.*z16*z405*z46*z51+2.*z106*z405*z54-2.*z16*z400*z46*z54)+z116*z127*z400*z51*z95+(z434+z437-6.*z19*z400*z51+8.*z405*z46*z51-6.*z16*z405*z54+8.*z400*z46*z54)*z95*z98));
}


