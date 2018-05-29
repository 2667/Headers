//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WBFileManagerDelegate-Protocol.h"

@class NSString, WBFileManager;

@interface MMFileDownLoadManager : NSObject <WBFileManagerDelegate>
{
    WBFileManager *fileManager;
    NSString *_diskFilePath;
    NSString *_diskCachePath;
}

+ (id)sharedManager;
@property(readonly, copy, nonatomic) NSString *diskCachePath; // @synthesize diskCachePath=_diskCachePath;
@property(readonly, copy, nonatomic) NSString *diskFilePath; // @synthesize diskFilePath=_diskFilePath;
- (void).cxx_destruct;
- (void)fileManager:(id)arg1 didUpdateDownloadProgressForKey:(id)arg2 receivedBytes:(double)arg3 totalBytes:(double)arg4 progress:(double)arg5;
- (void)fileManager:(id)arg1 didFailWithKey:(id)arg2 error:(id)arg3;
- (void)fileManager:(id)arg1 didFinishWithFile:(id)arg2 forKey:(id)arg3;
- (void)cancelDownloadFile:(id)arg1;
- (void)downloadFile:(id)arg1;
- (_Bool)moveFileForKey:(id)arg1;
- (id)cachePathForKey:(id)arg1;
- (id)filePathForKey:(id)arg1;
- (void)clearMessageFiles;
- (void)reachabilityChanged:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

