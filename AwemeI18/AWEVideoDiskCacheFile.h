//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AWEVideoDiskCacheProtocol-Protocol.h"
#import "NSFileManagerDelegate-Protocol.h"

@class NSFileManager, NSMutableDictionary, NSString;

@interface AWEVideoDiskCacheFile : NSObject <NSFileManagerDelegate, AWEVideoDiskCacheProtocol>
{
    NSMutableDictionary *_metaData;
    NSFileManager *_fileManager;
}

+ (id)dataPathWithKey:(id)arg1;
+ (id)metaPath;
+ (id)tmpPath;
+ (id)cachePath;
+ (void)trimDiskCacheToSize:(unsigned long long)arg1;
+ (void)clearForKeys:(id)arg1;
+ (void)clearForKey:(id)arg1;
+ (void)clear;
+ (void)sizeWithCompletion:(CDUnknownBlockType)arg1;
+ (void)hasCacheForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)metaDataForKeySync:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)metaDataForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)cacheDataForKeySync:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)cacheDataForKey:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)finishCacheForKey:(id)arg1 originURLString:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)appendCacheData:(id)arg1 offset:(unsigned long long)arg2 forKey:(id)arg3 mimeType:(id)arg4 fileLength:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
+ (id)sharedInstance;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(retain, nonatomic) NSMutableDictionary *metaData; // @synthesize metaData=_metaData;
- (void).cxx_destruct;
- (long long)_folderSizeAtPath:(id)arg1;
- (long long)_fileSizeAtPath:(id)arg1;
- (void)_clearFolderAtPath:(id)arg1;
- (long long)_cacheSize;
- (void)_clearCacheOnceForAll;
- (_Bool)_syncMetaData;
- (_Bool)fileManager:(id)arg1 shouldRemoveItemAtPath:(id)arg2;
- (void)_trimDiskCacheToSize:(unsigned long long)arg1;
- (void)_clearForKeys:(id)arg1;
- (void)_clearForKey:(id)arg1;
- (void)_clearCacheSafely;
- (void)_clear;
- (void)_sizeWithCompletion:(CDUnknownBlockType)arg1;
- (void)_hasCacheForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_metaDataForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_cacheDataForKey:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_finishCacheForKey:(id)arg1 originURLString:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_appendCacheData:(id)arg1 offset:(unsigned long long)arg2 forKey:(id)arg3 mimeType:(id)arg4 fileLength:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_initializeMetaData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

