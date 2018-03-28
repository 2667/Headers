//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AWEUserMessage-Protocol.h"

@class NSString, NSTimer;

@interface AWEAntiAddictedTimeManager : NSObject <AWEUserMessage>
{
    float _useDuration;
    double _healthyUseDuration;
    double _validPasswordDays;
    double _lastStartTimeStamp;
    NSTimer *_inAPPTimer;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSTimer *inAPPTimer; // @synthesize inAPPTimer=_inAPPTimer;
@property(nonatomic) double lastStartTimeStamp; // @synthesize lastStartTimeStamp=_lastStartTimeStamp;
@property(nonatomic) float useDuration; // @synthesize useDuration=_useDuration;
@property(nonatomic) double validPasswordDays; // @synthesize validPasswordDays=_validPasswordDays;
@property(nonatomic) double healthyUseDuration; // @synthesize healthyUseDuration=_healthyUseDuration;
- (void).cxx_destruct;
- (_Bool)withinStartDate:(id)arg1 andEndDate:(id)arg2;
- (id)getDateOfTodayForHour:(long long)arg1;
- (_Bool)withinSameDay:(double)arg1;
- (_Bool)withinDayTime;
- (void)showTimeLockView;
- (void)invalidateTimeLock;
- (_Bool)openTimeLock:(id)arg1;
- (void)setTimeLockPassword:(id)arg1;
- (_Bool)hasValidPassword;
- (_Bool)checkIfNeedShowLockView;
- (_Bool)isTimeLockEffective;
- (void)clearAntiAddictedStates;
- (_Bool)checkIfTimeLockHasShownToday;
- (void)setTodayRemindedTimeLock;
- (_Bool)shouldShowRemindBar;
- (_Bool)shouldShowRemindVideo;
- (_Bool)checkIfRemindVideoCanShowToday;
- (void)startUsingApp;
- (void)stopUsingApp;
- (void)addUsingTime;
- (void)didFinishLogout;
- (void)didFinishLogin;
@property(nonatomic) double lastLeaveTimeStamp;
@property(nonatomic) double lastVideoRemindTimeStamp;
@property(nonatomic) long long useDurationForNoticeBar;
@property(nonatomic) long long continuousUseAppSeconds;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

