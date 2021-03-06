//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSTimer;

@interface _TTDialogRequest_ : NSObject
{
    long long _numberOfKeepAlivePolling;
    long long _priority;
    NSString *_locationKey;
    id _dialogInst;
    long long _systemPermissionType;
    CDUnknownBlockType _notifyShouldShowDialogHandler;
    CDUnknownBlockType _notifyShowDialogHandler;
    CDUnknownBlockType _notifyHideForcedlyDialogHandler;
    NSTimer *_timingTimer;
    double _startTimeInterval;
    double _maxStayTime;
}

+ (id)requestForSystemPermissionType:(long long)arg1 authorizationCompletion:(id)arg2;
+ (id)requestWithDialog:(id)arg1 priority:(long long)arg2 location:(id)arg3;
@property(nonatomic) double maxStayTime; // @synthesize maxStayTime=_maxStayTime;
@property(nonatomic) double startTimeInterval; // @synthesize startTimeInterval=_startTimeInterval;
@property(nonatomic) __weak NSTimer *timingTimer; // @synthesize timingTimer=_timingTimer;
@property(copy, nonatomic) CDUnknownBlockType notifyHideForcedlyDialogHandler; // @synthesize notifyHideForcedlyDialogHandler=_notifyHideForcedlyDialogHandler;
@property(copy, nonatomic) CDUnknownBlockType notifyShowDialogHandler; // @synthesize notifyShowDialogHandler=_notifyShowDialogHandler;
@property(copy, nonatomic) CDUnknownBlockType notifyShouldShowDialogHandler; // @synthesize notifyShouldShowDialogHandler=_notifyShouldShowDialogHandler;
@property(nonatomic) long long systemPermissionType; // @synthesize systemPermissionType=_systemPermissionType;
@property(retain, nonatomic) id dialogInst; // @synthesize dialogInst=_dialogInst;
@property(copy, nonatomic) NSString *locationKey; // @synthesize locationKey=_locationKey;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) long long numberOfKeepAlivePolling; // @synthesize numberOfKeepAlivePolling=_numberOfKeepAlivePolling;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)killRequestWhenTimeIntervalOut:(id)arg1;
- (void)stopTiming;
- (void)startTiming;
- (void)clearMeDidHideDialog;
- (void)initMeDidShowDialog;
- (void)actuallyShowDialog;
- (id)initWithSystemPermissionType:(long long)arg1 authorizationCompletion:(id)arg2;
- (id)initWithDialog:(id)arg1 priority:(long long)arg2 location:(id)arg3;
- (id)init;
- (void)dealloc;

@end

