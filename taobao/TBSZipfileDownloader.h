//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TBBizDownloadTask;

@interface TBSZipfileDownloader : NSObject
{
    TBBizDownloadTask *_task;
}

+ (id)sharedDownloader;
@property(retain, nonatomic) TBBizDownloadTask *task; // @synthesize task=_task;
- (void).cxx_destruct;
- (void)downloadWithThemeModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeTempFiles;
- (id)tempDirectory;
- (void)dealloc;
- (id)init;

@end
