//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "GSViewDisplayStatusDelegate-Protocol.h"

@class NSString;

@interface GSViewDisplayStatusHelper : NSObject <GSViewDisplayStatusDelegate>
{
    _Bool _isSetting;
    _Bool _isHideTrack;
    unsigned long long _status;
}

@property(nonatomic) _Bool isHideTrack; // @synthesize isHideTrack=_isHideTrack;
@property(nonatomic) _Bool isSetting; // @synthesize isSetting=_isSetting;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (void)refreshTrackStatus;
- (void)refreshDisplayStatus;
- (_Bool)hideTrackStatus;
- (_Bool)settingStatus;
- (unsigned long long)displayStatus;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
