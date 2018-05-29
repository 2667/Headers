//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WBBadgeDotConfig : NSObject
{
    double _badgeLeftPadding;
    double _badgeUpPadding;
    double _dotOfTabbarLeftPadding;
    double _dotOfTabbarUpPadding;
    double _dotOfGroupTittleLeftPadding;
    double _badgeOfMessageLeftPadding;
    double _dotOfMineRightPadding;
    double _badgeOfMineRightPadding;
}

@property double badgeOfMineRightPadding; // @synthesize badgeOfMineRightPadding=_badgeOfMineRightPadding;
@property double dotOfMineRightPadding; // @synthesize dotOfMineRightPadding=_dotOfMineRightPadding;
@property double badgeOfMessageLeftPadding; // @synthesize badgeOfMessageLeftPadding=_badgeOfMessageLeftPadding;
@property double dotOfGroupTittleLeftPadding; // @synthesize dotOfGroupTittleLeftPadding=_dotOfGroupTittleLeftPadding;
@property double dotOfTabbarUpPadding; // @synthesize dotOfTabbarUpPadding=_dotOfTabbarUpPadding;
@property double dotOfTabbarLeftPadding; // @synthesize dotOfTabbarLeftPadding=_dotOfTabbarLeftPadding;
@property double badgeUpPadding; // @synthesize badgeUpPadding=_badgeUpPadding;
@property double badgeLeftPadding; // @synthesize badgeLeftPadding=_badgeLeftPadding;
- (id)initWithPlusScreen;
- (id)initWithIPhoneXScreen;
- (id)initWithIPhone6Screen;
- (id)initWithIPadScreen;
- (id)initWithCustomScreen;

@end

