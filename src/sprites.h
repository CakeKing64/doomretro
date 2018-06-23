/*
========================================================================

                           D O O M  R e t r o
         The classic, refined DOOM source port. For Windows PC.

========================================================================

  Copyright © 1993-2012 id Software LLC, a ZeniMax Media company.
  Copyright © 2013-2018 Brad Harding.

  DOOM Retro is a fork of Chocolate DOOM. For a list of credits, see
  <https://github.com/bradharding/doomretro/wiki/CREDITS>.

  This file is part of DOOM Retro.

  DOOM Retro is free software: you can redistribute it and/or modify it
  under the terms of the GNU General Public License as published by the
  Free Software Foundation, either version 3 of the License, or (at your
  option) any later version.

  DOOM Retro is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
  General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with DOOM Retro. If not, see <https://www.gnu.org/licenses/>.

  DOOM is a registered trademark of id Software LLC, a ZeniMax Media
  company, in the US and/or other countries and is used without
  permission. All other trademarks are the property of their respective
  holders. DOOM Retro is in no way affiliated with nor endorsed by
  id Software.

========================================================================
*/

#if !defined(__SPRITES_H__)
#define __SPRITES_H__

typedef enum
{
    // Sprites 0 to 137
    SPR_TROO, SPR_SHTG, SPR_PUNG, SPR_PISG, SPR_PISF, SPR_SHTF, SPR_SHT2, SPR_CHGG, SPR_CHGF, SPR_MISG,
    SPR_MISF, SPR_SAWG, SPR_PLSG, SPR_PLSF, SPR_BFGG, SPR_BFGF, SPR_BLUD, SPR_PUFF, SPR_BAL1, SPR_BAL2,
    SPR_PLSS, SPR_PLSE, SPR_MISL, SPR_BFS1, SPR_BFE1, SPR_BFE2, SPR_TFOG, SPR_IFOG, SPR_PLAY, SPR_POSS,
    SPR_SPOS, SPR_VILE, SPR_FIRE, SPR_FATB, SPR_FBXP, SPR_SKEL, SPR_MANF, SPR_FATT, SPR_CPOS, SPR_SARG,
    SPR_HEAD, SPR_BAL7, SPR_BOSS, SPR_BOS2, SPR_SKUL, SPR_SPID, SPR_BSPI, SPR_APLS, SPR_APBX, SPR_CYBR,
    SPR_PAIN, SPR_SSWV, SPR_KEEN, SPR_BBRN, SPR_BOSF, SPR_ARM1, SPR_ARM2, SPR_BAR1, SPR_BEXP, SPR_FCAN,
    SPR_BON1, SPR_BON2, SPR_BKEY, SPR_RKEY, SPR_YKEY, SPR_BSKU, SPR_RSKU, SPR_YSKU, SPR_STIM, SPR_MEDI,
    SPR_SOUL, SPR_PINV, SPR_PSTR, SPR_PINS, SPR_MEGA, SPR_SUIT, SPR_PMAP, SPR_PVIS, SPR_CLIP, SPR_AMMO,
    SPR_ROCK, SPR_BROK, SPR_CELL, SPR_CELP, SPR_SHEL, SPR_SBOX, SPR_BPAK, SPR_BFUG, SPR_MGUN, SPR_CSAW,
    SPR_LAUN, SPR_PLAS, SPR_SHOT, SPR_SGN2, SPR_COLU, SPR_SMT2, SPR_GOR1, SPR_POL2, SPR_POL5, SPR_POL4,
    SPR_POL3, SPR_POL1, SPR_POL6, SPR_GOR2, SPR_GOR3, SPR_GOR4, SPR_GOR5, SPR_SMIT, SPR_COL1, SPR_COL2,
    SPR_COL3, SPR_COL4, SPR_CAND, SPR_CBRA, SPR_COL6, SPR_TRE1, SPR_TRE2, SPR_ELEC, SPR_CEYE, SPR_FSKU,
    SPR_COL5, SPR_TBLU, SPR_TGRN, SPR_TRED, SPR_SMBT, SPR_SMGT, SPR_SMRT, SPR_HDB1, SPR_HDB2, SPR_HDB3,
    SPR_HDB4, SPR_HDB5, SPR_HDB6, SPR_POB1, SPR_POB2, SPR_BRS1, SPR_TLMP, SPR_TLP2,

    // Sprites 138 to 143
    SPR_TNT1,   // add invisible sprite phares 3/8/98
    SPR_DOGS,   // killough 7/19/98: Marine's best friend :)
    SPR_PLS1,   // killough 7/19/98: first of two plasma fireballs in the beta
    SPR_PLS2,   // killough 7/19/98: second of two plasma fireballs in the beta
    SPR_BON3,   // killough 7/11/98: evil sceptre in beta version
    SPR_BON4,   // killough 7/11/98: unholy bible in beta version

    // Sprite 144
    SPR_BLD2,   // [BH] blood splats

    // [BH] Sprites 145 to 244 (100 extra sprite names to use in DeHackEd patches)
    SPR_SP00, SPR_SP01, SPR_SP02, SPR_SP03, SPR_SP04, SPR_SP05, SPR_SP06, SPR_SP07, SPR_SP08, SPR_SP09,
    SPR_SP10, SPR_SP11, SPR_SP12, SPR_SP13, SPR_SP14, SPR_SP15, SPR_SP16, SPR_SP17, SPR_SP18, SPR_SP19,
    SPR_SP20, SPR_SP21, SPR_SP22, SPR_SP23, SPR_SP24, SPR_SP25, SPR_SP26, SPR_SP27, SPR_SP28, SPR_SP29,
    SPR_SP30, SPR_SP31, SPR_SP32, SPR_SP33, SPR_SP34, SPR_SP35, SPR_SP36, SPR_SP37, SPR_SP38, SPR_SP39,
    SPR_SP40, SPR_SP41, SPR_SP42, SPR_SP43, SPR_SP44, SPR_SP45, SPR_SP46, SPR_SP47, SPR_SP48, SPR_SP49,
    SPR_SP50, SPR_SP51, SPR_SP52, SPR_SP53, SPR_SP54, SPR_SP55, SPR_SP56, SPR_SP57, SPR_SP58, SPR_SP59,
    SPR_SP60, SPR_SP61, SPR_SP62, SPR_SP63, SPR_SP64, SPR_SP65, SPR_SP66, SPR_SP67, SPR_SP68, SPR_SP69,
    SPR_SP70, SPR_SP71, SPR_SP72, SPR_SP73, SPR_SP74, SPR_SP75, SPR_SP76, SPR_SP77, SPR_SP78, SPR_SP79,
    SPR_SP80, SPR_SP81, SPR_SP82, SPR_SP83, SPR_SP84, SPR_SP85, SPR_SP86, SPR_SP87, SPR_SP88, SPR_SP89,
    SPR_SP90, SPR_SP91, SPR_SP92, SPR_SP93, SPR_SP94, SPR_SP95, SPR_SP96, SPR_SP97, SPR_SP98, SPR_SP99,

    NUMSPRITES
} spritenum_t;

