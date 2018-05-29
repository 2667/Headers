//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

#import "WBQueueJobStoreProtocol-Protocol.h"
#import "WBQueueOperationDelegate-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface WBQueueJob : WBModelObject <WBQueueJobStoreProtocol, WBQueueOperationDelegate>
{
    long long _jobType;
    long long _jobState;
    unsigned long long _jobId;
    NSMutableSet *_delegates;
    float lastNotifiedProgress;
    NSMutableDictionary *_progressInfo;
    _Bool _isPreSend;
    NSString *_uid;
    NSDate *_time;
    unsigned long long _contentSize;
    NSString *_gsid;
    NSString *_act;
    long long _errCode;
    NSString *_errMsg;
    NSString *_errorDomain;
    NSMutableDictionary *_properties;
    NSArray *_mostRecentDetailLogs;
    NSMutableDictionary *_logs;
    NSMutableArray *_detailLogs;
    id _result;
}

+ (id)loadJobFromRS:(id)arg1;
+ (Class)supervisorClass;
+ (Class)operationClass;
@property(retain, nonatomic) id result; // @synthesize result=_result;
@property(retain, nonatomic) NSMutableArray *detailLogs; // @synthesize detailLogs=_detailLogs;
@property(retain, nonatomic) NSMutableDictionary *logs; // @synthesize logs=_logs;
@property(retain, nonatomic) NSArray *mostRecentDetailLogs; // @synthesize mostRecentDetailLogs=_mostRecentDetailLogs;
@property(readonly, nonatomic) NSMutableDictionary *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(retain, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
@property(nonatomic) long long errCode; // @synthesize errCode=_errCode;
@property(retain, nonatomic) NSString *act; // @synthesize act=_act;
@property(retain, nonatomic) NSString *gsid; // @synthesize gsid=_gsid;
@property(nonatomic) unsigned long long contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) _Bool isPreSend; // @synthesize isPreSend=_isPreSend;
@property(retain, nonatomic) NSDate *time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(readonly, nonatomic) unsigned long long jobId; // @synthesize jobId=_jobId;
@property(nonatomic) long long jobState; // @synthesize jobState=_jobState;
@property(readonly, nonatomic) long long jobType; // @synthesize jobType=_jobType;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *extraOperationDetailLogs;
- (void)addDebugLog:(id)arg1;
- (id)uploadLogFilePath;
- (id)folderPath;
- (void)_accessLog:(CDUnknownBlockType)arg1;
- (unsigned long long)fileSource;
@property(readonly, nonatomic) _Bool needsUploadSendServiceLog;
- (void)jobSendFinished;
- (void)queueOperation:(id)arg1 didUpdateProgress:(float)arg2;
- (void)queueOperationDidCanceled:(id)arg1;
- (void)queueOperation:(id)arg1 didFailureWithError:(id)arg2;
- (void)queueOperation:(id)arg1 didFinishWithResult:(id)arg2;
- (void)queueOperationDidStarted:(id)arg1;
- (void)setError:(id)arg1;
- (id)error;
- (void)setErrDomain:(id)arg1;
- (id)errDomain;
- (id)jobTypeString;
- (_Bool)forceUploadLog;
- (_Bool)logEnabled;
- (_Bool)showProgress;
- (void)notifiJobUpdated;
- (void)enumerateDelegatesWithBlock:(CDUnknownBlockType)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (_Bool)canAddToDraft;
- (_Bool)canResend;
- (void)save;
- (void)send;
- (void)setProgressSize:(unsigned long long)arg1 forResource:(id)arg2;
- (void)resetProgress;
- (void)notifiProgress;
- (id)sendFailedStatus;
- (id)sendSuccessStatus;
- (id)enterQueueStatus;
- (void)saveToDatabase;
- (void)loadFromRS:(id)arg1;
- (_Bool)deleteFromDB:(id)arg1;
- (_Bool)updateDB:(id)arg1;
- (_Bool)insertIntoDB:(id)arg1;
- (unsigned long long)lastJobId;
- (id)parametersDictionary;
- (id)_parametersDictionary;
- (void)removeParameterForKey:(id)arg1;
- (void)removeProperty:(id)arg1;
- (void)addParameters:(id)arg1;
- (void)addParameters:(id)arg1 forKey:(id)arg2;
- (void)addParameter:(id)arg1 forKey:(id)arg2;
- (void)addProperty:(id)arg1 withValue:(id)arg2;
- (id)valueOfProperty:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)clearLogsWithCompletion:(CDUnknownBlockType)arg1;
- (void)readLogsWithCompletion:(CDUnknownBlockType)arg1;
- (void)readDetailLogs:(CDUnknownBlockType)arg1;
- (void)prependDetailLogDicts:(id)arg1;
- (void)addDetailLogDict:(id)arg1;
- (void)addLogValue:(id)arg1 forKey:(id)arg2;
- (void)addLogDictEntries:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

