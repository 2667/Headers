//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface YXLiveDownloadManager : NSObject
{
    NSMutableArray *_downloadTaskArray;
}

+ (id)sharedInStance;
@property(retain, nonatomic) NSMutableArray *downloadTaskArray; // @synthesize downloadTaskArray=_downloadTaskArray;
- (void).cxx_destruct;
- (_Bool)unzipFile:(id)arg1 deleteWhenSuccess:(_Bool)arg2;
- (void)clearDownloadFiles;
- (unsigned long long)totalDownloadSize;
- (id)getFileURLFromCachesByFolder:(id)arg1 fileName:(id)arg2;
- (void)downloadFileToCaches:(id)arg1 folder:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;

@end