enum
{
    HSPR_IMPX, HSPR_ACLO, HSPR_PTN1, HSPR_SHLD, HSPR_SHD2, HSPR_BAGH, HSPR_SPMP, HSPR_INVS, HSPR_PTN2, HSPR_SOAR,
    HSPR_INVU, HSPR_PWBK, HSPR_EGGC, HSPR_EGGM, HSPR_FX01, HSPR_SPHL, HSPR_TRCH, HSPR_FBMB, HSPR_XPL1, HSPR_ATLP,
    HSPR_PPOD, HSPR_AMG1, HSPR_SPSH, HSPR_LVAS, HSPR_SLDG, HSPR_SKH1, HSPR_SKH2, HSPR_SKH3, HSPR_SKH4, HSPR_CHDL,
    HSPR_SRTC, HSPR_SMPL, HSPR_STGS, HSPR_STGL, HSPR_STCS, HSPR_STCL, HSPR_KFR1, HSPR_BARL, HSPR_BRPL, HSPR_MOS1,
    HSPR_MOS2, HSPR_WTRH, HSPR_HCOR, HSPR_KGZ1, HSPR_KGZB, HSPR_KGZG, HSPR_KGZY, HSPR_VLCO, HSPR_VFBL, HSPR_VTFB,
    HSPR_SFFI, HSPR_TGLT, HSPR_TELE, HSPR_STFF, HSPR_PUF3, HSPR_PUF4, HSPR_BEAK, HSPR_WGNT, HSPR_GAUN, HSPR_PUF1,
    HSPR_WBLS, HSPR_BLSR, HSPR_FX18, HSPR_FX17, HSPR_WMCE, HSPR_MACE, HSPR_FX02, HSPR_WSKL, HSPR_HROD, HSPR_FX00,
    HSPR_FX20, HSPR_FX21, HSPR_FX22, HSPR_FX23, HSPR_GWND, HSPR_PUF2, HSPR_WPHX, HSPR_PHNX, HSPR_FX04, HSPR_FX08,
    HSPR_FX09, HSPR_WBOW, HSPR_CRBW, HSPR_FX03, HSPR_BLOD, HSPR_PLAY, HSPR_FDTH, HSPR_BSKL, HSPR_CHKN, HSPR_MUMM,
    HSPR_FX15, HSPR_BEAS, HSPR_FRB1, HSPR_SNKE, HSPR_SNFX, HSPR_HEAD, HSPR_FX05, HSPR_FX06, HSPR_FX07, HSPR_CLNK,
    HSPR_WZRD, HSPR_FX11, HSPR_FX10, HSPR_KNIG, HSPR_SPAX, HSPR_RAXE, HSPR_SRCR, HSPR_FX14, HSPR_SOR2, HSPR_SDTH,
    HSPR_FX16, HSPR_MNTR, HSPR_FX12, HSPR_FX13, HSPR_AKYY, HSPR_BKYY, HSPR_CKYY, HSPR_AMG2, HSPR_AMM1, HSPR_AMM2,
    HSPR_AMC1, HSPR_AMC2, HSPR_AMS1, HSPR_AMS2, HSPR_AMP1, HSPR_AMP2, HSPR_AMB1, HSPR_AMB2,

