//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSError, NSRecursiveLock, NSURLSessionDownloadTask, WBArMaterial;

@interface WBArMaterialLoadOperation : NSOperation
{
    _Bool _finished;
    _Bool _executing;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _finishBlock;
    NSURLSessionDownloadTask *_downloadTask;
    double _downloadStartTime;
    long long _downloadedFileSize;
    WBArMaterial *_material;
    NSRecursiveLock *_lock;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) WBArMaterial *material; // @synthesize material=_material;
@property(nonatomic) long long downloadedFileSize; // @synthesize downloadedFileSize=_downloadedFileSize;
@property(nonatomic) double downloadStartTime; // @synthesize downloadStartTime=_downloadStartTime;
@property(retain, nonatomic) NSURLSessionDownloadTask *downloadTask; // @synthesize downloadTask=_downloadTask;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
- (_Bool)isExecuting;
- (_Bool)isFinished;
- (void).cxx_destruct;
- (void)finishDownlaodLog;
- (id)errorWithType:(unsigned long long)arg1;
- (void)markAsFinished;
- (void)cancel;
- (void)main;
- (void)start;
- (_Bool)isAsynchronous;
- (void)setExecuting:(_Bool)arg1;
- (void)setFinished:(_Bool)arg1;
- (id)initWithMaterial:(id)arg1;
- (id)init;
- (void)dealloc;

@end

