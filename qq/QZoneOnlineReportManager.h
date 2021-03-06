//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSRecursiveLock;

@interface QZoneOnlineReportManager : NSObject
{
    NSMutableArray *_onlineTimeReportContainer;
    double _firstQZoneUpTime;
    _Bool _isRecordCurrentTime;
    NSRecursiveLock *_lock;
    long long _onlineReportFailureTimes;
    unsigned int _currentUin;
    long long _qzoneViewControllerCount;
}

+ (id)shareInstance;
@property(nonatomic) long long qzoneViewControllerCount; // @synthesize qzoneViewControllerCount=_qzoneViewControllerCount;
- (void).cxx_destruct;
- (void)becomeActive;
- (void)onEnterBackground;
- (void)onlineDataReportFailure;
- (void)onlineDataReportSuccess;
- (void)clearOnlineReportData;
- (id)getOnlineData;
- (void)saveOnlineData:(id)arg1 withKey:(id)arg2;
- (_Bool)isMeetOnlineReportWithEnterQzone;
- (_Bool)isMeetOnlineReportWithExitQzone;
- (void)recordOnlineData;
- (void)reportOnLineData;
- (id)init;

@end

