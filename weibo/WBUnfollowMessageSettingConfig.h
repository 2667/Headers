//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WBMessageSettingConfigProtocol-Protocol.h"

@class NSString;

@interface WBUnfollowMessageSettingConfig : NSObject <WBMessageSettingConfigProtocol>
{
    _Bool _enable;
    long long _showStyle;
    long long _remindMode;
}

@property(nonatomic) long long remindMode; // @synthesize remindMode=_remindMode;
@property(nonatomic) long long showStyle; // @synthesize showStyle=_showStyle;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
- (void)configerWithPushSettings:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