    HSPR_BLD2,

    HSPR_SP00, HSPR_SP01, HSPR_SP02, HSPR_SP03, HSPR_SP04, HSPR_SP05, HSPR_SP06, HSPR_SP07, HSPR_SP08, HSPR_SP09,
    HSPR_SP10, HSPR_SP11, HSPR_SP12, HSPR_SP13, HSPR_SP14, HSPR_SP15, HSPR_SP16, HSPR_SP17, HSPR_SP18, HSPR_SP19,
    HSPR_SP20, HSPR_SP21, HSPR_SP22, HSPR_SP23, HSPR_SP24, HSPR_SP25, HSPR_SP26, HSPR_SP27, HSPR_SP28, HSPR_SP29,
    HSPR_SP30, HSPR_SP31, HSPR_SP32, HSPR_SP33, HSPR_SP34, HSPR_SP35, HSPR_SP36, HSPR_SP37, HSPR_SP38, HSPR_SP39,
    HSPR_SP40, HSPR_SP41, HSPR_SP42, HSPR_SP43, HSPR_SP44, HSPR_SP45, HSPR_SP46, HSPR_SP47, HSPR_SP48, HSPR_SP49,
    HSPR_SP50, HSPR_SP51, HSPR_SP52, HSPR_SP53, HSPR_SP54, HSPR_SP55, HSPR_SP56, HSPR_SP57, HSPR_SP58, HSPR_SP59,
    HSPR_SP60, HSPR_SP61, HSPR_SP62, HSPR_SP63, HSPR_SP64, HSPR_SP65, HSPR_SP66, HSPR_SP67, HSPR_SP68, HSPR_SP69,
    HSPR_SP70, HSPR_SP71, HSPR_SP72, HSPR_SP73, HSPR_SP74, HSPR_SP75, HSPR_SP76, HSPR_SP77, HSPR_SP78, HSPR_SP79,
    HSPR_SP80, HSPR_SP81, HSPR_SP82, HSPR_SP83, HSPR_SP84, HSPR_SP85, HSPR_SP86, HSPR_SP87, HSPR_SP88, HSPR_SP89,
    HSPR_SP90, HSPR_SP91, HSPR_SP92, HSPR_SP93, HSPR_SP94, HSPR_SP95, HSPR_SP96, HSPR_SP97, HSPR_SP98, HSPR_SP99,

    NUMHSPRITES
};

typedef struct
{
    char        name[9];
    short       x;
    short       y;
    short       width;
    short       height;
    dboolean    sprfix18;
} offset_t;

extern char     *sprnames[];
extern char     *hereticsprnames[];
extern offset_t sproffsets[];

#endif
