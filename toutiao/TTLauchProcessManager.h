//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSURL, NSURLSessionTask;

@interface TTLauchProcessManager : NSObject
{
    CDUnknownBlockType _reportBlock;
    CDUnknownBlockType _boolCompletionBlock;
    CDUnknownBlockType _jsCrashHandlerBlock;
    _Bool _downloadPatchError;
    _Bool _simulationOn;
    _Bool _testPatchOn;
    NSURLSessionTask *_netWorkTask;
    NSURL *_launchFileUrl;
    NSURL *_activeFileUrl;
    NSString *_testPatchJs;
}

+ (id)shareInstance;
+ (void)load;
@property(copy, nonatomic) NSString *testPatchJs; // @synthesize testPatchJs=_testPatchJs;
@property(retain, nonatomic) NSURL *activeFileUrl; // @synthesize activeFileUrl=_activeFileUrl;
@property(retain, nonatomic) NSURL *launchFileUrl; // @synthesize launchFileUrl=_launchFileUrl;
@property(retain, nonatomic) NSURLSessionTask *netWorkTask; // @synthesize netWorkTask=_netWorkTask;
- (void).cxx_destruct;
- (id)getShortBundleIdString;
- (id)URLWithString:(id)arg1 queryItems:(id)arg2 fragment:(id)arg3;
- (id)paramDic;
- (void)makeMonitorReportKey:(id)arg1 info:(id)arg2;
- (id)decodeBase64String:(id)arg1;
- (id)getActivePatchVersionCode;
- (id)getLaunchPatchVersionCode;
- (void)setActivePatchVersionCode:(id)arg1;
- (void)setLaunchPatchVersionCode:(id)arg1;
- (void)clearCrashCount;
- (void)addOnceCrashCount;
- (long long)currentCrashCount;
- (void)deleteActivePatchFile;
- (void)deleteLaunchingPatchFile;
- (void)deletePatchFileIfNeed;
- (void)initLauchProcessFileGroup;
- (void)appWillTerminateNotification:(id)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (void)appDidBecomeActiveNotification:(id)arg1;
- (void)closeLauchProcessForCrash;
- (_Bool)hasLauchProcessCrash;
- (void)setLauchProcessForCrash:(id)arg1;
- (void)executeActiveLauchProcess;
- (_Bool)hasActiveLauchProcess;
- (void)updateActiveLocalJS:(id)arg1 versionCode:(id)arg2;
- (void)makePatchRequestAfterLaunch;
- (_Bool)executeLaunch;
- (_Bool)hasLaunchLauchProcess;
- (void)updateLaunchLocalJS:(id)arg1 versionCode:(id)arg2;
- (void)getLaunchRequestBlock:(CDUnknownBlockType)arg1;
- (_Bool)launchContinuousCrashProcess;
- (void)setJSCrashHanlder:(CDUnknownBlockType)arg1;
- (void)setBoolCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setReportBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end
