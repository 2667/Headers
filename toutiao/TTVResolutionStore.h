//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TTVResolutionStore : NSObject
{
    _Bool _userSelected;
    _Bool _resolutionAlertClick;
    long long _lastResolution;
    long long _actual_clarity;
    long long _clarity_change_time;
}

+ (id)sharedInstance;
@property(nonatomic) long long clarity_change_time; // @synthesize clarity_change_time=_clarity_change_time;
@property(nonatomic) long long actual_clarity; // @synthesize actual_clarity=_actual_clarity;
@property(nonatomic) _Bool resolutionAlertClick; // @synthesize resolutionAlertClick=_resolutionAlertClick;
@property(nonatomic) _Bool userSelected; // @synthesize userSelected=_userSelected;
@property(nonatomic) long long lastResolution; // @synthesize lastResolution=_lastResolution;
- (id)actualDefinationtr;
- (id)lastDefinationStr;
- (id)stringWithDefination:(long long)arg1;
- (void)reset;
- (id)init;

@end

