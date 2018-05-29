//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface WBNetworkClientModularizeTimeProfiler : NSObject
{
    NSMutableDictionary *_nonClosedRecordDict;
    NSMutableDictionary *_moduleUrlDict;
    _Bool _isFinished;
    unsigned long long _totalTime;
}

+ (id)urlInfo;
+ (_Bool)isFinished;
+ (void)finishRecord;
+ (void)stopTimeStampWithUUID:(id)arg1;
+ (void)startTimeStampWithModuleName:(id)arg1 url:(id)arg2 andUUID:(id)arg3;
+ (void)startTimeStampWithModuleName:(id)arg1 andUUID:(id)arg2;
+ (unsigned long long)totalTime;
+ (id)_sharedInstance;
- (void).cxx_destruct;
- (_Bool)_isFinished;
- (unsigned long long)_totalDuringTime;
- (id)_urlInfo;
- (void)_recordModuleUrl:(id)arg1;
- (void)_finishRecord;
- (void)_stopTimeStampWithUUID:(id)arg1;
- (void)_startTimeStampWithModuleName:(id)arg1 url:(id)arg2 andUUID:(id)arg3;
- (id)init;

@end

